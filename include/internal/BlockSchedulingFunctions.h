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

// TODO: Does it make sense to move all this to MAPExplorer.h?

#include <functional>
#include <array>

#include <iostream> // TODO: Debug. Remove
#include <unordered_map>

using std::uint64_t;

namespace MAP_Explorer{

static inline uint64_t max2(uint64_t a, uint64_t b){
    return a > b ? a : b;
}

struct Block{
    
    using SchedFuncPtr = void(*)(uint64_t*, uint8_t*);

    int id;
    uint64_t startPc;
    uint64_t endPc;
    bool endOnBranch;
    SchedFuncPtr scheduleFunction;

    SchedFuncPtr getScheduleFunction() const { return scheduleFunction; };
};

class BlockDictionary{

public:

    //BlockDictionary(const MAP_Explorer::Block* const* blocks_, size_t numBlocks_, size_t delayVecSize_):
    BlockDictionary(const MAP_Explorer::Block* const* blocks_, size_t numBlocks_):
        blocks(blocks_), 
        numBlocks(numBlocks_)
        //delayVecSize(delayVecSize_) 
    {
        blockMap.reserve(numBlocks);

        for(size_t i=0; i<numBlocks; i++){
            const Block* blk = blocks[i];
            blockMap.emplace(blk->startPc, blk);
            if(i < 10){
                mostUsedBlocks[i] = blk;
            }
        }

    };
    
    
    
    
    ~BlockDictionary() = default;
    //~BlockDictionary(){
    //    std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
    //    std::cout << "Num block look-ups: " << lookUpCnt << std::endl;
    //    std::cout << "Total look-up depth: " << lookUpDepth << std::endl;
    //    std::cout << "Avg. look-up depth: " << (lookUpDepth / lookUpCnt) << std::endl;
    //    std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
    //}

    //inline const Block* getBlock(uint64_t pc_) const {
    //    lookUpCnt++;
    //    
    //    for (size_t i = 0; i < numBlocks; i++){
    //        if(blocks[i]->startPc == pc_){
    //            lookUpDepth += (i+1);
    //            return blocks[i];
    //        }
    //    }
    //    return nullptr;   
    //};

    inline const Block* getBlock(uint64_t pc_) const {
        //lookUpCnt++;
        
        for(size_t i=0; i < 10; i++){
            if(mostUsedBlocks[i]->startPc == pc_){
                return mostUsedBlocks[i];
            }
        }

        auto it = blockMap.find(pc_);
        if(it != blockMap.end()){
            return it->second;
        }
        return nullptr;

        //for (size_t i = 0; i < numBlocks; i++){
        //    if(blocks[i]->startPc == pc_){
        //        lookUpDepth += (i+1);
        //        return blocks[i];
        //    }
        //}
        //return nullptr;   
    };

    //const size_t getDelayVecSize() const { return delayVecSize; };

private:
    const Block* const* blocks;
    size_t numBlocks;
    //size_t delayVecSize;

    std::unordered_map<uint64_t, const Block*> blockMap;
    std::array<const Block*, 10> mostUsedBlocks;

    //mutable int lookUpCnt = 0;
    //mutable int lookUpDepth = 0; 

};

} // namespace MAP_Explorer

#endif // SWEVAL_BACKENDS_BLOCK_SCHEDULING_FUNCTIONS_H