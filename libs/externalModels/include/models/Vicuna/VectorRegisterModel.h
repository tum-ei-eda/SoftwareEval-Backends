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

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>

#include "PerformanceModel.h"
#include "VectorConfig.h"

namespace Vicuna {

static constexpr auto packCycles = 1;
static constexpr auto lsuElmUnpackCycles = 2;
static constexpr auto aluUnpackCycles = 3;

class VectorRegisterModel : public ConnectorModel {
public:
  VectorRegisterModel(PerformanceModel *parent_)
      : ConnectorModel("VectorRegisterModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    vlane_width_ = std::stoi(std::getenv("VLANE_WIDTH"));
    shiftStagesLsuElmUnpack_ = vlen_ == 64 ? 4 : 3;
    nextEnterDelayLsuElmUnpack_ = vlen_ == 64 ? 3 : 4;

    shiftStagesArithUnpack_ = vlen_ / 32;
    nextEnterDelayArithUnpack_ = (vlen_ / 32) - 1;

    lsuElmUnpackLastStage = vlen_ == 64 ? 5 : 4;
  };

  uint64_t lsuElmUnpackLastStage = 0;

  uint64_t *vs1_ptr;
  uint64_t *vs2_ptr;
  uint64_t *vs3_ptr;
  uint64_t *vd_ptr;
  uint64_t *vm_ptr;
  uint64_t *vtype_ptr;
  uint64_t *isWidening_ptr;

  // Loads
  uint64_t *lsWidth_ptr;

  // Whole register loads
  uint64_t *nf_ptr;

  // Arith Unpack Shift Register
  uint64_t nextEnterTimeArithUnpack = 0;
  uint64_t enterTimeArithUnpack = 0;

  auto setEnterArithUnpack(uint64_t enterTime_) -> void {
    enterTimeArithUnpack = enterTime_;
  }

  uint64_t getLeaveArithUnpackNoReads(void) {
    nextEnterTimeArithUnpack =
        enterTimeArithUnpack + nextEnterDelayArithUnpack_;
    return enterTimeArithUnpack + shiftStagesArithUnpack_;
  }

  uint64_t getLeaveArithUnpackVs2(void) {
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const start = vectorRegisterModel.begin() + vs2;
    auto const emul = getLoadStoreEmul();
    auto const vs2Time = vectorRegisterModel[vs2];

    auto const maxStartTime = std::max(enterTimeArithUnpack, vs2Time);
    nextEnterTimeArithUnpack = maxStartTime + nextEnterDelayArithUnpack_;
    return maxStartTime + shiftStagesArithUnpack_ + 1;
  }

  uint64_t getLeaveArithUnpackVs1Vs2(void) {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const emul = getLmul();
    auto const vs1Time = vectorRegisterModel[vs1];
    auto const vs2Time = vectorRegisterModel[vs2];

    auto const maxRegisterTime = std::max(vs1Time, vs2Time);
    auto const maxStartTime = std::max(enterTimeArithUnpack, maxRegisterTime);
    nextEnterTimeArithUnpack = maxStartTime + nextEnterDelayArithUnpack_;
    return maxStartTime + shiftStagesArithUnpack_ + 1;
  }

  uint64_t getLeaveArithUnpackVdVs1Vs2(void) {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const emul = getLmul();
    auto const vs1Time = vectorRegisterModel[vs1];
    auto const vs2Time = vectorRegisterModel[vs2];

    auto const maxRegisterTime = std::max(vs1Time, vs2Time);
    auto const maxStartTime = std::max(enterTimeArithUnpack, maxRegisterTime);
    nextEnterTimeArithUnpack = maxStartTime + nextEnterDelayArithUnpack_;
    return maxStartTime + shiftStagesArithUnpack_ + 1;
  }

  uint64_t getAllowedEnterTimeArithUnpack(void) {
    return nextEnterTimeArithUnpack;
  }

