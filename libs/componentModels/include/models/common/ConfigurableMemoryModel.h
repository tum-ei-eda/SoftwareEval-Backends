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

#ifndef CONFIGURABLE_MEMORY_MODEL_H
#define CONFIGURABLE_MEMORY_MODEL_H

#include "PerformanceModel.h"

#include "ConfigurableMemoryModel/MemoryInstanceManager.h"

#include <vector>
#include <memory>

class ConfigurableMemoryModel : public ResourceModel
{
public:

    using MemoryComponent = cmm::MemoryComponent;
    using MemoryInstanceManager = cmm::MemoryInstanceManager;
    using MemoryPath = MemoryInstanceManager::MemoryPath;

    ConfigurableMemoryModel(std::string id, PerformanceModel* parent_);

    /**
     * @brief Applies memory model configuration
     * @param config Config for memory model
     */
    void applyConfig(etiss::Configuration& config) override;

    /**
     * @brief Delay for accessing the current address. Updates the cache
     * and update `cacheHit` property
     * @return Delay
     */
    int getDelay(void) override;

    /**
     * @brief Returns whether last access was a hit or miss
     * @return Whether last access was a hit or miss
     */
    inline bool cacheHit(void) const { return m_hit; }

    /// pointer to memory
    /// TODO: more fitting name? Keeping API compatiblity to DCacheModel
    uint64_t* addr_ptr = nullptr;

private:

    /// memory paths
    std::vector<MemoryPath> m_memoryPaths;
    /// handle to instance manager
    std::shared_ptr<MemoryInstanceManager> m_handle;

    /// wether the lass cache access resulted in a hit or miss
    bool m_hit = false;
};

#endif //CONFIGURABLE_MEMORY_MODEL_H
