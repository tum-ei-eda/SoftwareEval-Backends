#ifndef COMMON_CACHE_REPLACEMENT_TREE_PRLU_H
#define COMMON_CACHE_REPLACEMENT_TREE_PRLU_H

#include "ReplacementStrategy.h"
#include <cassert>
#include <cstdint>
#include <vector>

namespace replacement_strategy {

class TreePLRU : public ReplacementStrategy {
public:
  explicit TreePLRU(uint32_t num_ways_)
      : ReplacementStrategy(num_ways_), num_leafs(num_ways_ - 1),
        tree(num_leafs, false) {}
  void touch(uint32_t way) override;
  uint32_t getVictim() override;

private:
  const uint32_t num_leafs;
  // true means "point right", false means "point left"
  std::vector<bool> tree;

  static inline uint32_t parentIndex(const uint32_t index) {
    return (index - 1) / 2;
  }

  static inline bool isRightSubtree(const uint32_t index) {
    return index % 2 == 0;
  }
};

} // namespace replacement_strategy

#endif