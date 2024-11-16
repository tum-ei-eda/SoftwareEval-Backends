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

#include "models/common/ConfigurableMemoryModel/MemoryInstanceManager.h"
#include "models/common/ConfigurableMemoryModel/CacheStrategies.h"

#include "etiss/Misc.h"

#include <cassert>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <unistd.h>

namespace
{

/// logs std::pair to console (required for std::map)
template <typename T, typename U>
inline std::ostream&
operator<<(std::ostream& s, std::pair<T, U> const& t)
{
    return s << '(' << t.first << ", " << t.second << ')';
}

/// helper method to log iteator ranges to console
template<typename Iter>
void logIter(std::ostream& s,
             Iter a, Iter b,
             char const* pre,
             char const* suf,
             char const* sep = ", ") noexcept
{
    s << pre;
    if (a != b) // not empty
    {
        Iter b_1 = std::next(a, std::distance(a, b)-1);
        // log until nth - 1 element
        std::for_each(a, b_1, [&s, sep](auto const& val){
            s << val;
            s << sep;
        });
        // log nth element
        s << *b_1;
    }
    s << suf;
}

/// logs std::map to console
template<typename K, typename V, typename... R>
std::ostream& operator<<(std::ostream& s, std::map<K, V, R...> const& t)
{
    logIter(s, t.begin(), t.end(), "{\n ", "\n}\n", ",\n ");
    return s;
}

/// logs std::vector to console
template<typename T, typename... R>
std::ostream& operator<<(std::ostream& s, std::vector<T, R...> const& t)
{
    logIter(s, t.begin(), t.end(), "(", ")", ", ");
    return s;
}

/// checks if the config path exists and reads the value of type `T`
template<typename T>
bool loadFromConfig(etiss::Configuration& config, std::string const& path, T& value)
{
    if (!config.isSet(path))
    {
        std::cout << "WARNING: configuration '" << path
                  << "' not defined!" << std::endl;
        return false;
    }

    value = config.get<T>(path, T{});
    return true;
}

/// checks if the config path exists and reads multiple strings from the config entry
template<>
bool loadFromConfig(etiss::Configuration& config, std::string const& path, std::vector<std::string>& list)
{
    // parse list of memory levels
    std::string configString;
    if (!loadFromConfig(config, path, configString)) return false;

    auto iter = configString.begin();
    auto end = configString.end();

    while (iter != end)
    {
        auto substrEnd = std::find_if(iter, end, [](char c){ return std::isspace(c, std::locale()); });
        if (iter == substrEnd) break;

        // create substring until separator
        list.emplace_back(iter, substrEnd);

        // iter points to separator -> advance
        iter = substrEnd;

        // skip white spaces
        while (iter != end && std::isspace(*iter, std::locale())) iter++;
    }

    return true;
}

} // namespace


cmm::MemoryInstanceManager::~MemoryInstanceManager()
{
    outputGeneralAccessStatistics();
    generateAccessStatistics();
}

std::shared_ptr<cmm::MemoryInstanceManager>
cmm::MemoryInstanceManager::instance()
{
    static std::weak_ptr<cmm::MemoryInstanceManager> self{};
    auto lock = self.lock();
    // construct single instance if object is uninitialized or the instance was deleted
    if (!lock)
    {
        lock = std::shared_ptr<MemoryInstanceManager>{new MemoryInstanceManager()};
        // TODO: avoid dangling pointers by avoiding resizing of vectors
        lock->m_memoryInstances.reserve(20);
        lock->m_cacheInstances.reserve(20);
        self = lock;
    }
    assert(lock);
    return lock;
}

cmm::CacheInstance*
cmm::MemoryInstanceManager::findCacheInstance(std::string const& name)
{
    auto iter = std::find_if(m_cacheInstances.begin(), m_cacheInstances.end(),
                             [&name](CacheInstance& instance){
        return instance.name == name;
    });
    if (iter == m_cacheInstances.end()) return nullptr;
    return &*iter;
}