  // LSU/ELM Unpack Shift Register

  // Leave times of shift register stages
  std::array<uint64_t, 6> lsuElmShiftRegister = {0};
  uint64_t loadComplete = 0;

  uint64_t getAllowedEnterTimeLsuElmUnpack(void) {
    // TODO here
    return lsuElmShiftRegister[0];
  }

  void setFreeLastLsuElmUnpackStage(uint64_t freeTime_) {
    lsuElmShiftRegister[lsuElmUnpackLastStage] = freeTime_;
  }

  void setCompleteLoad(uint64_t loadCompleteTime_) {
    lsuElmShiftRegister[lsuElmUnpackLastStage] = loadCompleteTime_;
    loadComplete = loadCompleteTime_;
  }

  uint64_t nextEnterTimeLsuElmUnpack = 0;
  auto setEnterLsuElmUnpack(uint64_t enterTime_) -> void {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const maxRegisterTime =
        std::max(vectorRegisterModel[vs1], vectorRegisterModel[vs2]);
    lsuElmShiftRegister[0] = std::max(
        enterTime_ + 1, std::max(lsuElmShiftRegister[1], maxRegisterTime));
    for (size_t i = 1; i < lsuElmUnpackLastStage; ++i) {
      // Shift either after emul cycles or when upper stage is empty
      lsuElmShiftRegister[i] =
          std::max(lsuElmShiftRegister[i + 1], lsuElmShiftRegister[i - 1] + 1);
    }
  }

  auto setEnterLsuElmUnpackVs2(uint64_t enterTime_) -> void {
    auto const vs2 = vs2_ptr[getInstrIndex()];
    lsuElmShiftRegister[0] =
        std::max(enterTime_ + 1,
                 std::max(lsuElmShiftRegister[1], vectorRegisterModel[vs2]));
    for (size_t i = 1; i < lsuElmUnpackLastStage; ++i) {
      // Shift either after emul cycles or when upper stage is empty
      lsuElmShiftRegister[i] =
          std::max(lsuElmShiftRegister[i + 1], lsuElmShiftRegister[i - 1] + 1);
    }
  }

  void setEnterLsuElmUnpackStore(uint64_t enterTime_) {
    auto const vs3 = vs3_ptr[getInstrIndex()];
    // auto const groupStart = vectorRegisterModel.begin() + vs3;
    // auto maxGroupTime = *std::max_element(groupStart, groupStart +
    // getLoadStoreEmul());
    lsuElmShiftRegister[0] =
        std::max(enterTime_ + 1,
                 std::max(lsuElmShiftRegister[1], vectorRegisterModel[vs3]));
    for (size_t i = 1; i < lsuElmUnpackLastStage; ++i) {
      // Shift either after emul cycles or when upper stage is empty
      lsuElmShiftRegister[i] =
          std::max(lsuElmShiftRegister[i + 1], lsuElmShiftRegister[i - 1] + 1);
    }
  }

  void setEnterLsuElmUnpackLoad(uint64_t enterTime_) {
    lsuElmShiftRegister[0] = std::max(enterTime_ + 1, lsuElmShiftRegister[1]);
    for (size_t i = 1; i < lsuElmUnpackLastStage; ++i) {
      // Shift either after emul cycles or when upper stage is empty
      lsuElmShiftRegister[i] =
          std::max(lsuElmShiftRegister[i + 1], lsuElmShiftRegister[i - 1] + 1);
    }
  }

  uint64_t getLeaveLsuElmUnpack(void) {
    return std::max(lsuElmShiftRegister[lsuElmUnpackLastStage],
                    lsuElmShiftRegister[lsuElmUnpackLastStage - 1] + 1);
  }

  uint64_t getLeaveLsuElmUnpackLoad(void) {
    return std::max(lsuElmShiftRegister[lsuElmUnpackLastStage],
                    lsuElmShiftRegister[lsuElmUnpackLastStage - 1] + 1);
  }

