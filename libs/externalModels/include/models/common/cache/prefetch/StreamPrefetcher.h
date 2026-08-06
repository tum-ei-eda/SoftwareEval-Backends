#ifndef COMMON_CACHE_PREFETCH_STREAM_H
#define COMMON_CACHE_PREFETCH_STREAM_H

#include "PrefetchStrategy.h"
#include "models/common/cache/replacement/ReplacementStrategy.h"
#include <cstdint>
#include <deque>
#include <functional>
#include <memory>
#include <vector>

/*
 * Based on:
 *   Jouppi, N. P.
 *   “Improving Direct-Mapped Cache Performance by the Addition of a Small
 *   Fully-Associative Cache and Prefetch Buffers.” [1990] Proceedings. The 17th
 *   Annual International Symposium on Computer Architecture, May 1990, 364–73.
 *   https://doi.org/10.1109/ISCA.1990.134547.
 */

namespace prefetch_strategy {

struct StreamPrefetchCfg {
  uint32_t num_streams = 8;
  uint32_t prefetch_distance = 2;

  std::function<std::unique_ptr<replacement_strategy::ReplacementStrategy>(
      uint32_t)>
      replacement_factory;

  StreamPrefetchCfg();
};

struct StreamBuffer {
  std::deque<uint64_t> tags;

  bool has(uint64_t addr) const {
    return !tags.empty() && tags.front() == addr;
  }

  void reset(uint64_t addr, uint32_t lineSize, uint32_t distance) {
    tags = std::deque<uint64_t>(distance);
    for (uint32_t i = 0; i < distance; ++i) {
      uint64_t next_addr = addr + (i + 1) * lineSize;
      tags[i] = next_addr;
    }
  }
};

class StreamPrefetcher : public PrefetchStrategy {
public:
  explicit StreamPrefetcher(StreamPrefetchCfg cfg_ = StreamPrefetchCfg{})
      : cfg(cfg_),
        replacement_strategy(cfg.replacement_factory(cfg.num_streams)),
        streams(cfg.num_streams) {}

  bool lookup(uint64_t pc, uint64_t addr, cache::CacheView &cache) override;
  void onHit(uint64_t pc, uint64_t addr, bool isPrefetchHit,
             cache::CacheView &cache) override;
  void onMiss(uint64_t pc, uint64_t addr, cache::CacheView &cache) override;

private:
  const StreamPrefetchCfg cfg;
  const std::unique_ptr<replacement_strategy::ReplacementStrategy>
      replacement_strategy;
  std::vector<StreamBuffer> streams;
};
} // namespace prefetch_strategy

#endif