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

class MemoryInstance : public MemoryComponent
{
public:

    ~MemoryInstance() override = default;

    MemoryInstance(std::string name, Delay accessDelay) :
        MemoryComponent(std::move(name)),
        m_accessDelay(accessDelay)
    { }

    inline AccessDetails readAccess(uint64_t address) override
    {
        CMM_STATISTICS_ONLY(
            t_accesses++;
        )
        return AccessDetails::makeHit(m_accessDelay);
    }

    inline AccessDetails writeAccess(uint64_t address) override
    {
        CMM_STATISTICS_ONLY(
            t_writes++;
        )
        return AccessDetails::makeHit(m_accessDelay);
    }

private:

    /// access delay
    Delay m_accessDelay{1};

public:

    CMM_STATISTICS_ONLY(
        // variables solely used for debugging/statistical purpose
        uint32_t t_accesses = 0;
        uint32_t t_writes = 0;
    )
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_H
