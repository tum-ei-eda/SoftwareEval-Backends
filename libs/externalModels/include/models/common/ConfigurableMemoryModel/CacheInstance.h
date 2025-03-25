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

class CacheInstance;

/**
 * @brief The CacheLookup struct. Helper struct that holds relevant data for an
 * "address lookup". This is mainly used to "save" on the number of parameters.
 */
struct CacheLookup
{
    /// address aligned to cache-lines
    MemoryAddress address{};
    /// tag part of the address
    CacheTag     tag{};
    /// cache set the cache entry belongs to
    CacheSet     set{};
    /// cache entry containing target address (null if not cached)
    CacheEntry*  entry{};
};

/// strategy to chose a valid cache entry to evict
using EvictionStrategy =
    std::function<CacheEntry*(CacheSet)>;
/// strategy to update the status of a cache entry
using UpdateOnAccessStrategy =
    std::function<void(CacheSet, CacheEntry*)>;
using UpdateOnInvalidationStrategy =
    std::function<void(CacheSet, CacheEntry*)>;
/// strategy to implement write policy
using WriteUpdateStrategy =
    std::function<Delay(CacheInstance& cache,
                        CacheLookup& lookup,
                        ComponentHierarchy hierarchy,
                        bool isMiss,
                        bool isWrite)>;

/**
 * @brief The CacheConfig struct. Helper struct to setup cache's parameters
 * using explicitly named members.
 */
struct CacheConfig
{
    std::string name{};
    CacheMemory memory{};
    EvictionStrategy evictionStrategy{};
    WriteUpdateStrategy writeUpdateStrategy{};
    UpdateOnAccessStrategy updateOnAccessStrategy{};
    UpdateOnInvalidationStrategy updateOnInvlidationStrategy{};
    Delay readHitDelay{}, readMissDelay{}, writeHitDelay{}, writeMissDelay{};
};

/**
 * @brief The CacheInstace class. A cache instance can model the behavior of
 * varoius cache types and provides an API to fetch memory addresses.
 */
class CacheInstance : public MemoryComponent
{
public:

    /**
     * @brief Constructor, uses a config struct to set the various parameters
     * @param config Config struct
     */
    CacheInstance(CacheConfig config) :
        MemoryComponent(std::move(config.name)),
        m_tagMemory(std::move(config.memory)),
        m_evictionStrategy(std::move(config.evictionStrategy)),
        m_writeUpdateStrategy(std::move(config.writeUpdateStrategy)),
        m_updateOnAccessStrategy(std::move(config.updateOnAccessStrategy)),
        m_updateOnInvlidationStrategy(std::move(config.updateOnInvlidationStrategy)),
        m_readHitDelay(config.readHitDelay),
        m_writeHitDelay(config.writeHitDelay),
        m_readMissDelay(config.readMissDelay),
        m_writeMissDelay(config.writeMissDelay)
    {
        assert(m_writeUpdateStrategy);
        assert(m_evictionStrategy);
    }

    ~CacheInstance() override = default;

    /**
     * @brief Setter for caches that must be accessed when broadcasting an
     * invalidation. Cannot be set via constructor.
     * @param list
     */
    void setCachesToInvalidate(std::vector<CacheInstance*> list)
    {
        m_cachesToInvalidate = std::move(list);
    }

    // getters for cache memory
    inline CacheMemory& cacheMemory() { return m_tagMemory; }
    inline CacheMemory const& cacheMemory() const { return m_tagMemory; }
    // getters for read delays
    inline Delay readHitDelay() const  { return m_readHitDelay; }
    inline Delay readMissDelay() const { return m_readMissDelay; }
    // getters for write delays
    inline Delay writeHitDelay() const  { return m_writeHitDelay; }
    inline Delay writeMissDelay() const { return m_writeMissDelay; }

