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

#include "Vicuna_PerformanceModel.h"

namespace Vicuna{

SchedulingFunctionSet* Vicuna_SchedulingFunctionSet = new SchedulingFunctionSet("Vicuna_SchedulingFunctionSet");

static SchedulingFunction *schedulingFunction_add = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "add",
  0,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sub = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sub",
  1,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_xor = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "xor",
  2,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_or = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "or",
  3,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_and = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "and",
  4,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_slt = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "slt",
  5,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sltu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sltu",
  6,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sll = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sll",
  7,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_srl = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "srl",
  8,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sra = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sra",
  9,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_addi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "addi",
  10,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_xori = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "xori",
  11,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_ori = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "ori",
  12,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_andi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "andi",
  13,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_slti = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "slti",
  14,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sltiu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sltiu",
  15,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_slli = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "slli",
  16,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_srli = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "srli",
  17,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_srai = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "srai",
  18,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_auipc = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "auipc",
  19,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lui = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lui",
  20,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_mul = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "mul",
  21,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MUL, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulh = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "mulh",
  22,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulhu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "mulhu",
  23,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_mulhsu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "mulhsu",
  24,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_div = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "div",
  25,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_rem = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "rem",
  26,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_divu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "divu",
  27,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_remu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "remu",
  28,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrw = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrw",
  29,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrs = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrs",
  30,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrc = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrc",
  31,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrwi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrwi",
  32,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrsi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrsi",
  33,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_csrrci = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "csrrci",
  34,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sb = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sb",
  35,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sh = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sh",
  36,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_sw = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "sw",
  37,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lw = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lw",
  38,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lh = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lh",
  39,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lhu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lhu",
  40,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lb = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lb",
  41,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_lbu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "lbu",
  42,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_uA_EX_Req_MemArbiter_Signal, n_LSU});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_beq = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "beq",
  43,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_bne = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "bne",
  44,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_blt = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "blt",
  45,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_bge = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "bge",
  46,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_bltu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "bltu",
  47,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_bgeu = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "bgeu",
  48,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_vle32_v = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vle32_v",
  49,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_LSU_substage_last + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
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
  Vicuna_SchedulingFunctionSet,
  "vle16_v",
  50,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_LSU_substage_last + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
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
  Vicuna_SchedulingFunctionSet,
  "vle8_v",
  51,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_RegWriter
uint64_t n_V_LSU_RegWriter;
n_V_LSU_RegWriter = n_V_EX_LSU_substage_last + 1;
perfModel->vectorRegModel.setVdGroupLoad(n_V_LSU_RegWriter);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_RegWriter, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_RegWriter;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
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

static SchedulingFunction *schedulingFunction_vse32_u = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vse32_u",
  52,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs3()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_MemArbiter_Signaller;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
// V_DPort_W
uint64_t n_V_DPort_W;
n_V_DPort_W = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_W, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vse16_u = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vse16_u",
  53,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs3()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_MemArbiter_Signaller;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
// V_DPort_W
uint64_t n_V_DPort_W;
n_V_DPort_W = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_W, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vse8_u = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vse8_u",
  54,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs3
