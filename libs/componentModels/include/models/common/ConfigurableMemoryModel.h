/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

#ifndef CONFIGURABLE_MEMORY_MODEL_H
#define CONFIGURABLE_MEMORY_MODEL_H

#include "PerformanceModel.h"

#include <vector>
#include <functional>
#include <algorithm>

/// configurable memory model
namespace cmm
{

/// Status flags of a cache entry
enum StatusFlag : uint32_t
{
    NoFlag = 0,
    /// cache entry is invalid -> entry must be fetched to access
    Invalid = 1 << 0,
    // TODO: Dirty Flag? Coherency Flags?
};
using StatusFlags = uint32_t;

/// Cache entry
struct CacheEntry
{
    /// tag part of cache entry
    uint64_t tag  = 0x0;
    /// custom data
    uint32_t data = 0x0;
    /// status flags
    StatusFlags flags = Invalid;

    /// checks whether the cache entry is valid
    constexpr inline bool isValid() const { return !hasFlag(Invalid); }

    /// checks whether the flag is set
    constexpr inline bool hasFlag(StatusFlag flag) const { return flags & flag; }

    /// sets the given flag for the cache entry
    constexpr inline void setFlag(StatusFlag flag, bool enable = true)
    {
        enable ? flags |=  flag :
                 flags &= ~flag;
    }

    // temporaries (for debugging/statistics)
    uint32_t t_hits  = 0, t_evictions = 0;
};

/// Cache block/line which holds multiple cache entries
struct CacheBlock
{
    /// start of range
    CacheEntry* begin_{};
    /// end of range
    CacheEntry* end_{};

    /// begin iterator
    CacheEntry* begin() { return begin_; }
    /// end iterator
    CacheEntry* end() { return end_; }

    CacheEntry* operator[](size_t idx) { return begin() + idx; }

    /**
     * @brief Attempts to find a cache entry with the given tag
     * @return Cache entry with the given tag (may be null)
     */
    inline cmm::CacheEntry* findEntry(uint64_t tag)
    {
        auto iter = std::find_if(begin(), end(), [tag](const CacheEntry& e){
            return e.tag == tag;
        });

        if (iter == end()) return nullptr;
        return &*iter;
    }

    /**
     * @brief Attempts to find a cache entry that is invalid
     * @return Cache entry that is invalid (may be null)
     */
    inline cmm::CacheEntry* findInvalidEntry()
    {
        auto iter = std::find_if(begin(), end(), [](const CacheEntry& e){
            return !e.isValid();
        });

        if (iter == end()) return nullptr;
        return &*iter;
    }
};

/// Implements a tag memory of a cache and provides simple access to
/// cache blocks and entries
class TagMemory
{
    using container_type = std::vector<CacheEntry>;

public:
    using value_type = typename container_type::value_type;
    using size_type = typename container_type::size_type;

    using iterator = typename container_type::iterator;
    using const_iterator = typename container_type::const_iterator;

    /// allocates the tag memory for the given layout
    void resize(size_type ways, size_type blocks, size_type blockSize);

    /// returns number of ways per block
    size_type ways() const { return m_ways; }
    /// returns number of blocks
    size_type blocks() const { return m_blocks; }
    /// returns number of words per block
    size_type blockSize() const { return m_blockSize; }

    /**
     * @brief Extracts the tag part of the address
     * @param addr Memory address
     * @return Tag part
     */
    inline uint64_t getTag(uint64_t addr) const
    {
        return addr >> (m_offsetBits + m_indexBits);
    }

    /**
     * @brief Extracts the index part of the address used to index the
     * cache block.
     * @param addr Memory address
     * @return Index part
     */
    inline uint64_t getBlockIndex(uint64_t addr) const
    {
        return (addr >> m_offsetBits) & ~(getTag(addr) << m_indexBits);
    }

    /**
     * @brief Returns the cache block of the given block index
     * @param index Index part
     * @return Cache block (#entries-per-block == #ways)
     */
    inline CacheBlock getBlock(uint64_t index)
    {
        size_t baseIdx = index * m_ways;
        return {
            &*m_data.begin() + baseIdx,
            &*m_data.begin() + baseIdx + m_ways
        };
    }

