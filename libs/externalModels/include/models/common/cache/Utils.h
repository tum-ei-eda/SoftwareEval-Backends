#include <cassert>
#include <cstdint>

static uint32_t ilog2(int v) {
  assert(v > 0 && (v & (v - 1)) == 0 &&
         "cache geometry must be a power of two");
  uint32_t n = 0;
  while (v >>= 1) {
    ++n;
  }
  return n;
}