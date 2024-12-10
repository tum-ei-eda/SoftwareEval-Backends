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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/

#ifndef SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"

namespace CV32E40P{

class CV32E40P_pipeline_Model
{
public:
  CV32E40P_pipeline_Model(){};

  stage stages[4] = { 
     stage("IF_stage") 
    ,stage("ID_stage")
    ,stage("EX_stage")
    ,stage("WB_stage")
  };

  void setIF_stage(uint64_t c) { stages[0].cnt = c; };
  uint64_t getIF_stage(void) { return stages[0].cnt; };
  
  void setID_stage(uint64_t c) { stages[1].cnt = c; };
  uint64_t getID_stage(void) { return stages[1].cnt; };
  
  void setEX_stage(uint64_t c) { stages[2].cnt = c; };
  uint64_t getEX_stage(void) { return stages[2].cnt; };
  
  void setWB_stage(uint64_t c) { stages[3].cnt = c; };
  uint64_t getWB_stage(void) { return stages[3].cnt; };

  uint64_t getCycleCount(void) { return stages[3].cnt; };
  
};


extern InstructionModelSet* CV32E40P_InstrModelSet;

class CV32E40P_PerformanceModel : public PerformanceModel
{
public:

  CV32E40P_PerformanceModel() : PerformanceModel("CV32E40P", CV32E40P_InstrModelSet)
    ,CV32E40P_pipeline()
    ,divider(this)
    ,divider_u(this)
    ,regModel(this)
    ,staBranchPredModel(this)
  {};

  CV32E40P_pipeline_Model CV32E40P_pipeline;

  DividerModel divider;
  DividerUnsignedModel divider_u;

  StandardRegisterModel regModel;
  StaticBranchPredictModel staBranchPredModel;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void){ return CV32E40P_pipeline.getCycleCount(); };
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace CV32E40P
  
#endif // SWEVAL_BACKENDS_CV32E40P_PERFORMANCE_MODEL_H
