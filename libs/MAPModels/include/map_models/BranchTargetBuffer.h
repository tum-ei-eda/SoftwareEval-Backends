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

#ifndef MAP_MODEL_BRANCH_TARGET_BUFFER_H
#define MAP_MODEL_BRANCH_TARGET_BUFFER_H

#include <vector>
#include <cstdint>

#include <iostream>

namespace map_models{

struct TargetBufferEntry{
    bool valid = false;
    uint64_t addr = 0;
};

class BranchTargetBuffer{

public:
    BranchTargetBuffer(int numPages_, int numRows_):
        numPages(numPages_),
        numPageBits(__builtin_ctzll(numPages)),
        numRows(numRows_),
        numRowBits(__builtin_ctzll(numRows)),
        tabel(numPages_ * numRows_) {};
    ~BranchTargetBuffer() = default; 

    uint64_t getPrediction(uint64_t pc_) const {
        auto &entry = tabel[indexTabel(pc_)];
        if(entry.valid){
            return entry.addr;
        }
        return INVALID_BRANCH_ADDRESS;
    };
    
    void update(uint64_t pc_, uint64_t addr_){
        auto &entry = tabel[indexTabel(pc_)];
        entry.valid = true;
        entry.addr = addr_;
    }

private:
    int const numPages, numRows;
    int const numPageBits, numRowBits;
    std::vector<TargetBufferEntry> tabel;

    int getPageIdx(uint64_t pc_) const { return (int)((pc_ >> 1) & ((1ULL << numPageBits) -1)); };
    int getRowIdx(uint64_t pc_) const { return (int)((pc_ >> (1 + numPageBits)) & ((1ULL << numRowBits) -1)); };
    int indexTabel(uint64_t pc_) const { 
        int pageIdx = getPageIdx(pc_);
        int rowIdx = getRowIdx(pc_);
        return pageIdx*numRows + rowIdx; 
    };

    uint64_t const INVALID_BRANCH_ADDRESS = 0xFFFFFFFFFFFFFFFF;

};

} // namespace map_models

#endif // MAP_MODEL_BRANCH_TARGET_BUFFER_H