    /**
     * @brief Performs a read access on the given address and yields a delay
     * based on the hit or miss delay. Subsequential components may be updated
     * as well.
     * @param address Address to perform read access on
     * @param hierarchy Next components, which may be accessed and updated
     * @return Result of the memory access
     */
    AccessResult readAccess(MemoryAddress address, ComponentHierarchy hierarchy) final
    {
        constexpr bool isWrite = false;

        AccessResult result = performAccess(address, hierarchy, isWrite);

        CMM_STATISTICS_ONLY(
            (result.isCacheHit) ? t_readHits++ : t_readMisses++;
        )

        return result;
    }

    /**
     * @brief Performs a write access to the given address and yields a delay
     * based on the hit or miss delay. Subsequential components may be updated
     * as well.
     * @param address Address to perform read access on
     * @param hierarchy Next components, which may be accessed and updated
     * @return Result of the memory access
     */
    AccessResult writeAccess(MemoryAddress address, ComponentHierarchy hierarchy) final
    {
        constexpr bool isWrite = true;

        AccessResult result = performAccess(address, hierarchy, isWrite);

        CMM_STATISTICS_ONLY(
            (result.isCacheHit) ? t_writeHits++ : t_writeMisses++;
        )

        return result;
    }

    /**
     * @brief Performs a lookup of the given address. The given address
     * may be "unaligned" (e.g. point to the 2nd word in a cache line). The
     * lookup returns a cache line aligned address which points to the first
     * entry in the cache line.
     * @param unalignedAddress Unaligned address to lookup
     * @return Helper object for a lookup
     */
    CacheLookup lookupAddress(MemoryAddress unalignedAddress);

    /**
     * @brief Invalidates the cache entry that contains `startAddress` if it
     * exists.
     * @param startAddress start address of the block to invalidate
     * @param blockSize Size of the block (in words) to invalidate
     */
    void invalidate(MemoryAddress startAddress, size_t blockSize);

    /**
     * @brief Invalidates the address in all other caches registered for
     * invaldiation (see `m_cachesToInvalidate`).
     * @param startAddress Start of address block to invalidate in other cache
     * components
     */
    void broadcastInvalidation(MemoryAddress startAddress);

    /**
     * @brief Marks the entry as dirty.
     * @param entry Entry to mark as dirty.
     */
    void makeEntryDirty(CacheEntry& entry);

    /**
     * @brief Attempts to find an empty entry (i.e. unused/free) in the given
     * cache set.
     * @param cacheSet Cache set to search through
     * @return Pointer to cache entry (null if no empty entry was found)
     */
    CacheEntry* findEmptyEntry(CacheSet cacheSet);

    ///// cache strategies /////
    /**
     * @brief Invokes the corresponding strategy when accessing (read or write)
     * a cache entry.
     * @param cacheSet Cache set of the cache entry
     * @param entry Cache entry that was accessed
     */
    void invokeUpdateOnAccessStrategy(CacheSet cacheSet, CacheEntry* entry);

    /**
     * @brief Invokes the corresponding strategy when invalidating a cache entry.
     * @param cacheSet Cache set of the cache entry
     * @param entry Cache entry that was invalidated
     */
    void invokeUpdateOnInvalidationStrategy(CacheSet cacheSet, CacheEntry* entry);

    /**
     * @brief Invokes the write policy specific strategy.
     * @param lookup Object containing information of the address block that
     * was accessed
     * @param hierarchy Range of all components that follow
     * @param isMiss Whether the access was a miss
     * @return Delay
     */
    Delay invokeWriteUpdateStrategy(CacheLookup& lookup,
                                    ComponentHierarchy hierarchy,
                                    bool const isMiss,
                                    bool const isWrite);

    /**
     * @brief Invokes the strategy for evicting a valid cache entry.
     * @param cacheSet Cache set which must evict a valid cache entry.
     * @return Cache entry selected for eviction
     */
    CacheEntry* invokeEvictionStrategy(CacheSet cacheSet);

    ///// access to next level /////
    /**
     * @brief Performs a writeback to the next level cache/memory (no data is
     * written back, but a write access is performed on the next components)
     * @param address Address to write back
     * @param hierarchy Next hierarchy
     * @return delay
     */
    Delay writeBackToNextLevel(MemoryAddress address, ComponentHierarchy hierarchy);

