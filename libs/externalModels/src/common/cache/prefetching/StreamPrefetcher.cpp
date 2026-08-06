#include "models/common/cache/prefetch/StreamPrefetcher.h"
#include "models/common/cache/replacement/TreePRLU.h"
#include <cstdint>
#include <deque>

namespace prefetch_strategy {

StreamPrefetchCfg::StreamPrefetchCfg() {
  replacement_factory = [](uint32_t ways) {
    return std::make_unique<replacement_strategy::TreePLRU>(ways);
  };
}

bool StreamPrefetcher::lookup(uint64_t pc, uint64_t addr,
                              cache::CacheView &cache) {

  int32_t sb_idx = -1;
  for (uint32_t i = 0; i < streams.size(); ++i) {
    if (streams[i].has(addr)) {
      sb_idx = i;
      break;
    }
  }

  // stream buffer hit
  if (sb_idx != -1) {
    StreamBuffer &matched = streams[sb_idx];
    replacement_strategy->touch(sb_idx);

    uint64_t next_addr = matched.tags.back() + cache.getLineSize();
    matched.tags.pop_front();
    // promote to cache
    cache.prefetch(addr);

    matched.tags.push_back(next_addr);

    return true;
  }

  // stream buffer miss
  cache.prefetch(addr);

  sb_idx = replacement_strategy->getVictim();
  replacement_strategy->touch(sb_idx);

  StreamBuffer &matched = streams[sb_idx];
  matched.reset(addr, cache.getLineSize(), cfg.prefetch_distance);

  return false;
};

void StreamPrefetcher::onHit(uint64_t, uint64_t addr, bool isPrefetchHit,
                             cache::CacheView &cache) {}

void StreamPrefetcher::onMiss(uint64_t, uint64_t addr,
                              cache::CacheView &cache) {}

} // namespace prefetch_strategy
