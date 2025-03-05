/*
* Copyright 2025 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/


#ifndef SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"

namespace CV32E40P{

extern SchedulingFunctionSet* CV32E40P_SchedulingFunctionSet;

class CV32E40P_PerformanceModel : public PerformanceModel
{
public:

  CV32E40P_PerformanceModel() : PerformanceModel("CV32E40P", CV32E40P_SchedulingFunctionSet)
    ,divider(this)
    ,divider_u(this)
    ,regModel(this)
    ,staBranchPredModel(this)
  {};

  // Single-Element Timing Variables
  uint64_t IF_stage = 0;
  uint64_t ID_stage = 0;
  uint64_t EX_stage = 0;
  uint64_t WB_stage = 0;


  // External Resource Models
  DividerModel divider;
  DividerUnsignedModel divider_u;

  // External Connector Models
  StandardRegisterModel regModel;
  StaticBranchPredictModel staBranchPredModel;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace CV32E40P

#endif // SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H