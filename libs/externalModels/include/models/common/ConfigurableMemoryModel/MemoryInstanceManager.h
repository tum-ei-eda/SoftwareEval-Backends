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

/**
 * @brief The MemoryInstanceManager class. Manages all memory and cache
 * instances, including their setup.
 */
class MemoryInstanceManager
{
public:

    /**
     * @brief The MemoryPath struct. Denotes a address region, which is defined
     * by the end of the address region (the start is implicitly given
     * by the preceeding address region!) and the components that are
     * accessed for memory access within this address region.
     */
    struct MemoryPath
    {
        /// end of address (start is given implicitly by the preceeding path)
        MemoryAddress endAddress = 0x0;
        /// list and order of components that are accessed for a memory access
        std::vector<MemoryComponent*> components;

        /**
         * @brief Returns whether the given address is located within this
         * memory path
         * @param addr Address to check
         * @return Whether the address is located within this memory path
         */
        constexpr inline bool
        contains(MemoryAddress addr) const { return addr < endAddress; }
    };

    ~MemoryInstanceManager();

    /**
     * @brief Returns the instance of the memory manager. Only a single instance
     * can be alive at any moment (singleton). The instance is scoped using
     * a shared pointer.
     * @return Singleton instance.
     */
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

    /**
     * @brief Applies the configuration for the given port Id. Instantiates
     * all memory and cache components accordingly. Sets the memory paths.
     * @param config Config to apply
     * @param portId Port id whose config to apply
     * @param memoryPaths Memory paths to update
     * @return success
     */
    bool applyConfig(etiss::Configuration& config,
                     std::string const& portId,
                     std::vector<MemoryPath>& memoryPaths) noexcept(false);

    void generateAccessStatistics() const;

    void outputGeneralAccessStatistics() const;

    /// getter for cache components
    auto const& caches() const { return m_cacheInstances; }
    /// getter for memory components
    auto const& memories() const { return m_memoryInstances; }

private:

    // hide constructor -> must use `instance` function
    MemoryInstanceManager() = default;
    /// cache instances
    std::vector<std::unique_ptr<CacheInstance>> m_cacheInstances;
    /// memory instances
    std::vector<std::unique_ptr<MemoryInstance>> m_memoryInstances;

    /**
     * @brief Generates the component named `componentName` according to its
     * specification. Attempts to find a component with the given name and
     * returns said component.
     * @param config Config to apply
     * @param componentName Component name
     * @return Pointer to generated component
     */
    MemoryComponent* generateComponent(etiss::Configuration& config,
                                       std::string const& componentName) noexcept(false);

    /**
     * @brief Generates a cache instance according to its config.
     * @param config Config to apply
     * @param name Name of the cache
     * @return Cache instance pointer
     */
    CacheInstance* generateCacheInstance(etiss::Configuration& config,
                                         std::string const& name) noexcept(false);

    /**
     * @brief Generates a memory instance according to its config. Does not
     * search cache instances.
     * @param config Config to apply
     * @param name Name of the cache
     * @return Cache instance pointer
     */
    MemoryInstance* generateMemoryInstance(etiss::Configuration& config,
                                           std::string const& name) noexcept(false);
};

} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_MEMORY_INSTANCE_MANAGER_H
