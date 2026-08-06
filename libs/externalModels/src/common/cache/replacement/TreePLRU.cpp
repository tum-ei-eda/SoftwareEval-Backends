#include "models/common/cache/replacement/TreePRLU.h"

#include <cassert>
#include <cmath>
#include <cstdint>
#include <vector>

namespace replacement_strategy {

void TreePLRU::touch(uint32_t way) {
  if (way >= numWays())
    return;

  uint32_t tree_index = way + num_leafs;

  while (tree_index != 0) {
    bool is_left_side = tree_index % 2 != 0;
    tree_index = std::floor(tree_index - 1) / 2; // go to parent
    tree[tree_index] = is_left_side; // point away from the touched node
  }
}

uint32_t TreePLRU::getVictim() {
  uint32_t tree_index = 0;

  while (tree_index < num_leafs) {
    if (tree[tree_index]) {
      tree_index = 2 * tree_index + 2;
    } else {
      tree_index = 2 * tree_index + 1;
    }
  }

  return tree_index - num_leafs;
}

} // namespace replacement_strategy