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

/// namespace for configurable memory model
namespace cmm
{

/// Denotes a cache line
struct CacheLine
{
    /// Status flags of a cache entry
    enum StatusFlag : uint32_t
    {
        NoFlag = 0,
        /// cache entry is invalid -> entry must be fetched to access
        Invalid = 1 << 0,
        // TODO: Dirty Flag? Coherency Flags?
    };
    using StatusFlags = uint32_t;

    /// tag part of all cache entries
    uint64_t tag  = 0x0;
    /// status flags
    StatusFlags flags = Invalid;
    /// custom data (ccan be used for update/replacement strategy)
    uint32_t data = 0x0;

    /// checks whether the cache linbe is valid
    constexpr inline bool isValid() const { return !hasFlag(Invalid); }

    /// checks whether the flag is set
    constexpr inline bool hasFlag(StatusFlag flag) const { return flags & flag; }

    /// sets the given flag for the cache line
    constexpr inline void setFlag(StatusFlag flag, bool enable = true)
    {
        enable ? flags |=  flag : flags &= ~flag;
    }

    // only if statistics are desired
    CMM_STATISTICS_ONLY(
        /// number of hits
        uint32_t t_hits  = 0;
        /// number of evictions
        uint32_t t_evictions = 0;
    )
};

using CacheEntry [[deprecated("Use CacheLine instead")]] = CacheLine;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_CACHE_LINE_H
