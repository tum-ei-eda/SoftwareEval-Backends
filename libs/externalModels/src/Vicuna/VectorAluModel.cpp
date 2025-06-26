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

#include "models/Vicuna/VectorAluModel.h"
#include <cstdint>

namespace Vicuna
{

int VectorAluModel::getDelay(void)
{
    static constexpr auto vlen = 1024;
    static constexpr auto vLaneWidth = 32;
    static constexpr auto cyclesPerRegister = vlen / vLaneWidth;
    return cyclesPerRegister * decodeLmul();
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto VectorAluModel::decodeLmul() -> uint64_t
{
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto isFractionalLmul = vtype & fractionalLmulBitmask;
    if (isFractionalLmul)
    {
        return 1;
    }

    static constexpr auto lmulValueBitmask = 0b11;
    return 1 << (vtype & lmulValueBitmask);
}

} // namespace Vicuna
