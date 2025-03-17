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

#ifndef CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_H
#define CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_H

#include "./MemoryComponent.h"

#include <string>

namespace cmm
{

struct MemoryConfig
{
    std::string name;
    Delay readDelay{}, writeDelay{};

    inline MemoryConfig&
    setName(std::string s) { name = std::move(s); return *this; }

    constexpr inline MemoryConfig& setReadDelay(Delay v) { readDelay = v; return *this; }
    constexpr inline MemoryConfig& setWriteDelay(Delay v) { writeDelay = v; return *this; }

};

/**
 * @brief The MemoryInstance class. Implements a basic main memory component.
 * Has a fixed read and write delay.
 */
class MemoryInstance : public MemoryComponent
{
public:

    ~MemoryInstance() override = default;

    /// constructor
    MemoryInstance(MemoryConfig config) :
        MemoryComponent(std::move(config.name)),
        m_readDelay(config.readDelay),
        m_writeDelay(config.writeDelay)
    { }

    /**
     * @brief Returns a fixed read delay. Terminates memory access.
     * @param address Address that is accessed (assumed to be present in memory)
     * @param range Range for following memory components (never used)
     * @return Result of memory access (always a hit)
     */
    inline AccessResult readAccess(uint64_t address, ComponentRange range) final
    {
        CMM_STATISTICS_ONLY(
            t_reads++;
        )
        return AccessResult(m_readDelay);
    }

    /**
     * @brief Returns a fixed write delay. Terminates memory access.
     * @param address Address that is accessed (assumed to be present in memory)
     * @param range Range for following memory components (never used)
     * @return Result of memory access (always a hit)
     */
    inline AccessResult writeAccess(uint64_t address, ComponentRange range) final
    {
        CMM_STATISTICS_ONLY(
            t_writes++;
        )
        return AccessResult(m_writeDelay);
    }

private:

    /// read delay
    const Delay m_readDelay{1};
    /// write delay
    const Delay m_writeDelay{1};

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purposes
        uint32_t t_reads = 0;
        uint32_t t_writes = 0;
    )
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_H
