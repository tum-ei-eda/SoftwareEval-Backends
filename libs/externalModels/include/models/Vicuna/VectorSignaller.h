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

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorSignaller : public ConnectorModel {
public:
  VectorSignaller(PerformanceModel *parent_)
      : ConnectorModel("VectorSignaller", parent_){};

  void setXifSignal(uint64_t xifSignal_) { xifSignal = xifSignal_; }
  void setXifSignalNext(uint64_t xifSignalNext_) {
    xifSignal = xifSignalNext_ + 1;
  }

  uint64_t getXifSignal(void) { return xifSignal; };
  uint64_t getXifSignalNext(void) { return xifSignal + 1; };

  void setVsetSignal(uint64_t vsetSignal_) { vsetSignal = vsetSignal_; }
  uint64_t getVsetSignal(void) { return vsetSignal; };

  void setMemArbiterSignal(uint64_t memArbiterSignal_) {
    memArbiterSignal = memArbiterSignal_;
  }
  uint64_t getMemArbiterSignal(void) { return memArbiterSignal; };

private:
  uint64_t xifSignal = 0;
  uint64_t vsetSignal = 0;
  uint64_t memArbiterSignal = 0;
};

} // namespace Vicuna