  uint64_t getLeaveLsuElmUnpackNoReads(void) {
    return std::max(lsuElmShiftRegister[lsuElmUnpackLastStage],
                    lsuElmShiftRegister[lsuElmUnpackLastStage - 1] + 1);
  }

  uint64_t getLeaveLsuElmUnpackStore(void) {
    return std::max(lsuElmShiftRegister[lsuElmUnpackLastStage],
                    lsuElmShiftRegister[lsuElmUnpackLastStage - 1] + 1);
  }

  uint64_t getLeaveLsuElmUnpackStoreNf(void) {
    auto const vs3 = vs3_ptr[getInstrIndex()];
    auto const start = vectorRegisterModel.begin() + vs3;
    auto const emul = nf_ptr[getInstrIndex()] + 1;
    auto const vs3Time = vectorRegisterModel[vs3];
    auto const maxStartTime = std::max(enterTimeLsuElmUnpack, vs3Time);
    nextEnterTimeLsuElmUnpack = maxStartTime + nextEnterDelayLsuElmUnpack_;
    return maxStartTime + shiftStagesLsuElmUnpack_;
  }

  uint64_t getLeaveLsuElmUnpackVs2(void) {
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const start = vectorRegisterModel.begin() + vs2;
    auto const emul = getLoadStoreEmul();
    auto const vs2Time = vectorRegisterModel[vs2];
    // auto const maxRegister = std::max_element(start, start + emul);
    // auto const maxRegisterTime = *maxRegister;

    auto const maxStartTime = std::max(enterTimeLsuElmUnpack, vs2Time);
    nextEnterTimeLsuElmUnpack = maxStartTime + nextEnterDelayLsuElmUnpack_;
    return maxStartTime + shiftStagesLsuElmUnpack_;
  }

  uint64_t getLeaveLsuElmUnpackVs1Vs2(void) {
    // auto const vs1 = vs1_ptr[getInstrIndex()];
    // auto const vs2 = vs2_ptr[getInstrIndex()];
    // auto const start_vs1 = vectorRegisterModel.begin() + vs1;
    // auto const start_vs2 = vectorRegisterModel.begin() + vs2;
    // auto const emul = getLmul();

    // auto const vs1Time = vectorRegisterModel[vs1];
    // auto const vs2Time = vectorRegisterModel[vs2];

    // auto const maxRegisterTime = std::max(vs1Time, vs2Time);
    // auto const maxStartTime = std::max(enterTimeLsuElmUnpack,
    // maxRegisterTime); nextEnterTimeLsuElmUnpack = maxStartTime +
    // nextEnterDelayLsuElmUnpack_; return maxStartTime +
    // shiftStagesLsuElmUnpack_;
    return std::max(lsuElmShiftRegister[lsuElmUnpackLastStage],
                    lsuElmShiftRegister[lsuElmUnpackLastStage - 1] + 1);
  }

  uint64_t getVs1(void) {
    return vectorRegisterModel[vs1_ptr[getInstrIndex()]];
  };

  uint64_t getVs2(void) {
    return vectorRegisterModel[vs2_ptr[getInstrIndex()]];
  };

  uint64_t getVs3(void) {
    return vectorRegisterModel[vs3_ptr[getInstrIndex()]];
  };

  uint64_t getMaskReg(void) {
    if (vm_ptr[getInstrIndex()] == VectorConfig::masked) {
      return vectorRegisterModel[VectorConfig::maskRegisterIndex];
    }
    // If instruction is unmasked ignore (return 0), but all potentially masked
    // instructions check this
    return 0;
  };

  // Set register times for vector load instructions
  void setVdGroupLoad(uint64_t const baseTimestamp_) {
    auto const emul = getLoadStoreEmul();
    auto const cyclesPerRegister = vlen_ / VectorConfig::vMemWidth;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];

