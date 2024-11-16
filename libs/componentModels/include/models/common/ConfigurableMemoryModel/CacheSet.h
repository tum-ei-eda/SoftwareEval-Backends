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

#ifndef CONFIGURABLE_MEMORY_MODEL_CACHE_SET_H
#define CONFIGURABLE_MEMORY_MODEL_CACHE_SET_H

#include "./CacheLine.h"

#include <cstddef>

/// namespace for configurable memory model
namespace cmm
{

/// Denotes a set of cache lines (i.e. number of cache lines per set is given
/// by the associativity of the cache). This is a lightweight wrapper around
/// a range of CacheLines (must be in contiguous memory). Does not store
/// acutal data
template<typename CacheLine_t>
struct CacheSet_t
{
    /// start of range
    CacheLine_t* begin_{};
    /// end of range (points one element past the actual range)
    CacheLine_t* end_{};

    /// begin iterator
    /// (c++ iterators, used for range-based for loops and std algorithms)
    CacheLine_t* begin() const { return begin_; }
    /// end iterator
    CacheLine_t* end() const { return end_; }

    /// []-operator to behave like a vector/array
    CacheLine_t& operator[](size_t idx) const { return *(begin() + idx); }

    /// Returns size of range
    size_t size() const { return end_ - begin_; }

    /// Returns first entry
    CacheLine_t& first() const { return operator[](0); }
    /// Returns last entry
    CacheLine_t& last() const { return operator[](size() - 1); }

    inline size_t indexOf(CacheLine* entry) const
    {
        size_t index = 0; // index of entry
        for (CacheLine& other : (*this))
        {
            if (&other == entry) break;
            index++;
        }
        return index;
    }
    /**
     * @brief Attempts to find a cache line with the given tag
     * @return Cache line with the given tag (may be null)
     */
    inline CacheLine_t* find(uint64_t tag) const
    {
        for (CacheLine_t& e : (*this))
        {
            if (e.tag == tag) return &e;
        }
        return nullptr;
    }

    /**
     * @brief Attempts to find a cache line that is invalid (= free/empty)
     * @return Cache line that is invalid (may be null)
     */
    inline CacheLine_t* findInvalid() const
    {
        for (CacheLine_t& e : (*this))
        {
            if (!e.isValid()) return &e;
        }
        return nullptr;
    }
};

using CacheSet = CacheSet_t<CacheLine>;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_SET_H
