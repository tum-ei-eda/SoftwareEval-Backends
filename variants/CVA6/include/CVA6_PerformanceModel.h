/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

// TODO: Hand-written as a proof of concept

#ifndef SWEVAL_BACKENDS_CVA6_PERFORMACNE_MODEL_H
#define SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <algorithm>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/cva6/ClobberModel.h"
#include "models/cva6/ICacheModel.h"
#include "models/cva6/DCacheModel.h"
#include "models/cva6/BranchPredictionModel.h"
#include "models/cva6/CVA6_DividerModel.h"
#include "models/cva6/CVA6_DividerUnsignedModel.h"

class CVA6_PcGenStage_Model
{
public:
  
  CVA6_PcGenStage_Model(){};

  uint64_t get_backPressure(void) { return get_leaveStage(); };
  
  uint64_t get_leaveStage(void) { return leaveStage; };
  void set_leaveStage(uint64_t c) { leaveStage = c; };
  
  uint64_t getStageInfo(void) { return leaveStage; };
  
private:

  uint64_t leaveStage = 0;
  
};

class CVA6_IfStage_Model
{
public:
  
  CVA6_IfStage_Model(){};

  uint64_t get_backPressure(void) { return get_leaveICacheIn(); };

  uint64_t get_leaveICacheIn(void) { return leaveICacheIn; };
  void set_leaveICacheIn(uint64_t c) { leaveICacheIn = c; };
  
  uint64_t get_leaveICache(void) { return leaveICache; };
  void set_leaveICache(uint64_t c) { leaveICache = c; };

  uint64_t get_leaveStage(void) { return leaveStage; };
  void set_leaveStage(uint64_t c) { leaveStage = c; };

  uint64_t getStageInfo(void) { return leaveStage; };

private:

  uint64_t leaveStage = 0;

  uint64_t leaveICacheIn = 0;
  uint64_t leaveICache = 0;

};

class CVA6_IqStage_Model
{
public:
  
  CVA6_IqStage_Model(){};

  //uint64_t get_backPressure(void) { return std::max({get_leaveStage(), get_leaveInsert()}); };
  uint64_t get_backPressure(void) { return get_leaveStage(); };
  
  void set_leaveInsert(uint64_t c) { leaveInsert = c ;};
  uint64_t get_leaveInsert(void) {return leaveInsert; };

  void set_leaveStage (uint64_t);
  uint64_t get_leaveStage(void) { return leaveStage[stage_ptr]; };
  
  uint64_t getStageInfo(void) { return curLeaveStage; };

private:

  uint64_t leaveInsert = 0;

  uint64_t leaveStage[7] = {};
  int stage_ptr = 0;

  uint64_t curLeaveStage = 0;
};

class CVA6_IdStage_Model
{
public:
  
  CVA6_IdStage_Model(){};

  uint64_t get_backPressure(void) { return get_leaveStage(); };
  
  void set_leaveStage (uint64_t c) { leaveStage = c; };
  uint64_t get_leaveStage(void) { return leaveStage; };

  uint64_t getStageInfo(void) { return leaveStage; };
  
private:

  uint64_t leaveStage = 0;
  
};

class CVA6_IsStage_Model
{
public:
  
  CVA6_IsStage_Model(){};

  uint64_t get_backPressure(void) { return get_leaveStage(); };
  
  void set_leaveStage (uint64_t c) { leaveStage = c; };
  uint64_t get_leaveStage(void) { return leaveStage; };
  
  uint64_t getStageInfo(void) { return leaveStage; };

private:

  uint64_t leaveStage = 0;
  
};

class CVA6_ExStage_Model
{
public:
  
  CVA6_ExStage_Model(){};

  //uint64_t get_backPressure_arith(void) { return std::max({get_leaveStage_i8(), get_leaveAlu(), get_leaveMul_i1(), get_leaveDiv()}); };
  uint64_t get_backPressure_arith(void) { return std::max({get_leaveStage_i8(), get_leaveAlu(), get_leaveMulO(), get_leaveDiv()}); };
  //uint64_t get_backPressure_mul(void) { return std::max({get_leaveStage_i8(), get_leaveMul_i2(), get_leaveDiv()}); };
  uint64_t get_backPressure_mul(void) { return std::max({get_leaveStage_i8(), get_leaveMulI(), get_leaveDiv()}); };
  uint64_t get_backPressure_div(void) { return std::max({get_leaveStage_i8(), get_leaveDiv()}); };
  uint64_t get_backPressure_load(void) { return std::max({get_leaveStage_i8(), get_leaveLCtrl()}); };
  uint64_t get_backPressure_store(void) { return std::max({get_leaveStage_i8(), get_leaveSCtrl()}); };

  uint64_t get_transGuard(void) { return get_leaveStage_i1(); };

  void set_leaveAlu(uint64_t c) { leaveAlu = c; };
  uint64_t get_leaveAlu(void) { return leaveAlu; };

