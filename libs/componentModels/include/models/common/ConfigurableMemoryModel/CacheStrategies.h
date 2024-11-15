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

#ifndef CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H
#define CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H

#include "./CacheMemory.h"

#include <random>

namespace cmm
{

namespace eviction_strategy
{

/// selects pseudo-random cache line using a linear feedback shift register
/// (adopted from DCacheModel)
inline auto lfsr(const CacheMemory& tagMemory)
{
    uint8_t shift_state = 0;
    const size_t ways = tagMemory.ways() - 1;

    return [shift_state, ways](CacheSet& set) mutable -> CacheLine* {
        uint8_t shift_in = ~(((shift_state & 0x80) >> 7) ^
                             ((shift_state & 0x08) >> 3) ^
                             ((shift_state & 0x04) >> 2) ^
                             ((shift_state & 0x02) >> 1));
        shift_state = (shift_state << 1) | shift_in;
        return set[shift_state & ways];
    };
}

/// choses a random cache line using builtin `rand()` method
inline auto random(const CacheMemory& tagMemory)
{
    const size_t ways = tagMemory.ways();
    return [ways](CacheSet& block) -> CacheLine* {
        return block[rand() % ways];
    };
}

/// choses the cache line that was least frequently used
inline auto lfu(const CacheMemory& tagMemory)
{
    return [](CacheSet& set) -> CacheLine* {
        return &*std::max_element(set.begin(), set.end(),
                                  [](CacheLine& smallest,
                                     CacheLine& entry){
            // data = number of accesses
            return entry.data < smallest.data;
        });
    };
}

/// choses the cache line that was least recently used
inline auto lru(const CacheMemory& tagMemory)
{
    return [](CacheSet& set) -> CacheLine* {
        // assumes set is sorted according to LRU -> use last entry
        return set[set.size()-1];
    };
}

} // namespace eviction_strategy

namespace update_strategy
{

/// default update strategy
inline auto default_(const CacheMemory&)
{
    return [](CacheSet& set, CacheLine& entry) -> void {
        // nothing to do here
    };
}

/// updates the cache line and set according to the least frequently used
/// replacement strategy
inline auto lfu(const CacheMemory& tagMemory)
{
    // somewhat crude implementation
    // -> count is not capped which may lead to heavy bias in keeping an old
    //    entry alive that is no longer used
    return [](CacheSet& set, CacheLine& entry) -> void {
        // data = number of accesses
        entry.data += 1;
    };
}

/// updates the cache line and set according to the least frequently used
/// replacement strategy
inline auto lru(const CacheMemory& tagMemory)
{
    return [](CacheSet& set, CacheLine& entry) -> void {
        // get index of current entry
        auto iter = std::find_if(set.begin(), set.end(), [&entry](CacheLine& other){
            return &other == &entry;
        });
        assert(iter != set.end());
        size_t index = std::distance(set.begin(), iter);
        // TODO: implement
    };
}

} // namespace update_strategy

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H
