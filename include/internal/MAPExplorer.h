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

//#include <functional>
//#include <array>

using std::uint64_t;

// namespace MAP_Explorer{
// 
// struct Block{
//     int id;
//     uint64_t startPc;
//     std::function<void(uint64_t*)> scheduleFunction;
// 
//     void runScheduleFunction(uint64_t* vec_) const { scheduleFunction(vec_); };
// };
// 
// template<size_t N>
// class BlockDictionary{
// 
// public:
//     constexpr BlockDictionary(std::array<Block, N> blocks_): blocks(blocks_) {};
// 
//     constexpr auto getBlock(uint64_t pc_) const -> const auto* {
//         for (const auto& block_i : blocks){
//             if(block_i.startPc == pc_){
//                 return &block_i;
//             }
//         }
//         return nullptr;
//     }
// 
// private:
//     std::array<Block, N> blocks;
// 
// };
// 
// } // namespace MAP_Explorer

class MAPExplorer : public Backend{

public:
    MAPExplorer(const MAP_Explorer::BlockDictionary* blkDict_): blkDict(blkDict_) {};
    ~MAPExplorer() = default;

    void connectChannel(Channel*);
    void initialize(void);
    void execute(void);
    void finalize(void);

private:

    uint64_t* ch_instrCnt_ptr;
    uint64_t* ch_pc_ptr;

    bool activeBlock = false;

    const MAP_Explorer::BlockDictionary* blkDict;
    const MAP_Explorer::Block* curBlk;

    // TODO: Core-specific
    uint64_t timingVector[39] = {0};

    // TODO: Model-specific?
    uint64_t* ch_brTarget_ptr;
    bool mispredicted = true;
    bool firstBlock = true;
    uint64_t prevBrTarget;
};

#endif //SWEVAL_BACKENDS_MAP_EXPLORER_H