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
#include "BlockSchedulingDictionary.h"
#include "InstructionSchedulingFunctions.h"

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

template<size_t NUM_RES_GROUPS, size_t D_VEC_SIZE>
class DelayVector{

public:

    DelayVector() = default;

    DelayVector(const std::array<map_models::ResourceModel*, NUM_RES_GROUPS>& resModels_){
        for(int i=0; i<NUM_RES_GROUPS; i++){
            bufferPtrs[i] = resModels_[i]->connectBuffer();
        }
    }

    // TODO: Possible to avoid reading the same buffer again and again?
    // Would require ResourceGroup to know which DelayVectors are connected to the same model?
    inline void fetchDelay(int resGrId_){ delayVector[delayVecIdx++] = *bufferPtrs[resGrId_]; }

    inline void reset() { delayVecIdx = 0; }

    inline uint8_t* connectVector() { return delayVector.data(); };

private:

    std::array<uint8_t, D_VEC_SIZE> delayVector{0};
    int delayVecIdx = 0;

    //std::array<const uint8_t*, NUM_RES_GROUPS> bufferPtrs{nullptr};
    std::array<const uint8_t*, NUM_RES_GROUPS> bufferPtrs{};

};

template<bool USE_BLK, size_t NUM_RES_GROUPS, size_t T_VEC_SIZE>
class Combination{

public:
    
    //using SchedFuncPtr = typename Block::SchedFuncPtr;
    using SchedFuncPtr = std::conditional_t<USE_BLK, typename MAP_Explorer::Block::SchedFuncPtr, typename MAP_Explorer::Instruction::SchedFuncPtr>;
    using DVecType = DelayVector<NUM_RES_GROUPS, 100>; // TODO: D_VEC_SIZE hard-coded, to avoid re-compilation for ever benchmark

    Combination() = default;

    Combination(DVecType* delayVec_, map_models::BranchModel* brModel_):
        brModel_ptr(brModel_),
        delayVector_ptr(delayVec_->connectVector())
    {}

//    void executeScheduling(SchedFuncPtr func_, bool branchShift_) {
//        if(branchShift_){    
//            brModel_ptr->shiftVector(timingVector.data());
//        }
//        func_(timingVector.data(), delayVector_ptr);
//    }

    template<bool U = USE_BLK, typename std::enable_if_t<U, int> = 0>
    void executeScheduling(SchedFuncPtr func_, bool branchShift_) {
        if(branchShift_){    
            brModel_ptr->shiftVector(timingVector.data());
        }
        func_(timingVector.data(), delayVector_ptr);
    }

    template<bool U = USE_BLK, typename std::enable_if_t<!U, int> = 0>
    void executeScheduling(SchedFuncPtr func_, bool branchShift_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
        if(branchShift_){    
            brModel_ptr->shiftVector(timingVector.data());
        }
        func_(timingVector.data(), delayVector_ptr, rs1_, rs2_, rd_);
    }

    // TODO: Remove these public functions. No longer needed?
    uint64_t* getTimingVector() { return timingVector.data(); };

private:

    std::array<uint64_t, T_VEC_SIZE> timingVector{0};

    map_models::BranchModel* brModel_ptr = nullptr;
    uint8_t* delayVector_ptr = nullptr;

};

template<bool USE_BLK, size_t NUM_RES_GROUPS, size_t NUM_COMBS, size_t NUM_D_VECS, size_t NUM_INSTR_TYPES, size_t T_VEC_SIZE, size_t MAX_RES, int NUM_STAGE_VARS>
class MAPExplorer : public Backend{

public:
    
    using CombType = Combination<USE_BLK, NUM_RES_GROUPS, T_VEC_SIZE>;
    //using DVecType = DelayVector<NUM_RES_GROUPS, 100>; // TODO: D_VEC_SIZE hard-coded, to avoid re-compilation for ever benchmark
    using DVecType = typename CombType::DVecType;
    using ResGroupEntryType = ResGroupEntry<MAX_RES>;

    MAPExplorer(const MAP_Explorer::BlockDictionary* blkDict_, 
        const MAP_Explorer::InstructionDictionary* instrDict_,
        const std::array<const ResGroupEntryType, NUM_INSTR_TYPES>& resGroupLUT_,
        const std::array<ResourceGroup*, NUM_RES_GROUPS>& resGrps_,
        BranchGroup* brGrp_,
        std::array<DVecType, NUM_D_VECS>& dVecs_,
        std::array<CombType, NUM_COMBS>& combs_
    ):
        blkDict(blkDict_),
        instrDict(instrDict_),
        resGroupLUT(resGroupLUT_),
        resourceGroups(resGrps_),
        branchGroup(brGrp_),
        delayVectors(dVecs_),
        combinations(combs_)
    {};

