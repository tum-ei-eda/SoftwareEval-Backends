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

    /// strategy to chose a valid cache line to evict
    using EvictionStrategyFunctor = std::function<CacheLine*(CacheSet&)>;
    /// strategy to update the status of a cache line
    using UpdateStrategyFunctor   = std::function<void(CacheSet&, CacheLine&)>;
    /// stategy to select and replace an entry (calls evicton strategy if needed)
    using ReplacementStrategyFunctor = std::function<std::pair<Delay, CacheLine*>
                                                         (CacheInstance& cache,
                                                          CacheSet cacheSet,
                                                          ComponentHierarchy hierarchy,
                                                          uint64_t address,
                                                          CacheTag tag,
                                                          bool isWrite)>;
    /// stategy to perform write
    using WriteStrategyFunctor = std::function<Delay(CacheInstance& cache,
                                                     CacheSet cacheSet,
                                                     CacheLine& entry,
                                                     ComponentHierarchy hierarchy,
                                                     uint64_t address,
                                                     bool isMiss)>;

    CacheInstance(std::string name,
                  CacheMemory tagMemory,
                  ReplacementStrategyFunctor replacementStrategy,
                  WriteStrategyFunctor writeStrategy,
                  EvictionStrategyFunctor evictionStrategy,
                  UpdateStrategyFunctor updateStrategy,
                  Delay hit,
                  Delay miss) :
        MemoryComponent(std::move(name)),
        m_tagMemory(std::move(tagMemory)),
        m_replacementStrategy(std::move(replacementStrategy)),
        m_writeStrategy(std::move(writeStrategy)),
        m_evictionStrategy(std::move(evictionStrategy)),
        m_updateStrategy(std::move(updateStrategy)),
        m_hitDelay(hit),
        m_missDelay(miss)
    {
        assert(m_replacementStrategy);
        assert(m_writeStrategy);
        assert(m_evictionStrategy);
    }

    /**
     * @brief Performs a fetch and updates the delay parameter as required.
     * Returns whether the cache had a cache hit or miss.
     * @param address Memory address to fetch
     * @param delay Delay in clock cycles
     * @return Cache hit (true) or miss (false)
     */
    AccessDetails readAccess(uint64_t address, ComponentRange range) override;

    AccessDetails writeAccess(uint64_t address, ComponentRange range) override;

    inline CacheMemory const& cacheMemory() const { return m_tagMemory; }

    void invalidate(uint64_t startAddress, size_t blockSize);

    void emitInvalidation(uint64_t startAddress);

    void makeEntryDirty(CacheLine& entry);

    void updateEntryStatus(CacheSet cacheSet, CacheLine& entry);

    CacheLine* findEmptyEntry(CacheSet);

    CacheLine* evictValidEntry(CacheSet cacheSet);

    /**
     * @brief Performs a writeback to the next level cache
     * @param hierarchy Next hierarchy
     * @param address Address to write back
     * @return delay
     */
    Delay writeBackToNextLevel(ComponentHierarchy hierarchy, uint64_t address);

private:

    struct Impl;

    /// tag memory of cache
    CacheMemory m_tagMemory{};
    // TODO: brief
    ReplacementStrategyFunctor m_replacementStrategy{};
    // TODO: brief
    WriteStrategyFunctor m_writeStrategy{};
    /// strategy to evict an entry of a cache cacheSet
    EvictionStrategyFunctor m_evictionStrategy{};
    /// strategy to update status of an entry or cache cacheSet
    UpdateStrategyFunctor m_updateStrategy{};
    /// delay if address was cached
    const Delay m_hitDelay{1};
    /// delay if address was not cached
    const Delay m_missDelay{1};
    // TODO: brief
    std::vector<CacheInstance*> m_otherComponents;

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose
        uint32_t t_readHits = 0;
        uint32_t t_readMisses = 0;
        uint32_t t_evictions = 0;
        uint32_t t_compulsoryMisses = 0;
        uint32_t t_writeHits = 0;
        uint32_t t_writeMisses = 0;
        uint32_t t_writeBacks = 0;
        uint32_t t_makeDirty = 0;
    )
};

inline void
CacheInstance::makeEntryDirty(CacheLine& entry)
{
    if (!entry.hasFlag(CacheLine::Dirty))
    {
        CMM_STATISTICS_ONLY(
            t_makeDirty++;
        )

        // mark as dirty
        entry.setFlag(CacheLine::Dirty, true);
    }
}

inline void
CacheInstance::updateEntryStatus(CacheSet cacheSet, CacheLine& entry)
{
    // update status of entry
    if (m_updateStrategy)
    {
        m_updateStrategy(cacheSet, entry);
    }
}

inline CacheLine*
CacheInstance::findEmptyEntry(CacheSet cacheSet)
{
    // find empty entry
    CacheLine* entry = cacheSet.findInvalid();
    if (entry)
    {
        CMM_STATISTICS_ONLY(
            if (entry->hasFlag(CacheLine::Uninitialized))
            {
                t_compulsoryMisses++;
                entry->setFlag(CacheLine::Uninitialized, false);
            }
        )
    }
    return entry;
}

inline CacheLine*
CacheInstance::evictValidEntry(CacheSet cacheSet)
{
    // find valid entry to evict
    CacheLine* entry = m_evictionStrategy(cacheSet);

    CMM_STATISTICS_ONLY(
        t_evictions++;
        entry->t_evictions++;
    )

    return entry;
}

inline Delay
CacheInstance::writeBackToNextLevel(ComponentHierarchy hierarchy, uint64_t address)
{
    CMM_STATISTICS_ONLY(
        t_writeBacks++;
    )

    if (hierarchy.hasNextComponent())
    {
        MemoryComponent* next = hierarchy.nextComponent();
        return next->writeAccess(address, hierarchy.nextRange()).delay;
    }
    return Delay{0};
}

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_H
