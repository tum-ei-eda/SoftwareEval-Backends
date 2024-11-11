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

#include "etiss/Misc.h"

#include <cassert>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <unistd.h>

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

std::vector<std::string>
readListFromConfig(etiss::Configuration& config, std::string const& path)
{
    std::vector<std::string> entries;

    // parse list of memory levels
    std::string configString = config.get<std::string>(path, {});

    auto iter = configString.begin();
    auto end = configString.end();

    while (iter != end)
    {
        auto substrEnd = std::find_if(iter, end, [](char c){ return std::isspace(c); });
        if (iter == substrEnd) break;

        // create substring until separator
        entries.emplace_back(iter, substrEnd);

        // iter points to separator -> advance
        iter = substrEnd;
        while (iter != end && std::isspace(*iter)) iter++;
    }

    return entries;
}

} // namespace



std::shared_ptr<cmm::MemoryInstanceManager>
cmm::MemoryInstanceManager::instance()
{
    static std::weak_ptr<cmm::MemoryInstanceManager> self{};
    auto lock = self.lock();
    // construct single instance if object is uninitialized or was instance was deleted
    if (!lock)
    {
        lock = std::shared_ptr<MemoryInstanceManager>{new MemoryInstanceManager()};
        self = lock;
    }
    assert(lock);
    return lock;
}

bool
cmm::MemoryInstanceManager::applyConfig(etiss::Configuration& config,
                                        std::vector<MemoryPath>& memoryPaths,
                                        const std::string& id)
{
    std::cout << "INFO: config " << config.listFullConfiguration() << std::endl;


    return true;
}

void
cmm::MemoryInstanceManager::generateMemoryAccessStatistics() const
{
    // TODO: implement

#if 0
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
}
