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


#include <algorithm>
#include <cstdint>

#include "PerformanceModel.h"

#include "Vicuna_zvl64b_PerformanceModel.h"

namespace Vicuna_zvl64b{

SchedulingFunctionSet* Vicuna_zvl64b_SchedulingFunctionSet = new SchedulingFunctionSet("Vicuna_zvl64b_SchedulingFunctionSet");

static SchedulingFunction *schedulingFunction_add = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "add",
  0,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sub = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sub",
  1,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_xor = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "xor",
  2,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_or = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "or",
  3,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_and = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "and",
  4,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_slt = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "slt",
  5,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sltu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sltu",
  6,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sll = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sll",
  7,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_srl = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "srl",
  8,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sra = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sra",
  9,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_addi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "addi",
  10,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_xori = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "xori",
  11,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_ori = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "ori",
  12,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_andi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "andi",
  13,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_slti = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "slti",
  14,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sltiu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sltiu",
  15,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_slli = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "slli",
  16,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_srli = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "srli",
  17,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_srai = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "srai",
  18,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_auipc = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "auipc",
  19,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lui = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lui",
  20,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_mul = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "mul",
  21,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// MUL
uint64_t n_MUL;
n_MUL = n_ID_stage + 1;
perfModel->regModel.setXd(n_MUL);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MUL, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulh = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "mulh",
  22,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulhu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "mulhu",
  23,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulhsu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "mulhsu",
  24,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_div = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "div",
  25,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + perfModel->divider.getDelay();
perfModel->regModel.setXd(n_DIV);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_rem = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "rem",
  26,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + perfModel->divider.getDelay();
perfModel->regModel.setXd(n_DIV);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_divu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "divu",
  27,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + perfModel->divider_u.getDelay();
perfModel->regModel.setXd(n_DIVU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_remu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "remu",
  28,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + perfModel->divider_u.getDelay();
perfModel->regModel.setXd(n_DIVU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrw = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrw",
  29,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrs = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrs",
  30,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrc = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrc",
  31,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrwi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrwi",
  32,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrsi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrsi",
  33,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrci = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "csrrci",
  34,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sb = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sb",
  35,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sh = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sh",
  36,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_sw = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "sw",
  37,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lw = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lw",
  38,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lh = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lh",
  39,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lhu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lhu",
  40,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lb = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lb",
  41,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_lbu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "lbu",
  42,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// uA_EX_Req_MemArbiter_Signal
uint64_t n_uA_EX_Req_MemArbiter_Signal;
n_uA_EX_Req_MemArbiter_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getMemArbiterSignal()});
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_beq = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "beq",
  43,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_bne = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "bne",
  44,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_blt = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "blt",
  45,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_bge = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "bge",
  46,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_bltu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "bltu",
  47,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_bgeu = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "bgeu",
  48,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_vle32_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vle32_v",
  49,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Require_Free_LSU
uint64_t n_uA_V_DISP_Require_Free_LSU;
n_uA_V_DISP_Require_Free_LSU = std::max({n_V_IQ_stage, perfModel->vectorSignaller.getXifSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Require_Free_LSU, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_EX_Unpack_Pass
uint64_t n_V_EX_Unpack_Pass;
n_V_EX_Unpack_Pass = n_V_DISP_stage + 1;
// V_EX_Unpack_substage
uint64_t n_V_EX_Unpack_substage;
n_V_EX_Unpack_substage = std::max({n_V_EX_Unpack_Pass, perfModel->V_EX_Unit_substage, perfModel->V_EX_LSU_ELM_substage, perfModel->V_EX_LSU_Mem_substage});
perfModel->V_EX_Unpack_substage = n_V_EX_Unpack_substage;
// V_LSU_Mem
uint64_t n_V_LSU_Mem;
n_V_LSU_Mem = n_V_EX_Unpack_substage + perfModel->vectorMemModel.getDelay();
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_Unpack_substage + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_Unit_substage
uint64_t n_V_EX_Unit_substage;
n_V_EX_Unit_substage = std::max({n_V_LSU_Mem, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_Pack_substage});
perfModel->V_EX_Unit_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_Unit_substage;
// V_EX_LSU_Mem_substage
uint64_t n_V_EX_LSU_Mem_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_Mem_substage;
// V_EX_LSU_ELM_substage
uint64_t n_V_EX_LSU_ELM_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_LSU_ELM_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_ELM_substage;
// V_EX_Packer_LSU
uint64_t n_V_EX_Packer_LSU;
n_V_EX_Packer_LSU = n_V_EX_Unit_substage + perfModel->packUnpackLsu.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_EX_Packer_LSU);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_EX_Packer_LSU, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_Pack_substage = n_V_EX_stage;
// V_DPort_R
uint64_t n_V_DPort_R;
n_V_DPort_R = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_R, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vle16_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vle16_v",
  50,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Require_Free_LSU
uint64_t n_uA_V_DISP_Require_Free_LSU;
n_uA_V_DISP_Require_Free_LSU = std::max({n_V_IQ_stage, perfModel->vectorSignaller.getXifSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Require_Free_LSU, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_EX_Unpack_Pass
uint64_t n_V_EX_Unpack_Pass;
n_V_EX_Unpack_Pass = n_V_DISP_stage + 1;
// V_EX_Unpack_substage
uint64_t n_V_EX_Unpack_substage;
n_V_EX_Unpack_substage = std::max({n_V_EX_Unpack_Pass, perfModel->V_EX_Unit_substage, perfModel->V_EX_LSU_ELM_substage, perfModel->V_EX_LSU_Mem_substage});
perfModel->V_EX_Unpack_substage = n_V_EX_Unpack_substage;
// V_LSU_Mem
uint64_t n_V_LSU_Mem;
n_V_LSU_Mem = n_V_EX_Unpack_substage + perfModel->vectorMemModel.getDelay();
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_Unpack_substage + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_Unit_substage
uint64_t n_V_EX_Unit_substage;
n_V_EX_Unit_substage = std::max({n_V_LSU_Mem, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_Pack_substage});
perfModel->V_EX_Unit_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_Unit_substage;
// V_EX_LSU_Mem_substage
uint64_t n_V_EX_LSU_Mem_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_Mem_substage;
// V_EX_LSU_ELM_substage
uint64_t n_V_EX_LSU_ELM_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_LSU_ELM_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_ELM_substage;
// V_EX_Packer_LSU
uint64_t n_V_EX_Packer_LSU;
n_V_EX_Packer_LSU = n_V_EX_Unit_substage + perfModel->packUnpackLsu.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_EX_Packer_LSU);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_EX_Packer_LSU, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_Pack_substage = n_V_EX_stage;
// V_DPort_R
uint64_t n_V_DPort_R;
n_V_DPort_R = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_R, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vle8_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vle8_v",
  51,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Require_Free_LSU
uint64_t n_uA_V_DISP_Require_Free_LSU;
n_uA_V_DISP_Require_Free_LSU = std::max({n_V_IQ_stage, perfModel->vectorSignaller.getXifSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Require_Free_LSU, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_EX_Unpack_Pass
uint64_t n_V_EX_Unpack_Pass;
n_V_EX_Unpack_Pass = n_V_DISP_stage + 1;
// V_EX_Unpack_substage
uint64_t n_V_EX_Unpack_substage;
n_V_EX_Unpack_substage = std::max({n_V_EX_Unpack_Pass, perfModel->V_EX_Unit_substage, perfModel->V_EX_LSU_ELM_substage, perfModel->V_EX_LSU_Mem_substage});
perfModel->V_EX_Unpack_substage = n_V_EX_Unpack_substage;
// V_LSU_Mem
uint64_t n_V_LSU_Mem;
n_V_LSU_Mem = n_V_EX_Unpack_substage + perfModel->vectorMemModel.getDelay();
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_Unpack_substage + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_Unit_substage
uint64_t n_V_EX_Unit_substage;
n_V_EX_Unit_substage = std::max({n_V_LSU_Mem, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_Pack_substage});
perfModel->V_EX_Unit_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_Unit_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_Unit_substage;
// V_EX_LSU_Mem_substage
uint64_t n_V_EX_LSU_Mem_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_Mem_substage;
// V_EX_LSU_ELM_substage
uint64_t n_V_EX_LSU_ELM_substage = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_ELM_substage = n_V_EX_LSU_ELM_substage;
perfModel->V_EX_LSU_Mem_substage = n_V_EX_LSU_ELM_substage;
// V_EX_Packer_LSU
uint64_t n_V_EX_Packer_LSU;
n_V_EX_Packer_LSU = n_V_EX_Unit_substage + perfModel->packUnpackLsu.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_EX_Packer_LSU);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_EX_Packer_LSU, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_Pack_substage = n_V_EX_stage;
// V_DPort_R
uint64_t n_V_DPort_R;
n_V_DPort_R = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_R, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vl8r_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vl8r_v",
  52,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vl16r_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vl16r_v",
  53,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vl32r_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vl32r_v",
  54,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vse32_u = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vse32_u",
  55,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs3()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vse16_u = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vse16_u",
  56,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs3()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vse8_u = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vse8_u",
  57,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs3()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vsr_v = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsr_v",
  58,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs3()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);

  }
);

static SchedulingFunction *schedulingFunction_vdiv_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vdiv_vv",
  59,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdivu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vdivu_vv",
  60,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vremu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vremu_vv",
  61,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrem_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vrem_vv",
  62,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdiv_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vdiv_vx",
  63,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdivu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vdivu_vx",
  64,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vremu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vremu_vx",
  65,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrem_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vrem_vx",
  66,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vzext_vf2 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vzext_vf2",
  67,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsext_vf2 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsext_vf2",
  68,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vzext_vf4 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vzext_vf4",
  69,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsext_vf4 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsext_vf4",
  70,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vzext_vf8 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vzext_vf8",
  71,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsext_vf8 = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsext_vf8",
  72,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmv_v_i = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmv_v_i",
  73,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_MaskReg
uint64_t n_uA_V_DISP_Req_MaskReg;
n_uA_V_DISP_Req_MaskReg = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaskReg()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_MaskReg, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vcompress_vm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vcompress_vm",
  74,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadd_vv",
  75,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsub_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsub_vv",
  76,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vvm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadc_vvm",
  77,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmadc_vv",
  78,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsbc_vvm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsbc_vvm",
  79,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsbc_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsbc_vv",
  80,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vand_vv",
  81,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vor_vv",
  82,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vxor_vv",
  83,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsll_vv",
  84,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsrl_vv",
  85,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsra_vv",
  86,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmseq_vv",
  87,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsne_vv",
  88,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsltu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsltu_vv",
  89,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmslt_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmslt_vv",
  90,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsleu_vv",
  91,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsle_vv",
  92,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vminu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vminu_vv",
  93,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmin_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmin_vv",
  94,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmaxu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmaxu_vv",
  95,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmax_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmax_vv",
  96,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmul_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmul_vv",
  97,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulh_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulh_vv",
  98,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulhu_vv",
  99,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhsu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulhsu_vv",
  100,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmacc_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmacc_vv",
  101,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsac_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vnmsac_vv",
  102,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadd_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmadd_vv",
  103,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsub_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vnmsub_vv",
  104,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vvm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmerge_vvm",
  105,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsaddu_vv",
  106,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsadd_vv",
  107,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssubu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssubu_vv",
  108,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssub_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssub_vv",
  109,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaaddu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vaaddu_vv",
  110,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaadd_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vaadd_vv",
  111,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasubu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vasubu_vv",
  112,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasub_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vasub_vv",
  113,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsmul_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsmul_vv",
  114,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssrl_vv",
  115,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssra_vv",
  116,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwaddu_vv",
  117,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsubu_vv",
  118,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwadd_vv",
  119,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsub_vv",
  120,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_w_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwaddu_w_vv",
  121,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_w_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsubu_w_vv",
  122,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_w_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwadd_w_vv",
  123,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_w_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsub_w_vv",
  124,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmul_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmul_vv",
  125,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmulu_vv",
  126,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulsu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmulsu_vv",
  127,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmaccu_vv",
  128,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmacc_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmacc_vv",
  129,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccsu_vv = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmaccsu_vv",
  130,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadd_vx",
  131,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsub_vx",
  132,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrsub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vrsub_vx",
  133,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vxm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadc_vxm",
  134,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmadc_vx",
  135,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsbc_vxm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsbc_vxm",
  136,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsbc_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsbc_vx",
  137,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vand_vx",
  138,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vor_vx",
  139,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vxor_vx",
  140,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsll_vx",
  141,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsrl_vx",
  142,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsra_vx",
  143,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmseq_vx",
  144,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsne_vx",
  145,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsltu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsltu_vx",
  146,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmslt_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmslt_vx",
  147,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsleu_vx",
  148,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsle_vx",
  149,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgtu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsgtu_vx",
  150,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgt_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsgt_vx",
  151,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vminu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vminu_vx",
  152,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmin_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmin_vx",
  153,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmaxu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmaxu_vx",
  154,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmax_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmax_vx",
  155,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmul_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmul_vx",
  156,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulh_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulh_vx",
  157,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulhu_vx",
  158,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhsu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmulhsu_vx",
  159,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmul_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmul_vx",
  160,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmulu_vx",
  161,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulsu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmulsu_vx",
  162,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmacc_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmacc_vx",
  163,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsac_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vnmsac_vx",
  164,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadd_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmadd_vx",
  165,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vnmsub_vx",
  166,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmaccu_vx",
  167,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmacc_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmacc_vx",
  168,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccsu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmaccsu_vx",
  169,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccus_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwmaccus_vx",
  170,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vxm = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmerge_vxm",
  171,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsaddu_vx",
  172,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsadd_vx",
  173,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssubu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssubu_vx",
  174,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssub_vx",
  175,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaaddu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vaaddu_vx",
  176,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaadd_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vaadd_vx",
  177,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasubu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vasubu_vx",
  178,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vasub_vx",
  179,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsmul_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsmul_vx",
  180,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssrl_vx",
  181,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssra_vx",
  182,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslideup_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslideup_vx",
  183,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslidedown_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslidedown_vx",
  184,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslide1up_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslide1up_vx",
  185,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslide1down_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslide1down_vx",
  186,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwaddu_vx",
  187,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsubu_vx",
  188,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwadd_vx",
  189,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsub_vx",
  190,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_w_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwaddu_w_vx",
  191,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_w_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsubu_w_vx",
  192,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_w_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwadd_w_vx",
  193,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_w_vx = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vwsub_w_vx",
  194,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadd_vi",
  195,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrsub_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vrsub_vi",
  196,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vim = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vadc_vim",
  197,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmadc_vi",
  198,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vand_vi",
  199,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vor_vi",
  200,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vxor_vi",
  201,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsll_vi",
  202,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsrl_vi",
  203,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsra_vi",
  204,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmseq_vi",
  205,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsne_vi",
  206,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsleu_vi",
  207,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsle_vi",
  208,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgtu_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsgtu_vi",
  209,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgt_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmsgt_vi",
  210,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vim = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vmerge_vim",
  211,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsaddu_vi",
  212,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsadd_vi",
  213,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssrl_vi",
  214,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vssra_vi",
  215,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslideup_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslideup_vi",
  216,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslidedown_vi = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vslidedown_vi",
  217,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignal
uint64_t n_uA_OFF_IQ_Req_XifSignal;
n_uA_OFF_IQ_Req_XifSignal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignal()});
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1), perfModel->V_DISP_stage.get(2)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignal, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_V_IQ_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_V_IQ_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2)});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage = n_OFF_SIG_Retirer;
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetivli = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsetivli",
  218,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignalNext
