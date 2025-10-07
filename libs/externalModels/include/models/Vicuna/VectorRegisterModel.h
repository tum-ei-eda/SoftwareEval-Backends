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
    arithUnpackLastStage = vlen_ == 64 ? 4 : 5;

    // Dispatch logic
    counterWidth = log2(vlen_ / 32) + 4;
  };

  uint64_t counterWidth = 0;
  uint64_t lsuElmUnpackLastStage = 0;
  uint64_t arithUnpackLastStage = 0;

  uint64_t *vs1_ptr;
  uint64_t *vs2_ptr;
  uint64_t *vs3_ptr;
  uint64_t *vd_ptr;
  uint64_t *vm_ptr;
  uint64_t *vtype_ptr;

  // Loads
  uint64_t *lsWidth_ptr;

  // Whole register loads
  uint64_t *nf_ptr;

  // Register File Ports
  // Vreg parallel write info
  std::array<bool, 32> prevWrites = {false};
  std::array<uint64_t, 32> prevWriteCycles = {0};
  uint64_t vregWriteStart = 0;
  uint64_t getVregWritePortFree(void) { return vregWritePortFree_; }

  // XIF Commit next instruction
  uint64_t xifCommitSignal = 0;
  void setXifCommitSignal(uint64_t xifCommitSignal_) {
    xifCommitSignal = xifCommitSignal_;
  }

  // Arith Unpack Shift Register
  std::array<uint64_t, 5> arithShiftRegister = {0};
  uint64_t nextEnterTimeArithUnpack = 0;
  uint64_t enterTimeArithUnpack = 0;
  uint64_t leaveTimeArithUnpack = 0;

  uint64_t getAllowedEnterTimeArithUnpack(void) {
    return arithShiftRegister[0];
  }

  uint64_t getLeaveArithUnpack(void) { return leaveTimeArithUnpack; }

  void setFreeLastArithUnpackStage(uint64_t freeTime_) {
    arithShiftRegister[arithUnpackLastStage] = freeTime_;
  }

  auto setEnterArithUnpack(uint64_t enterTime_) -> void {
    auto const vlenFactor = vlen_ / 64;
    auto const waitTime = getWaitTime(getLmul());

    // Can leave after running through shift register
    leaveTimeArithUnpack = enterTime_ + arithUnpackLastStage;

    arithShiftRegister[0] = enterTime_ + waitTime;
  }

  auto getWaitTime(uint64_t emul) -> uint64_t {
    return emul * (vlen_ / vlane_width_);
  }

  auto getWaitTimeExt(uint64_t emul) -> uint64_t {
    return emul * (vlen_ / vlane_width_);
  }

  auto getWaitTimeLsu(uint64_t emul) -> uint64_t {
    return emul * (vlen_ / 32);
  }

  auto setEnterArithUnpackVs2(uint64_t enterTime_) -> void {
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const vlenFactor = log2(vlen_ / 64);
    // auto const waitTime = 2 * (getLmul() * vlenFactor);
    auto const waitTime = getWaitTime(getLmul());

    // + 1: first stage valid in cycle after register write complete
    auto const maxRegisterTime = vectorRegisterModel[vs2] + 1;

    // Can leave after running through shift register
    leaveTimeArithUnpack =
        std::max(enterTime_, maxRegisterTime) + arithUnpackLastStage;

    arithShiftRegister[0] = std::max(enterTime_, maxRegisterTime) + waitTime;
  }

  auto setEnterArithUnpackExt(uint64_t enterTime_) -> void {
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const vlenFactor = log2(vlen_ / 64);
    // auto const waitTime = 2 * (getLmul() * vlenFactor);
    auto const waitTime = getWaitTimeExt(getLmul());

    // + 1: first stage valid in cycle after register write complete
    auto const maxRegisterTime = vectorRegisterModel[vs2] + 1;

    // Can leave after running through shift register
    leaveTimeArithUnpack =
        std::max(enterTime_, maxRegisterTime) + arithUnpackLastStage;

    arithShiftRegister[0] = std::max(enterTime_, maxRegisterTime) + waitTime;
  }

  auto setEnterArithUnpackVs1Vs2(uint64_t enterTime_) -> void {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const vlenFactor = vlen_ / 64;
    auto const waitTime = getWaitTime(getLmul());

    // + 1: first stage valid in cycle after register write complete
    auto const maxRegisterTime =
        std::max(vectorRegisterModel[vs1], vectorRegisterModel[vs2]) + 1;

    // Can leave after running through shift register
    leaveTimeArithUnpack =
        std::max(enterTime_, maxRegisterTime) + arithUnpackLastStage;

    arithShiftRegister[0] = std::max(enterTime_, maxRegisterTime) + waitTime;
  }

  // LSU/ELM Unpack Shift Register

  // Leave times of shift register stages
  std::array<uint64_t, 6> lsuElmShiftRegisterLeave = {0};
  std::array<uint64_t, 6> lsuElmShiftRegisterEnter = {0};
  uint64_t loadComplete = 0;
  uint64_t lsuReqBufferFree = 0;

  uint64_t loadStoreStallEnd = 0;
  uint64_t reqStallStart = 0;
  uint64_t reqStallEnd = 0;

  uint64_t getAllowedEnterTimeLsuElmUnpack(void) {
    return lsuElmShiftRegisterLeave[0];
  }

  void setFreeLastLsuElmUnpackStage(uint64_t freeTime_) {
    // freeTime_ - 1: LSU Request Buffer takes one cycle, but last stage is free
    // on enter

    auto const stallEnd = std::max(reqStallEnd + 2, xifCommitSignal);

    lsuElmShiftRegisterEnter[lsuElmUnpackLastStage] =
        std::max(freeTime_ - 1, stallEnd);

    // if ((freeTime_ - 1) < stallEnd) {
    //   // If an LSU stall has not ended in the buffer stage, stall
    //   for (size_t i = 0; i < lsuElmShiftRegisterEnter.size(); ++i) {
    //     lsuElmShiftRegisterEnter[i] = stallEnd;
    //   }
    // }
  }

  void setCompleteLoad(uint64_t loadCompleteTime_) {
    loadComplete = loadCompleteTime_;
  }

  void setLoadStoreStallEnd(uint64_t endTime_) {
    // Request stall ends 1 cycle after LSU is done
    reqStallEnd = endTime_ + 1;
  }

  void setReqStallEnd(uint64_t endTime_) {
    // Request stall ends 1 cycle after LSU is done
    reqStallEnd = endTime_ + 1;
  }

  uint64_t getReqStallEnd(void) {
    // Resume 1 cycle after request stall ended
    return std::max(reqStallEnd + 1, xifCommitSignal);
    // return reqStallEnd + 1;
  }

  uint64_t getLeaveLsuElmUnpack(void) {
    return lsuElmShiftRegisterEnter[lsuElmUnpackLastStage] + 1;
  }

  void setEnterLsuElmUnpackLoad(uint64_t enterTime_) {
    auto const waitTime = getWaitTimeLsu(getLoadStoreEmul());

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
  }

  void setEnterLsuElmUnpackLoadNf(uint64_t enterTime_) {
    auto const waitTime = getWaitTimeLsu(nf_ptr[getInstrIndex()] + 1);

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
  }

  void setEnterLsuElmUnpackStore(uint64_t enterTime_) {
    auto const vs3 = vs3_ptr[getInstrIndex()];
    auto const maxRegisterTime = vectorRegisterModel[vs3] + 1;
    auto const waitTime = getWaitTimeLsu(getLoadStoreEmul());

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterEnter[0] =
        std::max(maxRegisterTime, lsuElmShiftRegisterEnter[0]);

    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
  }

  void setEnterLsuElmUnpackStoreNf(uint64_t enterTime_) {
    auto const vs3 = vs3_ptr[getInstrIndex()];
    auto const maxRegisterTime = vectorRegisterModel[vs3] + 1;
    auto const waitTime = getWaitTimeLsu(nf_ptr[getInstrIndex()] + 1);

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterEnter[0] =
        std::max(maxRegisterTime, lsuElmShiftRegisterEnter[0]);

    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
  }

  auto setEnterLsuElmUnpack(uint64_t enterTime_) -> void {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const vlenFactor = vlen_ / 64;
    auto const waitTime = getWaitTime(getLmul());
    // + 1: can start the cycle after register write complete
    auto const maxRegisterTime =
        std::max(vectorRegisterModel[vs1], vectorRegisterModel[vs2]) + 1;

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterEnter[0] =
        std::max(maxRegisterTime, lsuElmShiftRegisterEnter[0]);

    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
  }

  auto setEnterLsuElmUnpackVs2(uint64_t enterTime_) -> void {
    auto const vs2 = vs2_ptr[getInstrIndex()];

    lsuElmShiftRegisterLeave[0] =
        std::max(enterTime_ + getLmul(),
                 std::max(lsuElmShiftRegisterLeave[1],
                          vectorRegisterModel[vs2] + 1)) +
        1;

    for (size_t i = 1; i < lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterLeave[i] = std::max(
          lsuElmShiftRegisterLeave[i + 1], lsuElmShiftRegisterLeave[i - 1] + 1);
    }
  }

  auto setEnterLsuElmUnpackVs1Vs2(uint64_t enterTime_) -> void {
    auto const vs1 = vs1_ptr[getInstrIndex()];
    auto const vs2 = vs2_ptr[getInstrIndex()];
    auto const vlenFactor = vlen_ / 64;
    auto const waitTime = getWaitTime(getLmul());
    // + 1: can start the cycle after register write complete
    auto const maxRegisterTime =
        std::max(vectorRegisterModel[vs1], vectorRegisterModel[vs2]) + 1;

    lsuElmShiftRegisterEnter[0] =
        std::max(enterTime_, lsuElmShiftRegisterEnter[0]);
    lsuElmShiftRegisterEnter[0] =
        std::max(maxRegisterTime, lsuElmShiftRegisterEnter[0]);

    lsuElmShiftRegisterLeave[0] = lsuElmShiftRegisterEnter[0] + waitTime;

    for (size_t i = 1; i <= lsuElmUnpackLastStage; ++i) {
      lsuElmShiftRegisterEnter[i] = lsuElmShiftRegisterEnter[i - 1] + 1;
    }
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

    // auto const writeStart = baseTimestamp_ + cyclesPerRegister + 1;
    // auto tryStart = baseTimestamp_ + cyclesPerRegister;
    // uint64_t writeStart = 0;
    // auto extendPrevious = false;

    // if ((tryStart < vregWriteStart) && tryStart < vregWritePortFree_) {
    //   // Parallel instruction was first, but this one starts writing earlier!
    //   // -> Extend writes from previous instruction
    //   extendPrevious = true;
    //   writeStart = tryStart;
    // } else {
    //   // Either no conflict or other instruction started first
    //   writeStart = std::max(tryStart, vregWritePortFree_);
    // }

    setRegisterTimes(registerBaseIndex, baseTimestamp_ + cyclesPerRegister + 1,
                     emul, cyclesPerRegister);
  }

  // Set register timestamps for vector whole register loads
  void setVdGroupLoadNf(uint64_t const baseTimestamp_) {
    auto const nRegisters = nf_ptr[getInstrIndex()] + 1;
    auto const cyclesPerRegister = vlen_ / VectorConfig::vMemWidth;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];

    // auto const writeStart = baseTimestamp_ + cyclesPerRegister + 1;
    // auto const writeStart =
    //     std::max(baseTimestamp_ + cyclesPerRegister, vregWritePortFree_);
    setRegisterTimes(registerBaseIndex, baseTimestamp_ + cyclesPerRegister + 1,
                     nRegisters, cyclesPerRegister);
  }

  // Set only Vd register time
  void setVd(uint64_t baseTimestamp_) {
    auto const cyclesPerRegister = (vlen_ / vlane_width_);
    auto const writeTime =
        std::max(baseTimestamp_ + cyclesPerRegister + 1, vregWritePortFree_);

    vectorRegisterModel[vd_ptr[getInstrIndex()]] =
        baseTimestamp_ + cyclesPerRegister + 1;
    // vregWritePortFree_ = writeTime + 1;
  };

  // Set register timestamps for regular vector ALU instructions
  void setVdGroupArith(uint64_t const baseTimestamp_) {
    auto const cyclesPerRegister = (vlen_ / vlane_width_);
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];

    // auto writeStart =
    //     std::max(baseTimestamp_ + cyclesPerRegister, vregWritePortFree_);
    setRegisterTimes(
        registerBaseIndex,
        std::max(baseTimestamp_ + cyclesPerRegister + 1, xifCommitSignal),
        getLmul(), cyclesPerRegister);
  }

  void setVdGroupArithWidening(uint64_t const baseTimestamp_) {

    auto const cyclesPerRegister = (vlen_ / vlane_width_);
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = 2 * getLmul();

    setRegisterTimes(registerBaseIndex, baseTimestamp_, emul,
                     cyclesPerRegister);
  }

  // Set register timestamps for element-wise (e.g. vcompress) instructions
  void setVdGroupElm(uint64_t const baseTimestamp_) {
    // ELM unit depends on # of elements, i.e. VLEN / SEW
    auto const cyclesPerRegister = vlen_ / getSew();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = getLmul();

    auto const writeStart =
        std::max(baseTimestamp_ + cyclesPerRegister + 1, vregWritePortFree_);
    setRegisterTimes(registerBaseIndex, baseTimestamp_, emul,
                     cyclesPerRegister);
  }

  // Set register timestamp for reduction instructions
  void setVdGroupReduce(uint64_t const baseTimestamp_) {
    // ELM unit depends on # of elements, i.e. VLEN / SEW
    auto const elementsPerRegister = vlen_ / getSew();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = getLmul();

    auto const writeStart =
        std::max(baseTimestamp_ + elementsPerRegister + 1, xifCommitSignal);
    auto const writeEnd = writeStart + (elementsPerRegister * emul);

    for (size_t i = 0; i < emul; ++i) {
      vectorRegisterModel[registerBaseIndex + i] = writeEnd;
    }
  }

  // Set register timestamps for division instructions
  void setVdGroupDiv(uint64_t const baseTimestamp_) {

    auto const cyclesPerRegister =
        (vlen_ / getSew()) * VectorConfig::dividerDelay;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto const emul = getLmul();

    auto const groupTimestamp =
        baseTimestamp_ + (emul * cyclesPerRegister) + packCycles;

    for (size_t i = 0; i < emul; ++i) {
      // TODO
      vectorRegisterModel[registerBaseIndex + i] = groupTimestamp;
    }
  }

  // Get the max. timestamp for a target register group
  uint64_t getMaxVdGroup(void) {
    auto const emul = getLmul();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    // Ready 1 cycle after register done
    return (*(std::max_element(start, start + emul))) + 1;
  }

  // Get the max. timestamp for a register group based on nf
  uint64_t getMaxVdGroupNf(void) {
    auto const nFields = nf_ptr[getInstrIndex()] + 1;
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    // Ready 1 cycle after register done
    return (*(std::max_element(start, start + nFields))) + 1;
  }

  // Get the max. timestamp for a register group for load instructions
  uint64_t getMaxVdGroupLoadStore(void) {
    auto const emul = getLoadStoreEmul();
    auto const registerBaseIndex = vd_ptr[getInstrIndex()];
    auto start = vectorRegisterModel.begin() + registerBaseIndex;
    // Ready 1 cycle after register done
    return (*(std::max_element(start, start + emul))) + 1;
  }

