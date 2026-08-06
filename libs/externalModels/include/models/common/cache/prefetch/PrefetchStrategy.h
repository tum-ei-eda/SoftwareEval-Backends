#ifndef COMMON_CACHE_PREFETCH_STRATEGY_H
#define COMMON_CACHE_PREFETCH_STRATEGY_H

#include "CacheView.h"
#include <cstdint>

namespace prefetch_strategy {

class PrefetchStrategy {
public:
  virtual ~PrefetchStrategy() = default;
  virtual bool lookup(uint64_t pc, uint64_t addr, cache::CacheView &cache) {
    return false;
  };
  virtual void onHit(uint64_t pc, uint64_t addr, bool isPrefetchHit,
                     cache::CacheView &cache) = 0;
  virtual void onMiss(uint64_t pc, uint64_t addr, cache::CacheView &cache) = 0;
};

}; // namespace prefetch_strategy

#endif