    ~MAPExplorer() = default;

    virtual void connectChannel(Channel*) = 0;
    
    void initialize(void) {
        std::cout << "MAPExplorer initialized!" << std::endl;
    };
    
    void execute(void) {
        
        for(curInstrIdx=0; curInstrIdx<*ch_instrCnt_ptr; curInstrIdx++){
            if constexpr(USE_BLK){
                executeBlockScheduling();
            }
            else{
                executeInstructionScheduling();
            }

//            uint64_t curPc = ch_pc_ptr[curInstrIdx];
//
//            // Start of a new code block
//            if(!activeBlock){
//
//                activeBlock = true;
//                curBlk = blkDict->getBlock(curPc);
//
//                // Evaluate branch
//                if(prevBlkEndOnBranch){
//                    branchGroup->evaluate();
//                }
//
//            }
//
//            // Call resource models
//            const auto& entry = resGroupLUT[ch_typeId_ptr[curInstrIdx]];
//            for(uint8_t gr_i=0; gr_i< entry.cnt; gr_i++){
//                auto group = entry.resGroups[gr_i];
//                group->calcDelays();
//                for(int i=0; i<NUM_D_VECS; i++){
//                    delayVectors[i].fetchDelay(group->groupId);
//                }
//            }
//
//            // End of block reached
//            if(curPc == curBlk->endPc){
//
//                //bool endOnBranch = curBlk->endOnBranch;
//
//                // Execute block-scheduling-function
//                auto schedFunc = curBlk->getScheduleFunction();
//                for(int i=0; i<NUM_COMBS; i++){
//                    combinations[i].executeScheduling(schedFunc, prevBlkEndOnBranch);
//                }
//
//                //if(curBlk->endOnBranch){
//                //    std::cout << "§" << getMaxCycleCount(combinations[0]) << std::endl;
//                //}
//
//                // If block ended on a branch, update Branch models
//                if(curBlk->endOnBranch){            
//                    branchGroup->catchBranch();
//                }
//                
//
//                // Clear delay-vectors for next block
//                for(int i=0; i<NUM_D_VECS; i++){
//                    delayVectors[i].reset();
//                }
//                
//                prevBlkEndOnBranch = curBlk->endOnBranch;
//                activeBlock = false;
//            }
        }
    };  
    
    void finalize(void) {
        
        std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
        for(int i=0; i<NUM_COMBS; i++){
            auto comb_i = combinations[i];
            //std::cout << "Estimated cycles (Comb_" << i << "): " << std::max(comb_i.getTimingVector()[2],comb_i.getTimingVector()[3]) << std::endl;
            std::cout << "Estimated cycles (Comb_" << i << "): " << getMaxCycleCount(comb_i) << std::endl;
        }
        std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    };

protected:

    uint64_t* ch_instrCnt_ptr;
    uint64_t* ch_typeId_ptr;
    uint64_t* ch_pc_ptr;
    uint64_t* ch_rs1_ptr;
    uint64_t* ch_rs2_ptr;
    uint64_t* ch_rd_ptr;

    // Iteration-variable must be member, so external models can connect to it
    int curInstrIdx = 0;

private:

    bool activeBlock = false;
    bool prevBlkEndOnBranch = false;
    bool prevBranchInstr = false;

    const MAP_Explorer::BlockDictionary* blkDict;
    const MAP_Explorer::Block* curBlk;

    const MAP_Explorer::InstructionDictionary* instrDict;

    const std::array<const ResGroupEntryType, NUM_INSTR_TYPES>& resGroupLUT;
    const std::array<ResourceGroup*, NUM_RES_GROUPS> resourceGroups;
    BranchGroup* const branchGroup;
    std::array<DVecType, NUM_D_VECS>& delayVectors;
    std::array<CombType, NUM_COMBS>& combinations;

