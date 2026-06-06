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

#ifndef MAP_MODEL_BRANCH_HISTORY_TABLE_H
#define MAP_MODEL_BRANCH_HISTORY_TABLE_H

#include <vector>
#include <cstdint>

namespace map_models{

class SaturationFsm_2Bit{

public:
    SaturationFsm_2Bit() {};
    ~SaturationFsm_2Bit() = default;

    bool getPrediction() const;
    void update(bool);

private:
    enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
    state_t RESET_STATE = STRONG_NOT_TAKEN;
    state_t state = RESET_STATE;
    
};

struct BranchHistoryEntry{
    bool valid = false;
    SaturationFsm_2Bit state;
};

class BranchHistoryTabel{

public:
    BranchHistoryTabel(int numPages_, int numRows_):
        numPages(numPages_),
        numPageBits(__builtin_ctzll(numPages)),
        numRows(numRows_),
        numRowBits(__builtin_ctzll(numRows)),
        tabel(numPages_ * numRows_) {};
    ~BranchHistoryTabel() = default;

    bool getPrediction(uint64_t, uint64_t) const;
    void update(uint64_t, bool);

private:

    int const numRows, numPages;
    int const numRowBits, numPageBits;
    std::vector<BranchHistoryEntry> tabel;

    int getPageIdx(uint64_t pc_) const { return (int)((pc_ >> 1) & ((1ULL << numPageBits) -1)); };
    int getRowIdx(uint64_t pc_) const { return (int)((pc_ >> (1 + numPageBits)) & ((1ULL << numRowBits) -1)); };
    int indexTabel(uint64_t pc_) const { 
        int pageIdx = getPageIdx(pc_);
        int rowIdx = getRowIdx(pc_);
        return pageIdx*numRows + rowIdx; 
    };

};

} // namespace map_models

#endif // MAP_MODEL_BRANCH_HISTORY_TABLE_H