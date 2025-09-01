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


#ifndef SWEVAL_BACKENDS_VICUNA_ZVL64B_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_VICUNA_ZVL64B_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/Vicuna/VectorRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/Vicuna/VectorMemModel.h"
#include "models/Vicuna/VectorMemRegistersModel.h"
#include "models/Vicuna/VectorAluModel.h"
#include "models/Vicuna/VectorElmModel.h"
#include "models/Vicuna/VectorDividerModel.h"
#include "models/Vicuna/VectorSignaller.h"
#include "models/Vicuna/PackUnpack.h"
#include "models/Vicuna/PackUnpackLsu.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"

namespace Vicuna_zvl64b{

extern SchedulingFunctionSet* Vicuna_zvl64b_SchedulingFunctionSet;

class Vicuna_zvl64b_PerformanceModel : public PerformanceModel
{
public:

  Vicuna_zvl64b_PerformanceModel() : PerformanceModel("Vicuna_zvl64b", Vicuna_zvl64b_SchedulingFunctionSet)
    ,V_IQ_stage(2,0)
    ,V_DISP_stage(2,0)
    ,V_EX_stage(2,0)
    ,OFF_IQ_stage(100,0)
    ,regModel(this)
    ,vectorRegModel(this)
    ,staBranchPredModel(this)
    ,vectorMemModel(this)
    ,vectorMemRegistersModel(this)
    ,vectorAluModel(this)
    ,vectorElmModel(this)
    ,vectorDividerModel(this)
    ,vectorSignaller(this)
    ,packUnpack(this)
    ,packUnpackLsu(this)
    ,divider(this)
    ,divider_u(this)
  {};

  // Single-Element Timing Variables
  uint64_t IF_stage = 0;
  uint64_t ID_stage = 0;
  uint64_t EX_stage = 0;
  uint64_t WB_stage = 0;
  uint64_t V_EX_Unpack_substage = 0;
  uint64_t V_EX_Unit_substage = 0;
  uint64_t V_EX_ALU_Unpack_substage = 0;
  uint64_t V_EX_ALU_Op_substage = 0;
  uint64_t V_EX_ALU_Pack_substage = 0;
  uint64_t V_EX_LSU_ELM_substage = 0;
  uint64_t V_EX_LSU_Mem_substage = 0;
  uint64_t V_EX_ELM_substage = 0;
  uint64_t V_EX_Pack_substage = 0;
  uint64_t V_WB_stage = 0;
  uint64_t V_RES_stage = 0;
  uint64_t OFF_SIG_stage = 0;

  // Multi-Element Timing Variables
  MultiElementTimingVariable V_IQ_stage;
  MultiElementTimingVariable V_DISP_stage;
  MultiElementTimingVariable V_EX_stage;
  MultiElementTimingVariable OFF_IQ_stage;

  // External Resource Models
  common::StandardRegisterModel regModel;
  Vicuna::VectorRegisterModel vectorRegModel;
  common::StaticBranchPredictModel staBranchPredModel;
  Vicuna::VectorMemModel vectorMemModel;
  Vicuna::VectorMemRegistersModel vectorMemRegistersModel;
  Vicuna::VectorAluModel vectorAluModel;
  Vicuna::VectorElmModel vectorElmModel;
  Vicuna::VectorDividerModel vectorDividerModel;
  Vicuna::VectorSignaller vectorSignaller;
  Vicuna::PackUnpack packUnpack;
  Vicuna::PackUnpackLsu packUnpackLsu;
  cv32e40p::DividerModel divider;
  cv32e40p::DividerUnsignedModel divider_u;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace Vicuna_zvl64b

#endif // SWEVAL_BACKENDS_VICUNA_ZVL64B_PERFORMANCE_MODEL_H