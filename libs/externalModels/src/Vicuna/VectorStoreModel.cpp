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

#include "models/Vicuna/VectorStoreModel.h"
#include <cstdint>

namespace Vicuna {

int VectorStoreModel::getDelay(void) {
  static constexpr auto vlen = 1024;
  static constexpr auto vMemWidth = 32;
  auto storeWidth = width_ptr[getInstrIndex()];

  uint64_t n_register_elements = vlen / decodeSew();

  // Elements per store: (MemWidth / SEW) / (VsWidth / SEW) = (MemWidth * SEW) / (VsWidth * SEW)
  // = MemWidth / VsWidth
  auto elements_per_store = vMemWidth / storeWidth;

  return (n_register_elements * decodeLmul()) / elements_per_store;
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto VectorStoreModel::decodeLmul() -> uint64_t {
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
auto VectorStoreModel::decodeSew() -> uint64_t {
  uint64_t vtype = vtype_ptr[getInstrIndex()];
  uint64_t vsew = (vtype >> 3) & 0b11;
  // SEW can be calculated by shifting 8 left by the register value (vsew)
  return 8 << vsew;
}

// /**
//  * @brief Decode load/store width from instruction assembly.
//  *
//  * @returns The width
//  */
// auto VectorStoreModel::decodeWidth() -> uint64_t {
//   uint64_t instr = assembly_ptr[getInstrIndex()];
//   uint64_t width_encoded = (instr >> 12) & 0b111;
//   return 8 << width_encoded;
// }

} // namespace Vicuna
