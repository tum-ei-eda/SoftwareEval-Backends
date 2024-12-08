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

struct CacheLookup
{
    CacheAddress address{};
    CacheTag     tag{};
    CacheSet     set{};
    CacheLine*   entry{};
};

/**
 * @brief The CacheInstace class. Implements a basic API to fetch a memory address.
 */
class CacheInstance : public MemoryComponent
{
public:

    /// strategy to chose a valid cache line to evict
    using EvictionStrategy =
        std::function<CacheLine*(CacheSet)>;
    /// strategy to update the status of a cache line
    using UpdateOnAccessStrategy =
        std::function<void(CacheSet, CacheLine*)>;
    using UpdateOnInvalidationStrategy =
        std::function<void(CacheSet, CacheLine*)>;
    /// stategy to select and replace an entry (calls evicton strategy if needed)
    using ReplacementStrategy =
        std::function<Delay(CacheInstance& cache,
                            CacheLookup& lookup,
                            ComponentHierarchy hierarchy,
                            bool isWrite)>;
    // TODO: brief
    using OnHit =
        std::function<AccessDetails(CacheInstance& cache,
                            CacheLookup& lookup,
                            ComponentHierarchy hierarchy,
                            bool isWrite)>;
    // TODO: brief
    using OnMiss =
        std::function<AccessDetails(CacheInstance& cache,
                            CacheLookup& lookup,
                            ComponentHierarchy hierarchy,
                            bool isWrite)>;
    // TODO: brief
    using WriteUpdateStrategy =
        std::function<Delay(CacheInstance& cache,
                            CacheLookup& lookup,
                            ComponentHierarchy hierarchy,
                            bool isMiss)>;

    // TODO: refactor (use dedicated setters instead?)
    CacheInstance(std::string name,
                  CacheMemory tagMemory,
                  ReplacementStrategy replacementStrategy,
                  WriteUpdateStrategy writeUpdateStrategy,
                  EvictionStrategy evictionStrategy,
                  UpdateOnAccessStrategy updateOnAccessStrategy,
                  Delay hit,
                  Delay miss) :
        MemoryComponent(std::move(name)),
        m_tagMemory(std::move(tagMemory)),
        m_replacementStrategy(std::move(replacementStrategy)),
        m_writeUpdateStrategy(std::move(writeUpdateStrategy)),
        m_evictionStrategy(std::move(evictionStrategy)),
        m_updateOnAccessStrategy(std::move(updateOnAccessStrategy)),
        m_readHitDelay(hit),
        m_readMissDelay(miss)
    {
        assert(m_writeUpdateStrategy);
        assert(m_evictionStrategy);
    }
    ~CacheInstance() override = default;

    /// Getter for cache memory
    inline CacheMemory& cacheMemory() { return m_tagMemory; }
    /// Const overload: getter for cache memory
    inline CacheMemory const& cacheMemory() const { return m_tagMemory; }

    // TODO: brief
    AccessDetails readAccess(CacheAddress address, ComponentHierarchy hierarchy) override
    {
        return performAccess<false>(address, hierarchy);
    }

