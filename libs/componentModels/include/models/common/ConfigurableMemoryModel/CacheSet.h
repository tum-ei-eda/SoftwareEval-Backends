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

#include "./CacheEntry.h"

#include <cstddef>

/// namespace for configurable memory model
namespace cmm
{

/**
 * @brief The CacheSet_t class. Denotes a set of cache entries (i.e. number of
 * cache entries per set is given by the associativity of the cache). This is
 * a lightweight wrapper around a range of CacheLines (must be in contiguous
 * memory). Does not store data nor manages the cache entries.
 * `CacheEntry_t` can either be const or non-const.
 */
template<typename CacheEntry_t>
struct CacheSet_t
{
    /// start of range
    CacheEntry_t* begin_{};
    /// end of range (points one element past the actual range)
    CacheEntry_t* end_{};

    /// begin iterator
    /// (c++ iterators, used for range-based for loops and std algorithms)
    CacheEntry_t* begin() const { return begin_; }
    /// end iterator
    CacheEntry_t* end() const { return end_; }

    /// []-operator to behave like a vector/array
    CacheEntry_t& operator[](size_t idx) const { return *(begin() + idx); }

    /// Returns size of range
    size_t size() const { return end_ - begin_; }

    /// Returns first entry of the cache set
    CacheEntry_t& first() const { return operator[](0); }
    /// Returns last entry of the cache set
    CacheEntry_t& last() const { return operator[](size() - 1); }

    /**
     * @brief Returns the index of the entry in the cache set. The entry
     * must be contained by the cache set, otherwise an invalid index is
     * returned.
     * @param entry Entry
     * @return Index of entry
     */
    inline size_t indexOf(CacheEntry* entry) const
    {
        size_t index = 0; // index of entry
        for (CacheEntry& other : (*this))
        {
            if (&other == entry) break;
            index++;
        }
        return index;
    }
    /**
     * @brief Attempts to find a cache entry with the given tag
     * @return Cache entry with the given tag (may be null)
     */
    inline CacheEntry_t* find(uint64_t tag) const
    {
        for (CacheEntry_t& e : (*this))
        {
            if (e.tag == tag) return &e;
        }
        return nullptr;
    }

    /**
     * @brief Attempts to find a cache entry that is invalid (= free/empty)
     * @return Cache entry that is invalid (may be null)
     */
    inline CacheEntry_t* findInvalid() const
    {
        for (CacheEntry_t& e : (*this))
        {
            if (!e.isValid()) return &e;
        }
        return nullptr;
    }
};

using CacheSet = CacheSet_t<CacheEntry>;
using ConstCacheSet = CacheSet_t<CacheEntry const>;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_SET_H
