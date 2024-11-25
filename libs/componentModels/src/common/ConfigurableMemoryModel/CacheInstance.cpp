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

#include <cassert>

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
    performHit(cmm::CacheInstance& cache, CacheSet cacheSet, CacheLine& entry)
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
                entry.t_hits++;
            }
        )

        bool const writeThrough = cache.m_writeBack;

        Delay delay = cache.m_hitDelay;

        if (IsWrite)
        {
            // mark as dirty
            // TODO: mark as dirty in successor nodes
            entry.setFlag(CacheLine::Dirty, cache.m_writeBack);
            // TODO: write through to successor caches
            // TODO: append delay or consider write-buffer
            if (writeThrough)
            {
                delay += cache.m_writeBackDelay;
            }
        }

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return cmm::AccessDetails{delay}
            .setFinishedAccess(true) // = hit
            .setUpdateSuccessors(writeThrough);
    }

    template <bool IsWrite>
    static inline cmm::AccessDetails
    performMiss(cmm::CacheInstance& cache, CacheSet cacheSet, CacheTag tag)
    {
        if (!cache.m_writeAllocate)
        {
            // do not write entry into cache
            // TODO: option to invalidate entire cache?
            return AccessDetails(cache.m_missDelay)
                .setFinishedAccess(false); // = miss
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
            delay += cache.m_writeBackDelay;
        }

        // replace entry
        entry.tag = tag;
        entry.setFlag(CacheLine::Invalid | CacheLine::Uninitialized, false);
        // mark as dirty
        // TODO: mark as dirty in successor nodes
        entry.setFlag(CacheLine::Dirty, cache.m_writeBack);

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return cmm::AccessDetails{delay}
            .setFinishedAccess(false) // = miss
            .setInvalidateSuccessors(cache.m_writeBack); // = write-back policy requires invalidation

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
        // TODO: invalidation of parents should not remove entry entirely?
        assert (!(entry && !entry->isValid()));

        const bool hit = entry && entry->isValid();
        return hit ? Impl::performHit<IsWrite>(cache, cacheSet, *entry) :
                     Impl::performMiss<IsWrite>(cache, cacheSet, tag);
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
