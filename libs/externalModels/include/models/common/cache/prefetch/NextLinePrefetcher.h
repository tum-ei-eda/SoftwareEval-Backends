#ifndef COMMON_CACHE_PREFETCH_NEXTLINE_H
#define COMMON_CACHE_PREFETCH_NEXTLINE_H

#include "PrefetchStrategy.h"

/*
 * Based on:
 *   Smith, A. J.
 *   “Sequential Program Prefetching in Memory Hierarchies.”
 *   Computer 11, no. 12 (1978): 7–21.
 *   https://doi.org/10.1109/C-M.1978.218016.
 */

namespace prefetch_strategy {

struct NextLinePrefetchCfg {
  uint32_t prefetch_distance = 2;
  bool tagged_prefetch = true; // use Smiths tagged prefetch
};

class NextLinePrefetcher : public PrefetchStrategy {
public:
  explicit NextLinePrefetcher(NextLinePrefetchCfg cfg_ = NextLinePrefetchCfg{}) : cfg(cfg_) {}

  void onHit(uint64_t pc, uint64_t addr, bool isPrefetchHit, cache::CacheView &cache) override;
  void onMiss(uint64_t pc, uint64_t addr, cache::CacheView &cache) override;

private:
  const NextLinePrefetchCfg cfg;

  void prefetch(uint64_t addr, cache::CacheView &cache);
};

}; // namespace prefetch_strategy

#endif
