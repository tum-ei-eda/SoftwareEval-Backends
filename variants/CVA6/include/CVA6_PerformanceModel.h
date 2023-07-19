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

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/cva6/ClobberModel.h"
#include "models/cva6/ICacheModel.h"
#include "models/cva6/DCacheModel.h"
#include "models/cva6/BranchPredictionModel.h"

class CVA6_PcGenStage_Model
{
public:
  
  CVA6_PcGenStage_Model(){};

  int get_backPressure(void) { return get_leaveStage(); };
  
  int get_leaveStage(void) { return leaveStage; };
  void set_leaveStage(int c) { leaveStage = c; };
  
private:

  int leaveStage = 0;
  
};

class CVA6_IfStage_Model
{
public:
  
  CVA6_IfStage_Model(){};

  int get_backPressure(void) { return get_leaveICache(); };
  
  int get_leaveICache(void) { return leaveICache[iCache_ptr]; };
  void set_leaveICache(int);

  int get_leaveStage(void) { return leaveStage; };
  void set_leaveStage(int c) { leaveStage = c; };

private:

  int leaveICache[2] = { };
  int leaveStage = 0;

  int iCache_ptr = 0;
  
};

class CVA6_IqStage_Model
{
public:
  
  CVA6_IqStage_Model(){};

  int get_backPressure(void) { return std::max({get_leaveStage(), get_leaveInsert()}); };
  
  void set_leaveInsert(int c) { leaveInsert = c ;};
  int get_leaveInsert(void) {return leaveInsert; };

  void set_leaveStage (int);
  int get_leaveStage(void) { return leaveStage[stage_ptr]; };
  
private:

  int leaveInsert = 0;
  int leaveStage[7] = {};

  int stage_ptr = 0;
  
};

class CVA6_IdStage_Model
{
public:
  
  CVA6_IdStage_Model(){};

  int get_backPressure(void) { return get_leaveStage(); };
  
  void set_leaveStage (int c) { leaveStage = c; };
  int get_leaveStage(void) { return leaveStage; };
  
private:

  int leaveStage = 0;
  
};

class CVA6_IsStage_Model
{
public:
  
  CVA6_IsStage_Model(){};

  int get_backPressure(void) { return get_leaveStage(); };
  
  void set_leaveStage (int c) { leaveStage = c; };
  int get_leaveStage(void) { return leaveStage; };
  
private:

  int leaveStage = 0;
  
};

class CVA6_ExStage_Model
{
public:
  
  CVA6_ExStage_Model(){};

  int get_backPressure_arith(void) { return std::max({get_leaveStage_i8(), get_leaveAlu(), get_leaveMul_i1(), get_leaveDiv()}); };
  int get_backPressure_mul(void) { return std::max({get_leaveStage_i8(), get_leaveMul_i2(), get_leaveDiv()}); };
  int get_backPressure_div(void) { return std::max({get_leaveStage_i8(), get_leaveDiv()}); };
  int get_backPressure_load(void) { return std::max({get_leaveStage_i8(), get_leaveLCtrl()}); };
  int get_backPressure_store(void) { return std::max({get_leaveStage_i8(), get_leaveSCtrl()}); };

  int get_transGuard(void) { return get_leaveStage_i1(); };

  void set_leaveAlu(int c) { leaveAlu = c; };
  int get_leaveAlu(void) { return leaveAlu; };

  void set_leaveMul(int);
  int get_leaveMul_i2(void) { return leaveMul[mul_ptr_i2]; };
  int get_leaveMul_i1(void) { return leaveMul[mul_ptr_i1]; };

  void set_leaveDiv(int c) { leaveDiv = c; };
  int get_leaveDiv(void) { return leaveDiv; };

  void set_leaveLCtrl(int c) { leaveLCtrl = c; };
  int get_leaveLCtrl(void) { return leaveLCtrl; };

  void set_leaveDCache(int c) { leaveDCache = c; };
  int get_leaveDCache(void) { return leaveDCache; };

  void set_leaveLUnit(int c) { leaveLUnit = c; };
  int get_leaveLUnit(void) { return leaveLUnit; };

  void set_leaveSCtrl(int c) { leaveSCtrl = c; };
  int get_leaveSCtrl(void) { return leaveSCtrl; };

  void set_leaveSUnit(int c) { leaveSUnit = c; };
  int get_leaveSUnit(void) { return leaveSUnit; };

  void set_leaveStage (int);
  int get_leaveStage_i8(void) { return leaveStage[stage_ptr_i8]; };
  int get_leaveStage_i1(void) { return leaveStage[stage_ptr_i1]; };
  
private:

  int leaveDiv = 0;
  int leaveMul[2] = { };
  int leaveAlu = 0; // TODO: Do we need to differentiate between ALU, BU and CSR?
  int leaveLCtrl = 0;
  int leaveDCache = 0;
  int leaveLUnit = 0;
  int leaveSCtrl = 0;
  int leaveSUnit = 0;
  int leaveStage[8] = { };

  int mul_ptr_i2 = 0;
  int mul_ptr_i1 = 1;
  int stage_ptr_i8 = 0;
  int stage_ptr_i1 = 7;
  
};

class CVA6_ComStage_Model
{
public:
  
  CVA6_ComStage_Model(){};

  int get_backPressure(void) { return get_leaveStage(); };

  void set_leaveStage (int);
  int get_leaveStage(void) { return leaveStage[stage_ptr]; };
  
private:

  int leaveStage[2] = { };

  int stage_ptr = 0;
  
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
    ,staBranchPredModel(this)
    ,iCacheModel(this)
    ,dCacheModel(this)
    ,brPredModel(this)	 
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
  StaticBranchPredictModel staBranchPredModel;
  ICacheModel iCacheModel;
  DCacheModel dCacheModel;
  BranchPredictionModel brPredModel;

  virtual void connectChannel(Channel*);
  virtual int getCycleCount(void){ return ComStage.get_leaveStage(); };
  virtual std::string getPipelineStream(void);

};

#endif // SWEVAL_BACKENDS_CVA6_PERFORMANCE_MODEL_H
