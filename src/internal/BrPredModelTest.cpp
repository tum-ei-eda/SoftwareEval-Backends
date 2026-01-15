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

 #include "BrPredModelTest.h"

bool PredictFsm::getPrediction(void){
    if(state == STRONG_NOT_TAKEN || state == WEAK_NOT_TAKEN){
        return false;
    }
    return true;
}

void PredictFsm::update(bool taken_){
    switch(state){
        
        case STRONG_NOT_TAKEN: state = taken_ ? WEAK_NOT_TAKEN : STRONG_NOT_TAKEN;
        break;
        
        case WEAK_NOT_TAKEN: state = taken_ ? WEAK_TAKEN : STRONG_NOT_TAKEN;
        break;
        
        case WEAK_TAKEN: state = taken_ ? STRONG_TAKEN : WEAK_NOT_TAKEN;
        break;

        case STRONG_TAKEN: state = taken_ ? STRONG_TAKEN : WEAK_TAKEN;
        break;

        default: state = STRONG_NOT_TAKEN;
    }
}

bool BranchHistoryTable::getPrediction(uint64_t pc_){
    if(!table[getPageIndex(pc_)][getRowIndex(pc_)].valid){
        return false;
    }
    return table[getPageIndex(pc_)][getRowIndex(pc_)].state.getPrediction();
}

void BranchHistoryTable::update(uint64_t pc_, bool taken_){
    table[getPageIndex(pc_)][getRowIndex(pc_)].valid = true;
    table[getPageIndex(pc_)][getRowIndex(pc_)].state.update(taken_);
}

void BrPredModelTest::registerBranch(uint64_t pc_, uint64_t brTarget_){
    brTarget = brTarget_;
    brPc = pc_;
    predictedTaken = bht.getPrediction(pc_);
}

bool BrPredModelTest::isMispredicted(uint64_t pc_){
    bool taken = (pc_ == brTarget);
    bht.update(pc_, taken);
    return (taken != predictedTaken);
}