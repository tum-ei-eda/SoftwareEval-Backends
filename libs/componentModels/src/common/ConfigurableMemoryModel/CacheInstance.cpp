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

struct cmm::CacheInstance::Impl
{
    template <bool IsWrite>
    static inline AccessDetails
    performHit(CacheInstance& cache,
               uint64_t address,
               CacheSet cacheSet,
               CacheLine& entry,
               ComponentRange hierarchy)
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

        // update status of this entry
        cache.updateEntryStatus(cacheSet, entry);

        if (IsWrite)
        {
            constexpr bool IsMiss = false;
            cache.m_writeStrategy(cache, cacheSet, entry, hierarchy, address, IsMiss);
        }

        return AccessDetails{delay}.setEntryFound(true);
    }

    template <bool IsWrite>
    static inline AccessDetails
    performMiss(CacheInstance& cache, uint64_t address, CacheSet cacheSet, CacheTag tag, ComponentRange hierarchy)
    {
        // TODO: support no allocate caches!
        CMM_STATISTICS_ONLY(
            if (IsWrite)
            {
                cache.t_writeMisses++;
            }
            else
            {
                cache.t_readMisses++;
            }
        )

        Delay delay = cache.m_missDelay;

        // fetch from next components
        if (hierarchy.hasNextComponent())
        {
            auto* next = hierarchy.nextComponent();
            delay += next->readAccess(address, hierarchy.nextRange()).delay;
        }

        // perform replacement
        auto retVal = cache.m_replacementStrategy(cache, cacheSet, hierarchy, address, tag, IsWrite);
        auto* entry = std::get<CacheLine*>(retVal);
        assert(entry);

        delay += std::get<Delay>(retVal);

        // update status of this entry
        cache.updateEntryStatus(cacheSet, *entry);

        if (IsWrite)
        {
            constexpr bool IsMiss = true;
            cache.m_writeStrategy(cache, cacheSet, *entry, hierarchy, address, IsMiss);
        }

        return AccessDetails{delay}.setEntryFound(true);
    }

    /**
     * @brief Performs a read/write access to the given address.
     * @param cache CacheInstance
     * @param address Address to read form/write to (not aligned to cache line)
     * @tparam IsWrite Flag indicating whether the function call is a read or
     * write. The idea is to reduce code duplication and give the compiler a
     * hand to optimize away the if-else conditions by using a compile-time
     * value parameter.
     * @return Access details
     */
    template <bool IsWrite>
    static inline AccessDetails
    performAccess(CacheInstance& cache, uint64_t address, ComponentRange range)
    {
        const CacheTag tag     = cache.m_tagMemory.getTag(address);
        const CacheIndex index = cache.m_tagMemory.getIndex(address);

        CacheSet cacheSet = cache.m_tagMemory.getCacheSet(index);
        CacheLine* entry  = cacheSet.find(tag);

        // if entry was found it should be valid aswell
        assert (!(entry && !entry->isValid()));

        // address aligned to cache line
        uint64_t baseAddress = cache.m_tagMemory.getAddress(address);

        const bool hit = entry && entry->isValid();
        return hit ? Impl::performHit<IsWrite>(cache, baseAddress, cacheSet, *entry, range) :
                     Impl::performMiss<IsWrite>(cache, baseAddress, cacheSet, tag, range);
    }
};

cmm::AccessDetails
cmm::CacheInstance::readAccess(uint64_t address, ComponentRange range)
{
    constexpr bool IsWrite = false;
    return Impl::performAccess<IsWrite>(*this, address, range);
}

cmm::AccessDetails
cmm::CacheInstance::writeAccess(uint64_t address, ComponentRange range)
{
    constexpr bool IsWrite = true;
    return Impl::performAccess<IsWrite>(*this, address, range);
}

void
cmm::CacheInstance::invalidate(uint64_t address, size_t blockSize)
{
    const CacheTag tag     = m_tagMemory.getTag(address);
    const CacheIndex index = m_tagMemory.getIndex(address);

    // check that the address range which should be invalidated does not
    // overlapp multiple cache lines as this is not handled currently
    assert(m_tagMemory.getIndex(address) ==
           m_tagMemory.getIndex(address + blockSize) &&
           "Address spans multiple cache lines! "
           "Additionaly logic is needed to invalidate all affected cache lines!");

    CacheSet cacheSet = m_tagMemory.getCacheSet(index);
    CacheLine* entry  = cacheSet.find(tag);

    if (!entry) return; // nothing to invalidate

    // entry should not be dirty
    assert(!entry->hasFlag(CacheLine::Dirty));

    // reset flags
    entry->setFlag(CacheLine::Invalid, false);
    entry->tag = 0x0;

    // TODO: notify replacement strategies!
}

// TODO: remove
#include "models/common/ConfigurableMemoryModel/MemoryInstanceManager.h"

void
cmm::CacheInstance::emitInvalidation(uint64_t address)
{
    // invalidate other components
    // TODO: use `m_otherComponents` here
    for (CacheInstance& other : MemoryInstanceManager::instance()->caches())
    {
        if (&other != this) other.invalidate(address, m_tagMemory.lineSize());
    }
}
