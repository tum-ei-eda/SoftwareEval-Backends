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
#include <algorithm>

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
    CacheLine_t* operator[](size_t idx) { return begin() + idx; }

    /// Returns size of range
    size_t size() const { return end_ - begin_; }

    /**
     * @brief Attempts to find a cache line with the given tag
     * @return Cache line with the given tag (may be null)
     */
    inline CacheLine_t* find(uint64_t tag) const
    {
        auto iter = std::find_if(begin(), end(), [tag](CacheLine_t const& e){
            return e.tag == tag;
        });

        if (iter == end()) return nullptr;
        return &*iter;
    }

    /**
     * @brief Attempts to find a cache line that is invalid (= free/empty)
     * @return Cache line that is invalid (may be null)
     */
    inline CacheLine_t* findInvalid() const
    {
        auto iter = std::find_if(begin(), end(), [](CacheLine_t const& e){
            return !e.isValid();
        });

        if (iter == end()) return nullptr;
        return &*iter;
    }
};

using CacheSet = CacheSet_t<CacheLine>;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_SET_H
