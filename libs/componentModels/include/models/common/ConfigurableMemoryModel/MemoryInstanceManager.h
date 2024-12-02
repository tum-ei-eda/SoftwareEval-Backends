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
        std::vector<MemoryComponent*> components;

        constexpr inline bool contains(uint64_t addr) const { return addr < endAddress; }
    };

    ~MemoryInstanceManager();

    static std::shared_ptr<MemoryInstanceManager> instance();

    /**
     * @brief Searches for a cache instance with the given name
     * @param name Name of instance
     * @return Cache instance
     */
    CacheInstance* findCacheInstance(std::string const& name);
    /**
     * @brief Searches for a memory instance with the given name
     * @param name Name of instance
     * @return Memory instance
     */
    MemoryInstance* findMemoryInstance(std::string const& name);

    bool applyConfig(etiss::Configuration& config,
                     std::vector<MemoryPath>& memoryPaths,
                     std::string const& portId);

    void generateAccessStatistics() const;

    void outputGeneralAccessStatistics() const;

    std::vector<CacheInstance>& caches() /*const*/ { return m_cacheInstances; }
    std::vector<MemoryInstance> const& memories() const { return m_memoryInstances; }

private:

    MemoryInstanceManager() = default;

    std::vector<CacheInstance> m_cacheInstances;
    std::vector<MemoryInstance> m_memoryInstances;

    MemoryComponent* generateComponent(etiss::Configuration& config,
                                       std::string const& componentName);

    CacheInstance* generateCacheInstance(etiss::Configuration& config,
                                         std::string const& name);

    MemoryInstance* generateMemoryInstance(etiss::Configuration& config,
                                           std::string const& name);
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_MANAGER_H
