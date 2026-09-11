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

#ifndef SWEVAL_BACKENDS_BLOCK_SCHEDULING_DICTIONARY_H
#define SWEVAL_BACKENDS_BLOCK_SCHEDULING_DICTIONARY_H

#include "BlockSchedulingFunctions.h"

#include <unordered_map>
#include <array>

namespace MAP_Explorer{

class BlockDictionary{

public:

    BlockDictionary(const MAP_Explorer::Block* const* blocks_, size_t numBlocks_):
        blocks(blocks_), 
        numBlocks(numBlocks_)
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

    inline const Block* getBlock(uint64_t pc_) const {
        
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
 
    };

private:
    const Block* const* blocks;
    size_t numBlocks;

    std::unordered_map<uint64_t, const Block*> blockMap;
    std::array<const Block*, 10> mostUsedBlocks;

};

} // namespace MAP_Explorer

#endif // SWEVAL_BACKENDS_BLOCK_SCHEDULING_DICTIONARY_H