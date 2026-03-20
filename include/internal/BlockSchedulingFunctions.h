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

#ifndef SWEVAL_BACKENDS_BLOCK_SCHEDULING_FUNCTIONS_H
#define SWEVAL_BACKENDS_BLOCK_SCHEDULING_FUNCTIONS_H

#include <functional>
#include <array>

using std::uint64_t;

namespace MAP_Explorer{

struct Block{
    int id;
    uint64_t startPc;
    uint64_t endPc;
    std::function<void(uint64_t*)> scheduleFunction;

    void runScheduleFunction(uint64_t* vec_) const { scheduleFunction(vec_); };
};

class BlockDictionary{

public:
    BlockDictionary() {};
    ~BlockDictionary() = default;

    virtual const Block* getBlock(uint64_t) const = 0;

};

//template<size_t N>
//class BlockDictionary{
//
//public:
//    constexpr BlockDictionary(std::array<Block, N> blocks_): blocks(blocks_) {};
//
//    constexpr auto getBlock(uint64_t pc_) const -> const auto* {
//        for (const auto& block_i : blocks){
//            if(block_i.startPc == pc_){
//                return &block_i;
//            }
//        }
//        return nullptr;
//    }
//
//private:
//    std::array<Block, N> blocks;
//
//};

} // namespace MAP_Explorer

#endif // SWEVAL_BACKENDS_BLOCK_SCHEDULING_FUNCTIONS_H