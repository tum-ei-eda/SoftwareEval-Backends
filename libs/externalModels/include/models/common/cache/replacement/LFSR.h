#ifndef COMMON_CACHE_REPLACEMENT_LFSR_H
#define COMMON_CACHE_REPLACEMENT_LFSR_H

#include "ReplacementStrategy.h"
#include <cassert>
#include <cstdint>

namespace replacement_strategy {

class LFSR : public ReplacementStrategy {
public:
  LFSR(uint32_t num_ways_) : ReplacementStrategy(num_ways_) {
    assert(num_ways_ <= XX && "LFSR only supports up to XX ways");
  }
  void touch(uint32_t way) override;
  uint32_t getVictim() override;

private:
  uint8_t shift_state = 1;
};

} // namespace replacement_strategy

#endif