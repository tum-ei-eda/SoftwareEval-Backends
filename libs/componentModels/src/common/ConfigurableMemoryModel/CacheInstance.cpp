/*
 * Copyright 2024 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "models/common/ConfigurableMemoryModel/CacheInstance.h"

#include <unordered_map>
#include <iostream>

std::unordered_map<uint64_t, cmm::CacheInstance*> s_dirtyEntries;

struct cmm::CacheInstance::Impl
{
    static inline cmm::CacheLine&
    selectEntryForReplacement(cmm::CacheInstance& cache, CacheSet cacheSet)
    {
        // find empty entry
        CacheLine* entry = cacheSet.findInvalid();
        if (entry)
        {
            CMM_STATISTICS_ONLY(
                if (entry->hasFlag(CacheLine::Uninitialized))
                {
                    cache.t_compulsoryMisses++;
                }
            )

            return *entry;
        }

        // find valid entry to evict
        entry = cache.m_evictionStrategy(cacheSet);

        assert(entry);

        CMM_STATISTICS_ONLY(
            cache.t_evictions++;
            entry->t_evictions++;
        )
        return *entry;

    }

    template <bool IsWrite>
    static inline cmm::AccessDetails
    performHit(cmm::CacheInstance& cache, uint64_t startAddress, CacheSet cacheSet, CacheLine& entry)
    {

        CMM_STATISTICS_ONLY(
            if (IsWrite)
            {
                cache.t_writeHits++;
                entry.t_hits++; // TODO: write hits
            }
            else
            {
                cache.t_readHits++;
                entry.t_hits++; // TODO: write hits
            }
        )

        Delay delay = cache.m_hitDelay;

        if (IsWrite)
        {
            // invalidate address in other caches
            cache.invalidateOtherCaches(startAddress);

            if (cache.m_writeBack)
            {
                cache.makeDirty(entry, startAddress);
            }
            else // write through
            {
                delay += cache.m_writeBackDelay;
                delay += cache.writeBack(startAddress);
            }

            // TODO: mark as dirty in successor nodes
            // TODO: write through to successor caches
        }

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return cmm::AccessDetails{delay}
            .setEntryFound(true) // = hit
            ;
    }

    template <bool IsWrite>
    static inline cmm::AccessDetails
    performMiss(cmm::CacheInstance& cache, uint64_t startAddress, CacheSet cacheSet, CacheTag tag)
    {
        if (!cache.m_writeAllocate)
        {
            // do not write entry into cache
            // TODO: option to invalidate entire cache?
            return AccessDetails(cache.m_missDelay)
                .setEntryFound(false); // = miss
        }

        CMM_STATISTICS_ONLY(
            IsWrite ? cache.t_writeMisses++ :
                      cache.t_readMisses++;
        )


        CacheLine& entry = Impl::selectEntryForReplacement(cache, cacheSet);

        Delay delay = cache.m_missDelay;

        // TODO: old entry is dirty -> perform write back
        // TODO: write back to memory or next cache?
        if (entry.hasFlag(CacheLine::Dirty))
        {
            uint64_t writeBackAddress = cache.cacheMemory()
                                            .getStartAddress(cacheSet, entry);
            cache.writeBack(writeBackAddress);
            delay += cache.m_writeBackDelay;
        }

        // replace entry
        entry.tag = tag;
        entry.setFlag(CacheLine::Invalid |
                      CacheLine::Uninitialized |
                      CacheLine::Dirty, false);

        if (IsWrite)
        {
            // invalidate address in other caches
            cache.invalidateOtherCaches(startAddress);

            if (cache.m_writeBack && !entry.hasFlag(CacheLine::Dirty))
            {
                cache.makeDirty(entry, startAddress);
            }
            else // write through
            {
                delay += cache.m_writeBackDelay;
                delay += cache.writeBack(startAddress);
            }
        }

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return cmm::AccessDetails{delay}
            .setEntryFound(false) // = miss
            ;

    }

    /**
     * @brief Performs a read/write access to the given address.
     * @param cache CacheInstance
     * @param address Address to read form/write to
     * @tparam IsWrite Flag indicating whether the function call is a read or
     * write. The idea is to reduce code duplication and give the compiler a
     * hand to optimize away the if-else conditions by using a compile-time
     * value parameter.
     * @return Access details
     */
    template <bool IsWrite>
    static inline cmm::AccessDetails
    performAccess(cmm::CacheInstance& cache, uint64_t address)
    {
        const CacheTag tag     = cache.m_tagMemory.getTag(address);
        const CacheIndex index = cache.m_tagMemory.getIndex(address);

        CacheSet cacheSet = cache.m_tagMemory.getCacheSet(index);
        CacheLine* entry  = cacheSet.find(tag);

        // if entry was found it should be valid aswell
        assert (!(entry && !entry->isValid()));

        uint64_t startAddress = cache.m_tagMemory.getStartAddress(address);

        // static int i = 0;
        // if (i < 50)
        // {
        //     i++;
        //     std::cout << "HERE " << std::hex << address << " vs " << startAddress << " vs orig: " << (entry ? cache.m_tagMemory.getStartAddress(cacheSet, *entry) : 0xFFFFFFFF) << std::dec << std::endl;
        // }

        const bool hit = entry && entry->isValid();
        return hit ? Impl::performHit<IsWrite>(cache, startAddress, cacheSet, *entry) :
                     Impl::performMiss<IsWrite>(cache, startAddress, cacheSet, tag);
    }
};

