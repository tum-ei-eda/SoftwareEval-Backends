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

#ifndef CONFIGURABLE_MEMORY_MODEL_CACHE_MEMORY_H
#define CONFIGURABLE_MEMORY_MODEL_CACHE_MEMORY_H

#include "./CacheLine.h"
#include "./CacheSet.h"

#include <vector>
#include <cmath>
#include <cassert>
#include <limits>

namespace cmm
{

// stongly named types for tag and index part of an address
using CacheTag    = NamedType<uint64_t, struct Tag_>;
using CacheIndex  = NamedType<uint64_t, struct Index_>;
using CacheOffset = NamedType<uint64_t, struct Offset_>;

/// Implements a tag memory of a cache and provides simple access to
/// cache sets and their cache lines.
class CacheMemory
{
    using container_type = std::vector<CacheLine>;

public:

    // compile time constant for address width
    static constexpr size_t ADDRESS_WIDTH  = 32;
    // compile time constant for word size
    static constexpr size_t BYTES_PER_WORD = ADDRESS_WIDTH / 8;

    using value_type = typename container_type::value_type;
    using size_type = typename container_type::size_type;

    /// allocates the tag memory for the given layout
    inline void resize(const size_type ways,
                       const size_type sets,
                       const size_type lineSize)
    {
        m_ways = ways;
        m_sets = sets;
        m_lineSize = lineSize;

        m_data.resize(ways * sets);

        m_offsetBits = ceil(log2(BYTES_PER_WORD)) + // offset to index byte in a word
                       ceil(log2(lineSize));        // offset to index word in a cache line
        m_indexBits  = ceil(log2(sets));            // index for blocks
    }

    /**
     * @brief Invlaidates the entire cache
     */
    inline void invalidate()
    {
        for (CacheLine& line : m_data)
        {
            line.flags = CacheLine::Invalid | CacheLine::Uninitialized;
            line.tag   = 0x0;
            line.data  = 0x0;
        }
    }

    /// returns number of ways per set
    /// (#ways * #sets = #lines)
    inline size_type ways() const { return m_ways; }
    /// returns number of sets
    inline size_type sets() const { return m_sets; }
    /// returns number of words per cache line
    inline size_type lineSize() const { return m_lineSize; }

    /// total size of tag memory (= #cache-lines)
    inline size_type totalSize() const
    {
        assert(m_data.size() == ways() * sets());
        return m_data.size();
    }

    /// whether tag memory is empty (not allocated)
    inline bool empty() const { return m_data.empty(); }

    /**
     * @brief Extracts the tag part of the address which is used to check if
     * a cache line is actually the one of interest (i.e. hit or miss)
     * @param addr Memory address
     * @return Tag part
     */
    inline CacheTag getTag(const uint64_t addr) const
    {
        return CacheTag{addr >> (m_offsetBits + m_indexBits)};
    }

    /**
     * @brief Extracts the index part of the address which is used to
     * retrieve a cache set.
     * @param addr Memory address
     * @return Index part
     */
    inline CacheIndex getIndex(const uint64_t addr) const
    {
        return CacheIndex{(addr >> m_offsetBits) & ~(getTag(addr) << m_indexBits)};
    }

    /**
     * @brief Extracts the offset part of the address in words which would be
     * used to retrieve a word from a cache line.
     * @param addr Memory address
     * @return Word offset
     */
    inline CacheOffset getOffset(const uint64_t addr) const
    {
        constexpr uint64_t mask = std::numeric_limits<uint64_t>::max();
        return CacheOffset{addr & ~(mask << m_offsetBits) / BYTES_PER_WORD};
    }

    /**
     * @brief Returns the cache set of the given block index
     * @param index Index part
     * @return Cache block (#entries-per-block = #ways)
     */
    inline CacheSet getCacheSet(const CacheIndex index)
    {
        CacheLine* begin = (&*m_data.begin());
        const size_t baseIdx = index * m_ways;

        return {begin + baseIdx, begin + baseIdx + m_ways};
    }
    /// const overload
    inline ConstCacheSet getCacheSet(const CacheIndex index) const
    {
        CacheLine const* begin = (&*m_data.begin());
        const size_t baseIdx = index * m_ways;

        return {begin + baseIdx, begin + baseIdx + m_ways};
    }

    inline uint64_t getAddress(uint64_t address) const
    {
        return (getTag(address) << m_indexBits << m_offsetBits) | (getIndex(address) << m_offsetBits);
    }
    inline uint64_t getAddress(CacheSet cacheSet, CacheLine& entry) const
    {
        size_t rawIndex = cacheSet.begin() -  &(*m_data.begin());
        CacheIndex index{rawIndex / m_ways};

        return (entry.tag << m_indexBits << m_offsetBits) | (index << m_offsetBits);
    }

    inline uint64_t indexBits() const { return m_indexBits; }
    inline uint64_t offsetBits() const { return m_offsetBits; }

private:
    /// number of cache lines per set (= cache associativity)
    size_type m_ways = 1;
    /// number of sets (each set has #ways cache-lines)
    size_type m_sets = 0;
    /// words per cache line (used to calculate offset bits)
    size_type m_lineSize = 1;
    /// offfset bits
    uint64_t m_offsetBits = 0;
    /// index bits
    uint64_t m_indexBits  = 1;

    /// tag cache memory (allocated once at runtime, contiguous memory)
    std::vector<CacheLine> m_data;
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_MEMORY_H
