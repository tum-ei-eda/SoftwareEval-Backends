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

class VectorRegisterModel : public ConnectorModel {
public:
  VectorRegisterModel(PerformanceModel *parent_)
      : ConnectorModel("VectorRegisterModel", parent_){};

  uint64_t *vs1_ptr;
  uint64_t *vs2_ptr;
  uint64_t *vs3_ptr;
  uint64_t *vd_ptr;

  uint64_t getVa(void) {
    return vectorRegisterModel[vs1_ptr[getInstrIndex()]];
  };
  uint64_t getVb(void) {
    return vectorRegisterModel[vs2_ptr[getInstrIndex()]];
  };
  uint64_t getVc(void) {
    return vectorRegisterModel[vs3_ptr[getInstrIndex()]];
  };
  void setVd(uint64_t vd_) {
    vectorRegisterModel[vd_ptr[getInstrIndex()]] = vd_;
  };

private:
  uint64_t vectorRegisterModel[64] = {0};
};

} // namespace Vicuna
