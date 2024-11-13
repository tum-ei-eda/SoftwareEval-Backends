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

#ifndef CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_MANAGER_H
#define CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_MANAGER_H

#include "./CacheInstance.h"
#include "./MemoryInstance.h"

#include <vector>
#include <memory>

// forward declarations
namespace etiss { class Configuration; }

namespace cmm
{

class MemoryInstance;
class MemoryInstanceManager
{
public:

    struct MemoryPath
    {
        uint64_t endAddress = 0x0;
        std::vector<cmm::MemoryComponent*> components;
    };

    static std::shared_ptr<MemoryInstanceManager> instance();

    bool applyConfig(etiss::Configuration& config,
                     std::vector<MemoryPath>& memoryPaths,
                     std::string const& portId);

    void generateMemoryAccessStatistics() const;

private:

    MemoryInstanceManager() = default;

    std::vector<CacheInstance> m_cacheInstances;
    std::vector<MemoryInstance> m_memoryInstances;

    /// name of cache level
    std::string m_name{};
    /// access delay
    Delay m_accessDelay{1};

    MemoryComponent* generateComponent(etiss::Configuration& config,
                                       std::string const& componentName);

    CacheInstance* generateCacheInstance(etiss::Configuration& config,
                                         std::string const& name);

    MemoryInstance* generateMemoryInstance(etiss::Configuration& config,
                                           std::string const& name);
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_MANAGER_H
