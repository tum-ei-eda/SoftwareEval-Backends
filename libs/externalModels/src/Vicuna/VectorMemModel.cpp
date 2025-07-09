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
#include "models/Vicuna/VectorConfig.h"
#include <cstdint>

namespace Vicuna
{

auto log2(uint64_t value) -> uint64_t;

auto fractionalBitIsSet(uint64_t encodedLmul) -> bool;

auto decodeMultiplicativeLmul(uint64_t encodedLmul) -> uint64_t;

int VectorMemModel::getDelay(void)
{
    auto lsWidth = lsWidth_ptr[getInstrIndex()];
    auto decodedInfo = decodeInfo();

    auto emul = decodedInfo.lmul;

    // As per decoder: ratio of sew to eew determines EMUL
    if (lsWidth > decodedInfo.sew)
    {
        // EMUL = multiple of LMUL
        // Calculate by adding log2(loadWidth / sew) to vlmul
        // If the fractional bit is still 1, EMUL = 1
        // otherwise just the decoded multiplicative LMUL of that new value.
        // m8 overflowing should result in an illegal instruction anyway, so it is
        // not checked.
        auto encodedEmul = decodedInfo.encodedLmul + log2(lsWidth / decodedInfo.sew);
        emul = fractionalBitIsSet(encodedEmul) ? 1 : decodeMultiplicativeLmul(encodedEmul);
    }
    else if (lsWidth < decodedInfo.sew)
    {
        // EMUL = fraction of LMUL
        // If LMUL fractional, or log2(loadWidth / sew) >= vlmul, EMUL = 1
        // otherwise subtract log2(loadWidth / sew) from vlmul and decode.
        auto decrement = log2(decodedInfo.sew / lsWidth);
        if (decodedInfo.fractionalLmul || decrement > decodedInfo.encodedLmul)
        {
            emul = 1;
        }
        else
        {
            emul = decodeMultiplicativeLmul(decodedInfo.encodedLmul - decrement);
        }
    }

    static constexpr auto cyclesPerRegister = VectorConfig::vlen / VectorConfig::vMemWidth;
    return emul * cyclesPerRegister;
}

auto VectorMemModel::decodeInfo() -> DecodedInfoLoad
{
    auto decodedInfo = DecodedInfoLoad{};
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    static constexpr auto encodedLmulBitmask = 0b11;
    decodedInfo.fractionalLmul = (vtype & fractionalLmulBitmask) != 0;
    decodedInfo.encodedLmul = vtype & encodedLmulBitmask;
    decodedInfo.lmul = 1 << decodedInfo.encodedLmul;

    uint64_t encodedSew = (vtype >> 3) & 0b11;
    decodedInfo.sew = 8 << encodedSew;

    return decodedInfo;
}

/**
 * @brief Decode LMUL from VTYPE. Fractional LMUL is converted to LMUL = 1
 *
 * @returns The LMUL
 */
auto VectorMemModel::decodeLmul() -> uint64_t
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

/**
 * @brief Decode SEW from VTYPE.
 *
 * @returns The SEW
 */
auto VectorMemModel::decodeSew() -> uint64_t
{
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    uint64_t vsew = (vtype >> 3) & 0b11;
    // SEW can be calculated by shifting 8 left by the register value (vsew)
    return 8 << vsew;
}

auto log2(uint64_t value) -> uint64_t
{
    auto result = 0;
    value >>= 1;
    while (value)
    {
        result++;
        value >>= 1;
    }
    return result;
}

auto fractionalBitIsSet(uint64_t encodedLmul) -> bool
{
    static constexpr auto fractionalBitmask = 0b100;
    return (encodedLmul & fractionalBitmask) != 0;
}

auto decodeMultiplicativeLmul(uint64_t encodedLmul) -> uint64_t
{
    static constexpr auto lmulValueBitmask = 0b11;
    return 1 << (encodedLmul & lmulValueBitmask);
}

} // namespace Vicuna