uint64_t n_uA_V_DISP_Req_Vs3;
n_uA_V_DISP_Req_Vs3 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs3()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs3, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_LSU_substage_fifo});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// V_LSU_Fifo
uint64_t n_V_LSU_Fifo;
n_V_LSU_Fifo = n_V_DISP_stage + 9;
// V_EX_LSU_substage_fifo
uint64_t n_V_EX_LSU_substage_fifo;
n_V_EX_LSU_substage_fifo = std::max({n_V_LSU_Fifo, perfModel->V_EX_LSU_substage_last});
perfModel->V_EX_LSU_substage_fifo = n_V_EX_LSU_substage_fifo;
// uA_V_LSU_Require_Free_LSU
uint64_t n_uA_V_LSU_Require_Free_LSU;
n_uA_V_LSU_Require_Free_LSU = std::max({n_V_EX_LSU_substage_fifo, perfModel->vectorSignaller.getXifSignalNext()});
// V_EX_LSU_substage_last
uint64_t n_V_EX_LSU_substage_last;
n_V_EX_LSU_substage_last = std::max({n_uA_V_LSU_Require_Free_LSU, perfModel->V_EX_LSU_substage_mem});
perfModel->V_EX_LSU_substage_last = n_V_EX_LSU_substage_last;
// V_LSU_Load
uint64_t n_V_LSU_Load;
n_V_LSU_Load = n_V_EX_LSU_substage_last + perfModel->vectorMemModel.getDelay();
perfModel->vectorSignaller.setXifSignal(n_V_LSU_Load);
// V_LSU_MemArbiter_Signaller
uint64_t n_V_LSU_MemArbiter_Signaller;
n_V_LSU_MemArbiter_Signaller = n_V_EX_LSU_substage_last + 1;
perfModel->vectorSignaller.setMemArbiterSignal(n_V_LSU_MemArbiter_Signaller);
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_LSU_Load, n_V_LSU_MemArbiter_Signaller, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_LSU_substage_mem = n_V_EX_stage;
// V_EX_LSU_substage_mem
uint64_t n_V_EX_LSU_substage_mem = n_V_LSU_MemArbiter_Signaller;
perfModel->V_EX_LSU_substage_mem = n_V_EX_LSU_substage_mem;
// V_DPort_W
uint64_t n_V_DPort_W;
n_V_DPort_W = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_DPort_W, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdiv_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vdiv_vv",
  55,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdivu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vdivu_vv",
  56,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vremu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vremu_vv",
  57,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrem_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrem_vv",
  58,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdiv_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vdiv_vx",
  59,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vdivu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vdivu_vx",
  60,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vremu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vremu_vx",
  61,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrem_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrem_vx",
  62,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_Divider
