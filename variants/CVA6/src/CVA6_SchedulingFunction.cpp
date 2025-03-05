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

#include "CVA6_PerformanceModel.h"

namespace CVA6{

SchedulingFunctionSet* CVA6_SchedulingFunctionSet = new SchedulingFunctionSet("CVA6_SchedulingFunctionSet");

static SchedulingFunction *schedulingFunction__def = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "_def",
  0,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_auipc = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "auipc",
  1,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lui = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lui",
  2,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrwi = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrwi",
  3,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrsi = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrsi",
  4,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrci = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrci",
  5,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_addi = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "addi",
  6,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_xori = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "xori",
  7,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_ori = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "ori",
  8,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_andi = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "andi",
  9,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_slti = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "slti",
  10,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sltiu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sltiu",
  11,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_slli = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "slli",
  12,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_srli = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "srli",
  13,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_srai = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "srai",
  14,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrw",
  15,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrs = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrs",
  16,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_csrrc = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "csrrc",
  17,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_addiw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "addiw",
  18,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_slliw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "slliw",
  19,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sraiw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sraiw",
  20,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_srliw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "srliw",
  21,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_add = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "add",
  22,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sub = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sub",
  23,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_xor = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "xor",
  24,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_or = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "or",
  25,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_and = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "and",
  26,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_slt = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "slt",
  27,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sltu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sltu",
  28,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sll = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sll",
  29,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_srl = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "srl",
  30,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sra = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sra",
  31,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_subw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "subw",
  32,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_addw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "addw",
  33,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_beq = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "beq",
  34,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_bne = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "bne",
  35,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_blt = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "blt",
  36,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_bge = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "bge",
  37,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_bltu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "bltu",
  38,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_bgeu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "bgeu",
  39,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_jal = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "jal",
  40,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p_j(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_jalr = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "jalr",
  41,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
perfModel->dynBranchPredModel.setPc_p_jr(n_IScan);
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_alu, perfModel->EX_substage_mul_o, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
perfModel->regModel.setXd(n_ALU);
perfModel->dynBranchPredModel.setPc_c(n_ALU);
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
perfModel->EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_mul = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "mul",
  42,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_mul_i, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I, perfModel->EX_substage_mul_o});
perfModel->EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
perfModel->regModel.setXd(n_MUL_O);
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
perfModel->EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulh = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "mulh",
  43,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_mul_i, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I, perfModel->EX_substage_mul_o});
perfModel->EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
perfModel->regModel.setXd(n_MUL_O);
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
perfModel->EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulhu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "mulhu",
  44,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_mul_i, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I, perfModel->EX_substage_mul_o});
perfModel->EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
perfModel->regModel.setXd(n_MUL_O);
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
perfModel->EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulhsu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "mulhsu",
  45,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_mul_i, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I, perfModel->EX_substage_mul_o});
perfModel->EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
perfModel->regModel.setXd(n_MUL_O);
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
perfModel->EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_mulw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "mulw",
  46,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_mul_i, perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I, perfModel->EX_substage_mul_o});
perfModel->EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
perfModel->regModel.setXd(n_MUL_O);
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
perfModel->EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_div = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "div",
  47,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + perfModel->divider.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_rem = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "rem",
  48,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + perfModel->divider.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_divw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "divw",
  49,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + perfModel->divider.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_remw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "remw",
  50,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + perfModel->divider.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_divu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "divu",
  51,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + perfModel->divider_u.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_remu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "remu",
  52,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + perfModel->divider_u.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_divuw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "divuw",
  53,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + perfModel->divider_u.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_remuw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "remuw",
  54,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_div});
perfModel->IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + perfModel->divider_u.getDelay();
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
perfModel->EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lw",
  55,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lh = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lh",
  56,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lhu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lhu",
  57,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lb = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lb",
  58,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lbu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lbu",
  59,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_ld = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "ld",
  60,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_lwu = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "lwu",
  61,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage, perfModel->clobberModel.getCb_out()});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_Clobber, n_uA_OF_A, perfModel->EX_stage.get(8), perfModel->EX_substage_lCtrl});
perfModel->IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl, perfModel->EX_substage_dCache});
perfModel->EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + perfModel->dCacheModel.getDelay();
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache, perfModel->EX_substage_lUnit});
perfModel->EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
perfModel->EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
perfModel->clobberModel.setCb_in(n_Commit);
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sb = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sb",
  62,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_sCtrl});
perfModel->IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl, perfModel->EX_substage_sUnit});
perfModel->EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
perfModel->EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sh = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sh",
  63,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_sCtrl});
perfModel->IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl, perfModel->EX_substage_sUnit});
perfModel->EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
perfModel->EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sw = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sw",
  64,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_sCtrl});
perfModel->IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl, perfModel->EX_substage_sUnit});
perfModel->EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
perfModel->EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);

static SchedulingFunction *schedulingFunction_sd = new SchedulingFunction(
  CVA6_SchedulingFunctionSet,
  "sd",
  65,
  [](PerformanceModel* perfModel_){
  CVA6_PerformanceModel* perfModel = static_cast<CVA6_PerformanceModel*>(perfModel_);
  // Enter
uint64_t n_Enter = perfModel->PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter, perfModel->dynBranchPredModel.getPc_mp()});
// uA_CacheBlock
uint64_t n_uA_CacheBlock;
n_uA_CacheBlock = std::max({n_Enter, perfModel->iCacheConModel.getIc_out()});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen, n_uA_PcCorrect, n_uA_CacheBlock, perfModel->IF_stage, perfModel->IF_substage_0});
perfModel->PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl, perfModel->IF_substage_1});
perfModel->IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + perfModel->iCacheResModel.getDelay();
perfModel->iCacheConModel.setIc_in(n_ICache);
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache, perfModel->IF_substage_2});
perfModel->IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IScan, perfModel->IQ_stage.get(7)});
perfModel->IF_stage = n_IF_stage;
perfModel->IF_substage_2 = n_IF_stage;
// IQInsert
uint64_t n_IQInsert;
n_IQInsert = n_IF_stage + 1;
// IQ_stage
uint64_t n_IQ_stage;
n_IQ_stage = std::max({n_IQInsert, perfModel->IQ_stage.get(1), perfModel->ID_stage});
perfModel->IQ_stage.set(n_IQ_stage);
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IQ_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder, perfModel->IS_stage});
perfModel->ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue = n_ID_stage;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage, perfModel->regModel.getXa()});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage, perfModel->regModel.getXb()});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue, n_uA_OF_A, n_uA_OF_B, perfModel->EX_stage.get(8), perfModel->EX_substage_sCtrl});
perfModel->IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl, perfModel->EX_substage_sUnit});
perfModel->EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
perfModel->EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit, perfModel->EX_stage.get(1), perfModel->COM_stage.get(2)});
perfModel->EX_stage.set(n_EX_stage);
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit, perfModel->COM_stage.get(1)});
perfModel->COM_stage.set(n_COM_stage);

  }
);


} // namespace CVA6