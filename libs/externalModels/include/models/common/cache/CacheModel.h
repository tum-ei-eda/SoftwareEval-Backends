#ifndef COMMON_CACHE_MODEL_H
#define COMMON_CACHE_MODEL_H

#include <cassert>
#include <cstdint>
#include <functional>
#include <memory>
#include <stdbool.h>
#include <string>
#include <vector>

#include "PerformanceModel.h"
#include "prefetch/CacheView.h"
#include "prefetch/PrefetchStrategy.h"
#include "replacement/ReplacementStrategy.h"

namespace cache {

struct CacheCfg {
  int hit_delay = 1;
  int miss_delay = 7;
  int not_cacheable_delay = 9;

  // T
  // uint32_t num_ways = 1;
  // uint32_t num_sets = 4;
  // uint32_t line_size = 16;
  // // S
  uint32_t num_ways = 2;
  uint32_t num_sets = 8;
  uint32_t line_size = 32;
  // // M
  // uint32_t num_ways = 4;
  // uint32_t num_sets = 32;
  // uint32_t line_size = 64;

  bool use_addr_filter = true;
  uint64_t filter_lo = 0x80000000;
  uint64_t filter_hi = 0xC0000000;

  bool use_pc = false;

  std::string model_name = "L1D";

  std::function<std::unique_ptr<replacement_strategy::ReplacementStrategy>(
      uint32_t)>
      replacement_factory;
  std::function<std::unique_ptr<prefetch_strategy::PrefetchStrategy>()>
      prefetch_factory;

  CacheCfg();
};

struct CacheEntry {
  uint64_t tag = 0;
  bool valid = false;
  bool prefetched = false;
  bool used = false;
};

struct CacheSet {
  std::unique_ptr<replacement_strategy::ReplacementStrategy>
      replacement_strategy;
  std::vector<CacheEntry> entries;
};

class CacheModel : public ResourceModel, public CacheView {
public:
  explicit CacheModel(PerformanceModel *parent_, CacheCfg cfg = CacheCfg{});

  uint64_t *pc_ptr = nullptr;
  uint64_t *addr_ptr = nullptr;

  virtual int getDelay(void) override;

  uint32_t getLineSize() const override { return cfg.line_size; }
  void prefetch(uint64_t addr) override;

  bool probe(uint64_t addr) const;
  bool lookup(uint64_t addr, bool &wasPrefetched);
  void install(uint64_t addr, bool markPrefetched);

  inline bool cacheable(uint64_t addr) const {
    return !cfg.use_addr_filter ||
           ((addr >= cfg.filter_lo) && (addr < cfg.filter_hi));
  }

  inline uint64_t lineBase(uint64_t addr) const {
    return addr & line_mask;
  }

  std::string getInfoHeader();
  std::string getInfoStream();

private:
  const CacheCfg cfg;
  const std::unique_ptr<prefetch_strategy::PrefetchStrategy> prefetch_strategy;

  const uint32_t line_bits; // log2(cfg.line_bytes)
  const uint64_t line_mask; // ~(line_size - 1)
  const uint32_t set_bits;  // log2(cfg.num_sets)
  const uint64_t set_mask;  // (num_sets - 1)

  std::vector<CacheSet> tag_cache;

  inline uint64_t getTag(uint64_t addr) const {
    return addr >> (set_bits + line_bits);
  }
  inline uint64_t getSet(uint64_t addr) const {
    return (addr >> line_bits) & set_mask;
  }

  bool is_cache_able = false;
  bool is_cache_hit = false;
  bool is_prefetch_hit = false;
  bool is_used_hit = false;
  uint32_t num_total_prefetch = 0;
  uint32_t num_total_evicted = 0;
  uint32_t num_prefetch_evicted = 0;
};

} // namespace cache

#endif // COMMON_CACHE_MODEL_H
