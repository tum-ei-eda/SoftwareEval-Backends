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

#include "models/common/ConfigurableMemoryModel.h"

#include "models/common/ConfigurableMemoryModel/MemoryInstance.h"

#include "etiss/Misc.h"

#include <string>

ConfigurableMemoryPort ::ConfigurableMemoryPort(std::string portId, PerformanceModel* parent_) :
    ResourceModel(std::move(portId), parent_),
    m_handle(MemoryInstanceManager::instance())
{
    assert(m_handle);
}

int
ConfigurableMemoryPort::readDelay()
{
    uint64_t address = addr_ptr[getInstrIndex()];

    int delay = 0;

    // assumes sorted memory paths
    for (MemoryPath& path : m_memoryPaths)
    {
        if (!path.contains(address)) continue;

        // traverse memory path
        for (MemoryComponent* component : path.components)
        {
            assert(component);
            cmm::AccessDetails access = component->readAccess(address);
            delay += access.delay;
            if (access.hit) break;
        }
        break;
    }

    return delay;
}

int
ConfigurableMemoryPort::writeDelay()
{
    uint64_t address = addr_ptr[getInstrIndex()];

    int delay = 0;

    // assumes sorted memory paths
    for (MemoryPath& path : m_memoryPaths)
    {
        if (!path.contains(address)) continue;

        // traverse memory path
        for (MemoryComponent* component : path.components)
        {
            assert(component);
            cmm::AccessDetails access = component->writeAccess(address);
            delay += access.delay;
            if (access.hit) break;
        }
        break;
    }

    return delay;
}

void
ConfigurableMemoryPort::applyConfig(etiss::Configuration& config)
{
    std::string const& id = name;
    m_handle->applyConfig(config, m_memoryPaths, id);
}