uint64_t n_V_Divider;
n_V_Divider = n_V_EX_ALU_Unpack_substage + perfModel->vectorDividerModel.getDelay();
// V_Divider_RegWriter
uint64_t n_V_Divider_RegWriter;
n_V_Divider_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupDivider(n_V_Divider_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_Divider, n_V_Divider_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmv_v_i = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmv_v_i",
  63,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadd_vv",
  64,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsub_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsub_vv",
  65,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vvm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadc_vvm",
  66,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmadc_vv",
  67,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsbc_vvm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsbc_vvm",
  68,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsbc_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsbc_vv",
  69,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vand_vv",
  70,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vor_vv",
  71,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vxor_vv",
  72,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsll_vv",
  73,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsrl_vv",
  74,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsra_vv",
  75,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmseq_vv",
  76,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsne_vv",
  77,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsltu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsltu_vv",
  78,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmslt_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmslt_vv",
  79,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsleu_vv",
  80,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsle_vv",
  81,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vminu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vminu_vv",
  82,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmin_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmin_vv",
  83,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmaxu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmaxu_vv",
  84,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmax_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmax_vv",
  85,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmul_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmul_vv",
  86,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulh_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulh_vv",
  87,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulhu_vv",
  88,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhsu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulhsu_vv",
  89,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmul_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmul_vv",
  90,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmulu_vv",
  91,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulsu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmulsu_vv",
  92,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmacc_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmacc_vv",
  93,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsac_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vnmsac_vv",
  94,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadd_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmadd_vv",
  95,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsub_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vnmsub_vv",
  96,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmaccu_vv",
  97,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmacc_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmacc_vv",
  98,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccsu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmaccsu_vv",
  99,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vvm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmerge_vvm",
  100,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsaddu_vv",
  101,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsadd_vv",
  102,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssubu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssubu_vv",
  103,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssub_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssub_vv",
  104,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaaddu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vaaddu_vv",
  105,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaadd_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vaadd_vv",
  106,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasubu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vasubu_vv",
  107,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasub_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vasub_vv",
  108,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsmul_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsmul_vv",
  109,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssrl_vv",
  110,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssra_vv",
  111,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrgather_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrgather_vv",
  112,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrgatherei16_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrgatherei16_vv",
  113,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwaddu_vv",
  114,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsubu_vv",
  115,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwadd_vv",
  116,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsub_vv",
  117,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_w_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwaddu_w_vv",
  118,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_w_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsubu_w_vv",
  119,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_w_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwadd_w_vv",
  120,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_w_vv = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsub_w_vv",
  121,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs1
uint64_t n_uA_V_DISP_Req_Vs1;
n_uA_V_DISP_Req_Vs1 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs1()});
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs1, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadd_vx",
  122,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsub_vx",
  123,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrsub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrsub_vx",
  124,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vxm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadc_vxm",
  125,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmadc_vx",
  126,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsbc_vxm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsbc_vxm",
  127,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsbc_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsbc_vx",
  128,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vand_vx",
  129,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vor_vx",
  130,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vxor_vx",
  131,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsll_vx",
  132,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsrl_vx",
  133,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsra_vx",
  134,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmseq_vx",
  135,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsne_vx",
  136,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsltu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsltu_vx",
  137,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmslt_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmslt_vx",
  138,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsleu_vx",
  139,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsle_vx",
  140,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgtu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsgtu_vx",
  141,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgt_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsgt_vx",
  142,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vminu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vminu_vx",
  143,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmin_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmin_vx",
  144,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmaxu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmaxu_vx",
  145,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmax_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmax_vx",
  146,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmul_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmul_vx",
  147,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulh_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulh_vx",
  148,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulhu_vx",
  149,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmulhsu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmulhsu_vx",
  150,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmul_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmul_vx",
  151,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmulu_vx",
  152,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmulsu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmulsu_vx",
  153,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmacc_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmacc_vx",
  154,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsac_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vnmsac_vx",
  155,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadd_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmadd_vx",
  156,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vnmsub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vnmsub_vx",
  157,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmaccu_vx",
  158,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmacc_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmacc_vx",
  159,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccsu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmaccsu_vx",
  160,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwmaccus_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwmaccus_vx",
  161,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vxm = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmerge_vxm",
  162,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsaddu_vx",
  163,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsadd_vx",
  164,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssubu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssubu_vx",
  165,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssub_vx",
  166,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaaddu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vaaddu_vx",
  167,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vaadd_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vaadd_vx",
  168,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasubu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vasubu_vx",
  169,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vasub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vasub_vx",
  170,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsmul_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsmul_vx",
  171,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssrl_vx",
  172,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssra_vx",
  173,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslideup_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslideup_vx",
  174,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslidedown_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslidedown_vx",
  175,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslide1up_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslide1up_vx",
  176,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslide1down_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslide1down_vx",
  177,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwaddu_vx",
  178,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsubu_vx",
  179,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwadd_vx",
  180,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsub_vx",
  181,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwaddu_w_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwaddu_w_vx",
  182,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsubu_w_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsubu_w_vx",
  183,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwadd_w_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwadd_w_vx",
  184,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vwsub_w_vx = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vwsub_w_vx",
  185,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadd_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadd_vi",
  186,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vrsub_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vrsub_vi",
  187,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vadc_vim = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vadc_vim",
  188,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmadc_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmadc_vi",
  189,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vand_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vand_vi",
  190,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vor_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vor_vi",
  191,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vxor_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vxor_vi",
  192,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsll_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsll_vi",
  193,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsrl_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsrl_vi",
  194,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsra_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsra_vi",
  195,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmseq_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmseq_vi",
  196,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsne_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsne_vi",
  197,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsleu_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsleu_vi",
  198,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsle_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsle_vi",
  199,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgtu_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsgtu_vi",
  200,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmsgt_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmsgt_vi",
  201,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vmerge_vim = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vmerge_vim",
  202,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsaddu_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsaddu_vi",
  203,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsadd_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsadd_vi",
  204,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssrl_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssrl_vi",
  205,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vssra_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vssra_vi",
  206,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslideup_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslideup_vi",
  207,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vslidedown_vi = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vslidedown_vi",
  208,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->V_DISP_stage.get(2), perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Dispatcher
