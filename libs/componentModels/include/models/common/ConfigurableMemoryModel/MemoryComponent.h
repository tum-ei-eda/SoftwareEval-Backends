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

#ifndef CONFIGURABLE_MEMORY_MODEL_MEMORY_COMPONENT_H
#define CONFIGURABLE_MEMORY_MODEL_MEMORY_COMPONENT_H

#include "./Utilities.h"

#include <stdint.h>
#include <string>

namespace cmm
{

// alias for access delay
using Delay = NamedType<int, struct Delay_>;

struct AccessDetails
{
    Delay delay{0};
    bool hit = false;

    static constexpr inline AccessDetails makeHit(Delay delay)  { return {delay, true }; }
    static constexpr inline AccessDetails makeMiss(Delay delay) { return {delay, false}; }
};

class MemoryComponent
{
public:

    explicit MemoryComponent(std::string name_) :
        name(std::move(name_))
    {}

    virtual ~MemoryComponent() = default;

    virtual AccessDetails readAccess(uint64_t address) = 0;

    virtual AccessDetails writeAccess(uint64_t address) = 0;

    /// name of component
    const std::string name{};
};


} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_COMPONENT_H