cmm::AccessDetails
cmm::CacheInstance::readAccess(uint64_t address)
{
    constexpr bool IsWrite = false;
    return Impl::performAccess<IsWrite>(*this, address);
}

cmm::AccessDetails
cmm::CacheInstance::writeAccess(uint64_t address)
{
    constexpr bool IsWrite = true;
    return Impl::performAccess<IsWrite>(*this, address);
}

void
cmm::CacheInstance::invalidate(uint64_t startAddress, size_t blockSize)
{
    // TODO: check that startAddress and blockSize are not overlapping multiple blocks

    const CacheTag tag     = m_tagMemory.getTag(startAddress);
    const CacheIndex index = m_tagMemory.getIndex(startAddress);

    CacheSet cacheSet = m_tagMemory.getCacheSet(index);
    CacheLine* entry  = cacheSet.find(tag);

    if (!entry) return; // nothing to invalidate

    // entry should not be dirty
    assert(!entry->hasFlag(CacheLine::Dirty));

    std::cout << "INVALIDATING: " << std::hex << startAddress << std::dec << std::endl;

    // reset flags
    entry->setFlag(CacheLine::Invalid |
                   CacheLine::Uninitialized, false);
    entry->tag = 0x0;

    // TODO: notify repalcement strategies
}
#include "models/common/ConfigurableMemoryModel/MemoryInstanceManager.h"

void
cmm::CacheInstance::invalidateOtherCaches(uint64_t startAddress)
{
    // invalidate caches on same level
    for (CacheInstance& other : MemoryInstanceManager::instance()->caches())
    {
        if (&other != this) other.invalidate(startAddress, m_tagMemory.lineSize());
    }
}

void
cmm::CacheInstance::makeDirty(CacheLine &entry, uint64_t address)
{
    if (entry.hasFlag(CacheLine::Dirty)) return;

    // std::cout << "MAKE DIRTY: " << std::hex << address << std::dec << std::endl;
    // mark as dirty
    entry.setFlag(CacheLine::Dirty, true);
    s_dirtyEntries.insert({address, this});
    t_makeDirty++;
}

cmm::Delay
cmm::CacheInstance::writeBack(uint64_t address)
{
    std::cout << "ADDRESS TO WRITE BACK: " << std::hex << address << std::dec;

    auto iter = s_dirtyEntries.find(address);
    if (iter != s_dirtyEntries.end())
    {
        t_writeBacks++;
        s_dirtyEntries.erase(iter);
        std::cout << " (erasing)";
    }
    std::cout << std::endl;

    // TODO: assume no write back delay due to write buffer?
    return Delay(0);
}