uint64_t n_uA_OFF_IQ_Req_XifSignalNext;
n_uA_OFF_IQ_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_Vset, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignalNext, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage;
n_OFF_SIG_stage = std::max({n_OFF_SIG_Retirer, n_Vset_Signaller});
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetvli = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsetvli",
  219,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignalNext
uint64_t n_uA_OFF_IQ_Req_XifSignalNext;
n_uA_OFF_IQ_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_Vset, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignalNext, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage;
n_OFF_SIG_stage = std::max({n_OFF_SIG_Retirer, n_Vset_Signaller});
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetvl = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "vsetvl",
  220,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_ID_Req_SReg_A
uint64_t n_uA_ID_Req_SReg_A;
n_uA_ID_Req_SReg_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_ID_Req_SReg_B
uint64_t n_uA_ID_Req_SReg_B;
n_uA_ID_Req_SReg_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage, perfModel->V_IQ_stage.get(2), perfModel->OFF_IQ_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// V_IQ_Queue
uint64_t n_V_IQ_Queue;
n_V_IQ_Queue = n_ID_stage + 1;
// OFF_IQ_Queue
uint64_t n_OFF_IQ_Queue;
n_OFF_IQ_Queue = n_ID_stage + 1;
// uA_OFF_IQ_Req_XifSignalNext
uint64_t n_uA_OFF_IQ_Req_XifSignalNext;
n_uA_OFF_IQ_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_Vset, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// V_IQ_stage
uint64_t n_V_IQ_stage;
n_V_IQ_stage = std::max({n_V_IQ_Queue, perfModel->V_IQ_stage.get(1)});
perfModel->V_IQ_stage.set(n_V_IQ_stage);
// OFF_IQ_stage
uint64_t n_OFF_IQ_stage;
n_OFF_IQ_stage = std::max({n_OFF_IQ_Queue, n_uA_OFF_IQ_Req_XifSignalNext, perfModel->OFF_IQ_stage.get(1), perfModel->OFF_SIG_stage});
perfModel->OFF_IQ_stage.set(n_OFF_IQ_stage);
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// OFF_SIG_Retirer
uint64_t n_OFF_SIG_Retirer;
n_OFF_SIG_Retirer = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setXifSignal(n_OFF_SIG_Retirer);
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_OFF_IQ_stage + 1;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;
// OFF_SIG_stage
uint64_t n_OFF_SIG_stage;
n_OFF_SIG_stage = std::max({n_OFF_SIG_Retirer, n_Vset_Signaller});
perfModel->OFF_SIG_stage = n_OFF_SIG_stage;

  }
);

