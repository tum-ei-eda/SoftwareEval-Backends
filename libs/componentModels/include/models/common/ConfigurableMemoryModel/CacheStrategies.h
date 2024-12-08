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

#include "./CacheInstance.h"

#include <random>
#include <algorithm>

namespace cmm
{

/// Helper function that moves the entry at `index` to the bottom by shifting
/// all other entries inbetween up once
inline void
moveToBottom(CacheSet set, size_t index)
{
    assert(index < set.size());
    const size_t size = set.size();
    while (index < size - 1)
    {
        cmm::CacheLine& moveDown = set[index];
        cmm::CacheLine& moveUp   = set[index + 1];
        std::swap(moveDown, moveUp);
        index++;
    }
}

/// Helper function that moves the entry at `index` to the top by shifting
/// all other entries inbetween down once
inline void
moveToTop(CacheSet set, size_t index)
{
    assert(index < set.size());
    while (index > 0)
    {
        // e.g. `entry` is the third in the range `set`
        //  1. swap entry no. 3 (which is equal to `entry`) and entry no. 2
        //  2. swap entry no. 2 (which is now `entry`) and entry no. 1
        // -> done
        // now `entry` is at the top of the set whereas the other entries
        // have moved down a place
        cmm::CacheLine& moveUp   = set[index];
        cmm::CacheLine& moveDown = set[index - 1];
        std::swap(moveDown, moveUp);
        index--;
    }
}

/// strategies that chose an entry to evict if all entries of a cache set are
/// used. May use the `CacheLine::data` member to store information
/// persistently.
namespace eviction_strategy
{

/// selects pseudo-random cache line using a 8 bit linear feedback shift
/// register (adopted from DCacheModel)
inline auto lfsr8bit(const CacheMemory& tagMemory)
{
    uint8_t shift_state = 0x00; // seed
    const size_t ways = tagMemory.ways() - 1;

    return [shift_state, ways](CacheSet set) mutable -> CacheLine* {
        uint8_t shift_in = ~(((shift_state & 0x80) >> 7) ^
                             ((shift_state & 0x08) >> 3) ^
                             ((shift_state & 0x04) >> 2) ^
                             ((shift_state & 0x02) >> 1));
        shift_state = (shift_state << 1) | (shift_in & 0x01);
        return &set[shift_state & ways];
    };
}

/// choses a (pseudo-)random cache line using built-in `rand()` method
inline auto random(const CacheMemory& tagMemory)
{
    const size_t ways = tagMemory.ways();
    return [ways](CacheSet set) -> CacheLine* {
        return &set[rand() % ways];
    };
}

/// choses the cache line that was least frequently used
/// NOTE: the current implemention might heavily bias certain entries
inline auto lfu(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        CacheLine* entry = &*std::max_element(set.begin(), set.end(),
                                              [](CacheLine& smallest,
                                                 CacheLine& entry){
            // data = number of accesses
            return entry.data < smallest.data;
        });
        // reset count
        entry->data = 0x0;
        return entry;
    };
}

/// choses the cache line that was least recently used
inline auto lru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        // assumes set is sorted according to most recently used first
        // -> use last entry
        return &set.last();
    };
}

/// choses the cache line that was most recently used (apperantly useful if
/// large datasets are searched repeatedly?)
inline auto mru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        // assumes set is sorted according to most recently used first
        // -> use last entry
        return &set.first();
    };
}

/// bit-PLRU
/// the leftmost element whose bit is not zero gets replaced
inline auto plru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        for (CacheLine& e : set)
        {
            if (e.data > 0) return &e;
        }
        // should not be reachable
        assert(!"unreachable paths!");
        return &set.first();
    };
}

// TODO: implement PLRU (pseudo LRU with binary tree)

/// evicts the entries in the order they were added
/// (entries are sorted form oldest to newest)
/// Assuming:
/// 1. entries are placed into cache set from top to bottom
inline auto fifo(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        size_t index = 0;
        // oldest entry is at top -> move to back by shifting other entries up a place
        moveToBottom(set, index);
        // now the oldest entry is at the bottom and is evicted
        // -> newest entry is placed at the bottom
        return &set.last();
    };
}

/// evicts the entry that was most recently added
/// (entries are sorted form oldest to newest)
/// Assuming:
/// 1. entries are placed into cache set from top to bottom
inline auto lifo(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheLine* {
        // newest entry is placed at the end of the cache set
        return &set.last();
    };
}

} // namespace eviction_strategy