    /// whether tag memory is empty (not allocated)
    inline bool empty() const { return m_data.empty(); }

private:
    size_type m_ways = 1;
    size_type m_blocks = 0;
    size_type m_blockSize = 1;

    uint64_t m_offsetBits = 0;
    uint64_t m_indexBits  = 1;

    /// tag cache memory (allocated once at runtime)
    std::vector<CacheEntry> m_data;
};

/// Struct to denote a cachable address space
struct AddressSpace
{
    uint64_t lower = 0x0; // inclusive
    uint64_t upper = 0x0; // not inclusive

    /// Returns whether the address is contained in the address space
    inline bool contains(uint64_t addr) const
    {
        return addr >= lower && addr < upper;
    }
};

/// Struct to hold cache delays
struct CacheDelays
{
    /// address in cache (default cache delay)
    int hit = 1;
    /// address not in cache
    int miss = 1;
};

class Cache
{
public:

    /// strategy to chose an entry to evict
    using EvictionStrategy = std::function<cmm::CacheEntry*(cmm::CacheBlock&)>;
    using UpdateStrategy   = std::function<void(cmm::CacheBlock&, cmm::CacheEntry&)>;

    Cache(std::string name);
    ~Cache();

    bool applyConfig(etiss::Configuration& config,
                     std::string const& configPath);


    /**
     * @brief Performs a fetch and updates the delay parameter as required.
     * Returns whether the cache had a cache hit or miss.
     * @param address Memory address to fetch
     * @param delay Delay in clock cycles
     * @return Cache hit (true) or miss (false)
     */
    bool fetch(uint64_t address, int& delay);

    /// Returns the name of the cache (non-functional property)
    inline std::string const& name() const { return m_name; }

private:

    /// name of cache level (non-functional member)
    std::string m_name{};
    /// delays for cache actions
    CacheDelays m_delays;
    /// tag cache memory
    TagMemory m_tagMemory;
    /// strategy to evict entry
    EvictionStrategy m_evictStrategy{};
    /// update strategy
    UpdateStrategy m_updateStrategy{};

    /**
     * @brief Updates the status of the cache entry/block (e.g. access times)
     * @param block Block that holds the accessed entry
     * @param entry Entry that was accessed
     */
    void update(CacheBlock block,
                CacheEntry& entry);

    /**
     * @brief Replaces the entry in the cache block.
     * @param block Block that contains the entry
     * @param entry Entry to replace
     * @param tag Tag to store in cache entry
     */
    void replace(CacheBlock block,
                 CacheEntry& entry,
                 uint64_t tag);

    // temporaries (for debugging/statistics)
    uint32_t t_hits = 0, t_misses = 0, t_evictions = 0;
};

class MemoryRegion
{
public:

    bool applyConfig(etiss::Configuration& config,
                     std::string const& configPath,
                     std::vector<cmm::Cache>& caches);

    void fetch(uint64_t addr, int& delay);

    AddressSpace const& addressSpace() const { return m_addrSpace; }

private:

    AddressSpace m_addrSpace{};

    std::vector<Cache*> m_caches;

    int m_notCachableDelay = 0;
};

} // namespace cmm

/**
 * @brief Configurable memory model.
 */
class ConfigurableMemoryModel : public ResourceModel
{
public:

    ConfigurableMemoryModel(PerformanceModel* parent_);

    /**
     * @brief Applies memory model configuration
     * @param config_ Config holding memory values
     */
    void applyConfig(etiss::Configuration& config) override;

    /**
     * @brief Delay for accessing the current address
     * @return Delay
     */
    int getDelay(void) override;

    /// pointer to memory
    /// TODO: more fitting name? Keeping API compatiblity to DCacheModel
    uint64_t* addr_ptr = nullptr;

private:

    std::vector<cmm::Cache> m_caches;

    std::vector<cmm::MemoryRegion> m_regions;
};

#endif //CONFIGURABLE_MEMORY_MODEL_H
