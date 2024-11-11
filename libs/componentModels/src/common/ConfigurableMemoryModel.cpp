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

#include "models/common/ConfigurableMemoryModel/CacheStrategies.h"
#include "models/common/ConfigurableMemoryModel/MemoryInstance.h"

#include "etiss/Misc.h"

#include <string>

#if 0
bool
cmm::Cache::applyConfig(etiss::Configuration& config,
                        std::string const& configPath)
{
    size_t nsets = 0, nways = 0, llineSize = 0;

    bool success = true;
    // not critical
    loadFromConfig(config, configPath + ".lineSize", llineSize, (size_t)1);
    success &= loadFromConfig(config, configPath + ".nsets", nsets);
    success &= loadFromConfig(config, configPath + ".nways", nways);
    success &= loadFromConfig(config, configPath + ".delay.miss", m_delays.miss);
    success &= loadFromConfig(config, configPath + ".delay.hit",  m_delays.hit);
    if (!success)
    {
        std::cout << "ERROR: cache specifications are invalid!" << std::endl;
        return false;
    }

    // allocate tag memory
    m_tagMemory.resize(nways, nsets, llineSize);

    // replacement strategy
    std::string replacementStrategy;
    if (!loadFromConfig(config, configPath + ".replacement_strategy", replacementStrategy))
    {
        replacementStrategy = "LFSR";
    }

    std::cout << "INFO: using replacement strategy '" << replacementStrategy << "'" << std::endl;

    m_updateStrategy = update_strategy::default_(m_tagMemory);

    if (replacementStrategy == "LFSR")
    {
        m_evictStrategy = eviction_strategy::lfsr(m_tagMemory);
    }
    else if (replacementStrategy == "RANDOM")
    {
        m_evictStrategy = eviction_strategy::random(m_tagMemory);
    }
    else if (replacementStrategy == "LFU")
    {
        m_evictStrategy  = eviction_strategy::lfu(m_tagMemory);
        m_updateStrategy = update_strategy::lfu(m_tagMemory);
    }
    else
    {
        std::cout << "ERROR: unkown replacement strategy!" << std::endl;
        return false;
    }

    CacheMemory memory;
    Cache c("bla", memory,
            eviction_strategy::lfsr(memory),
            update_strategy::lfu(memory),
            Delay{1}, Delay{1});

    return true;
}

bool
cmm::MemoryRegion::applyConfig(etiss::Configuration& config,
                               std::string const& configPath,
                               std::vector<cmm::Cache>& caches)
{
    loadFromConfig(config, configPath + ".start", m_addrSpace.lower, (uint64_t)0x0);
    loadFromConfig(config, configPath + ".end",   m_addrSpace.upper, std::numeric_limits<uint64_t>::max());

    if (m_addrSpace.lower > m_addrSpace.upper)
    {
        std::stringstream ss;
        ss << "invalid address space: 0x" << std::hex
           << m_addrSpace.lower << " - 0x" << m_addrSpace.upper;
        throw std::runtime_error(ss.str());
    }

    // separator used to parase string list in config file
    constexpr char SEPARATOR = ' ';

    // parse list of memory levels
    std::string levels = config.get<std::string>(configPath + ".hierarchy", {});

    auto iter = levels.begin();
    auto end = levels.end();

    while (iter != end)
    {
        auto substrEnd = std::find(iter, end, SEPARATOR);
        if (iter == substrEnd) break;

        // create substring until separator
        std::string cacheName{iter, substrEnd};

        // iter points to separator -> advance
        iter = substrEnd;
        while (iter != end && *iter == SEPARATOR) iter++;

        if (loadFromConfig(config, CONFIG_PATH ".instance." + cacheName + ".delay.access", m_memoryDelay, 1))
        {
            std::cout << "INFO: setup access delay for memory '" << cacheName << "'..." << std::endl;
            break;
        }

        // add cache
        std::cout << "INFO: configuring cache '" << cacheName << "'..." << std::endl;

        auto iter = std::find_if(caches.begin(), caches.end(), [&cacheName](cmm::Cache& cache){
            return cache.name() == cacheName;
        });

        if (iter == caches.end())
        {
            // Cache cache{cacheName};
            // bool success = cache.applyConfig(config, CONFIG_PATH ".instance." + cacheName);
            // if (!success)
            // {
            //     std::stringstream ss;
            //     ss << "Failed to configure cache '" << cacheName << "'!";
            //     throw std::runtime_error(ss.str());
            // }
            // caches.push_back(std::move(cache));
            // iter = caches.end() - 1;
            continue;
        }
        m_caches.push_back(&*iter);
    }

    return true;
}
#endif

ConfigurableMemoryModel::ConfigurableMemoryModel(std::string id, PerformanceModel* parent_) :
    ResourceModel(std::move(id), parent_),
    m_handle(MemoryInstanceManager::instance())
{
    assert(m_handle);
}

int
ConfigurableMemoryModel::getDelay()
{
    uint64_t address = addr_ptr[getInstrIndex()];

    int delay = 0;

    // assumes sorted memory paths
    for (MemoryPath& path : m_memoryPaths)
    {
        if (address > path.endAddress) continue;

        // traverse memory path
        for (MemoryInstance* memoryInstance : path.m_memoryLevels)
        {
            assert(memoryInstance);

            cmm::AccessDetails access = memoryInstance->readAccess(address);
            delay += access.delay;
            if (access.hit) break;
        }
        break;
    }

    return delay;
}

void
ConfigurableMemoryModel::applyConfig(etiss::Configuration& config)
{
    std::string const& id = name;
    m_handle->applyConfig(config, m_memoryPaths, id);
}
