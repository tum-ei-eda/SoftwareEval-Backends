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
    static inline cmm::CacheEntry&
    choseEntryToReplace(cmm::CacheInstance& cache, CacheSet cacheSet)
    {
        // find empty entry
        CacheEntry* entry = cacheSet.findInvalid();
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

        // evict valid entry
        entry = cache.m_evictionStrategy(cacheSet);

        assert(entry);

        CMM_STATISTICS_ONLY(
            cache.t_evictions++;
            entry->t_evictions++;
        )
        return *entry;

    }

    template <bool IsWrite>
    static inline Delay
    performHit(cmm::CacheInstance& cache, CacheSet cacheSet, CacheEntry& entry)
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

        Delay delay = cache.m_hitDelay;

        if (IsWrite)
        {
            // mark as dirty
            entry.setFlag(CacheEntry::Dirty, cache.m_writeBack);
            // write through
            if (!cache.m_writeBack)
            {
                delay += cache.m_writeBackDelay;
            }
        }

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return delay;
    }

    template <bool IsWrite>
    static inline Delay
    performMiss(cmm::CacheInstance& cache, CacheSet cacheSet, CacheTag tag)
    {
        CMM_STATISTICS_ONLY(
            IsWrite ? cache.t_writeMisses++ :
                      cache.t_readMisses++;
        )

        CacheEntry& entry = Impl::choseEntryToReplace(cache, cacheSet);

        Delay delay = cache.m_missDelay;

        // perform write back
        if (entry.hasFlag(CacheLine::Dirty))
        {
            delay += cache.m_writeBackDelay;
        }

        // replace entry
        entry.tag = tag;
        entry.setFlag(CacheLine::Invalid | CacheLine::Uninitialized, false);
        // mark as dirty
        entry.setFlag(CacheEntry::Dirty, cache.m_writeBack);

        // update entry status
        if (cache.m_updateStrategy) cache.m_updateStrategy(cacheSet, entry);

        return delay;
    }

    template <bool IsWrite>
    static inline AccessDetails
    performAccess(cmm::CacheInstance& cache, uint64_t address)
    {
        const CacheTag tag     = cache.m_tagMemory.getTag(address);
        const CacheIndex index = cache.m_tagMemory.getIndex(address);

        CacheSet cacheSet = cache.m_tagMemory.getCacheSet(index);

        CacheLine* entry = cacheSet.find(tag);

        const bool hit = entry && entry->isValid();
        if (hit) // cache hit
        {
            Delay delay = Impl::performHit<IsWrite>(cache, cacheSet, *entry);
            return AccessDetails::makeHit(delay);
        }

        // cache miss
        assert (!entry);

        Delay delay = performMiss<IsWrite>(cache, cacheSet, tag);
        return AccessDetails::makeMiss(delay);
    }
};

cmm::AccessDetails
cmm::CacheInstance::readAccess(uint64_t address)
{
    return Impl::performAccess<false>(*this, address);
}

cmm::AccessDetails
cmm::CacheInstance::writeAccess(uint64_t address)
{
    // write-allocate vs no write-allocate polcies & instructions
    return Impl::performAccess<true>(*this, address);
}