cmm::MemoryInstance*
cmm::MemoryInstanceManager::findMemoryInstance(std::string const& name)
{
    auto iter = std::find_if(m_memoryInstances.begin(), m_memoryInstances.end(),
                             [&name](MemoryInstance& instance){
                                 return instance.name == name;
                             });
    if (iter == m_memoryInstances.end()) return nullptr;
    return &*iter;
}

bool
cmm::MemoryInstanceManager::applyConfig(etiss::Configuration& config,
                                        std::vector<MemoryPath>& memoryPaths,
                                        std::string const& portId)
{
    static auto log_once = [&config](){
        std::cout << "INFO: configuration: " << config.listFullConfiguration() << std::endl;
        return 0;
    }();

    std::cout << "INFO: configuring port '" << portId << "'..." << std::endl;

    std::string configPath =  "plugin.perfEst.memory." + portId;

    int nregions = -1;
    if (!loadFromConfig(config, configPath + ".nregions", nregions) || nregions <= 0)
    {
        throw std::logic_error("'" + configPath + ".nregions' is not defined!");
    }

    memoryPaths.reserve(nregions);

    for (int idx = 0; idx < nregions; idx++)
    {
        std::string regionConfigPath = configPath + ".region" + std::to_string(idx);

        uint64_t endAddress = 0x0;
        if (!loadFromConfig(config, regionConfigPath + ".end", endAddress) || endAddress <= 0x0)
        {
            throw std::logic_error("'" + regionConfigPath + ".end' is not defined!");
        }

        std::vector<std::string> instances;
        if (!loadFromConfig(config, regionConfigPath + ".path", instances) || instances.empty())
        {
            throw std::logic_error("'" + regionConfigPath + ".path' is not defined!");
        }

        std::cout << "INFO: instantiating memory path (components: "
                  << instances << ", address space: 0x"
                  << std::hex << endAddress << std::dec << ")"
                  << std::endl;

        MemoryPath path;
        path.endAddress = endAddress;
        for (std::string const& instanceName : instances)
        {
            path.components.push_back(generateComponent(config, instanceName));
        }

        memoryPaths.push_back(path);
    }

    std::cout << std::endl;

    return true;
}

cmm::MemoryComponent*
cmm::MemoryInstanceManager::generateComponent(etiss::Configuration& config,
                                              std::string const& componentName)
{
    if (CacheInstance* cache = findCacheInstance(componentName))
    {
        std::cout << "INFO:  using cache instance: " << (void*)cache << std::endl;
        return cache;
    }
    if (MemoryInstance* memory = findMemoryInstance(componentName))
    {
        std::cout << "INFO:  using memory instance: " << (void*)memory << std::endl;
        return memory;
    }

    std::string configPath = "plugin.perfEst.memory.instance." + componentName;

    std::string typeString;
    if (!loadFromConfig(config, configPath + ".type", typeString))
    {
        throw std::logic_error("'" + configPath + ".type' is not defined!");
    }

    enum Type { Cache, Memory };

    Type type;
    if (typeString == "cache") type = Cache;
    else if (typeString == "memory") type = Memory;
    else throw std::logic_error("'" + configPath + ".type' is unkown: " + typeString);

    switch (type)
    {
    case Cache:
        return generateCacheInstance(config, componentName);
    case Memory:
        return generateMemoryInstance(config, componentName);
    }

    throw std::logic_error(std::string(__FUNCTION__) + ": Unreachable path!");
}