    void executeBlockScheduling(){
        uint64_t curPc = ch_pc_ptr[curInstrIdx];

        // Start of a new code block
        if(!activeBlock){

            activeBlock = true;
            curBlk = blkDict->getBlock(curPc);

            // Evaluate branch
            if(prevBlkEndOnBranch){
                branchGroup->evaluate();
            }
        }

        // Call resource models
        const auto& entry = resGroupLUT[ch_typeId_ptr[curInstrIdx]];
        for(uint8_t gr_i=0; gr_i< entry.cnt; gr_i++){
            auto group = entry.resGroups[gr_i];
            group->calcDelays();
            for(int i=0; i<NUM_D_VECS; i++){
                delayVectors[i].fetchDelay(group->groupId);
            }
        }

        // End of block reached
        if(curPc == curBlk->endPc){

            // Execute block-scheduling-function
            auto schedFunc = curBlk->getScheduleFunction();
            for(int i=0; i<NUM_COMBS; i++){
                combinations[i].executeScheduling(schedFunc, prevBlkEndOnBranch);
            }

            if(curBlk->endOnBranch){
                //std::cout << "§" << getMaxCycleCount(combinations[0]) << std::endl;
                
                //std::cout << "§" << combinations[0].getTimingVector()[0] << ", ";
                //std::cout << combinations[0].getTimingVector()[1] << ", ";
                //std::cout << combinations[0].getTimingVector()[13] << ", ";
                //std::cout << combinations[0].getTimingVector()[14] << ", ";
                //std::cout << combinations[0].getTimingVector()[15] << ", ";
                //std::cout << combinations[0].getTimingVector()[32] << std::endl;

                //std::cout << "§";
                //auto tVec = combinations[0].getTimingVector();
                //for(int i=0; i<NUM_STAGE_VARS; i++){
                //    std::cout << tVec[i] << ", ";
                //}
                //std::cout << std::endl;
            }

            // If block ended on a branch, update Branch models
            if(curBlk->endOnBranch){            
                branchGroup->catchBranch();
            }
                

            // Clear delay-vectors for next block
            for(int i=0; i<NUM_D_VECS; i++){
                delayVectors[i].reset();
            }
                
            prevBlkEndOnBranch = curBlk->endOnBranch;
            activeBlock = false;
        }  
    };

    void executeInstructionScheduling(){
        
        uint64_t typeId = ch_typeId_ptr[curInstrIdx];

        // If branch, evaluate branch models
        if(prevBranchInstr){
            branchGroup->evaluate();
        }

        // Call resource models
        const auto& entry = resGroupLUT[typeId];
        for(uint8_t gr_i=0; gr_i< entry.cnt; gr_i++){
            auto group = entry.resGroups[gr_i];
            group->calcDelays();
            for(int i=0; i<NUM_D_VECS; i++){
                delayVectors[i].fetchDelay(group->groupId);
            }
        }

        // Execute block-scheduling-function
        auto curInstr = instrDict->getInstruction(typeId);
        auto schedFunc = curInstr->getScheduleFunction();
        for(int i=0; i<NUM_COMBS; i++){
            uint64_t rs1 = ch_rs1_ptr[curInstrIdx];
            uint64_t rs2 = ch_rs2_ptr[curInstrIdx];
            uint64_t rd = ch_rd_ptr[curInstrIdx];
            combinations[i].executeScheduling(schedFunc, prevBranchInstr, rs1, rs2, rd);
        }

        //std::cout << "§" << combinations[0].getTimingVector()[0] << ", ";
        //std::cout << combinations[0].getTimingVector()[1] << ", ";
        //std::cout << combinations[0].getTimingVector()[13] << ", ";
        //std::cout << combinations[0].getTimingVector()[14] << ", ";
        //std::cout << combinations[0].getTimingVector()[15] << ", ";
        //std::cout << combinations[0].getTimingVector()[32] << std::endl;


        //std::cout << " >> UPDATE >> COM_1: " << combinations[0].getTimingVector()[32];
        //std::cout << ", COM_2: " << combinations[0].getTimingVector()[33] << std::endl;

//        if(curInstr->isBranch){
//                //std::cout << "§" << getMaxCycleCount(combinations[0]) << std::endl;
//                
//                std::cout << "§" << combinations[0].getTimingVector()[0] << ", ";
//                std::cout << combinations[0].getTimingVector()[1] << ", ";
//                std::cout << combinations[0].getTimingVector()[13] << ", ";
//                std::cout << combinations[0].getTimingVector()[14] << ", ";
//                std::cout << combinations[0].getTimingVector()[15] << ", ";
//                std::cout << combinations[0].getTimingVector()[32] << std::endl;
//
//                //std::cout << "§";
//                //auto tVec = combinations[0].getTimingVector();
//                //for(int i=0; i<NUM_STAGE_VARS; i++){
//                //    std::cout << tVec[i] << ", ";
//                //}
//                //std::cout << std::endl;
//
//        }

        // Clear delay-vectors for next block
        for(int i=0; i<NUM_D_VECS; i++){
            delayVectors[i].reset();
        }

        // Check if current instruction is a branch
        if (curInstr->isBranch){
            branchGroup->catchBranch();
            prevBranchInstr = true;
        }
        else{
            prevBranchInstr = false;
        }

    };

    uint64_t getMaxCycleCount(CombType& comb_){
        uint64_t maxCnt = 0;
        auto tVec = comb_.getTimingVector();
        for(int i=0; i<NUM_STAGE_VARS; i++){
            maxCnt = std::max(maxCnt, tVec[i]);
        }
        return maxCnt;
    }

};

} // namespace MAP_Explorer

#endif //SWEVAL_BACKENDS_MAP_EXPLORER_H