    /**
     * @brief Fetches the address from next level cache/memory (no data is
     * read, but a read access is performed on the next components)
     * @param address Address to write back
     * @param hierarchy Next hierarchy
     * @return delay
     */
    Delay fetchFromNextLevel(MemoryAddress address, ComponentHierarchy hierarchy);

protected:

    /**
     * @brief Performs a read/write access to the given address. Override this
     * function to implement custom access behavior
     * @param cache CacheInstance
     * @param address Address to read form/write to (not aligned to cache line)
     * @tparam IsWrite Flag indicating whether the function call is a read or
     * write. The idea is to reduce code duplication and give the compiler a
     * hand to optimize away the if-else conditions by using a compile-time
     * value parameter.
     * @return Access details
     */
  virtual AccessResult performAccess(MemoryAddress address,
                                     ComponentHierarchy hierarchy,
                                     bool const isWrite)
  {
      CacheLookup lookup = lookupAddress(address);

      bool const hit = lookup.entry;

      return hit ? performHit(lookup, hierarchy, isWrite) :
                   performMiss(lookup, hierarchy, isWrite);
  }

  AccessResult performHit(CacheLookup lookup,
                          ComponentHierarchy hierarchy,
                          bool const isWrite);

  AccessResult performMiss(CacheLookup lookup,
                           ComponentHierarchy hierarchy,
                           bool const isWrite);

    /**
     * @brief Performs the replacement of a cache entry including the eviction
     * of a valid cache entry if necessary.
     * @param lookup Object containing information of the address block that
     * was accessed
     * @param hierarchy Range of all components that follow this cache.
     * @return Delay
     */
    Delay performReplacement(CacheLookup& lookup, ComponentHierarchy hierarchy);

private:

    /// tag memory of cache
    CacheMemory m_tagMemory{};
    /// strategy to evict an entry of a cache set (i.e. replacement)
    const EvictionStrategy m_evictionStrategy{};
    /// strategy to implement behavior for write policy
    const WriteUpdateStrategy m_writeUpdateStrategy{};
    /// strategy to update status of an entry when its accessed
    const UpdateOnAccessStrategy m_updateOnAccessStrategy{};
    /// strategy to update status of an entry if its invalidated
    const UpdateOnInvalidationStrategy m_updateOnInvlidationStrategy{};
    /// delay if address was cached
    const Delay m_readHitDelay{0};
    const Delay m_writeHitDelay{0};
    /// delay if address was not cached
    const Delay m_readMissDelay{0};
    const Delay m_writeMissDelay{0};
    //// list of other caches that must be invalidated for a write
    std::vector<CacheInstance*> m_cachesToInvalidate;

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose
        uint32_t t_readHits = 0;
        uint32_t t_readMisses = 0;
        uint32_t t_writeHits = 0;
        uint32_t t_writeMisses = 0;
        uint32_t t_evictions = 0;
        uint32_t t_writeBacks = 0;
        uint32_t t_makeDirty = 0;
        uint32_t t_invalidations = 0;
    )
};


/**
 * @brief The CacheInstanceNoAllocate class. A specialization for caches with
 * write-no-allocate policies.
 */
class CacheInstanceNoAllocate : public CacheInstance
{
    public:

    /**
     * @brief Constructor, uses a config struct to set the various parameters
     * @param config Config struct
     */
    CacheInstanceNoAllocate(CacheConfig config, bool invalidateCacheOnWriteMiss) :
        CacheInstance(std::move(config)),
          m_invalidateCacheOnWriteMiss(invalidateCacheOnWriteMiss)
    { }

    ~CacheInstanceNoAllocate() override = default;

protected:

    /**
     * @brief Performs a read/write access to the given address. Override this
     * function to implement custom access behavior
     * @param cache CacheInstance
     * @param address Address to read form/write to (not aligned to cache line)
     * @tparam IsWrite Flag indicating whether the function call is a read or
     * write. The idea is to reduce code duplication and give the compiler a
     * hand to optimize away the if-else conditions by using a compile-time
     * value parameter.
     * @return Access details
     */
    AccessResult performAccess(MemoryAddress address,
                               ComponentHierarchy hierarchy,
                               bool const isWrite) final;

private:

