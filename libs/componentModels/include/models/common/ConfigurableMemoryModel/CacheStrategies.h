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
/// (adopted from DCacheModel and wikipedia)
inline auto lfsr(const CacheMemory& tagMemory)
{
    uint8_t shift_state = 0xAC; // seed
    const size_t maxIdx = tagMemory.ways() - 1;

    return [shift_state, maxIdx](CacheSet& set) mutable -> CacheLine* {
        uint8_t shift_in = ~(((shift_state & 0x80) >> 7) ^
                             ((shift_state & 0x08) >> 3) ^
                             ((shift_state & 0x04) >> 2) ^
                             ((shift_state & 0x02) >> 1));
        shift_state = (shift_state >> 1) | (shift_in << 7);
        return &set[shift_state & maxIdx];
    };
}

/// choses a random cache line using builtin `rand()` method
inline auto random(const CacheMemory& tagMemory)
{
    const size_t ways = tagMemory.ways();
    return [ways](CacheSet& block) -> CacheLine* {
        return &block[rand() % ways];
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
        // assumes set is sorted according to most recently used first
        // -> use last entry
        return &set[set.size() - 1];
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

/// moves the most recently used entry to the top of the set, thus sorting
/// the set according to least recently used
inline auto lru(const CacheMemory& tagMemory)
{
    return [](CacheSet& set, CacheLine& entry) -> void {
        size_t index = 0;
        for (CacheLine& other : set)
        {
            if (&other == &entry) break;
            index++;
        }

        // sort `set` and move `entry` to the top
        while (index > 0)
        {
            // e.g. `entry` is the third in the range `set`
            //  1. swap entry no. 3 (which is equal to `entry`) and entry no. 2
            //  2. swap entry no. 2 (which is now `entry`) and entry no. 1
            // -> done
            // now the entry is at the top of the set whereas the other entries
            // have moved down a place
            cmm::CacheLine& before  = set[index - 1];
            cmm::CacheLine& current = set[index];
            std::swap(before, current);
            index--;
        }
    };
}

} // namespace update_strategy

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H
