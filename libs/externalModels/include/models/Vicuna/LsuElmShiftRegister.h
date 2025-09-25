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

namespace Vicuna {

class LsuElmShiftRegister : public ConnectorModel {
public:
  LsuElmShiftRegister(PerformanceModel *parent_)
      : ConnectorModel("LsuElmShiftRegister", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    vlaneWidth_ = std::stoi(std::getenv("VLANE_WIDTH"));
    shiftStages_ = vlen_ == 64 ? 6 : 5;
    nextEnterDelay_ = vlen_ == 64 ? 3 : 4;
  };

  uint64_t getLeaveShiftRegister(void) { return enterTime + shiftStages_; }
  uint64_t getAllowedEnterTime(void) { return enterTime + nextEnterDelay_; }

  void setEnterShiftRegister(uint64_t enterTime_) { enterTime = enterTime_; }

private:
  uint64_t vlen_;
  uint64_t vlaneWidth_;
  uint64_t shiftStages_;
  uint64_t nextEnterDelay_;

  uint64_t enterTime = 0;
};

} // namespace Vicuna