private:
  uint64_t vregWritePortFree_ = 0;
  uint64_t vregReadPortFree_ = 0;
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

    static auto lastWrite = 0;
    // static constexpr uint64_t portWidth = 128;

    // auto const writeCycles =
    //     std::max(vlen_ / portWidth, static_cast<uint64_t>(1));

    // auto runningTimestamp = std::max(baseTimestamp + cyclesPerRegister + 1,
    //                                  vregWritePortFree_ + writeCycles);

    auto runningTimestamp = baseTimestamp;
    // auto const writeDone = baseTimestamp + (emul * cyclesPerRegister) + 1;

    // if (extendPrevious) {
    //   for (size_t i = 0; i < 32; i++) {
    //     if (prevWrites[i]) {
    //       vectorRegisterModel[i] += prevWriteCycles[i];
    //     }
    //   }
    // }

    for (size_t i = 0; i < emul; ++i) {
      vectorRegisterModel[registerBaseIndex + i] = runningTimestamp;
      std::cout << "v" << registerBaseIndex + i << " @ " << runningTimestamp
                << ", d: " << (int)runningTimestamp - lastWrite << "\n";
      lastWrite = runningTimestamp;
      runningTimestamp += cyclesPerRegister;
    }

    // Write port is free at the end
    // auto const writesPerRegister = vlen_ / portWidth;
    // vregWritePortFree_ = runningTimestamp - cyclesPerRegister;
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
