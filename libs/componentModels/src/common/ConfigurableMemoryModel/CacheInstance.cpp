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

cmm::AccessDetails
cmm::CacheInstance::readAccess(uint64_t address)
{
    const CacheTag tag     = m_tagMemory.getTag(address);
    const CacheIndex index = m_tagMemory.getIndex(address);

    CacheSet cacheSet = m_tagMemory.getCacheSet(index);

    CacheLine* entry = cacheSet.find(tag);

    const bool hit = entry && entry->isValid();
    if (hit) // cache hit
    {
        CMM_STATISTICS_ONLY(
            t_hits++;
            entry->t_hits++;
        )

        update(cacheSet, *entry);

        return AccessDetails::makeHit(m_hitDelay);
    }

    // cache miss
    CMM_STATISTICS_ONLY(
        t_misses++;
    )

    if (!entry)
    {
        // find entry to replace
        entry = cacheSet.findInvalid();
        if (!entry)
        {
            // evict valid entry
            entry = m_evictionStrategy(cacheSet);

            CMM_STATISTICS_ONLY(
                t_evictions++;
                entry->t_evictions++;
            )
        }
        CMM_STATISTICS_ONLY(
            else if (entry->hasFlag(CacheLine::Uninitialized))
            {
                t_compulsoryMisses++;
            }
        )
    }

    assert(entry);

    // replace entry
    replace(cacheSet, *entry, tag);
    update(cacheSet, *entry);

    return AccessDetails::makeMiss(m_missDelay);
}

void
cmm::CacheInstance::update(CacheSet cacheSet, CacheLine &entry)
{
    // TODO: update cache entry/block? (e.g. access time)
    if (m_updateStrategy) m_updateStrategy(cacheSet, entry);
}

void
cmm::CacheInstance::replace(CacheSet cacheSet, CacheLine &entry, CacheTag tag)
{
    // replace entry
    entry.tag = tag;
    entry.setFlag(CacheLine::Invalid | CacheLine::Uninitialized, false);
}
