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

struct ComponentRange;

// alias for access delay
using Delay = int;

/**
 * @brief The AccessResult class. Helper struct that holds the delay of a
 * memory accesses and whether the access is completed.
 */
struct AccessResult
{
    explicit AccessResult(Delay delay_) : delay(delay_) {}

    /// total delay of the memory access
    Delay delay{0};
    /// whether the memory access is completed
    bool accessCompleted = false;
    /// whether the memory access resulted in a cache hit
    bool isCacheHit = false;

    /**
     * @brief Sets whether a memory access is completed. If the access is not
     * completed the next components (e.g. next cache-level) should be accessed.
     * @param value Whether the memory access is completed
     * @return Reference for operator chaining
     */
    constexpr inline AccessResult& setAccessCompleted(bool value)
    {
        accessCompleted = value;
        return *this;
    }
    /**
     * @brief Sets whether a memory access resulted in a cache hit.
     * @param value Whether the memory accesses resulted in a cache hit.
     * @return Reference for operator chaining
     */
    constexpr inline AccessResult& setCacheHit(bool value)
    {
        isCacheHit = value;
        return *this;
    }
};

/**
 * @brief The MemoryComponent class. Base class for components that handle
 * memory accesses.
 */
class MemoryComponent
{
public:

    explicit MemoryComponent(std::string name_) :
        name(std::move(name_))
    {
        assert(!name.empty());
    }

    virtual ~MemoryComponent() = default;

    /**
     * @brief Overload to implement a read access.
     * @param address Address that is accessed.
     * @param range Range for accessing the next components
     * @return Result of the memory access
     */
    virtual AccessResult readAccess(uint64_t address, ComponentRange range) = 0;

    /**
     * @brief Overload to implement a write access.
     * @param address Address that is accessed.
     * @param range Range for accessing the next components
     * @return Result of the memory access
     */
    virtual AccessResult writeAccess(uint64_t address, ComponentRange range) = 0;

    /// name of the component
    const std::string name{};
};

/**
 * @brief The ComponentRange class. Lightweight wrapper around a range of memory
 * components. Can be used to access the next component which may be necessary
 * for certain memory accesses.
 */
struct ComponentRange
{
    /// start of range
    MemoryComponent** begin_{};
    /// end of range (points one element past the actual range)
    MemoryComponent** end_{};

    /// begin iterator
    /// (c++ iterators, used for range-based for loops and std algorithms)
    MemoryComponent** begin() const { return begin_; }
    /// end iterator
    MemoryComponent** end() const { return end_; }

    /**
     * @brief Returns whether a next component exists i.e. whether the range
     * is empty.
     * @return Whether a next component exists.
     */
    inline bool hasNextComponent() const { return begin() != end(); }

    /**
     * @brief Advances the range, such that the range points to the next
     * component. Range must not be empty.
     * @return Reference for operator chaining
     */
    inline ComponentRange& advance()
    {
        assert(hasNextComponent());
        ++begin_;
        return *this;
    }

    /**
     * @brief Returns a pointer to the next component. The range must not be
     * empty. Does not advance the range.
     * @return Pointer to next component.
     */
    inline MemoryComponent* nextComponent() const
    {
        assert(hasNextComponent());
        return *begin();
    }
};

using ComponentHierarchy = ComponentRange;

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_COMPONENT_H