    bool m_invalidateCacheOnWriteMiss = false;
};

///// inline implementations /////

inline CacheLookup
CacheInstance::lookupAddress(MemoryAddress unalignedAddress)
{
    const CacheTag tag     = m_tagMemory.getTag(unalignedAddress);
    const CacheIndex index = m_tagMemory.getIndex(unalignedAddress);

    CacheSet cacheSet = m_tagMemory.getCacheSet(index);
    CacheEntry* entry  = cacheSet.find(tag);

    // if entry found it should be valid
    // -> if its not valid it should not be found
    assert (!(entry && !entry->isValid()));

    // make address aligned to cache entry
    uint64_t baseAddress = m_tagMemory.getBaseAddress(unalignedAddress);

    return CacheLookup{ baseAddress, tag, cacheSet, (entry ? entry : nullptr) };
}

inline void
CacheInstance::invalidate(MemoryAddress address, size_t blockSize)
{
    CacheLookup lookup = lookupAddress(address);

    // check that the address range which should be invalidated does not
    // overlap with multiple cache lines as this is not supported currently
    assert(m_tagMemory.getIndex(address) ==
               m_tagMemory.getIndex(address + blockSize) &&
           "Address spans multiple cache lines! "
           "Additionaly logic is needed to invalidate all affected cache lines!");

    if (!lookup.entry) return; // nothing to invalidate

    // entry should not be dirty
    assert(!lookup.entry->hasFlag(CacheEntry::Dirty));

    // reset flags
    lookup.entry->invalidate();

    CMM_STATISTICS_ONLY(
        t_invalidations++;
    )

    invokeUpdateOnInvalidationStrategy(lookup.set, lookup.entry);
}

inline void
CacheInstance::broadcastInvalidation(MemoryAddress startAddress)
{
    // invalidate other components
    for (CacheInstance* other : m_cachesToInvalidate)
    {
        if (other != this) other->invalidate(startAddress, m_tagMemory.lineSize());
    }
}

inline void
CacheInstance::makeEntryDirty(CacheEntry& entry)
{
    if (!entry.hasFlag(CacheEntry::Dirty))
    {
        CMM_STATISTICS_ONLY(
            t_makeDirty++;
        )

        // mark as dirty
        entry.setFlag(CacheEntry::Dirty, true);
    }
}

inline CacheEntry*
CacheInstance::findEmptyEntry(CacheSet cacheSet)
{
    // find empty entry
    CacheEntry* entry = cacheSet.findInvalid();
    return entry;
}

inline void
CacheInstance::invokeUpdateOnAccessStrategy(CacheSet cacheSet,
                                            CacheEntry* entry)
{
    // update the status of entry in case an entry is accessed
    if (m_updateOnAccessStrategy)
    {
        m_updateOnAccessStrategy(cacheSet, entry);
    }
}

inline void
CacheInstance::invokeUpdateOnInvalidationStrategy(CacheSet cacheSet,
                                                  CacheEntry *entry)
{
    // update the status of entry in case an entry is invalidated
    if (m_updateOnInvlidationStrategy)
    {
        m_updateOnInvlidationStrategy(cacheSet, entry);
    }
}

inline Delay
CacheInstance::performReplacement(CacheLookup& lookup,
                                         ComponentHierarchy hierarchy)
{
    Delay delay{0};
    // find entry to invalidate
    CacheEntry* entry = findEmptyEntry(lookup.set);
    if (!entry)
    {
        entry = invokeEvictionStrategy(lookup.set);
        assert(entry);
    }
    // writeback if dirty
    if (entry->hasFlag(CacheEntry::Dirty))
    {
        uint64_t oldAddress = cacheMemory().getAddress(lookup.set, entry);
        delay += writeBackToNextLevel(oldAddress, hierarchy);
    }
    // replace entry
    entry->tag = lookup.tag;
    entry->setFlag(CacheEntry::Invalid | CacheEntry::Dirty, false);
    lookup.entry = entry;
    return delay;
}