uint64_t n_Dispatcher;
n_Dispatcher = n_ID_stage + 1;
// uA_V_DISP_Req_Vs2
uint64_t n_uA_V_DISP_Req_Vs2;
n_uA_V_DISP_Req_Vs2 = std::max({n_ID_stage, perfModel->vectorRegModel.getVs2()});
// uA_V_DISP_Req_MaxVdGroup
uint64_t n_uA_V_DISP_Req_MaxVdGroup;
n_uA_V_DISP_Req_MaxVdGroup = std::max({n_ID_stage, perfModel->vectorRegModel.getMaxVdGroup()});
// uA_V_DISP_Req_Vset_Signal
uint64_t n_uA_V_DISP_Req_Vset_Signal;
n_uA_V_DISP_Req_Vset_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getVsetSignal()});
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// V_DISP_stage
uint64_t n_V_DISP_stage;
n_V_DISP_stage = std::max({n_Dispatcher, n_uA_V_DISP_Req_Vs2, n_uA_V_DISP_Req_MaxVdGroup, n_uA_V_DISP_Req_Vset_Signal, perfModel->V_DISP_stage.get(1), perfModel->V_EX_stage.get(2), perfModel->V_EX_ALU_Unpack_substage});
perfModel->V_DISP_stage.set(n_V_DISP_stage);
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// V_ALU_Unpacker
uint64_t n_V_ALU_Unpacker;
n_V_ALU_Unpacker = n_V_DISP_stage + perfModel->packUnpack.getDelay();
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// V_EX_ALU_Unpack_substage
uint64_t n_V_EX_ALU_Unpack_substage;
n_V_EX_ALU_Unpack_substage = std::max({n_V_ALU_Unpacker, perfModel->V_EX_ALU_Op_substage});
perfModel->V_EX_ALU_Unpack_substage = n_V_EX_ALU_Unpack_substage;
// R_RET_stage
uint64_t n_R_RET_stage = n_R_RET_Retirer;
perfModel->R_RET_stage = n_R_RET_stage;
// V_ALU
uint64_t n_V_ALU;
n_V_ALU = n_V_EX_ALU_Unpack_substage + perfModel->vectorAluModel.getDelay();
// V_ALU_RegWriter
uint64_t n_V_ALU_RegWriter;
n_V_ALU_RegWriter = n_V_EX_ALU_Unpack_substage + 1;
perfModel->vectorRegModel.setVdGroupAlu(n_V_ALU_RegWriter);
// V_EX_ALU_Op_substage
uint64_t n_V_EX_ALU_Op_substage;
n_V_EX_ALU_Op_substage = std::max({n_V_ALU, n_V_ALU_RegWriter, perfModel->V_EX_ALU_Pack_substage});
perfModel->V_EX_ALU_Op_substage = n_V_EX_ALU_Op_substage;
// V_ALU_Packer
uint64_t n_V_ALU_Packer;
n_V_ALU_Packer = n_V_EX_ALU_Op_substage + perfModel->packUnpack.getDelay();
// V_EX_stage
uint64_t n_V_EX_stage;
n_V_EX_stage = std::max({n_V_ALU_Packer, perfModel->V_EX_stage.get(1), perfModel->V_WB_stage});
perfModel->V_EX_stage.set(n_V_EX_stage);
perfModel->V_EX_ALU_Pack_substage = n_V_EX_stage;
// V_WB_Pass
uint64_t n_V_WB_Pass;
n_V_WB_Pass = n_V_EX_stage + 1;
// V_WB_stage
uint64_t n_V_WB_stage;
n_V_WB_stage = std::max({n_V_WB_Pass, perfModel->V_RES_stage});
perfModel->V_WB_stage = n_V_WB_stage;
// V_Result
uint64_t n_V_Result;
n_V_Result = n_V_WB_stage + 1;
// V_RES_stage
uint64_t n_V_RES_stage = n_V_Result;
perfModel->V_RES_stage = n_V_RES_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetivli = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsetivli",
  209,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage, perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage = n_Vset;