    // TODO: brief
    AccessDetails writeAccess(CacheAddress address, ComponentHierarchy hierarchy) override
    {
        return performAccess<true>(address, hierarchy);
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
    AccessDetails performAccess(CacheAddress address, ComponentHierarchy hierarchy);

    // TODO: brief
    CacheLookup lookupAddress(CacheAddress unalignedAddress);

    // TODO: brief
    void invalidate(uint64_t startAddress, size_t blockSize);

    // TODO: brief
    void broadcastInvalidation(uint64_t startAddress);

    // TODO: brief
    void makeEntryDirty(CacheLine& entry);

    // TODO: brief
    CacheLine* findEmptyEntry(CacheSet cacheSet);

    ///// cache strategies /////
    // TODO: brief
    void invokeUpdateOnAccessStrategy(CacheSet cacheSet, CacheLine* entry);

    void invokeUpdateOnInvalidationStrategy(CacheSet cacheSet, CacheLine* entry);

    // TODO: brief
    Delay invokeReplacementStrategy(CacheLookup& lookup, ComponentHierarchy hierarchy, bool isWrite);

    // TODO: brief
    Delay invokeWriteUpdateStrategy(CacheLookup& lookup, ComponentHierarchy hierarchy, bool isMiss);

    // TODO: brief
    CacheLine* invokeEvictionStrategy(CacheSet cacheSet);

    ///// access to next level /////
    /**
     * @brief Performs a writeback to the next level cache
     * @param address Address to write back
     * @param hierarchy Next hierarchy
     * @return delay
     */
    Delay writeBackToNextLevel(CacheAddress address, ComponentHierarchy hierarchy);

    /**
     * @brief Fetches the address from next level cache/memory
     * @param address Address to write back
     * @param hierarchy Next hierarchy
     * @return delay
     */
    Delay fetchFromNextLevel(CacheAddress address, ComponentHierarchy hierarchy);

private:

    /// tag memory of cache
    CacheMemory m_tagMemory{};
    // TODO: brief
    OnHit m_onHitRoutine{};
    // TODO: brief
    OnMiss m_onMissRoutine{};
    // TODO: brief
    ReplacementStrategy m_replacementStrategy{};
    // TODO: brief
    WriteUpdateStrategy m_writeUpdateStrategy{};
    /// strategy to evict an entry of a cache cacheSet
    EvictionStrategy m_evictionStrategy{};
    /// strategy to update status of an entry or cache cacheSet
    UpdateOnAccessStrategy m_updateOnAccessStrategy{};

    UpdateOnInvalidationStrategy m_updateOnInvlidationStrategy{};
    /// delay if address was cached
    const Delay m_readHitDelay{0};
    const Delay m_writeHitDelay{0};
    /// delay if address was not cached
    const Delay m_readMissDelay{0};
    const Delay m_writeMissDelay{0};
    // TODO: brief
    std::vector<CacheInstance*> m_otherComponents;

    // TODO: brief
    template <bool IsWrite>
    AccessDetails defaultHitRoutine(CacheLookup& lookup, ComponentRange hierarchy);

    // TODO: brief
    template <bool IsWrite>
    AccessDetails defaultMissRoutine(CacheLookup& lookup, ComponentRange hierarchy);

    Delay defaultReplacementRoutine(CacheLookup& lookup, ComponentHierarchy hierarchy);

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose
        uint32_t t_readHits = 0;
        uint32_t t_readMisses = 0;
        uint32_t t_writeHits = 0;
        uint32_t t_writeMisses = 0;
        uint32_t t_writeBacks = 0;
        uint32_t t_makeDirty = 0;
        uint32_t t_evictions = 0;
        uint32_t t_compulsoryMisses = 0;
    )
};

inline CacheLookup
CacheInstance::lookupAddress(CacheAddress unalignedAddress)
{
    const CacheTag tag     = m_tagMemory.getTag(unalignedAddress);
    const CacheIndex index = m_tagMemory.getIndex(unalignedAddress);

    CacheSet cacheSet = m_tagMemory.getCacheSet(index);
    CacheLine* entry  = cacheSet.find(tag);

    // if entry found it should be valid
    // -> if its not valid it should not be found
    assert (!(entry && !entry->isValid()));

    // address aligned to cache line
    uint64_t baseAddress = m_tagMemory.getAddress(unalignedAddress);

    return CacheLookup{ baseAddress, tag, cacheSet, (entry ? entry : nullptr) };
}

inline void
CacheInstance::invalidate(uint64_t address, size_t blockSize)
{
    CacheLookup lookup = lookupAddress(address);

    // check that the address range which should be invalidated does not
    // overlapp multiple cache lines as this is not handled currently
    assert(m_tagMemory.getIndex(address) ==
               m_tagMemory.getIndex(address + blockSize) &&
           "Address spans multiple cache lines! "
           "Additionaly logic is needed to invalidate all affected cache lines!");

    if (!lookup.entry) return; // nothing to invalidate

    // entry should not be dirty
    assert(!lookup.entry->hasFlag(CacheLine::Dirty));

    // reset flags
    lookup.entry->setFlag(CacheLine::Invalid, false);
    lookup.entry->tag = 0x0;

    invokeUpdateOnInvalidationStrategy(lookup.set, lookup.entry);
}

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
                // TODO: always unset?
                entry->setFlag(CacheLine::Uninitialized, false);
            }
            )
    }
    return entry;
}

inline void
CacheInstance::invokeUpdateOnAccessStrategy(CacheSet cacheSet, CacheLine* entry)
{
    // update status of entry
    if (m_updateOnAccessStrategy)
    {
        m_updateOnAccessStrategy(cacheSet, entry);
    }
}

inline void
CacheInstance::invokeUpdateOnInvalidationStrategy(CacheSet cacheSet, CacheLine *entry)
{
    // update status of entry
    if (m_updateOnInvlidationStrategy)
    {
        m_updateOnInvlidationStrategy(cacheSet, entry);
    }
}