    // +1 extra buffer cycle
    setRegisterTimes(registerBaseIndex, baseTimestamp_ + 1, emul,
                     cyclesPerRegister);
  }

  // Set register timestamps for vector whole register loads
  void setVdGroupLoadNf(uint64_t const baseTimestamp_) {
    auto const nRegisters = nf_ptr[getInstrIndex()] + 1;
    auto const cyclesPerRegister = vlen_ / VectorConfig::vMemWidth;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];

    // +1 extra buffer cycle
    setRegisterTimes(registerBaseIndex, baseTimestamp_ + 1, nRegisters,
                     cyclesPerRegister);
  }

  // Set register timestamps for regular vector ALU instructions
  void setVdGroupAlu(uint64_t const baseTimestamp_) {

    auto const cyclesPerRegister = (vlen_ / vlane_width_);
    auto const isWidening = isWidening_ptr[getInstrIndex()];
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const lmul = getLmul();
    auto const emul = isWidening ? 2 * lmul : lmul;

    // Extra ALU state cycles
    setRegisterTimes(registerBaseIndex, baseTimestamp_ + 2, emul,
                     cyclesPerRegister);
  }

  // Set register timestamps for element-wise (e.g. vcompress) instructions
  void setVdGroupElm(uint64_t const baseTimestamp_) {
    // ELM unit depends on # of elements, i.e. VLEN / SEW
    auto const cyclesPerRegister = vlen_ / getSew();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = getLmul();

    setRegisterTimes(registerBaseIndex, baseTimestamp_, emul,
                     cyclesPerRegister);
  }

  // Set register timestamps for division instructions
  void setVdGroupDiv(uint64_t const baseTimestamp_) {

    auto const cyclesPerRegister =
        (vlen_ / getSew()) * VectorConfig::dividerDelay;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = getLmul();
    auto const groupTimestamp =
        baseTimestamp_ + (emul * cyclesPerRegister) + packCycles;

    // auto maxLeaveTime = 0U;
    for (size_t i = 0; i < emul; ++i) {
      // TODO
      vectorRegisterModel[registerBaseIndex + i] = groupTimestamp;
      // groupTimestamp - (32 * (emul - 1));
    }
  }

  // Get the max. timestamp for vs1 source register group
  uint64_t getMaxVs1Group(void) {
    auto const emul = getLmul();
    auto const registerBaseIndex = vs1_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  // Get the max. timestamp for vs2 source register group
  uint64_t getMaxVs2Group(void) {
    auto const emul = getLmul();
    auto const registerBaseIndex = vs2_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  // Get the max. timestamp for vs3 source register group
  uint64_t getMaxVs3Group(void) {
    auto const emul = getLmul();
    auto const registerBaseIndex = vs3_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  uint64_t getMaxVs3GroupStore(void) {
    auto const emul = getLoadStoreEmul();
    auto const registerBaseIndex = vs3_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  // Get the max. timestamp for a target register group
  uint64_t getMaxVdGroup(void) {
    auto const emul = getLmul();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  // Get the max. timestamp for a register group based on nf
  uint64_t getMaxVdGroupNf(void) {
    auto const nFields = nf_ptr[getInstrIndex()] + 1;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + nFields));
  }

  // Get the max. timestamp for a register group for load instructions
  uint64_t getMaxVdGroupLoadStore(void) {
    auto const emul = getLoadStoreEmul();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    return *(std::max_element(start, start + emul));
  }

  uint64_t getVd(void) { return vectorRegisterModel[vd_ptr[getInstrIndex()]]; };
  void setVd(uint64_t vd_) {
    vectorRegisterModel[vd_ptr[getInstrIndex()]] = vd_;
  };

private:
  uint64_t aluUnpackFree = 0;
  uint64_t enterTimeLsuElmUnpack = 0;

  uint64_t vlen_;
  uint64_t vlane_width_;
  uint64_t shiftStagesLsuElmUnpack_;
  uint64_t shiftStagesArithUnpack_;
  uint64_t nextEnterDelayLsuElmUnpack_;
  uint64_t nextEnterDelayArithUnpack_;

  std::array<uint64_t, VectorConfig::nVectorRegisters> vectorRegisterModel = {
      0};

  auto setRegisterTimes(uint64_t const registerBaseIndex,
                        uint64_t const baseTimestamp, uint64_t const emul,
                        uint64_t const cyclesPerRegister) -> void {

    auto runningBaseTimestamp = baseTimestamp;

    for (size_t i = 0; i < emul; ++i) {
      auto const maxTime = std::max(runningBaseTimestamp,
                                    vectorRegisterModel[registerBaseIndex + i]);

      auto const registerTime = maxTime + cyclesPerRegister;

      vectorRegisterModel[registerBaseIndex + i] = registerTime + packCycles;
      runningBaseTimestamp = registerTime;
    }

    // return runningBaseTimestamp;
  }

  auto getMaxTimestampInGroup(uint64_t baseRegister,
                              uint64_t lmul) -> uint64_t {
    auto start = vectorRegisterModel.begin() + baseRegister;
    return *(std::max_element(start, start + lmul));
  }

  auto getLoadStoreEmul() -> uint64_t {
    auto const loadWidth = lsWidth_ptr[getInstrIndex()];
    auto const sew = getSew();

    // EMUL = LMUL >= m1 if loadWidth == sew
    auto emul = getLmul();

    if (loadWidth > sew) {
      // EMUL = multiple of LMUL
      // Calculate by adding log2(loadWidth / sew) to vlmul
      // If the fractional bit is still 1, EMUL = 1
      // otherwise just the decoded multiplicative LMUL of that new value.
      // m8 overflowing should result in an illegal instruction anyway, so it is
      // not checked. See spec.
      auto const encodedEmul = getEncodedLmul() + log2(loadWidth / sew);
      emul = lmulIsFractional(encodedEmul)
                 ? 1
                 : decodeMultiplicativeLmul(encodedEmul);
    } else if (loadWidth < sew) {
      // EMUL = fraction of LMUL
      // If LMUL fractional, or log2(loadWidth / sew) >= vlmul, EMUL = 1
      // otherwise subtract log2(loadWidth / sew) from vlmul and decode.
      // See spec.
      auto const vlmul = getEncodedLmul();
      auto const decrement = log2(sew / loadWidth);
      if (lmulIsFractional() || decrement > vlmul) {
        emul = 1;
      } else {
        emul = decodeMultiplicativeLmul(vlmul - decrement);
      }
    }
    return emul;
  }

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
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    uint64_t const vsew = (vtype >> 3) & 0b11;
    // SEW can be calculated by shifting 8 left by the register value (vsew)
    return 8 << vsew;
  }

  auto getLmul() -> uint64_t {
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto const isFractionalLmul = vtype & fractionalLmulBitmask;
    auto lmul = 1;

    if (!isFractionalLmul && ((vtype & 0b11) != 0)) {
      static constexpr auto lmulValueBitmask = 0b11;
      lmul = 1 << (vtype & lmulValueBitmask);
    }

    return lmul;
  }

  auto decodeMultiplicativeLmul(uint64_t const encodedLmul) -> uint64_t {
    static constexpr auto lmulValueBitmask = 0b11;
    return 1 << (encodedLmul & lmulValueBitmask);
  }

  auto getEncodedLmul() -> uint64_t {
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto vlmulBitmask = 0b111;
    return vtype & vlmulBitmask;
  }

  auto lmulIsFractional(uint64_t const lmul) -> bool {
    static constexpr auto fractionalLmulBitmask = 0b100;
    return (lmul & fractionalLmulBitmask) != 0;
  }

  auto lmulIsFractional() -> bool {
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto const isFractionalLmul = vtype & fractionalLmulBitmask;
    return isFractionalLmul != 0;
  }
};

} // namespace Vicuna
