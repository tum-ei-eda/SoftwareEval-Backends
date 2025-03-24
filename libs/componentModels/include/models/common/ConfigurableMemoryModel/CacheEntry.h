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

#ifndef CONFIGURABLE_MEMORY_MODEL_CACHE_LINE_H
#define CONFIGURABLE_MEMORY_MODEL_CACHE_LINE_H

#include "./Utilities.h"

#include <stdint.h>
#include <limits>

/// namespace for configurable memory model
namespace cmm
{

// stongly named types for tag part of an address
using CacheTag = NamedType<uint64_t, struct Tag_>;

/**
 * @brief The CacheEntry struct. Denotes a cache entry. Only the tag and
 * flag part of a cache entry are modeled, the data (i.e. the cache-line) is
 * not modeled.
 */
struct CacheEntry
{
    /// Status flags of a cache entry
    enum StatusFlag : uint32_t
    {
        NoFlag = 0,
        /// cache entry is invalid -> entry must be fetched to access
        Invalid = 1 << 0,
        /// cache entry is dirty -> must be written back before replacement
        Dirty = 1 << 1,
        /// base value for custom flags. e.g:
        ///   auto MyFlag = UserFlag << 1;
        UserFlag = 1 << 2,
    };
    using StatusFlags = uint32_t;

    /// tag part of all cache entries
    CacheTag tag = CacheTag{std::numeric_limits<uint64_t>::max()};
    /// status flags
    StatusFlags flags = Invalid;
    /// custom data (can be used for update/eviction strategy)
    uint32_t data = 0x0;

    /// checks whether the cache linbe is valid
    constexpr inline bool isValid() const { return !hasFlag(Invalid); }

    /// checks whether the flag is set
    constexpr inline bool hasFlag(StatusFlags flag) const { return flags & flag; }

    /// sets the given flag for the cache entry
    constexpr inline void setFlag(StatusFlags flag, bool enable = true)
    {
        enable ? flags |=  flag : flags &= ~flag;
    }

    /**
     * @brief Invalidates the cache entry
     */
    void invalidate()
    {
        flags = CacheEntry::Invalid;
        tag   = CacheTag{std::numeric_limits<uint64_t>::max()};
        data  = 0x0;

        CMM_STATISTICS_ONLY(
            t_invalidations++;
        )
    }

    // only if statistics are desired
    CMM_STATISTICS_ONLY(
        /// number of hits --> misses cannot be tracked
        uint32_t t_readHits  = 0;
        uint32_t t_writeHits  = 0;
        /// number of evictions
        uint32_t t_evictions = 0;
        /// external invalidations
        uint32_t t_invalidations = 0;
    )
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_LINE_H
