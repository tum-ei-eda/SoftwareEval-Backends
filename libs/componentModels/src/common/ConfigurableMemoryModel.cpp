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

#include "etiss/Misc.h"

#include <string>

#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <fstream>

#define CONFIG_PATH "plugin.perfEst.memory"

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

template<typename T>
bool loadFromConfig(etiss::Configuration& config, std::string const& path, T& value, T const& invalid = {})
{
    value = config.get<T>(path, {});
    if (value == T{})
    {
        std::cout << "WARNING: configuration '" << path
                  << "' not defined!" << std::endl;
        value = invalid;
        return false;
    }
    return true;
}

} // namespace

#ifdef OUTPUT_STATISTICS
    // output statistics
    constexpr unsigned width = 6, precision = 4;
    unsigned total = t_hits + t_misses;


    if (total == 0) return;

    // basic statistics
    std::cout << "\n"
              << m_name << " Cache Performance:" "\n "
              << std::setw(width) << std::right <<  t_hits                          << " cache hits ("
              << std::setprecision(precision)   << (t_hits * 100.0) / total         << "%) and" "\n "
              << std::setw(width) << std::right <<  t_misses                        << " cache misses ("
              << std::setprecision(precision)   << (t_misses * 100.0) / total       << "%) with" "\n "
              << std::setw(width) << std::right <<  t_evictions                     << " evictions ("
              << std::setprecision(precision)   << (t_evictions * 100.0) / t_misses << "%)"
              << std::endl;

    // find path to exe
    char cwd[256];
    size_t len = readlink("/proc/self/exe", cwd, sizeof(cwd));
    if (len < 0 || len > sizeof(cwd)) return;

    std::string filePath;
    // find directory
    auto rbegin = std::make_reverse_iterator(cwd + len);
    auto rend = std::make_reverse_iterator(cwd);
    auto directory = std::find(rbegin, rend, '/');
    if (directory == rend) return;

    std::copy(cwd, directory.base(), std::back_inserter(filePath));
    filePath += "histogram-" + name() + ".csv";

    std::cout << "creating cache histogram at " << filePath << std::endl;

    // detailed cache statistics
    std::ofstream fs;
    fs.open(filePath, std::ios::out);

    if (!fs.is_open()) return;

    // header
    fs << "index," "ways-used," "hits," "evictions\n";

    // data
    for (size_t idx = 0; idx < m_tagMemory.sets(); idx++)
    {
        CacheBlock block = m_tagMemory.getCacheSet(CacheIndex{idx});
        // accumulate statistics of all ways
        uint32_t hits = 0, evictions = 0, waysUsed = 0;
        for (size_t way = 0; way < m_tagMemory.ways(); way++)
        {
            auto* entry = block[way];
            if (entry->t_hits > 0) waysUsed  += 1;

            hits  += entry->t_hits;
            evictions += entry->t_evictions;
        }
        fs << std::hex << idx << std::dec << "," << waysUsed << "," << hits << "," << evictions << "\n";
    }

    fs << std::endl;
    fs.close();
#endif

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

void
cmm::MemoryRegion::fetch(uint64_t addr, int& delay, bool& hit)
{
    Delay d;
    // iterate through all caches
    size_t idx = 0;
    for (cmm::Cache* cache : m_caches)
    {
        hit = cache->fetch(addr, d);
        if (hit) break; // exit on hit
        idx++;
    }
    delay += d;
    if (idx == m_caches.size()) delay += m_memoryDelay;
}

int
ConfigurableMemoryModel::getDelay()
{
    uint64_t addr = addr_ptr[getInstrIndex()];

    // check memory hierarchy associated with memory region
    for (auto& region : m_regions)
    {
        if (region.addressSpace().contains(addr))
        {
            int delay = 0;
            region.fetch(addr, delay, m_hit);
            return delay;
        }
    }
    assert(!"address not covered by memory regions!");
    return 1;
}
#endif

ConfigurableMemoryModel::ConfigurableMemoryModel(PerformanceModel* parent_) :
    ResourceModel("ConfigurableMemoryModel", parent_)
{ }

void
ConfigurableMemoryModel::applyConfig(etiss::Configuration& config)
{
    std::cout << "INFO: Memory config: " << config.config() << std::endl;

    // size_t nregions = 0;
    // if (!loadFromConfig(config, CONFIG_PATH ".regions", nregions))
    // {
    //     std::stringstream ss;
    //     ss << "Failed to configure memory regions!";
    //     throw std::runtime_error(ss.str());
    // }

    // // setup memory regions
    // for (size_t idx = 0; idx < nregions; idx++)
    // {
    //     std::cout << "INFO: configuring memory region no. " << idx << "..." << std::endl;

    //     cmm::MemoryRegion region;
    //     bool success = region.applyConfig(config, CONFIG_PATH ".region." + std::to_string(idx), m_caches);
    //     if (!success)
    //     {
    //         std::stringstream ss;
    //         ss << "Failed to configure memory region no. " << idx << "!";
    //         throw std::runtime_error(ss.str());
    //     }
    //     m_regions.push_back(std::move(region));
    // }

    std::cout << std::endl;
}