  ////void set_leaveMul(uint64_t c) { leaveMul = c; };
  //void set_leaveMul(uint64_t);
  //uint64_t get_leaveMul_i2(void) { return leaveMul[mul_ptr_i2]; };
  //uint64_t get_leaveMul_i1(void) { return leaveMul[mul_ptr_i1]; };

  void set_leaveMulI(uint64_t c) { leaveMulI = c; };
  void set_leaveMulO(uint64_t c) { leaveMulO = c; };
  
  uint64_t get_leaveMulI(void) { return leaveMulI; };
  uint64_t get_leaveMulO(void) { return leaveMulO; };
  
  void set_leaveDiv(uint64_t c) { leaveDiv = c; };
  uint64_t get_leaveDiv(void) { return leaveDiv; };

  void set_leaveLCtrl(uint64_t c) { leaveLCtrl = c; };
  uint64_t get_leaveLCtrl(void) { return leaveLCtrl; };

  void set_leaveDCache(uint64_t c) { leaveDCache = c; };
  uint64_t get_leaveDCache(void) { return leaveDCache; };

  void set_leaveLUnit(uint64_t c) { leaveLUnit = c; };
  uint64_t get_leaveLUnit(void) { return leaveLUnit; };

  void set_leaveSCtrl(uint64_t c) { leaveSCtrl = c; };
  uint64_t get_leaveSCtrl(void) { return leaveSCtrl; };

  void set_leaveSUnit(uint64_t c) { leaveSUnit = c; };
  uint64_t get_leaveSUnit(void) { return leaveSUnit; };

  void set_leaveStage (uint64_t);
  uint64_t get_leaveStage_i8(void) { return leaveStage[stage_ptr_i8]; };
  uint64_t get_leaveStage_i1(void) { return leaveStage[stage_ptr_i1]; };
  
  uint64_t getStageInfo(void) { return curLeaveStage; };

private:

  uint64_t leaveDiv = 0;

  //uint64_t leaveMul[2] = { };
  uint64_t leaveMulI = 0;
  uint64_t leaveMulO = 0;

  uint64_t leaveAlu = 0; // TODO: Do we need to differentiate between ALU, BU and CSR?
  uint64_t leaveLCtrl = 0;
  uint64_t leaveDCache = 0;
  uint64_t leaveLUnit = 0;
  uint64_t leaveSCtrl = 0;
  uint64_t leaveSUnit = 0;
  uint64_t leaveStage[8] = { };

  //int mul_ptr_i2 = 0;
  //int mul_ptr_i1 = 1;
  int stage_ptr_i8 = 0;
  int stage_ptr_i1 = 7;

  uint64_t curLeaveStage = 0;
  /*
  uint64_t leaveMul = 0;
  int mul_ptr_i2 = 0;
  int mul_ptr_i1 = 1;
  uint64_t mul_array[2] = {};
  */

  //uint64_t leaveStage = 0;
  //int stage_ptr_i8 = 0;
  //int stage_ptr_i1 = 7;
  //uint64_t stage_array[8] = { };

};

class CVA6_ComStage_Model
{
public:
  
  CVA6_ComStage_Model(){};

  uint64_t get_backPressure(void) { return get_leaveStage(); };

  void set_leaveStage (uint64_t);
  uint64_t get_leaveStage(void) { return leaveStage[stage_ptr]; };
  
  uint64_t getStageInfo(void) { return curLeaveStage; };

private:

  uint64_t leaveStage[2] = {};
  int stage_ptr = 0;
  
  uint64_t curLeaveStage = 0;
};

extern InstructionModelSet* CVA6_InstrModelSet;

class CVA6_Model : public PerformanceModel
{
public:

  CVA6_Model() : PerformanceModel("CVA6", CVA6_InstrModelSet)
    ,PcGenStage()
    ,IfStage()
    ,IqStage()
    ,IdStage()
    ,IsStage()
    ,ExStage()
    ,ComStage()
    ,regModel(this)
    ,cbModel(this)
    ,iCacheModel(this)
    ,dCacheModel(this)
    ,brPredModel(this)
    ,divModel(this)
    ,divUModel(this)
  {};

  //CVA6_pipeline_Model CVA6_pipeline;

  CVA6_PcGenStage_Model PcGenStage;
  CVA6_IfStage_Model IfStage;
  CVA6_IqStage_Model IqStage;
  CVA6_IdStage_Model IdStage;
  CVA6_IsStage_Model IsStage;
  CVA6_ExStage_Model ExStage;
  CVA6_ComStage_Model ComStage;

  StandardRegisterModel regModel;
  ClobberModel cbModel;
  ICacheModel iCacheModel;
  DCacheModel dCacheModel;
  BranchPredictionModel brPredModel;
  CVA6_DividerModel divModel;
  CVA6_DividerUnsignedModel divUModel;
  
  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void){ return ComStage.get_leaveStage(); };
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

#endif // SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H