inline Delay
CacheInstance::invokeReplacementStrategy(CacheLookup& lookup, ComponentHierarchy hierarchy, bool isWrite)
{
    return m_replacementStrategy ? m_replacementStrategy(*this, lookup, hierarchy, isWrite) :
                                   defaultReplacementRoutine(lookup, hierarchy);
}

inline Delay
CacheInstance::invokeWriteUpdateStrategy(CacheLookup& lookup, ComponentHierarchy hierarchy, bool isMiss)
{
    return m_writeUpdateStrategy(*this, lookup, hierarchy, isMiss);
}

inline CacheLine*
CacheInstance::invokeEvictionStrategy(CacheSet cacheSet)
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
CacheInstance::writeBackToNextLevel(CacheAddress address, ComponentHierarchy hierarchy)
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

inline Delay
CacheInstance::fetchFromNextLevel(CacheAddress address, ComponentHierarchy hierarchy)
{
    if (hierarchy.hasNextComponent())
    {
        MemoryComponent* next = hierarchy.nextComponent();
        return next->readAccess(address, hierarchy.nextRange()).delay;
    }
    return Delay{0};
}

template<bool IsWrite>
inline AccessDetails
CacheInstance::performAccess(CacheAddress address, ComponentHierarchy hierarchy)
{
    CacheLookup lookup = lookupAddress(address);

    const bool hit = lookup.entry;
    if (hit)
    {
        // hit
        CMM_STATISTICS_ONLY(
            if (IsWrite)
            {
                t_writeHits++;
                lookup.entry->t_writeHits++;
            }
            else
            {
                t_readHits++;
                lookup.entry->t_readHits++;
            }
        )

        Delay delay = IsWrite ? m_writeHitDelay : m_readHitDelay;

        AccessDetails access =
            m_onHitRoutine ?
                m_onHitRoutine(*this, lookup, hierarchy, IsWrite) :
                defaultHitRoutine<IsWrite>(lookup, hierarchy);
        return AccessDetails{access.delay + delay}.setEntryFound(access.wasEntryFound);
    }

    // miss
    CMM_STATISTICS_ONLY(
        if (IsWrite)
        {
            t_writeMisses++;
        }
        else
        {
            t_readMisses++;
        }
    )

    Delay delay = IsWrite ? m_writeMissDelay : m_readMissDelay;

    AccessDetails access =
        m_onMissRoutine ?
            m_onMissRoutine(*this, lookup, hierarchy, IsWrite) :
            defaultMissRoutine<IsWrite>(lookup, hierarchy);

    return AccessDetails{access.delay + delay}.setEntryFound(access.wasEntryFound);
}

template<bool IsWrite>
inline AccessDetails
CacheInstance::defaultHitRoutine(CacheLookup &lookup, ComponentRange hierarchy)
{
    Delay delay{0};

    // update status of this entry
    invokeUpdateOnAccessStrategy(lookup.set, lookup.entry);

    if (IsWrite)
    {
        constexpr bool IsMiss = false;
        delay += invokeWriteUpdateStrategy(lookup, hierarchy, IsMiss);
    }

    return AccessDetails{delay}.setEntryFound(true);
}

template<bool IsWrite>
inline AccessDetails
CacheInstance::defaultMissRoutine(CacheLookup &lookup, ComponentRange hierarchy)
{
    Delay delay{0};

    // fetch from next components
    delay += fetchFromNextLevel(lookup.address, hierarchy);

    // perform replacement
    delay += invokeReplacementStrategy(lookup, hierarchy, IsWrite);

    // update status of this entry
    invokeUpdateOnAccessStrategy(lookup.set, lookup.entry);

    if (IsWrite)
    {
        constexpr bool IsMiss = true;
        delay += invokeWriteUpdateStrategy(lookup, hierarchy, IsMiss);
    }
    return AccessDetails{delay}.setEntryFound(true);
}

inline Delay
CacheInstance::defaultReplacementRoutine(CacheLookup &lookup, ComponentHierarchy hierarchy)
{
    Delay delay{0};
    // find entry to invalidate
    CacheLine* entry = findEmptyEntry(lookup.set);
    if (!entry)
    {
        entry = invokeEvictionStrategy(lookup.set);
        assert(entry);
    }
    // writeback if dirty
    if (entry->hasFlag(CacheLine::Dirty))
    {
        uint64_t oldAddress = cacheMemory().getAddress(lookup.set, *entry);
        delay += writeBackToNextLevel(oldAddress, hierarchy);
    }
    // replace entry
    entry->tag = lookup.tag;
    entry->setFlag(CacheLine::Invalid | CacheLine::Dirty, false);
    lookup.entry = entry;
    return delay;
}

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_H
