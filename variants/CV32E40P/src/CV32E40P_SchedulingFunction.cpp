/*
 * Copyright 2024 Chair of EDA, Technical University of Munich
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

#include "CV32E40P_PerformanceModel.h"

namespace CV32E40P{

SchedulingFunctionSet* CV32E40P_SchedulingFunctionSet = new SchedulingFunctionSet("CV32E40P_SchedulingFunctionSet");

static SchedulingFunction *schedulingFunction_add = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "add",
  0,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sub = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sub",
  1,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_xor = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "xor",
  2,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_or = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "or",
  3,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_and = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "and",
  4,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_slt = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "slt",
  5,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sltu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sltu",
  6,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sll = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sll",
  7,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_srl = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "srl",
  8,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sra = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sra",
  9,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_addi = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "addi",
  10,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_xori = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "xori",
  11,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_ori = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "ori",
  12,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_andi = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "andi",
  13,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_slti = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "slti",
  14,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sltiu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sltiu",
  15,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_slli = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "slli",
  16,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_srli = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "srli",
  17,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_srai = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "srai",
  18,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_auipc = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "auipc",
  19,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_lui = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lui",
  20,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_mul = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "mul",
  21,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// MUL
uint64_t n_MUL;
n_MUL = n_ID_stage + 1;
perfModel->regModel.setXd(n_MUL);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MUL, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulh = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "mulh",
  22,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulhu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "mulhu",
  23,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulhsu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "mulhsu",
  24,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
perfModel->regModel.setXd(n_MULH);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_MULH, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_div = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "div",
  25,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + perfModel->divider.getDelay();
perfModel->regModel.setXd(n_DIV);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_rem = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "rem",
  26,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + perfModel->divider.getDelay();
perfModel->regModel.setXd(n_DIV);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIV, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_divu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "divu",
  27,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + perfModel->divider_u.getDelay();
perfModel->regModel.setXd(n_DIVU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_remu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "remu",
  28,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + perfModel->divider_u.getDelay();
perfModel->regModel.setXd(n_DIVU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_DIVU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrw = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrw",
  29,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrs = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrs",
  30,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrc = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrc",
  31,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrwi = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrwi",
  32,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrsi = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrsi",
  33,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrci = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "csrrci",
  34,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
perfModel->regModel.setXd(n_CSR);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_CSR, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_sb = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sb",
  35,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_sh = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sh",
  36,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_sw = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "sw",
  37,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + 1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_lw = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lw",
  38,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_lh = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lh",
  39,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_lhu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lhu",
  40,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_lb = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lb",
  41,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_lbu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "lbu",
  42,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
perfModel->regModel.setXd(n_DPort_R);
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
perfModel->WB_stage.set(n_WB_stage);

  }
);

static SchedulingFunction *schedulingFunction_beq = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "beq",
  43,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_bne = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "bne",
  44,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_blt = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "blt",
  45,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_bge = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "bge",
  46,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_bltu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "bltu",
  47,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_bgeu = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "bgeu",
  48,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage, perfModel->regModel.getXb()});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction__def = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "_def",
  49,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);

  }
);

static SchedulingFunction *schedulingFunction_jal = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "jal",
  50,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// JumpDecoder
uint64_t n_JumpDecoder;
n_JumpDecoder = n_IF_stage + 1;
perfModel->staBranchPredModel.setPc_np(n_JumpDecoder);
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);

static SchedulingFunction *schedulingFunction_jalr = new SchedulingFunction(
  CV32E40P_SchedulingFunctionSet,
  "jalr",
  51,
  [](PerformanceModel* perfModel_){
  CV32E40P_PerformanceModel* perfModel = static_cast<CV32E40P_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->IF_stage.get();
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_IPort_R = n_IPort_R_max + 1;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter, perfModel->staBranchPredModel.getPc()});
n_PCGen = n_PCGen_max + 1;
perfModel->staBranchPredModel.setPc_p(n_PCGen);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R, n_PCGen, perfModel->ID_stage.get()});
perfModel->IF_stage.set(n_IF_stage);
// JumpDecoder
uint64_t n_JumpDecoder;
uint64_t n_JumpDecoder_max;
n_JumpDecoder_max = std::max({n_IF_stage, perfModel->regModel.getXa()});
n_JumpDecoder = n_JumpDecoder_max + 1;
perfModel->staBranchPredModel.setPc_np(n_JumpDecoder);
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder, perfModel->EX_stage.get()});
perfModel->ID_stage.set(n_ID_stage);
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_ALU, perfModel->WB_stage.get()});
perfModel->EX_stage.set(n_EX_stage);

  }
);


} // namespace CV32E40P