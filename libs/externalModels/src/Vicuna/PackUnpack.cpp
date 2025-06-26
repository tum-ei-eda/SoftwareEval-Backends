#include "models/Vicuna/PackUnpack.h"

namespace Vicuna {

int PackUnpack::getDelay(void) {
  // TODO: constants should be configured somewhere else
  // TODO: pack & unpack: vlen/lane_width * lmul
  static constexpr auto vlen = 1024;
  static constexpr auto vLaneWidth = 32;
  static constexpr auto packFactor = vlen / vLaneWidth;
  auto lmul = decodeLmul();
  return lmul;
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto PackUnpack::decodeLmul() -> uint64_t {
  auto vtype = vtype_ptr[getInstrIndex()];
  static constexpr auto fractionalLmulBitmask = 0b100;
  auto isFractionalLmul = vtype & fractionalLmulBitmask;
  if (isFractionalLmul) {
    return 1;
  }

  static constexpr auto lmulValueBitmask = 0b11;
  return 1 << (vtype & lmulValueBitmask);
}

} // namespace Vicuna
