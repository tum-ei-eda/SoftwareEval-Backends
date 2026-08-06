#include "models/common/cache/CacheModel.h"
#include "models/common/cache/Utils.h"
#include "models/common/cache/prefetch/NextLinePrefetcher.h"
#include "models/common/cache/prefetch/StreamPrefetcher.h"
#include "models/common/cache/prefetch/StridePrefetcher.h"
#include "models/common/cache/replacement/TreePRLU.h"

#include <cassert>
#include <cstdint>
#include <memory>
#include <sstream>
#include <string>
#include <sys/types.h>
#include <vector>

namespace cache {

CacheCfg::CacheCfg() {
  replacement_factory = [](uint32_t ways) {
    return std::make_unique<replacement_strategy::TreePLRU>(ways);
  };
  prefetch_factory = []() {
    return nullptr;
    // return std::make_unique<prefetch_strategy::NextLinePrefetcher>();
    // return std::make_unique<prefetch_strategy::StridePrefetcher>();
    // return std::make_unique<prefetch_strategy::StreamPrefetcher>();
  };
}

CacheModel::CacheModel(PerformanceModel *parent_, CacheCfg cfg_)
    : ResourceModel(cfg_.model_name, parent_), cfg(cfg_),
      prefetch_strategy(cfg.prefetch_factory()),
      line_bits(ilog2(cfg.line_size)),
      line_mask(~static_cast<uint64_t>(cfg.line_size - 1)),
      set_bits(ilog2(cfg.num_sets)), set_mask(cfg.num_sets - 1) {

  assert(set_bits + line_bits <= 64);

  for (uint32_t i = 0; i < cfg.num_sets; ++i) {
    tag_cache.emplace_back(CacheSet{
        cfg.replacement_factory(cfg.num_ways),
        std::vector<CacheEntry>(cfg.num_ways, CacheEntry{}),
    });
  }
}

int CacheModel::getDelay(void) {
  const uint64_t pc = pc_ptr[getInstrIndex()];
  const uint64_t addr = lineBase(cfg.use_pc ? pc : addr_ptr[getInstrIndex()]);

  is_cache_hit = false;
  is_prefetch_hit = false;
  is_used_hit = false;
  num_total_prefetch = 0;
  num_total_evicted = 0;
  num_prefetch_evicted = 0;

  // not cacheable
  is_cache_able = cacheable(addr);
  if (!is_cache_able) {
    return cfg.not_cacheable_delay;
  }

  // demand hit
  is_cache_hit = lookup(addr, is_prefetch_hit);
  if (is_cache_hit) {
    if (prefetch_strategy) {
      prefetch_strategy->onHit(pc, addr, is_prefetch_hit, *this);
    }
    return cfg.hit_delay;
  }

  // prefetch internal hit
  if (prefetch_strategy) {
    is_cache_hit = prefetch_strategy->lookup(pc, addr, *this);
    is_prefetch_hit = is_cache_hit;
    if (is_cache_hit) {
      const uint64_t tag = getTag(addr);
      const uint64_t idx = getSet(addr);
      CacheSet &set = tag_cache[idx];
      for (uint32_t way = 0; way < cfg.num_ways; ++way) {
        CacheEntry &e = set.entries[way];
        if (e.valid && e.tag == tag) {
          e.prefetched = false;
          e.used = true;
          break;
        }
      }
      is_used_hit = false;
      return cfg.hit_delay;
    }
  }

  // demand miss
  install(addr, /*markPrefetched=*/false);

  if (prefetch_strategy) {
    prefetch_strategy->onMiss(pc, addr, *this);
  }

  return cfg.miss_delay;
}

bool CacheModel::probe(uint64_t addr) const {
  const uint64_t tag = getTag(addr);
  const uint64_t idx = getSet(addr);

  const CacheSet &set = tag_cache[idx];
  for (uint32_t way = 0; way < cfg.num_ways; ++way) {
    const CacheEntry &e = set.entries[way];
    if (e.valid && e.tag == tag) {
      return true;
    }
  }
  return false;
}

bool CacheModel::lookup(uint64_t addr, bool &wasPrefetched) {
  const uint64_t tag = getTag(addr);
  const uint64_t idx = getSet(addr);

  CacheSet &set = tag_cache[idx];
  for (uint32_t way = 0; way < cfg.num_ways; ++way) {
    CacheEntry &e = set.entries[way];

    if (e.valid && e.tag == tag) {
      set.replacement_strategy->touch(way);

      wasPrefetched = e.prefetched;
      e.prefetched = false;
      is_used_hit = e.used;
      e.used = true;
      return true;
    }
  }

  wasPrefetched = false;
  return false;
}

void CacheModel::install(uint64_t addr, bool markPrefetched) {
  const uint64_t tag = getTag(addr);
  const uint64_t idx = getSet(addr);

  int32_t way = -1;
  CacheSet &set = tag_cache[idx];
  for (uint32_t i = 0; i < cfg.num_ways; ++i) {
    CacheEntry &e = set.entries[i];
    if (!e.valid) {
      way = i;
      break;
    }
  }

  if (way == -1) {
    way = set.replacement_strategy->getVictim();
    if (set.entries[way].prefetched) {
      num_prefetch_evicted++;
    }
    num_total_evicted++;
  }

  set.replacement_strategy->touch(way);
  set.entries[way] = {tag, true, markPrefetched, !markPrefetched};
}

void CacheModel::prefetch(uint64_t addr) {
  if (cacheable(addr) && !probe(addr)) {
    install(addr, /*markPrefetched=*/true);
    num_total_prefetch++;
  }
}

std::string CacheModel::getInfoHeader() {
  std::stringstream ss;
  ss << cfg.model_name << ":is_chache_able," << cfg.model_name
     << ":is_chache_hit," << cfg.model_name << ":is_prefetch_hit,"
     << cfg.model_name << ":is_used_hit," << cfg.model_name << ":num_prefetch,"
     << cfg.model_name << ":num_evicted," << cfg.model_name
     << ":num_evicted_were_prefetched";
  return ss.str();
}

std::string CacheModel::getInfoStream() {
  std::stringstream ss;
  ss << is_cache_able << "," << is_cache_hit << "," << is_prefetch_hit << ","
     << is_used_hit << "," << num_total_prefetch << "," << num_total_evicted
     << "," << num_prefetch_evicted;
  return ss.str();
}

} // namespace cache
