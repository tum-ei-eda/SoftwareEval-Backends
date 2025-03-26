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

/// Test core based on CVA6 for configurable memory model (hand written)
/// TODO: remove me

#ifndef SWEVAL_BACKENDS_TEST_CORE_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_TEST_CORE_PERFORMANCE_MODEL_H

#include <stdbool.h>
#include <string>
#include <cstdint>

#include "PerformanceModel.h"
#include "Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/cva6/BranchPredictionModel.h"
#include "models/cva6/ClobberModel.h"
#include "models/cva6/DividerModel.h"
#include "models/cva6/DividerUnsignedModel.h"

#include "models/common/ConfigurableMemoryModel.h"

#include "CVA6_PerformanceModel.h"

//class Channel;

namespace TestCore{

// replaces ICacheModel of CVA6
class TestCore_IMemoryPort : public IMemoryPort
{
  public:
    TestCore_IMemoryPort(PerformanceModel* parent_, etiss::Configuration& config) :
        IMemoryPort(parent_, config)
    { }

    void setIc_in(uint64_t c_)
    {
        // TODO: t_ic = isMiss ? c_ : 0; (see ICacheModel)
        t_ic = 0;
    };
    uint64_t getIc_out(void) { return t_ic; };

private:

    // Time when ICache releases block on miss
    uint64_t t_ic = 0;
};

extern SchedulingFunctionSet* TestCore_SchedulingFunctionSet;

class TestCore_PerformanceModel : public PerformanceModel
{
public:

    using TestCore_DMemoryPort = DMemoryPort;

    /**
     * @brief Instantiates the instruction set of this class once needed (lazy). 
     * Calling this function mutliple times yields the same instruction set pointer.
     */
    //static InstructionModelSet* instructionSet();
    
    TestCore_PerformanceModel(etiss::Configuration& config) :
        PerformanceModel("TestCore", TestCore_SchedulingFunctionSet)
        ,IF_stage(3,0)
	,IQ_stage(7,0)
	,EX_stage(8,0)
	,COM_stage(2,0)
	,regModel(this)
	,dynBranchPredModel(this)
        ,clobberModel(this)
	,divider(this)
	,divider_u(this)
        ,iCacheModel(this, config)
        ,dCacheModel(this, config)
    {}
  
  // Single-Element Timing Variables
  uint64_t PC_stage = 0;
  uint64_t IF_substage_0 = 0;
  uint64_t IF_substage_1 = 0;
  uint64_t IF_substage_2 = 0;
  uint64_t ID_stage = 0;
  uint64_t IS_stage = 0;
  uint64_t EX_substage_alu = 0;
  uint64_t EX_substage_mul_i = 0;
  uint64_t EX_substage_mul_o = 0;
  uint64_t EX_substage_div = 0;
  uint64_t EX_substage_lCtrl = 0;
  uint64_t EX_substage_dCache = 0;
  uint64_t EX_substage_lUnit = 0;
  uint64_t EX_substage_sCtrl = 0;
  uint64_t EX_substage_sUnit = 0;

  // Multi-Element Timing Variables
  MultiElementTimingVariable IF_stage;
  MultiElementTimingVariable IQ_stage;
  MultiElementTimingVariable EX_stage;
  MultiElementTimingVariable COM_stage;

  // External Resource Models
  common::StandardRegisterModel regModel;
  cva6::BranchPredictionModel dynBranchPredModel;
  cva6::ClobberModel clobberModel;
  //cva6::ICacheModel iCacheModel;
  TestCore_IMemoryPort iCacheModel;
  cva6::DividerModel divider;
  cva6::DividerUnsignedModel divider_u;
  //cva6::DCacheModel dCacheModel;
  TestCore_DMemoryPort dCacheModel;
  
  void connectChannel(Channel*) override;
  uint64_t getCycleCount(void) override;
  std::string getPipelineStream(void) override;
  std::string getPrintHeader(void) override;
};

} // namespace TestCore

#endif // SWEVAL_BACKENDS_TEST_CORE_PERFORMANCE_MODEL_H