cmm::CacheInstance*
cmm::MemoryInstanceManager::generateCacheInstance(etiss::Configuration& config,
                                                  std::string const& name)
{
    std::cout << "INFO:  generating cache instance '" << name << "'..." << std::endl;

    size_t nsets = 0, nways = 0, lineSize = 0;
    int missDelay = 0, hitDelay = 0;

    std::string configPath = "plugin.perfEst.memory.instance." + name;

    bool success = true;
    success &= loadFromConfig(config, configPath + ".lineSize", lineSize);
    success &= loadFromConfig(config, configPath + ".nsets", nsets);
    success &= loadFromConfig(config, configPath + ".nways", nways);

    success &= loadFromConfig(config, configPath + ".delay.miss", missDelay);
    success &= loadFromConfig(config, configPath + ".delay.hit",  hitDelay);
    if (!success)
    {
        throw std::logic_error("cache specifications of '" + name + "' are invalid!");
    }

    std::cout << "INFO:   allocating cache memory with " << nsets << " entries x " << nways << " ways..." << std::endl;

    // allocate tag memory
    CacheMemory tagMemory;
    tagMemory.resize(nways, nsets, lineSize);

    std::cout << "INFO:   "
              << tagMemory.indexBits()  << " index bits, "
              << tagMemory.offsetBits() << " offset bits" << std::endl;

    // replacement strategy
    std::string replacementStrategy;
    if (!loadFromConfig(config, configPath + ".replacement_strategy", replacementStrategy))
    {
        throw std::logic_error("'" + configPath + ".type' is not defined!");
    }

    std::cout << "INFO:   using replacement strategy '" << replacementStrategy << "'" << std::endl;

    CacheInstance::EvictionStrategyFunctor evictionStrategy{};
    CacheInstance::UpdateStrategyFunctor updateStrategy = update_strategy::default_(tagMemory);

    if (replacementStrategy == "LFSR")
    {
        evictionStrategy = eviction_strategy::lfsr8bit(tagMemory);
    }
    else if (replacementStrategy == "RANDOM")
    {
        evictionStrategy = eviction_strategy::random(tagMemory);
    }
    else if (replacementStrategy == "LRU")
    {
        evictionStrategy = eviction_strategy::lru(tagMemory);
        updateStrategy = update_strategy::lru(tagMemory);
    }
    else if (replacementStrategy == "MRU")
    {
        evictionStrategy = eviction_strategy::mru(tagMemory);
        updateStrategy = update_strategy::mru(tagMemory);
    }
    else if (replacementStrategy == "PLRU")
    {
        evictionStrategy = eviction_strategy::plru(tagMemory);
        updateStrategy = update_strategy::plru(tagMemory);
    }
    else if (replacementStrategy == "FIFO")
    {
        evictionStrategy = eviction_strategy::fifo(tagMemory);
    }
    else if (replacementStrategy == "LIFO")
    {
        evictionStrategy = eviction_strategy::lifo(tagMemory);
    }
    else if (replacementStrategy == "LFU")
    {
        evictionStrategy  = eviction_strategy::lfu(tagMemory);
        updateStrategy = update_strategy::lfu(tagMemory);
    }
    else
    {
        throw std::logic_error(std::string(__FUNCTION__) +
                               "Replacement strategy '" + replacementStrategy + "' is unkown!");
    }

    m_cacheInstances.emplace_back(
        name,
        std::move(tagMemory),
        std::move(evictionStrategy),
        std::move(updateStrategy),
        Delay{hitDelay},
        Delay{missDelay}
    );

    CacheInstance* instance = &m_cacheInstances.back();

    std::cout << "INFO:   instance: " << (void*)instance << std::endl;

    return instance;
}

cmm::MemoryInstance*
cmm::MemoryInstanceManager::generateMemoryInstance(etiss::Configuration& config,
                                                   std::string const& name)
{
    std::cout << "INFO:  generating memory instance '" << name << "'..." << std::endl;

    int accessDelay = 0;

    std::string configPath = "plugin.perfEst.memory.instance." + name;

    bool success = true;
    success &= loadFromConfig(config, configPath + ".delay.access", accessDelay);

    if (!success)
    {
        throw std::logic_error("memory specifications of '" + name + "' are invalid!");
    }

    m_memoryInstances.emplace_back(
        name,
        Delay{accessDelay}
    );

    MemoryInstance* instance = &m_memoryInstances.back();

    std::cout << "INFO:   instance: " << (void*)instance << std::endl;

    return instance;
}

