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

#ifndef CONFIGURABLE_MEMORY_MODEL_CACHE_H
#define CONFIGURABLE_MEMORY_MODEL_CACHE_H

#include "./CacheMemory.h"
#include "./MemoryComponent.h"

#include <string>
#include <functional>

namespace cmm
{

/**
 * @brief The CacheInstace class. Implements a basic API to fetch a memory address.
 */
class CacheInstance : public MemoryComponent
{
public:

    ~CacheInstance() override = default;

    /// strategy to chose a cache line to evict
    using EvictionStrategyFunctor = std::function<CacheLine*(CacheSet&)>;
    /// strategy to update the status of a cache line
    using UpdateStrategyFunctor   = std::function<void(CacheSet&, CacheLine&)>;

    CacheInstance(std::string name,
                  CacheMemory tagMemory,
                  EvictionStrategyFunctor evictionStrategy,
                  UpdateStrategyFunctor updateStrategy,
                  Delay hit,
                  Delay miss) :
        m_name(std::move(name)),
        m_tagMemory(std::move(tagMemory)),
        m_evictStrategy(std::move(evictionStrategy)),
        m_updateStrategy(std::move(updateStrategy)),
        m_hitDelay(hit),
        m_missDelay(miss)
    {
        assert(m_evictionStrategy);
    }

    /// Returns the name of the cache
    inline std::string const& name() const { return m_name; }

    /**
     * @brief Performs a fetch and updates the delay parameter as required.
     * Returns whether the cache had a cache hit or miss.
     * @param address Memory address to fetch
     * @param delay Delay in clock cycles
     * @return Cache hit (true) or miss (false)
     */
    inline AccessDetails readAccess(uint64_t address) override
    {
        const CacheTag tag   = m_tagMemory.getTag(address);
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
                entry = m_evictStrategy(cacheSet);

                CMM_STATISTICS_ONLY(
                    t_evictions++;
                    entry->t_evictions++;
                )
            }
        }

        assert(entry);

        // replace entry
        replace(cacheSet, *entry, tag);
        update(cacheSet, *entry);

        return AccessDetails::makeMiss(m_missDelay);
    }

private:

    /// name of cache level
    std::string m_name{};
    /// tag memory of cache
    CacheMemory m_tagMemory{};
    /// strategy to evict an entry of a cache cacheSet
    EvictionStrategyFunctor m_evictStrategy{};
    /// strategy to update status of an entry or cache cacheSet
    UpdateStrategyFunctor m_updateStrategy{};
    /// delay if address was cached
    const Delay m_hitDelay{1};
    /// delay if address was not cached
    const Delay m_missDelay{1};

    /**
     * @brief Updates the status of the cache entry/cacheSet (e.g. access times)
     * @param cacheSet Cache cacheSet that holds the accessed entry
     * @param entry Entry that was accessed
     */
    inline void update(CacheSet cacheSet, CacheLine& entry)
    {
        // TODO: update cache entry/block? (e.g. access time)
        if (m_updateStrategy) m_updateStrategy(cacheSet, entry);
    }

    /**
     * @brief Replaces the entry of the cache set.
     * @param set Set that contains the entry to replace
     * @param entry Entry to replace
     * @param tag Tag to store in cache entry
     */
    inline void replace(CacheSet cacheSet, CacheLine& entry, CacheTag tag)
    {
        // replace entry
        entry.tag = tag;
        entry.setFlag(CacheLine::Invalid, false);
        // move to separate replacement strategy?
        entry.data = 0x0;
    }

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose)
        uint32_t t_hits = 0;
        uint32_t t_misses = 0;
        uint32_t t_evictions = 0;
    )
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_H
