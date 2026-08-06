#ifndef COMMON_CACHE_PREFETCH_STRIDE_H
#define COMMON_CACHE_PREFETCH_STRIDE_H

#include "PrefetchStrategy.h"
#include <cstdint>
#include <math.h>
#include <vector>

/*
 * Based on:
 *   Chen, Tien-Fu, and Jean-Loup Baer.
 *   “Effective Hardware-Based Data Prefetching for High-Performance Processors”
 *   IEEE Transactions on Computers 44, no. 5 (1995): 609–23.
 *   https://doi.org/10.1109/12.381947.
 */

namespace prefetch_strategy {

struct StridePrefetchCfg {
  uint32_t prefetch_distance = 2;
  uint32_t rtp_size = 8;
};

enum RPTState { INITIAL, TRANSIENT, STEADY, NO_PRED };

struct RPTEntry {
  uint64_t tag = 0;
  uint64_t prev_addr = 0;
  int32_t stride = 0;
  RPTState state = INITIAL;
  bool valid = false;
};

class StridePrefetcher : public PrefetchStrategy {
public:
  explicit StridePrefetcher(StridePrefetchCfg cfg_ = StridePrefetchCfg{})
      : cfg(cfg_), rpt(std::vector<RPTEntry>(cfg.rtp_size, RPTEntry{})),
        rpt_mask(cfg.rtp_size - 1) {}

  void onHit(uint64_t pc, uint64_t addr, bool isPrefetchHit,
             cache::CacheView &cache) override;
  void onMiss(uint64_t pc, uint64_t addr, cache::CacheView &cache) override;

private:
  const StridePrefetchCfg cfg;

  std::vector<RPTEntry> rpt;
  const uint32_t rpt_mask;

  RPTEntry &lookup(uint64_t pc);
  void train(RPTEntry &e, uint64_t pc, uint64_t addr);
  void prefetch(RPTEntry &e, cache::CacheView &cache);
};

}; // namespace prefetch_strategy

#endif
