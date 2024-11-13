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

#include "models/common/ConfigurableMemoryModel.h"

#include "CVA6_PerformanceModel.h"

class Channel;


// replaces ICacheModel of CVA6
class TestCore_ICacheModel : public ConfigurableMemoryModel
{
public:
    TestCore_ICacheModel(PerformanceModel* parent_) :
        ConfigurableMemoryModel("IPort", parent_),
        pc_ptr(ConfigurableMemoryModel::addr_ptr)
    { }

    int getDelay(void) override { return ConfigurableMemoryModel::getDelay(); }

    // to keep compatibility to ICacheModel
    void setIc(uint64_t c_) { t_ic = cacheHit() ? c_ : 0; };
    uint64_t getIc(void) { return t_ic; };

    // alias for addr_ptr to keep compatibility to ICacheModel
    uint64_t*& pc_ptr;

private:

    // Time when ICache relaeses block on miss
    uint64_t t_ic = 0;
};

class TestCore_PerformanceModel : public PerformanceModel
{
public:

    /**
     * @brief Instantiates the instruction set of this class once needed (lazy). 
     * Calling this function mutliple times yields the same instruction set pointer.
     */
    static InstructionModelSet* instructionSet();
    
    TestCore_PerformanceModel() : 
        PerformanceModel("TestCore", instructionSet())
        ,regModel(this)
        ,cbModel(this)
        ,iCacheModel(this)
        ,dCacheModel("DPort", this)
        ,brPredModel(this)
        ,divModel(this)
        ,divUModel(this)
    {}

    CVA6_PcGenStage_Model PcGenStage;
    CVA6_IfStage_Model IfStage;
    CVA6_IqStage_Model IqStage;
    CVA6_IdStage_Model IdStage;
    CVA6_IsStage_Model IsStage;
    CVA6_ExStage_Model ExStage;
    CVA6_ComStage_Model ComStage;

    StandardRegisterModel regModel;
    ClobberModel cbModel;
    // ICacheModel iCacheModel;
    TestCore_ICacheModel iCacheModel;
    // replaced DCacheModel
    ConfigurableMemoryModel dCacheModel;
    BranchPredictionModel brPredModel;
    CVA6_DividerModel divModel;
    CVA6_DividerUnsignedModel divUModel;

    void connectChannel(Channel*) override;
    uint64_t getCycleCount(void) override;
    std::string getPipelineStream(void) override;
    std::string getPrintHeader(void) override;

    /**
     * @brief Reimplemented to apply a configuration to the memory model
     * @param config Configuration
     */
    void applyConfig(etiss::Configuration& config) override;
};



#endif // SWEVAL_BACKENDS_TEST_CORE_PERFORMANCE_MODEL_H
