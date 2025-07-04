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

#include "models/Vicuna/VectorMemVregSignal.h"
#include "models/Vicuna/VectorConfig.h"
#include <cstdint>

namespace Vicuna
{

int VectorMemVregSignal::getDelay(void)
{
    auto storeWidth = width_ptr[getInstrIndex()];

    uint64_t n_register_elements = VectorConfig::vlen / decodeSew();

    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto isFractionalLmul = vtype & fractionalLmulBitmask;

    // Elements per store: (MemWidth / SEW) / (VsWidth / SEW) = (MemWidth * SEW) /
    // (VsWidth * SEW) = MemWidth / VsWidth
    auto elements_per_store = VectorConfig::vMemWidth / storeWidth;
    auto shift = 0;

    if (isFractionalLmul)
    {
        auto encodedLmul = vtype & 0b11;
        shift = 4 - encodedLmul;
    }

    // Vector registers are ready for further instructions after the first
    // register is done
    return VectorConfig::vlen / VectorConfig::vMemWidth;
}

/**
 * @brief Decode SEW from VTYPE.
 *
 * @returns The SEW
 */
auto VectorMemVregSignal::decodeSew() -> uint64_t
{
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    uint64_t vsew = (vtype >> 3) & 0b11;
    // SEW can be calculated by shifting 8 left by the register value (vsew)
    return 8 << vsew;
}

} // namespace Vicuna
