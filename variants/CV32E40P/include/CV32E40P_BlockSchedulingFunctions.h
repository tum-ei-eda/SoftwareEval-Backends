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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/


#ifndef SWEVAL_BACKENDS_CV32E40P_BLOCK_SCHEDULING_FUNCTIONS_H
#define SWEVAL_BACKENDS_CV32E40P_BLOCK_SCHEDULING_FUNCTIONS_H

#include "BlockSchedulingFunctions.h"

#include <array>

namespace CV32E40P{

class CV32E40P_BlockDictionary : public MAP_Explorer::BlockDictionary{

public:
    CV32E40P_BlockDictionary(const std::array<MAP_Explorer::Block, 412>& blocks_) : blocks(blocks_) {};

    const MAP_Explorer::Block* getBlock(uint64_t pc_) const override {
        for (const auto& blk_i : blocks){
            if(blk_i.startPc == pc_){
                return &blk_i;
            }
        }
        return nullptr;
    };

private:
    std::array<MAP_Explorer::Block, 412> blocks;

};

extern const CV32E40P_BlockDictionary CV32E40P_blockDict;

} // namespace CV32E40P

#endif // SWEVAL_BACKENDS_CV32E40P_BLOCK_SCHEDULING_FUNCTIONS_H