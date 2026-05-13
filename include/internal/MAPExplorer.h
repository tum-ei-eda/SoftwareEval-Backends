/*
 * Copyright 2026 Chair of EDA, Technical University of Munich
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

#ifndef SWEVAL_BACKENDS_MAP_EXPLORER_H
#define SWEVAL_BACKENDS_MAP_EXPLORER_H

#include "Channel.h"
#include "Backend.h"
#include "BlockSchedulingFunctions.h"

#include "map_models/Models.h"

#include <array>
#include <vector>
#include <memory>
#include <iostream>

using std::uint64_t;

namespace MAP_Explorer{

class ResourceGroup{

public:
    ResourceGroup(int id_) : groupId(id_) {};

    virtual void calcDelays() = 0;
    virtual void connectChannel(Channel*, int*) = 0;

    int groupId;
};

template<typename... Models>
class ResourceGroupT : public ResourceGroup {

public: 

    ResourceGroupT(int grId_, Models&... models_):
        ResourceGroup(grId_),
        models(models_...) {}

    void calcDelays() {
        calcDelaysImpl(std::index_sequence_for<Models...>{});
    }

private:

    template<size_t... Is>
    void calcDelaysImpl(std::index_sequence<Is...>){
        (
            (std::get<Is>(models).update()),
            ...
        );
    }

    std::tuple<Models&...> models;

};

class BranchGroup{

public:
    BranchGroup() {};
    virtual void catchBranch() = 0;
    virtual void evaluate() = 0;
};

template<typename... Models>
class BranchGroupT : public BranchGroup {

public: 

    BranchGroupT(Models&... models_):
        BranchGroup(),
        models(models_...) {}

    void catchBranch() {
        catchBranchImpl(std::index_sequence_for<Models...>{});
    }

    void evaluate() {
        evaluateImpl(std::index_sequence_for<Models...>{});
    }

private:

    template<size_t... Is>
    void catchBranchImpl(std::index_sequence<Is...>){
        (
            (std::get<Is>(models).catchBranch()),
            ...
        );
    }

    template<size_t... Is>
    void evaluateImpl(std::index_sequence<Is...>){
        (
            (std::get<Is>(models).evaluate()),
            ...
        );
    }

    std::tuple<Models&...> models;

};

template<size_t MAX_RES>
struct ResGroupEntry {
    uint8_t cnt;
    std::array<ResourceGroup*, MAX_RES> resGroups;
};

template<size_t NUM_RES_GROUPS, size_t T_VEC_SIZE>
class Combination{

public:
    
    using SchedFuncPtr = typename Block::SchedFuncPtr;

    Combination(const std::array<map_models::ResourceModel*, NUM_RES_GROUPS>& resModels_, map_models::BranchModel* brModel_):
        brModel_ptr(brModel_)
    {
        for(int i=0; i<NUM_RES_GROUPS; i++){
            bufferPtrs[i] = resModels_[i]->connectBuffer();
        }
    }

    void fetchDelay(int resGrId_){
        delayVector[delayVecIdx++] = *bufferPtrs[resGrId_];
    }

    void updateBranchConnectors() {
        brModel_ptr->shiftVector(timingVector.data());
    }

    void executeScheduling(SchedFuncPtr func_) {
        func_(timingVector.data(), delayVector.data());
        delayVecIdx = 0;
    }

    // TODO: Remove these public functions. No longer needed?
    uint64_t* getTimingVector() { return timingVector.data(); };

private:

    map_models::BranchModel* brModel_ptr = nullptr;
    std::array<const uint8_t*, NUM_RES_GROUPS> bufferPtrs{nullptr};

    std::array<uint64_t, T_VEC_SIZE> timingVector{0};
    std::array<uint8_t, 100> delayVector{0}; // TODO: D_VEC_SIZE is hard-coded for now!

    int delayVecIdx = 0;

};

template<size_t NUM_RES_GROUPS, size_t NUM_COMBS, size_t NUM_INSTR_TYPES, size_t T_VEC_SIZE, size_t MAX_RES>
class MAPExplorer : public Backend{

public:
    
    using CombType = Combination<NUM_RES_GROUPS, T_VEC_SIZE>;
    using ResGroupEntryType = ResGroupEntry<MAX_RES>;

    MAPExplorer(const MAP_Explorer::BlockDictionary* blkDict_, 
        const std::array<const ResGroupEntryType, NUM_INSTR_TYPES>& resGroupLUT_,
        const std::array<ResourceGroup*, NUM_RES_GROUPS>& resGrps_,
        BranchGroup* brGrp_,
        const std::array<CombType*, NUM_COMBS>& combs_
    ):
        blkDict(blkDict_),
        resGroupLUT(resGroupLUT_),
        resourceGroups(resGrps_),
        branchGroup(brGrp_),
        combinations(combs_)
    {};

    ~MAPExplorer() = default;

    virtual void connectChannel(Channel*) = 0;
    
    void initialize(void) {
        std::cout << "MAPExplorer initialized!" << std::endl;
    };
    
    void execute(void) {
        
        for(curInstrIdx=0; curInstrIdx<*ch_instrCnt_ptr; curInstrIdx++){

            uint64_t curPc = ch_pc_ptr[curInstrIdx];

            // Start of a new code block
            if(!activeBlock){

                activeBlock = true;
                curBlk = blkDict->getBlock(curPc);

                // Evaluate branch
                branchGroup->evaluate();
                for(int i=0; i<NUM_COMBS; i++){
                    combinations[i]->updateBranchConnectors();
                }

            }

            // Call resource models
            const auto& entry = resGroupLUT[ch_typeId_ptr[curInstrIdx]];
            for(uint8_t gr_i=0; gr_i< entry.cnt; gr_i++){
                auto group = entry.resGroups[gr_i];
                group->calcDelays();
                for(int i=0; i<NUM_COMBS; i++){
                    combinations[i]->fetchDelay(group->groupId);
                }
            }

            // End of block reached
            if(curPc == curBlk->endPc){

                // Update branch models            
                branchGroup->catchBranch();

                // Execute block-scheduling-function
                auto schedFunc = curBlk->getScheduleFunction();
                for(int i=0; i<NUM_COMBS; i++){
                    combinations[i]->executeScheduling(schedFunc);
                }

                activeBlock = false;
            }
        }
    };  
    
    void finalize(void) {
        
        std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
        for(int i=0; i<NUM_COMBS; i++){
            auto comb_i = combinations[i];
            std::cout << "Estimated cycles (Comb_" << i << "): " << std::max(comb_i->getTimingVector()[2],comb_i->getTimingVector()[3]) << std::endl;
        }
        std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    };

protected:

    uint64_t* ch_instrCnt_ptr;
    uint64_t* ch_typeId_ptr;
    uint64_t* ch_pc_ptr;

    int curInstrIdx = 0;

private:

    bool activeBlock = false;

    const MAP_Explorer::BlockDictionary* blkDict;
    const MAP_Explorer::Block* curBlk;

    const std::array<const ResGroupEntryType, NUM_INSTR_TYPES>& resGroupLUT;
    const std::array<ResourceGroup*, NUM_RES_GROUPS> resourceGroups;
    BranchGroup* const branchGroup;
    const std::array<CombType*, NUM_COMBS>& combinations;

};

} // namespace MAP_Explorer

#endif //SWEVAL_BACKENDS_MAP_EXPLORER_H