static SchedulingFunction *schedulingFunction__def = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "_def",
  221,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen});
perfModel->IF_stage = n_IF_stage;

  }
);

static SchedulingFunction *schedulingFunction_jal = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "jal",
  222,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
n_JumpDecoder = n_IF_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_JumpDecoder);
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);

static SchedulingFunction *schedulingFunction_jalr = new SchedulingFunction(
  Vicuna_zvl64b_SchedulingFunctionSet,
  "jalr",
  223,
  [](PerformanceModel* perfModel_){
  Vicuna_zvl64b_PerformanceModel* perfModel = static_cast<Vicuna_zvl64b_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage});
perfModel->IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
uint64_t n_JumpDecoder_max;
n_JumpDecoder_max = std::max({n_IF_stage, perfModel->regModel.getXa()});
n_JumpDecoder = n_JumpDecoder_max + 1;
perfModel->staBranchPredModel.setPc_np(n_JumpDecoder);
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder, perfModel->EX_stage});
perfModel->ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// uA_EX_Req_XifSignalNext
uint64_t n_uA_EX_Req_XifSignalNext;
n_uA_EX_Req_XifSignalNext = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_XifSignalNext, perfModel->WB_stage});
perfModel->EX_stage = n_EX_stage;
// S_Retire
uint64_t n_S_Retire;
n_S_Retire = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_S_Retire;
perfModel->WB_stage = n_WB_stage;

  }
);


} // namespace Vicuna_zvl64b