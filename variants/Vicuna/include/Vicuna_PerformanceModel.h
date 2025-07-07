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


#ifndef SWEVAL_BACKENDS_VICUNA_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_VICUNA_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/Vicuna/VectorRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/Vicuna/VectorMemModel.h"
#include "models/Vicuna/VectorStoreModel.h"
#include "models/Vicuna/VectorAluModel.h"
#include "models/Vicuna/VectorDividerModel.h"
#include "models/Vicuna/VectorSignaller.h"
#include "models/Vicuna/PackUnpack.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/Vicuna/VectorMemVregSignal.h"

namespace Vicuna{

extern SchedulingFunctionSet* Vicuna_SchedulingFunctionSet;

class Vicuna_PerformanceModel : public PerformanceModel
{
public:

  Vicuna_PerformanceModel() : PerformanceModel("Vicuna", Vicuna_SchedulingFunctionSet)
    ,V_DISP_stage(2,0)
    ,V_EX_stage(2,0)
    ,R_SIG_stage(100,0)
    ,regModel(this)
    ,vectorRegModel(this)
    ,staBranchPredModel(this)
    ,vectorMemModel(this)
    ,vectorStoreModel(this)
    ,vectorAluModel(this)
    ,vectorDividerModel(this)
    ,vectorSignaller(this)
    ,packUnpack(this)
    ,divider(this)
    ,divider_u(this)
    ,vectorMemVregSignal(this)
  {};

  // Single-Element Timing Variables
  uint64_t IF_stage = 0;
  uint64_t ID_stage = 0;
  uint64_t EX_stage = 0;
  uint64_t V_EX_ALU_Unpack_substage = 0;
  uint64_t V_EX_ALU_Op_substage = 0;
  uint64_t V_EX_ALU_Pack_substage = 0;
  uint64_t V_EX_LSU_substage_fifo = 0;
  uint64_t V_EX_LSU_substage_last = 0;
  uint64_t V_EX_LSU_substage_mem = 0;
  uint64_t V_WB_stage = 0;
  uint64_t V_RES_stage = 0;
  uint64_t R_RET_stage = 0;

  // Multi-Element Timing Variables
  MultiElementTimingVariable V_DISP_stage;
  MultiElementTimingVariable V_EX_stage;
  MultiElementTimingVariable R_SIG_stage;

  // External Resource Models
  common::StandardRegisterModel regModel;
  Vicuna::VectorRegisterModel vectorRegModel;
  common::StaticBranchPredictModel staBranchPredModel;
  Vicuna::VectorMemModel vectorMemModel;
  Vicuna::VectorStoreModel vectorStoreModel;
  Vicuna::VectorAluModel vectorAluModel;
  Vicuna::VectorDividerModel vectorDividerModel;
  Vicuna::VectorSignaller vectorSignaller;
  Vicuna::PackUnpack packUnpack;
  cv32e40p::DividerModel divider;
  cv32e40p::DividerUnsignedModel divider_u;
  Vicuna::VectorMemVregSignal vectorMemVregSignal;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace Vicuna

#endif // SWEVAL_BACKENDS_VICUNA_PERFORMANCE_MODEL_H