inline Delay
CacheInstance::invokeWriteUpdateStrategy(CacheLookup& lookup,
                                         ComponentHierarchy hierarchy,
                                         bool const isMiss,
                                         bool const isWrite)
{
    assert(m_writeUpdateStrategy);
    return m_writeUpdateStrategy(*this, lookup, hierarchy, isMiss, isWrite);
}

inline CacheEntry*
CacheInstance::invokeEvictionStrategy(CacheSet cacheSet)
{
    // choose an entry that is still valid for eviction
    CacheEntry* entry = m_evictionStrategy(cacheSet);

    CMM_STATISTICS_ONLY(
        t_evictions++;
        entry->t_evictions++;
    )

    return entry;
}

inline Delay
CacheInstance::writeBackToNextLevel(MemoryAddress address, ComponentHierarchy hierarchy)
{
    CMM_STATISTICS_ONLY(
        t_writeBacks++;
    )

    if (hierarchy.hasNextComponent())
    {
        MemoryComponent* next = hierarchy.nextComponent();
        return next->writeAccess(address, hierarchy.advance()).delay;
    }
    return Delay{0};
}

inline Delay
CacheInstance::fetchFromNextLevel(MemoryAddress address, ComponentHierarchy hierarchy)
{
    if (hierarchy.hasNextComponent())
    {
        MemoryComponent* next = hierarchy.nextComponent();
        return next->readAccess(address, hierarchy.advance()).delay;
    }
    return Delay{0};
}

inline AccessResult
CacheInstance::performHit(CacheLookup lookup,
                          ComponentHierarchy hierarchy,
                          bool const isWrite)
{
    CMM_STATISTICS_ONLY(
        (isWrite) ? lookup.entry->t_writeHits++ :
                    lookup.entry->t_readHits++;
    )

    Delay delay = isWrite ? m_writeHitDelay : m_readHitDelay;

           // update status of this entry
    invokeUpdateOnAccessStrategy(lookup.set, lookup.entry);

    if (isWrite)
    {
        constexpr bool IsMiss = false;
        delay += invokeWriteUpdateStrategy(lookup, hierarchy, IsMiss, isWrite);
    }

    return AccessResult{delay}
        .setAccessCompleted(true)
        .setCacheHit(true);
}

inline AccessResult
CacheInstance::performMiss(CacheLookup lookup,
                           ComponentHierarchy hierarchy,
                           bool const isWrite)
{
    Delay delay = isWrite ? m_writeMissDelay : m_readMissDelay;

    // fetch from next components
    delay += fetchFromNextLevel(lookup.address, hierarchy);

    // perform replacement
    delay += performReplacement(lookup, hierarchy);

    // update status of this entry
    invokeUpdateOnAccessStrategy(lookup.set, lookup.entry);

    if (isWrite)
    {
        constexpr bool IsMiss = true;
        delay += invokeWriteUpdateStrategy(lookup, hierarchy, IsMiss, isWrite);
    }

    return AccessResult{delay}
        .setAccessCompleted(true)
        .setCacheHit(false);
}

///// inline specializations /////

inline AccessResult
CacheInstanceNoAllocate::performAccess(MemoryAddress address,
                                       ComponentHierarchy hierarchy,
                                       bool const isWrite)
{
    CacheLookup lookup = lookupAddress(address);

    const bool hit = lookup.entry;
    if (hit)
    {
        return performHit(lookup, hierarchy, isWrite);
    }

    if (!isWrite)
    {
        return performMiss(lookup, hierarchy, isWrite);
    }

    Delay delay = writeMissDelay();

    // for no-allocate-invalidate: invalidate entire cache
    if (m_invalidateCacheOnWriteMiss)
    {
        cacheMemory().invalidate();
    }

    // on write miss skip this cache
    return AccessResult{delay}
        .setAccessCompleted(false)
        .setCacheHit(false);
}

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_H
