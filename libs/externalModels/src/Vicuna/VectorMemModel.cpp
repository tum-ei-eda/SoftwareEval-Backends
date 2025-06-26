/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "models/Vicuna/VectorMemModel.h"
#include <cstdint>

namespace Vicuna {

int VectorMemModel::getDelay(void) {
  // // TODO: regWithToLaneFactor should be configured somewhere else
  // static constexpr auto vlen = 1024;
  // static constexpr auto vMemWidth = 32;

  // auto sew = decodeSew();
  // auto lmul = decodeLmul();
  // auto loadWidth = width_ptr[getInstrIndex()];
  // auto vl = vl_ptr[getInstrIndex()];

  // uint64_t n_register_elements = vlen / decodeSew();
  // auto delay = 0;

  // if (lmul & 0b100) {
  //   // Fractional LMUL
  //   auto shift = 4 - (lmul & 0b11);
  //   delay = ((loadWidth * n_register_elements) >> shift) / vMemWidth;
  // } else {
  //   // Multiplicative LMUL
  //   auto shift = (lmul & 0b11);
  //   delay = ((loadWidth * n_register_elements) << shift) / vMemWidth;
  // }
  // return delay;

  static constexpr auto vlen = 1024;
  static constexpr auto vMemWidth = 32;
  auto lsWidth = width_ptr[getInstrIndex()];

  uint64_t n_register_elements = vlen / decodeSew();

  // Elements per store: (MemWidth / SEW) / (VsWidth / SEW) = (MemWidth * SEW) /
  // (VsWidth * SEW) = MemWidth / VsWidth
  auto elements_per_store = vMemWidth / lsWidth;

  return (n_register_elements * decodeLmul()) / elements_per_store;
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto VectorMemModel::decodeLmul() -> uint64_t {
  uint64_t vtype = vtype_ptr[getInstrIndex()];
  static constexpr auto fractionalLmulBitmask = 0b100;
  auto isFractionalLmul = vtype & fractionalLmulBitmask;
  if (isFractionalLmul) {
    return 1;
  }

  static constexpr auto lmulValueBitmask = 0b11;
  return 1 << (vtype & lmulValueBitmask);
}

/**
 * @brief Decode SEW from VTYPE.
 *
 * @returns The SEW
 */
auto VectorMemModel::decodeSew() -> uint64_t {
  uint64_t vtype = vtype_ptr[getInstrIndex()];
  uint64_t vsew = (vtype >> 3) & 0b11;
  // SEW can be calculated by shifting 8 left by the register value (vsew)
  return 8 << vsew;
}

} // namespace Vicuna
