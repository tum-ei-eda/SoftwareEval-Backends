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


#ifndef SWEVAL_BACKENDS_VICUNA_ZVL256B_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_VICUNA_ZVL256B_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/Vicuna/VectorRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/Vicuna/VectorMemModel.h"
#include "models/Vicuna/VectorMemNfModel.h"
#include "models/Vicuna/VectorArithModel.h"
#include "models/Vicuna/VectorArithWideningModel.h"
#include "models/Vicuna/VectorElmModel.h"
#include "models/Vicuna/VectorDivModel.h"
#include "models/Vicuna/VectorSignaller.h"
#include "models/Vicuna/LsuElmShiftRegister.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"

namespace Vicuna_zvl256b{

extern SchedulingFunctionSet* Vicuna_zvl256b_SchedulingFunctionSet;

class Vicuna_zvl256b_PerformanceModel : public PerformanceModel
{
public:

  Vicuna_zvl256b_PerformanceModel() : PerformanceModel("Vicuna_zvl256b", Vicuna_zvl256b_SchedulingFunctionSet)
    ,V_IQ_stg(2,0)
    ,V_EX_Arith_Unit_stg(5,0)
    ,V_EX_LSU_ELM_Unit_stg(2,0)
    ,regModel(this)
    ,vectorRegModel(this)
    ,staBranchPredModel(this)
    ,vectorMemModel(this)
    ,vectorMemNfModel(this)
    ,vectorArithModel(this)
    ,vectorArithWideningModel(this)
    ,vectorElmModel(this)
    ,vectorDivModel(this)
    ,vectorSignaller(this)
    ,lsuElmShiftRegister(this)
    ,divider(this)
    ,divider_u(this)
  {};

  // Single-Element Timing Variables
  uint64_t IF_stg = 0;
  uint64_t ID_stg = 0;
  uint64_t EX_stg = 0;
  uint64_t WB_stg = 0;
  uint64_t V_ID_stg = 0;
  uint64_t V_DISP_stg = 0;
  uint64_t V_EX_Arith_Unpack_Enter_stg = 0;
  uint64_t V_EX_Arith_Unpack_Leave_stg = 0;
  uint64_t V_EX_ALU_BUF_OP_stg = 0;
  uint64_t V_EX_ALU_BUF_INT_stg = 0;
  uint64_t V_EX_ALU_stg = 0;
  uint64_t V_EX_MUL_BUF_OP_stg = 0;
  uint64_t V_EX_MUL_BUF_IN_stg = 0;
  uint64_t V_EX_MUL_BUF_OUT_stg = 0;
  uint64_t V_EX_MUL_stg = 0;
  uint64_t V_EX_DIV_stg = 0;
  uint64_t V_EX_FPU_stg = 0;
  uint64_t V_EX_SLD_stg = 0;
  uint64_t V_EX_LSU_ELM_Unpack_Enter_stg = 0;
  uint64_t V_EX_LSU_ELM_Unpack_Leave_stg = 0;
  uint64_t V_EX_LSU_BUF_REQ_stg = 0;
  uint64_t V_EX_LSU_REQ_stg = 0;
  uint64_t V_EX_LSU_BUF_RESP_stg = 0;
  uint64_t V_EX_ELM_stg = 0;
  uint64_t V_EX_LSU_ELM_Pack_stg = 0;
  uint64_t V_RES_stg = 0;

  // Multi-Element Timing Variables
  MultiElementTimingVariable V_IQ_stg;
  MultiElementTimingVariable V_EX_Arith_Unit_stg;
  MultiElementTimingVariable V_EX_LSU_ELM_Unit_stg;

  // External Resource Models
  common::StandardRegisterModel regModel;
  Vicuna::VectorRegisterModel vectorRegModel;
  common::StaticBranchPredictModel staBranchPredModel;
  Vicuna::VectorMemModel vectorMemModel;
  Vicuna::VectorMemNfModel vectorMemNfModel;
  Vicuna::VectorArithModel vectorArithModel;
  Vicuna::VectorArithWideningModel vectorArithWideningModel;
  Vicuna::VectorElmModel vectorElmModel;
  Vicuna::VectorDivModel vectorDivModel;
  Vicuna::VectorSignaller vectorSignaller;
  Vicuna::LsuElmShiftRegister lsuElmShiftRegister;
  cv32e40p::DividerModel divider;
  cv32e40p::DividerUnsignedModel divider_u;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace Vicuna_zvl256b

#endif // SWEVAL_BACKENDS_VICUNA_ZVL256B_PERFORMANCE_MODEL_H