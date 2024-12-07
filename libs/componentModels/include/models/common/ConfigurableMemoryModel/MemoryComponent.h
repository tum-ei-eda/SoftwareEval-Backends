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

#include <cassert>
#include <stdint.h>
#include <string>

namespace cmm
{

// alias for access delay
using Delay = NamedType<int, struct Delay_>;

struct AccessDetails
{
    explicit AccessDetails(Delay delay_) : delay(delay_) {}

    Delay delay{0};

    bool wasEntryFound = false; // hit or miss in cache
    bool performWriteBack = false; // whether to perform write back on next level
    bool invalidateSuccessors = false; // whether to invalidate next levels

    uint64_t writeBackAddress = 0x0;

    constexpr inline AccessDetails& setEntryFound(bool value)
    {
        wasEntryFound = value;
        return *this;
    }
    constexpr inline AccessDetails& setPerformWriteBack(bool value, uint64_t address = 0x0)
    {
        performWriteBack = value;
        writeBackAddress = address;
        return *this;
    }
    constexpr inline AccessDetails& setInvalidateSuccessors(bool value)
    {
        invalidateSuccessors = value;
        return *this;
    }
};

struct ComponentRange;
class MemoryComponent
{
public:

    explicit MemoryComponent(std::string name_) :
        name(std::move(name_))
    {}

    virtual ~MemoryComponent() = default;

    virtual AccessDetails readAccess(uint64_t address, ComponentRange range) = 0;

    virtual AccessDetails writeAccess(uint64_t address, ComponentRange range) = 0;

    /// name of component
    const std::string name{};
};

struct ComponentRange
{
    MemoryComponent** b{};
    MemoryComponent** e{};

    MemoryComponent** begin() const { return b; }
    MemoryComponent** end() const { return e; }

    inline bool hasNextComponent() const { return begin() != end(); }

    inline void advance()
    {
        assert(hasNextComponent());
        ++b;
    }

    inline MemoryComponent* nextComponent() const
    {
        assert(hasNextComponent());
        return *begin();
    }

    inline ComponentRange nextRange() const
    {
        ComponentRange cpy{*this};
        cpy.advance();
        return cpy;
    }
};

using ComponentHierarchy = ComponentRange;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_COMPONENT_H
