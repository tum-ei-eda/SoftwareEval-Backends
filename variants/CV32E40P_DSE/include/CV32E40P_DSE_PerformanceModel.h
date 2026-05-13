/*
* Copyright 2026 Chair of EDA, Technical University of Munich
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


#ifndef SWEVAL_BACKENDS_CV32E40P_DSE_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_CV32E40P_DSE_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"
//#include "Configuration.h"

#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/cv32e40p_dse/ICacheModel.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/cv32e40p_dse/DCacheModel.h"

namespace CV32E40P_DSE{

extern SchedulingFunctionSet* CV32E40P_DSE_SchedulingFunctionSet;

class CV32E40P_DSE_PerformanceModel : public PerformanceModel
{
public:

  // TODO: Find way to configure the models
  //CV32E40P_DSE_PerformanceModel(SwEvalBackends::Configuration& cfg_) : PerformanceModel("CV32E40P_DSE", CV32E40P_DSE_SchedulingFunctionSet)
  CV32E40P_DSE_PerformanceModel() : PerformanceModel("CV32E40P_DSE", CV32E40P_DSE_SchedulingFunctionSet)
    ,regModel(this)
    ,staBranchPredModel(this)
    ,iCache(this)
    ,divider(this)
    ,divider_u(this)
    ,dCache(this)
  {};

  // Entrance-point "timing variable" (only used for info-stream)
  uint64_t entrancePoint = 0;

  // Single-Element Timing Variables
  uint64_t IF_stage = 0;
  uint64_t ID_stage = 0;
  uint64_t EX_stage = 0;
  uint64_t WB_stage = 0;


  // External Resource Models
  common::StandardRegisterModel regModel;
  common::StaticBranchPredictModel staBranchPredModel;
  cv32e40p_dse::ICacheModel iCache;
  cv32e40p::DividerModel divider;
  cv32e40p::DividerUnsignedModel divider_u;
  cv32e40p_dse::DCacheModel dCache;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace CV32E40P_DSE

#endif // SWEVAL_BACKENDS_CV32E40P_DSE_PERFORMANCE_MODEL_H