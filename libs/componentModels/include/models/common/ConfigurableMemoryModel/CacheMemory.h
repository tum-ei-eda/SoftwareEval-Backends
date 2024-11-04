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

namespace cmm
{

// stongly named types for tag and index part of an address
using CacheTag   = NamedType<uint64_t, struct Tag_>;
using CacheIndex = NamedType<uint64_t, struct Index_>;

/// Implements a tag memory of a cache and provides simple access to
/// cache sets and their cache lines.
class CacheMemory
{
    using container_type = std::vector<CacheLine>;

public:
    using value_type = typename container_type::value_type;
    using size_type = typename container_type::size_type;

    /// allocates the tag memory for the given layout
    inline void resize(const size_type ways,
                       const size_type sets,
                       const size_type lineSize)
    {
        constexpr size_t wordSize = 4; // bytes in 1 words

        m_ways = ways;
        m_sets = sets;
        m_lineSize = lineSize;

        m_data.resize(ways * sets);

        m_offsetBits = ceil(log2(wordSize)) + // offset to index byte in a word
                       ceil(log2(lineSize));  // offset to index word in block
        m_indexBits  = ceil(log2(sets));      // index for blocks
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
     * @brief Returns the cache set of the given block index
     * @param index Index part
     * @return Cache block (#entries-per-block = #ways)
     */
    inline CacheSet getCacheSet(const CacheIndex index)
    {
        CacheLine* begin = (&*m_data.begin());
        const size_t baseIdx = index * m_ways;

        return CacheSet{begin + baseIdx, begin + baseIdx + m_ways};
    }

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
