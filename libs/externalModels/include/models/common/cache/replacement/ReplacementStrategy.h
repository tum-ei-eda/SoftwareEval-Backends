#ifndef COMMON_CACHE_REPLACEMENT_STRATEGY_H
#define COMMON_CACHE_REPLACEMENT_STRATEGY_H

#include <cassert>
#include <cstdint>

namespace replacement_strategy {

class ReplacementStrategy {
public:
  virtual ~ReplacementStrategy() = default;
  explicit ReplacementStrategy(uint32_t num_ways_) : num_ways(num_ways_) {
    assert(num_ways_ > 0 && "Number of ways must be greater than 0");
  };

  virtual void touch(uint32_t way) = 0;
  virtual uint32_t getVictim() = 0;

  uint32_t numWays() const { return num_ways; }

private:
  const uint32_t num_ways;
};

}; // namespace replacement_strategy

#endif // SWEVAL_BACKENDS_REPLACEMENT_STRATEGY_H