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


#ifndef SWEVAL_BACKENDS_ESP32C3_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_ESP32C3_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/esp32c3/ICacheModel.h"
#include "models/esp32c3/DividerModel.h"
#include "models/esp32c3/DividerUnsignedModel.h"

namespace ESP32C3{

extern SchedulingFunctionSet* ESP32C3_SchedulingFunctionSet;

class ESP32C3_PerformanceModel : public PerformanceModel
{
public:

  ESP32C3_PerformanceModel() : PerformanceModel("ESP32C3", ESP32C3_SchedulingFunctionSet)
    ,regModel(this)
    ,staBranchPredModel(this)
    ,iCacheModel(this)
    ,divider(this)
    ,divider_u(this)
  {};

  // Single-Element Timing Variables
  uint64_t IF_stage = 0;
  uint64_t ID_stage = 0;
  uint64_t EX_stage = 0;
  uint64_t WB_stage = 0;


  // External Resource Models
  common::StandardRegisterModel regModel;
  common::StaticBranchPredictModel staBranchPredModel;
  esp32c3::ICacheModel iCacheModel;
  esp32c3::DividerModel divider;
  esp32c3::DividerUnsignedModel divider_u;

  virtual void connectChannel(Channel*);
  virtual uint64_t getCycleCount(void);
  virtual std::string getPipelineStream(void);
  virtual std::string getPrintHeader(void);

};

} // namespace ESP32C3

#endif // SWEVAL_BACKENDS_ESP32C3_PERFORMANCE_MODEL_H