void
cmm::MemoryInstanceManager::outputGeneralAccessStatistics() const
{
#ifdef CMM_OUTPUT_STATISTICS
    constexpr unsigned width = 6, precision = 4;

    std::cout << "\nCache Performance:\n";

    for (CacheInstance const& cache : m_cacheInstances)
    {
        // output statistics
        unsigned total = cache.t_hits + cache.t_misses;

        // basic statistics
        std::cout << " " << cache.name << ":\n  "
                  << std::setw(width) << std::right <<  cache.t_hits                      << " cache hits ("
                  << std::setprecision(precision)   << (cache.t_hits * 100.0) / total     << "%) and" "\n  "
                  << std::setw(width) << std::right <<  cache.t_misses                    << " cache misses ("
                  << std::setprecision(precision)   << (cache.t_misses * 100.0) / total   << "%) with" "\n  "
                  << std::setw(width) << std::right <<  cache.t_compulsoryMisses          << " compulsory misses ("
                  << std::setprecision(precision)   << (cache.t_compulsoryMisses * 100.0)
                                                        / cache.t_misses                  << "%) and" "\n  "
                  << std::setw(width) << std::right <<  cache.t_evictions                 << " evictions ("
                  << std::setprecision(precision)   << (cache.t_evictions * 100.0)
                                                        / cache.t_misses                  << "%)"
                  << std::endl;
    }

    std::cout << "\nMemory Statistics:\n";

    for (MemoryInstance const& memory : m_memoryInstances)
    {
        // basic statistics
        std::cout << " " << memory.name << ":\n  "
                  << std::setw(width) << std::right <<  memory.t_accesses << " memory accesses"
                  << std::endl;
    }
#endif
}

void
cmm::MemoryInstanceManager::generateAccessStatistics() const
{
#ifdef CMM_OUTPUT_STATISTICS
    // TODO: implement

    // find path to exe
    char cwd[256];
    size_t len = readlink("/proc/self/exe", cwd, sizeof(cwd));
    if (len < 0 || len > sizeof(cwd)) return;

    // find directory
    auto rbegin = std::make_reverse_iterator(cwd + len);
    auto rend = std::make_reverse_iterator(cwd);
    auto directory = std::find(rbegin, rend, '/');
    if (directory == rend) return;

    for (CacheInstance const& cache : m_cacheInstances)
    {
        std::string filePath;
        std::copy(cwd, directory.base(), std::back_inserter(filePath));
        filePath += "histogram-" + cache.name + ".csv";

        std::cout << "creating cache histogram at " << filePath << std::endl;

        // detailed cache statistics
        std::ofstream fs;
        fs.open(filePath, std::ios::out);

        if (!fs.is_open()) continue;

        // header
        fs << "index," "ways-used," "hits," "evictions\n";

        CacheMemory const& cacheMemory = cache.cacheMemory();

        // data
        for (size_t idx = 0; idx < cacheMemory.sets(); idx++)
        {
            auto cacheSet = cacheMemory.getCacheSet(CacheIndex{idx});
            // accumulate statistics of all ways
            uint32_t hits = 0, evictions = 0, waysUsed = 0;
            for (size_t way = 0; way < cacheMemory.ways(); way++)
            {
                auto entry = cacheSet[way];
                if (entry.t_hits > 0) waysUsed  += 1;

                hits  += entry.t_hits;
                evictions += entry.t_evictions;
            }
            fs << std::hex << idx << std::dec << "," << waysUsed << "," << hits << "," << evictions << "\n";
        }

        fs << std::endl;
        fs.close();
    }
#endif
}
