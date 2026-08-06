#include "models/common/cache/prefetch/StridePrefetcher.h"
#include <cstdint>

namespace prefetch_strategy {

void StridePrefetcher::onHit(uint64_t pc, uint64_t addr, bool isPrefetchHit,
                             cache::CacheView &cache) {
  RPTEntry &e = lookup(pc);
  train(e, pc, addr);
  prefetch(e, cache);
}

void StridePrefetcher::onMiss(uint64_t pc, uint64_t addr,
                              cache::CacheView &cache) {
  RPTEntry &e = lookup(pc);
  train(e, pc, addr);
  prefetch(e, cache);
}

inline RPTEntry &StridePrefetcher::lookup(uint64_t pc) {
  return rpt[(pc >> 2) & rpt_mask];
}

void StridePrefetcher::train(RPTEntry &e, uint64_t pc, uint64_t addr) {
  if (!e.valid && e.tag != pc) {
    e = {};
    e.tag = pc;
    e.prev_addr = addr;
    e.valid = true;
    return;
  }

  const int32_t observed_stride = static_cast<int32_t>(addr - e.prev_addr);

  const bool correct = (addr == (e.prev_addr + e.stride));

  switch (e.state) {
  case INITIAL:
    if (correct) {
      e.state = STEADY;
    } else {
      e.stride = observed_stride;
      e.state = TRANSIENT;
    }
    break;

  case TRANSIENT:
    if (correct) {
      e.state = STEADY;
    } else {
      e.stride = observed_stride;
      e.state = NO_PRED;
    }
    break;

  case STEADY:
    if (!correct) {
      e.state = INITIAL;
    }
    break;

  case NO_PRED:
    if (correct) {
      e.state = TRANSIENT;
    } else {
      e.stride = observed_stride;
    }
    break;
  }
  e.prev_addr = addr;
}

void StridePrefetcher::prefetch(RPTEntry &e, cache::CacheView &cache) {
  if (!e.valid || e.state == NO_PRED) {
    return;
  }

  for (uint32_t dist = 1; dist <= cfg.prefetch_distance; ++dist) {
    uint64_t target;
    if (e.stride >= 0) {
      target = e.prev_addr + (static_cast<uint64_t>(e.stride) * dist);
    } else {
      uint64_t abs_stride = static_cast<uint64_t>(-e.stride);
      target = e.prev_addr - (abs_stride * dist);
    }
    cache.prefetch(target);
  }
}

} // namespace prefetch_strategy
