#include "models/common/cache/prefetch/NextLinePrefetcher.h"
#include <cstdint>

namespace prefetch_strategy {

void NextLinePrefetcher::onHit(uint64_t _pc, uint64_t addr, bool isPrefetchHit,
                               cache::CacheView &cache) {
  if (cfg.tagged_prefetch && isPrefetchHit) {
    prefetch(addr, cache);
  }
}

void NextLinePrefetcher::onMiss(uint64_t _pc, uint64_t addr, cache::CacheView &cache) {
  prefetch(addr, cache);
}

void NextLinePrefetcher::prefetch(uint64_t addr, cache::CacheView &cache) {
  uint32_t line_size = cache.getLineSize();

  for (uint32_t dist = 1; dist <= cfg.prefetch_distance; ++dist) {
    uint64_t nextLine = addr + (uint64_t)dist * line_size;
    cache.prefetch(nextLine);
  }
}

} // namespace prefetch_strategy