perfModel->EX_stage = n_EX_stage;
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_R_SIG_stage + 2;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// R_RET_stage
uint64_t n_R_RET_stage;
n_R_RET_stage = std::max({n_R_RET_Retirer, n_Vset_Signaller});
perfModel->R_RET_stage = n_R_RET_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetvli = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsetvli",
  210,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, perfModel->EX_stage, perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage = n_Vset;
perfModel->EX_stage = n_EX_stage;
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_R_SIG_stage + 2;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// R_RET_stage
uint64_t n_R_RET_stage;
n_R_RET_stage = std::max({n_R_RET_Retirer, n_Vset_Signaller});
perfModel->R_RET_stage = n_R_RET_stage;

  }
);

static SchedulingFunction *schedulingFunction_vsetvl = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "vsetvl",
  211,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
n_ID_stage = std::max({n_Decoder, n_uA_ID_Req_SReg_A, n_uA_ID_Req_SReg_B, perfModel->EX_stage, perfModel->R_SIG_stage.get(100)});
perfModel->ID_stage = n_ID_stage;
// Vset
uint64_t n_Vset;
n_Vset = n_ID_stage + 1;
perfModel->regModel.setXd(n_Vset);
// uA_R_SIG_Req_Xif_Signal
uint64_t n_uA_R_SIG_Req_Xif_Signal;
n_uA_R_SIG_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// R_SIG_Queue
uint64_t n_R_SIG_Queue;
n_R_SIG_Queue = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage = n_Vset;
perfModel->EX_stage = n_EX_stage;
// R_SIG_stage
uint64_t n_R_SIG_stage;
n_R_SIG_stage = std::max({n_uA_R_SIG_Req_Xif_Signal, n_R_SIG_Queue, perfModel->R_SIG_stage.get(1), perfModel->R_RET_stage});
perfModel->R_SIG_stage.set(n_R_SIG_stage);
// R_RET_Retirer
uint64_t n_R_RET_Retirer;
n_R_RET_Retirer = n_R_SIG_stage + 1;
// Vset_Signaller
uint64_t n_Vset_Signaller;
n_Vset_Signaller = n_R_SIG_stage + 2;
perfModel->vectorSignaller.setVsetSignal(n_Vset_Signaller);
// R_RET_stage
uint64_t n_R_RET_stage;
n_R_RET_stage = std::max({n_R_RET_Retirer, n_Vset_Signaller});
perfModel->R_RET_stage = n_R_RET_stage;

  }
);

static SchedulingFunction *schedulingFunction__def = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "_def",
  212,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
  Vicuna_SchedulingFunctionSet,
  "jal",
  213,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);

static SchedulingFunction *schedulingFunction_jalr = new SchedulingFunction(
  Vicuna_SchedulingFunctionSet,
  "jalr",
  214,
  [](PerformanceModel* perfModel_){
  Vicuna_PerformanceModel* perfModel = static_cast<Vicuna_PerformanceModel*>(perfModel_);
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
// uA_EX_Req_Xif_Signal
uint64_t n_uA_EX_Req_Xif_Signal;
n_uA_EX_Req_Xif_Signal = std::max({n_ID_stage, perfModel->vectorSignaller.getXifSignalNext()});
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, n_uA_EX_Req_Xif_Signal});
perfModel->EX_stage = n_EX_stage;

  }
);


} // namespace Vicuna