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
        MemoryComponent(std::move(name)),
        m_tagMemory(std::move(tagMemory)),
        m_evictionStrategy(std::move(evictionStrategy)),
        m_updateStrategy(std::move(updateStrategy)),
        m_hitDelay(hit),
        m_missDelay(miss)
    {
        assert(m_evictionStrategy);
    }

    /**
     * @brief Performs a fetch and updates the delay parameter as required.
     * Returns whether the cache had a cache hit or miss.
     * @param address Memory address to fetch
     * @param delay Delay in clock cycles
     * @return Cache hit (true) or miss (false)
     */
    AccessDetails readAccess(uint64_t address) override;

    AccessDetails writeAccess(uint64_t address) override;

    CacheMemory const& cacheMemory() const { return m_tagMemory; }

private:

    struct Impl;

    /// tag memory of cache
    CacheMemory m_tagMemory{};
    /// strategy to evict an entry of a cache cacheSet
    EvictionStrategyFunctor m_evictionStrategy{};
    /// strategy to update status of an entry or cache cacheSet
    UpdateStrategyFunctor m_updateStrategy{};
    /// delay if address was cached
    const Delay m_hitDelay{1};
    /// delay if address was not cached
    const Delay m_missDelay{1};

    const Delay m_writeBackDelay{1};

    bool m_writeBack{true};
    bool m_writeAllocate{true};

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose
        uint32_t t_readHits = 0;
        uint32_t t_readMisses = 0;
        uint32_t t_evictions = 0;
        uint32_t t_compulsoryMisses = 0;
        uint32_t t_writeHits = 0;
        uint32_t t_writeMisses = 0;
    )
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_H
