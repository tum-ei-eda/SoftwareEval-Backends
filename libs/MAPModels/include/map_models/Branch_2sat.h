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

#ifndef MAP_MODEL_BRANCH_2SAT_H
#define MAP_MODEL_BRANCH_2SAT_H

#include "Models.h"

#include <vector>

namespace map_models{

struct Branch_2sat_Config {
    int NUM_PAGES = 2;
    int NUM_ROWS = 64;
};

class SaturationFsm_2Bit{

public:
    SaturationFsm_2Bit() {};
    ~SaturationFsm_2Bit() = default;

    bool getPrediction() const;
    void update(bool) const;

private:
    enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
    state_t RESET_STATE = WEAK_TAKEN;
    mutable state_t state = RESET_STATE;
};

class BranchHistoryTable{

public:
    
    BranchHistoryTable(int numPages_, int numRows_): 
        numPages(numPages_),
        numPageBits(__builtin_ctzll(numPages)),
        numRows(numRows_),
        numRowBits(__builtin_ctzll(numRows)),
        table(numPages_ * numRows_) 
        {};
    ~BranchHistoryTable() = default;

    bool getPrediction(uint64_t pc_) const { return table[indexTable(pc_)].getPrediction(); };
    void update(uint64_t pc_, bool taken_) const { table[indexTable(pc_)].update(taken_); };

private:
    int const numRows, numPages;
    int const numRowBits, numPageBits;
    std::vector<SaturationFsm_2Bit> table;

    int getPageIdx(uint64_t pc_) const { return (int)((pc_ >> 2) & ((1ULL << numPageBits) -1)); };
    int getRowIdx(uint64_t pc_) const { return (int)((pc_ >> (2 + numPageBits)) & ((1ULL << numRowBits) -1)); };
    int indexTable(uint64_t pc_) const { 
        int pageIdx = getPageIdx(pc_);
        int rowIdx = getRowIdx(pc_);
        return pageIdx*numRows + rowIdx; 
    };

};

class Branch_2sat: public BranchModel {

public:
    Branch_2sat(const Branch_2sat_Config& cfg_) : bht(cfg_.NUM_PAGES, cfg_.NUM_ROWS) {};
    ~Branch_2sat() = default;

    uint64_t* pc_ptr = nullptr;
    uint64_t* brTarget_ptr = nullptr;

    void catchBranch() const { 
        prevBrTarget = brTarget_ptr[getInstrIdx()]; 
        brInstrPc = pc_ptr[getInstrIdx()];
    };
    
    void evaluate() const { 
        bool taken =   (pc_ptr[getInstrIdx()] == prevBrTarget);
        bool predictedTaken = bht.getPrediction(brInstrPc);  
        mispredicted = !(taken ^ predictedTaken);
        bht.update(brInstrPc, taken);
    };
    
    void shiftVector(uint64_t* vec_) const {
        if(mispredicted){
            vec_[36] = vec_[38];
        }
        else{
            vec_[36] = vec_[37];
        }
    };

private:
    mutable bool mispredicted = true;
    mutable uint64_t prevBrTarget = 0;
    mutable uint64_t brInstrPc = 0;

    BranchHistoryTable bht;
};

} // namespace map_models

#endif // MAP_MODEL_BRANCH_2SAT_H