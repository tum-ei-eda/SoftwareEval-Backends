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

#ifndef COMMON_STANDARD_REGISTER_MODEL_H
#define COMMON_STANDARD_REGISTER_MODEL_H

#include <cstdint>

#include "PerformanceModel.h"

namespace common{

class StandardRegisterModel : public ConnectorModel
{
public:
  StandardRegisterModel(PerformanceModel* parent_) : ConnectorModel("StandardRegisterModel", parent_) {};

  uint64_t* rs1_ptr;
  uint64_t* rs2_ptr;
  uint64_t* rd_ptr;

  // TODO: Consider corner-case rd = 0?
  
  uint64_t getXa(void){ return registerModel[rs1_ptr[getInstrIndex()]]; };
  uint64_t getXb(void){ return registerModel[rs2_ptr[getInstrIndex()]]; };
  void setXd(uint64_t xd_) { registerModel[rd_ptr[getInstrIndex()]] = xd_; };

private:
  uint64_t registerModel [64] = {0};
};

} // namespace common
  
#endif //COMMON_STANDARD_REGISTER_PREDICT_MODEL_H
