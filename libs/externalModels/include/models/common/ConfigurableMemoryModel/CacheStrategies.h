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
        cmm::CacheEntry& moveDown = set[index];
        cmm::CacheEntry& moveUp   = set[index + 1];
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
        cmm::CacheEntry& moveUp   = set[index];
        cmm::CacheEntry& moveDown = set[index - 1];
        std::swap(moveDown, moveUp);
        index--;
    }
}

/// Strategies that chose an entry to evict if all entries of a cache set are
/// used. May use the `CacheEntry::data` member to store information
/// persistently.
namespace eviction_strategy
{

/// Selects pseudo-random cache entry using a 8 bit linear feedback shift
/// register (adopted from DCacheModel)
inline auto lfsr8bit(const CacheMemory& tagMemory)
{
    uint8_t shift_state = 0x00; // seed
    const size_t ways = tagMemory.ways() - 1;

    return [shift_state, ways](CacheSet set) mutable -> CacheEntry* {
        uint8_t shift_in = ~(((shift_state & 0x80) >> 7) ^
                             ((shift_state & 0x08) >> 3) ^
                             ((shift_state & 0x04) >> 2) ^
                             ((shift_state & 0x02) >> 1));
        shift_state = (shift_state << 1) | (shift_in & 0x01);
        return &set[shift_state & ways];
    };
}

/// Chooses a (pseudo-)random cache entry using built-in `rand()` method
inline auto random(const CacheMemory& tagMemory)
{
    const size_t ways = tagMemory.ways();
    return [ways](CacheSet set) -> CacheEntry* {
        return &set[rand() % ways];
    };
}

/// Chooses the cache entry that was least frequently used
/// NOTE: the current implemention may lead to strongly biased entries, as the
/// counter does not decay or is capped
inline auto lfu(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        CacheEntry* entry = &*std::max_element(set.begin(), set.end(),
                                              [](CacheEntry& smallest,
                                                 CacheEntry& entry){
            // data = number of accesses
            return entry.data < smallest.data;
        });
        // reset count
        entry->data = 0x0;
        return entry;
    };
}

/// Chooses the cache entry that was least recently used
inline auto lru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        // assumes set is sorted according to most recently used first
        // -> use last entry
        return &set.last();
    };
}

/// Chooses the cache entry that was most recently used (apperantly useful if
/// large datasets are searched repeatedly?)
inline auto mru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        // assumes set is sorted according to most recently used first
        // -> use first entry
        return &set.first();
    };
}

/// bit-PLRU
/// the leftmost element whose bit is not zero gets replaced
inline auto plru(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        for (CacheEntry& e : set)
        {
            if (e.data > 0) return &e;
        }
        // should not be reachable
        assert(!"unreachable paths!");
        return &set.first();
    };
}

/// Evicts the entries in the order they were added
/// (entries are sorted form oldest to newest)
/// Assuming:
/// 1. entries are placed into cache set from top to bottom
inline auto fifo(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        size_t index = 0;
        // oldest entry is at top -> move to back by shifting other entries up
        moveToBottom(set, index);
        // now the oldest entry is at the bottom and is evicted
        // -> newest entry is placed at the bottom
        return &set.last();
    };
}

/// Evicts the entry that was most recently added
/// (entries are sorted form oldest to newest)
/// Assuming:
/// - entries are placed into cache set from top to bottom
inline auto lifo(const CacheMemory& tagMemory)
{
    return [](CacheSet set) -> CacheEntry* {
        // newest entry is placed at the end of the cache set
        return &set.last();
    };
}

} // namespace eviction_strategy

/// Strategies that update the internal state of the cache set/entry once an
/// entry us accessed, which may be required for the implementation of the
/// eviction strategy. May use the `CacheEntry::data` member to store
/// information persistently.
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

/// Updates the cache entry and set according to the least frequently used
/// replacement strategy
inline auto lfu()
{
    // somewhat crude implementation
    // -> count is not capped nor does it decay, which may lead to heavy bias
    //    keeping old entries alive that are no longer used
    return [](CacheSet set, CacheEntry* entry) -> void {
        assert(entry);
        // data = number of accesses
        entry->data += 1;
    };
}

/// Moves the most recently used entry to the top of the set, thus sorting
/// the set from most recently used to least recently used
inline auto lru()
{
    return [](CacheSet set, CacheEntry* entry) -> void {
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
inline auto plru()
{
    return [](CacheSet set, CacheEntry* entry) -> void {
        entry->data = 0;
        // check if its was the last line to be set to zero
        bool allZeros = std::all_of(set.begin(), set.end(),
                                    [](CacheEntry& e){ return e.data == 0; });
        if (allZeros)
        {
            // if so, set all other entries to one
            for (CacheEntry& e : set) e.data = 1;
            entry->data = 0;
        }
    };
}

} // namespace update_on_access_strategy

/// Strategies that are invoked after invalidating a cache entry. Depending
/// on the eviction strategy certain properties may need to be updated when
/// invalidating an entry
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
    return [](CacheSet set, CacheEntry* entry) -> void {
        assert(entry);
        // reset count
        entry->data = 0x0;
    };
}

inline auto fifo()
{
    return [](CacheSet set, CacheEntry* entry) -> void {
        assert(entry);
        size_t index = set.indexOf(entry);
        // move entry to bottom as it is now free
        moveToBottom(set, index);
    };
}

auto lifo = fifo;

} // namespace update_on_invalidation_strategy

/// Strategies that implement the behavior of a write policy.
namespace write_update_strategy
{

/// Basic write through policy, broadcasts invalidtion to all other caches
/// that are registered (usually all caches on the same level are affected).
inline auto writeThrough()
{
    return [](CacheInstance& cache,
              CacheLookup& lookup,
              ComponentHierarchy hierarchy,
              bool const isMiss,
              bool const isWrite) -> Delay {
        // invalidate address on same level
        cache.broadcastInvalidation(lookup.address);
        // writeback to next component
        return cache.writeBackToNextLevel(lookup.address, hierarchy);
    };
}

/// Basic write back policy.
/// assuming:
/// 1. cache is "alone" on its level no invalidations are necessary to other caches
/// 2. next level is not accessed without prior access to this cache
inline auto writeBack()
{
    return [](CacheInstance& cache,
              CacheLookup& lookup,
              ComponentHierarchy hierarchy,
              bool const isMiss,
              bool const isWrite) -> Delay {
        // mark as dirty
        cache.makeEntryDirty(*lookup.entry);
        return Delay{0};
    };
}

} // namespace write_update_strategy

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_STRATEGIES_H