/// strategies that update the internal state of the cache set/entry. Often
/// an update strategy is required for the implementation of the eviction
/// strategy. May use the `CacheLine::data` member to store information
/// persistently.
namespace update_on_access_strategy
{

/// default update strategy (null function pointer)
inline auto default_()
{
    return nullptr; // nothing to do here
}

// no custom update strategy required
auto lfsr8bit = default_;
auto random = default_;
auto fifo = default_;
auto lifo = default_;

/// updates the cache line and set according to the least frequently used
/// replacement strategy
inline auto lfu()
{
    // somewhat crude implementation
    // -> count is not capped which may lead to heavy bias in keeping an old
    //    entry alive that is no longer used
    return [](CacheSet set, CacheLine* entry) -> void {
        assert(entry);
        // data = number of accesses
        entry->data += 1;
    };
}

/// moves the most recently used entry to the top of the set, thus sorting
/// the set from most recently used to least recently used
inline auto lru()
{
    return [](CacheSet set, CacheLine* entry) -> void {
        assert(entry);

        size_t index = set.indexOf(entry);
        assert(index != set.size());

        // sort `set` by moving `entry` to the top
        moveToTop(set, index);
    };
}

/// reuses the logic of LRU
auto mru = lru;

/// (bit-)PLRU, implemented according to
/// DOI: 10.22028/D291-31299 (Automatic Generation of Models of
/// Microarchitectures), section 4.2.2:
/// "Upon an access to a line, the corresponding bit is set to zero; if it was
///  the last bit that was set to one before, the bits for all other lines
///  are set to one. Upon a cache miss, the leftmost element whose bit is set
///  to one gets replaced."
///
/// Unsure if its implemented correctly but delivers very close results to LRU!
inline auto plru()
{
    return [](CacheSet set, CacheLine* entry) -> void {
        entry->data = 0;
        // check if its was the last line to be set to zero
        bool allZeros = std::all_of(set.begin(), set.end(),
                                    [](CacheLine& e){ return e.data == 0; });
        if (allZeros)
        {
            // if so, set all other entries to one
            for (CacheLine& e : set) e.data = 1;
            entry->data = 0;
        }
    };
}

} // namespace update_on_access_strategy

// TODO: brief
namespace update_on_invalidation_strategy
{

/// default update strategy (null function pointer)
inline auto default_()
{
    return nullptr; // nothing to do here
}

// no custom update strategy required
auto lfsr8bit = default_;
auto random = default_;
auto lru = default_;
auto mru = default_;
auto plru = default_;

inline auto lfu()
{
    return [](CacheSet set, CacheLine* entry) -> void {
        assert(entry);
        // reset count
        entry->data = 0x0;
    };
}

inline auto fifo()
{
    return [](CacheSet set, CacheLine* entry) -> void {
        assert(entry);
        size_t index = set.indexOf(entry);
        // move entry to bottom as it is now free
        moveToBottom(set, index);
    };
}

auto lifo = fifo;

} // namespace update_on_invalidation_strategy

// TODO: brief
namespace write_update_strategy
{

// TODO: brief
inline auto writeThrough()
{
    return [](CacheInstance& cache,
              CacheLookup& lookup,
              ComponentHierarchy hierarchy,
              bool isMiss) -> Delay {
        // invalidate address on same level
        cache.broadcastInvalidation(lookup.address);
        // writeback to next component
        return cache.writeBackToNextLevel(lookup.address, hierarchy);
    };
}

// TODO: brief
/// Assuming:
/// 1. cache is "alone" on its level no invalidations are
///    necessary to other caches
/// 2. next level is not accessed without prior access to this
///    cache
inline auto writeBack()
{
    return [](CacheInstance& cache,
              CacheLookup& lookup,
              ComponentHierarchy hierarchy,
              bool isMiss) -> Delay {
        // mark as dirty
        cache.makeEntryDirty(*lookup.entry);
        return Delay{0};
    };
}

} // namespace write_update_strategy

// TODO: brief
namespace replacement_strategy
{

// TODO: brief
inline auto default_()
{
    return nullptr; // nothing to do here
}

} // namespace replacement_strategy


// TODO: brief
namespace on_hit_routine
{

// TODO: brief
inline auto default_()
{
    return nullptr; // nothing to do here
}

} // namespace on_hit_routine

// TODO: brief
namespace on_miss_routine
{

// TODO: brief
inline auto default_()
{
    return nullptr; // nothing to do here
}

// TODO: implement no allocate routine

} // namespace on_miss_routine

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H
