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

#ifndef MAP_MODEL_BRANCH_CVA6_H
#define MAP_MODEL_BRANCH_CVA6_H

#include "Models.h"

#include "map_models/BranchHistoryTabel.h"
#include "map_models/BranchTargetBuffer.h"
#include "map_models/ReturnAddressStack.h"

#include <iostream>

namespace map_models{

struct Branch_CVA6_Config {
    int BHT_NUM_PAGES = 2;
    int BHT_NUM_ROWS = 64;
    int BTB_NUM_PAGES = 2;
    int BTB_NUM_ROWS = 16;
    int RAS_SIZE = 2;
};

class Branch_CVA6: public BranchModel {

public:
    Branch_CVA6(const Branch_CVA6_Config& cfg_):
        bht(cfg_.BHT_NUM_PAGES, cfg_.BHT_NUM_ROWS),
        btb(cfg_.BTB_NUM_PAGES, cfg_.BTB_NUM_ROWS),
        ras(cfg_.RAS_SIZE)
    {};
    ~Branch_CVA6() = default;

    uint64_t* pc_ptr = nullptr;
    uint64_t* brTarget_ptr = nullptr;
    uint64_t* imm_ptr = nullptr;
    uint64_t* typeId_ptr = nullptr;
    uint64_t* rs1_ptr = nullptr;
    uint64_t* rd_ptr = nullptr;

    void catchBranch() {
        brTarget = brTarget_ptr[getInstrIdx()];
        brInstrPc = pc_ptr[getInstrIdx()];
        brType = getBranchType(typeId_ptr[getInstrIdx()]);
        //brImm = imm_ptr[getInstrIdx()];

        returnFlag = false;
        predTarget = INVALID_BRANCH_ADDRESS;
        predTaken = false;
        switch (brType){
            case COND_BRANCH:{
                predTaken = bht.getPrediction(brInstrPc, imm_ptr[getInstrIdx()]);
                break;
            }
            case JUMP:{
                if(isCall()){
                    ras.push(brInstrPc + 4);
                }
                break;
            }
            case JUMP_R:{
                if(isReturn() | isCall()){
                    if(isReturn()){
                        returnFlag = true;
                        predTarget = ras.pop();
                    }
                    if(isCall()){
                        ras.push(brInstrPc + 4);
                    }
                }
                else{ // no call, no return
                    predTarget = btb.getPrediction(brInstrPc);
                }
                break;
            }
        
        default:
            break;
        }

    };

    void evaluate() {
        switch (brType){
            case COND_BRANCH: {
                taken = (pc_ptr[getInstrIdx()] == brTarget);
                mispredicted = (taken ^ predTaken);
                if(taken | mispredicted){ // TODO: Make this CVA6 bug configurable/optional
                    bht.update(brInstrPc, taken);
                }
                break;
            }
            case JUMP_R: {
                

                taken = true;
                uint64_t curPc = pc_ptr[getInstrIdx()]; // Could use brTarget here?
                mispredicted = (curPc != predTarget);
                if(mispredicted & !returnFlag){
                    btb.update(brInstrPc, curPc);
                }
                break;
            }
            case JUMP: {
                taken = true;
                mispredicted = false;
            }
            default:
                break;
        }

    };

    void shiftVector(uint64_t* vec_) const {
        
        if(mispredicted){ // mispredicted
            vec_[98] = vec_[103]; // pc_mp = pc_c
            vec_[99] = 0; // pc_pt = 0
        }
        else{ // correctly predicted
            vec_[98] = 0; // pc_mp = 0
            if(taken){ // predicted - taken
                switch(brType){
                    case COND_BRANCH:
                        vec_[99] = vec_[100]; // pc_pt = pc_p
                        break;
                    case JUMP:
                        vec_[99] = vec_[101]; // pc_pt = pc_p_j
                        break;
                    case JUMP_R:
                        vec_[99] = vec_[102]; // pc_pt = pc_p_jr
                        break;
                }   
            }
            else{ // predicted - non-taken
                vec_[99] = 0; // pc_pt = 0
            }
        }
    };

private:

    bool mispredicted;
    bool taken;
    bool returnFlag;
    uint64_t predTarget;
    bool predTaken;

    uint64_t brInstrPc;
    uint64_t brTarget;
    //uint64_t brImm;

    // Branch-Types
    enum branch_t {
        COND_BRANCH,
        JUMP,
        JUMP_R
    };
    branch_t brType;

    branch_t getBranchType(uint64_t typeId_){
        if(typeId_ == 41){
            return JUMP_R;
        }
        else if(typeId_ == 40 || typeId_ == 42 || typeId_ == 43){
            return JUMP;
        }
        return COND_BRANCH; // NOTE: Using COND_BRANCH as default means, that we need to make sure that model is never called on a non-branch
    }

    BranchHistoryTabel bht;
    BranchTargetBuffer btb;
    ReturnAddressStack ras;

    bool isCall(void) { return ( (rd_ptr[getInstrIdx()] == 1) | (rd_ptr[getInstrIdx()] == 5) ); };
    bool isReturn(void) {return ( (rs1_ptr[getInstrIdx()] != rd_ptr[getInstrIdx()]) & ((rs1_ptr[getInstrIdx()] == 1) | (rs1_ptr[getInstrIdx()] == 5)) ); };

    uint64_t const INVALID_BRANCH_ADDRESS = 0xFFFFFFFFFFFFFFFF;

};

} // namespace map_models

#endif // MAP_MODEL_BRANCH_CVA6_H