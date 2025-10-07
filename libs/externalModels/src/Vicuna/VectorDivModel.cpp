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

#include "models/Vicuna/VectorDivModel.h"
#include "models/Vicuna/VectorConfig.h"
#include <cstdint>

namespace Vicuna {

int VectorDivModel::getDelay(void) {
  // TODO: constants should be configured somewhere else

  auto const packFactor = vlen_ / vlane_width_;
  constexpr auto divider_cycles = 32;
  uint64_t n_register_elements = vlen_ / decodeSew();
  uint64_t lmul = decodeLmul();
  uint64_t n_divisions = n_register_elements * lmul;
  // TODO: could be removed
  auto delay =
      n_divisions * (divider_cycles + 3) - ((lmul - 1) * divider_cycles);
  return delay;
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto VectorDivModel::decodeLmul() -> uint64_t {
  uint64_t vtype = vtype_ptr[getInstrIndex()];
  static constexpr uint64_t fractionalLmulBitmask = 0b100;
  uint64_t isFractionalLmul = vtype & fractionalLmulBitmask;
  if (isFractionalLmul) {
    return 1;
  }

  static constexpr uint64_t lmulValueBitmask = 0b11;
  return 1 << (vtype & lmulValueBitmask);
}

/**
 * @brief Decode SEW from VTYPE.
 *
 * @returns The SEW
 */
auto VectorDivModel::decodeSew() -> uint64_t {
  uint64_t vtype = vtype_ptr[getInstrIndex()];
  uint64_t vsew = (vtype >> 3) & 0b11;
  // SEW can be calculated by shifting 8 left by the register value (vsew)
  return 8 << vsew;
}

} // namespace Vicuna
