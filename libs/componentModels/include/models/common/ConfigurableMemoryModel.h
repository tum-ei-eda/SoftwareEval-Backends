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

class ConfigurableMemoryPort : public ResourceModel
{
public:

    using MemoryInstanceManager = cmm::MemoryInstanceManager;
    using MemoryPath = MemoryInstanceManager::MemoryPath;

    ConfigurableMemoryPort(std::string portId,
                           PerformanceModel* parent_,
                           etiss::Configuration& config);

    /**
     * @brief Performs a read access for the given address in `addr_ptr`
     * @return Delay of read access.
     */
    int readDelay();

    /**
     * @brief Performs a write access for the given address in `addr_ptr`
     * @return Delay of write access.
     */
    int writeDelay();

    /// pointer to address
    uint64_t* addr_ptr = nullptr;

private:

    /// memory paths
    std::vector<MemoryPath> m_memoryPaths;
    /// handle to instance manager
    std::shared_ptr<MemoryInstanceManager> m_handle;
};

/**
 * @brief The DMemoryPort class. Memory Port for data read accesses.
 */
class DMemoryPort : public ConfigurableMemoryPort
{
public:
    DMemoryPort(PerformanceModel* parent_, etiss::Configuration& config) :
        ConfigurableMemoryPort("DPort", parent_, config)
    { }

    int getDelay() final { return readDelay(); }
};

/**
 * @brief The DMemoryWritePort class. Memory Port for data write accesses.
 */
class DMemoryWritePort : public ConfigurableMemoryPort
{
public:
    DMemoryWritePort(PerformanceModel* parent_, etiss::Configuration& config) :
        ConfigurableMemoryPort("DWPort", parent_, config)
    { }

    int getDelay() final { return writeDelay(); }
};

/**
 * @brief The IMemoryPort class. Memory Port for instruction fetches (read
 * access).
 */
class IMemoryPort : public ConfigurableMemoryPort
{
public:

    IMemoryPort(PerformanceModel* parent_, etiss::Configuration& config) :
        ConfigurableMemoryPort("IPort", parent_, config),
        pc_ptr(ConfigurableMemoryPort::addr_ptr)
    { }

    int getDelay() final { return readDelay(); }

    // alias for addr_ptr for API compatibility
    uint64_t*& pc_ptr;
};


#endif //CONFIGURABLE_MEMORY_MODEL_H
