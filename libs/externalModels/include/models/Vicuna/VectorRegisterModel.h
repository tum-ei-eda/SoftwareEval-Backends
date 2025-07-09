/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

#pragma once

#include <array>
#include <cstdint>

#include "PerformanceModel.h"
#include "VectorConfig.h"

namespace Vicuna {

class VectorRegisterModel : public ConnectorModel {
public:
  VectorRegisterModel(PerformanceModel *parent_)
      : ConnectorModel("VectorRegisterModel", parent_){};

  uint64_t *vs1_ptr;
  uint64_t *vs2_ptr;
  uint64_t *vs3_ptr;
  uint64_t *vd_ptr;
  uint64_t *vtype_ptr;
  uint64_t *lsWidth_ptr;
  uint64_t *isWidening_ptr;

  uint64_t getVs1(void) {
    return vectorRegisterModel[vs1_ptr[getInstrIndex()]];
  };
  uint64_t getVs2(void) {
    return vectorRegisterModel[vs2_ptr[getInstrIndex()]];
  };
  uint64_t getVs3(void) {
    return vectorRegisterModel[vs3_ptr[getInstrIndex()]];
  };

  // Set register times for VLOAD instructions
  void setVdGroupLoad(uint64_t baseTimestamp_) {
    auto loadWidth = lsWidth_ptr[getInstrIndex()];
    auto sew = getSew();
    auto lmul = getLmul();
    static constexpr auto fractionalLmulBitmask = 0b100;

    // EMUL = LMUL >= m1 if loadWidth == sew
    auto emul = getLmul();

    if (loadWidth > sew) {
      // EMUL = multiple of LMUL
      // Calculate by adding log2(loadWidth / sew) to vlmul
      // If the fractional bit is still 1, EMUL = 1
      // otherwise just the decoded multiplicative LMUL of that new value.
      // m8 overflowing should result in an illegal instruction anyway, so it is
      // not checked.
      auto encodedEmul = getEncodedLmul() + log2(loadWidth / sew);
      emul = lmulIsFractional(encodedEmul)
                 ? 1
                 : decodeMultiplicativeLmul(encodedEmul);
    } else if (loadWidth < sew) {
      // EMUL = fraction of LMUL
      // If LMUL fractional, or log2(loadWidth / sew) >= vlmul, EMUL = 1
      // otherwise subtract log2(loadWidth / sew) from vlmul and decode.
      auto vlmul = getEncodedLmul();
      auto decrement = log2(sew / loadWidth);
      if (lmulIsFractional() || decrement > vlmul) {
        emul = 1;
      } else {
        emul = decodeMultiplicativeLmul(vlmul - decrement);
      }
    }

    static constexpr auto cyclesPerRegister =
        VectorConfig::vlen / VectorConfig::vMemWidth;
    auto registerBaseIndex = vd_ptr[getInstrIndex()];
    for (size_t i = 0; i < emul; i++) {
      vectorRegisterModel[registerBaseIndex + i] =
          baseTimestamp_ + ((i + 1) * cyclesPerRegister);
    }
  }

  // Set register timestamps for regular vector ALU instructions
  void setVdGroupAlu(uint64_t baseTimestamp_) {
    static constexpr auto cyclesPerRegister =
        VectorConfig::vlen / VectorConfig::vLaneWidth;
    auto isWidening = isWidening_ptr[getInstrIndex()];
    auto registerBaseIndex = vd_ptr[getInstrIndex()];
    auto lmul = getLmul();
    auto emul = isWidening ? 2 * lmul : lmul;
    for (size_t i = 0; i < emul; i++) {
      vectorRegisterModel[registerBaseIndex + i] =
          baseTimestamp_ + ((i + 1) * (cyclesPerRegister));
    }
  }

  // Set register timestamps for division instructions
  void setVdGroupDivider(uint64_t baseTimestamp_) {

    auto cyclesPerRegister =
        (VectorConfig::vlen / getSew()) * VectorConfig::dividerDelay;

    auto registerBaseIndex = vd_ptr[getInstrIndex()];
    auto emul = getLmul();
    auto groupTimestamp = baseTimestamp_ + (emul * cyclesPerRegister);
    for (size_t i = 0; i < emul; i++) {
      vectorRegisterModel[registerBaseIndex + i] =
          groupTimestamp - (32 * (emul - 1));
    }
  }

  // Get the max. timestamp for a register group
  uint64_t getMaxVdGroup(void) {
    auto emul = getLmul();
    auto registerBaseIndex = vd_ptr[getInstrIndex()];
    uint64_t max = 0;
    for (size_t i = 0; i < emul; i++) {
      auto regTimestamp = vectorRegisterModel[registerBaseIndex + i];
      max = regTimestamp > max ? regTimestamp : max;
    }

    return max;
  }

  uint64_t getVd(void) { return vectorRegisterModel[vd_ptr[getInstrIndex()]]; };
  void setVd(uint64_t vd_) {
    vectorRegisterModel[vd_ptr[getInstrIndex()]] = vd_;
  };

private:
  std::array<uint64_t, VectorConfig::nVectorRegisters> vectorRegisterModel = {
      0};

  auto log2(uint64_t value) -> uint64_t {
    auto result = 0;
    value >>= 1;
    while (value) {
      result++;
      value >>= 1;
    }
    return result;
  }

  auto getSew() -> uint64_t {
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    uint64_t vsew = (vtype >> 3) & 0b11;
    // SEW can be calculated by shifting 8 left by the register value (vsew)
    return 8 << vsew;
  }

  auto getLmul() -> uint64_t {
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto isFractionalLmul = vtype & fractionalLmulBitmask;
    auto lmul = 1;

    if (!isFractionalLmul && ((vtype & 0b11) != 0)) {
      static constexpr auto lmulValueBitmask = 0b11;
      lmul = 1 << (vtype & lmulValueBitmask);
    }

    return lmul;
  }

  auto decodeMultiplicativeLmul(uint64_t encodedLmul) -> uint64_t {
    static constexpr auto lmulValueBitmask = 0b11;
    return 1 << (encodedLmul & lmulValueBitmask);
  }

  auto getEncodedLmul() -> uint64_t {
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto vlmulBitmask = 0b111;
    return vtype & vlmulBitmask;
  }

  auto lmulIsFractional(uint64_t lmul) -> bool {
    static constexpr auto fractionalLmulBitmask = 0b100;
    return (lmul & fractionalLmulBitmask) != 0;
  }

  auto lmulIsFractional() -> bool {
    uint64_t vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto isFractionalLmul = vtype & fractionalLmulBitmask;
    return isFractionalLmul != 0;
  }
};

} // namespace Vicuna
