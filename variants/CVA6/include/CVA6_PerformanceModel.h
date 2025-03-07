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


#ifndef SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/cva6/BranchPredictionModel.h"
#include "models/cva6/ClobberModel.h"
#include "models/cva6/ICacheModel.h"
#include "models/cva6/DividerModel.h"
#include "models/cva6/DividerUnsignedModel.h"
#include "models/cva6/DCacheModel.h"

namespace CVA6{

extern SchedulingFunctionSet* CVA6_SchedulingFunctionSet;

class CVA6_PerformanceModel : public PerformanceModel
{
public:

  CVA6_PerformanceModel() : PerformanceModel("CVA6", CVA6_SchedulingFunctionSet)
    ,IF_stage(3,0)
    ,IQ_stage(7,0)
    ,EX_stage(8,0)
    ,COM_stage(2,0)
    ,regModel(this)
    ,dynBranchPredModel(this)
    ,clobberModel(this)
    ,iCacheModel(this)
    ,divider(this)
    ,divider_u(this)
    ,dCacheModel(this)
  {};

  // Single-Element Timing Variables
  uint64_t PC_stage = 0;
  uint64_t IF_substage_0 = 0;
  uint64_t IF_substage_1 = 0;
  uint64_t IF_substage_2 = 0;
  uint64_t ID_stage = 0;
  uint64_t IS_stage = 0;
  uint64_t EX_substage_alu = 0;
  uint64_t EX_substage_mul_i = 0;
  uint64_t EX_substage_mul_o = 0;
  uint64_t EX_substage_div = 0;
  uint64_t EX_substage_lCtrl = 0;
  uint64_t EX_substage_dCache = 0;
  uint64_t EX_substage_lUnit = 0;
  uint64_t EX_substage_sCtrl = 0;
  uint64_t EX_substage_sUnit = 0;

  // Multi-Element Timing Variables
  MultiElementTimingVariable IF_stage;
  MultiElementTimingVariable IQ_stage;
  MultiElementTimingVariable EX_stage;
  MultiElementTimingVariable COM_stage;

  // External Resource Models
  common::StandardRegisterModel regModel;
  cva6::BranchPredictionModel dynBranchPredModel;
  cva6::ClobberModel clobberModel;
  cva6::ICacheModel iCacheModel;
  cva6::DividerModel divider;
  cva6::DividerUnsignedModel divider_u;
  cva6::DCacheModel dCacheModel;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace CVA6

#endif // SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H