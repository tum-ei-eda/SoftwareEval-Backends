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

#ifndef SWEVAL_BACKENDS_BLOCK_EXTRACTOR_H
#define SWEVAL_BACKENDS_BLOCK_EXTRACTOR_H

#include "BlockInstructionGenerator.h"

#include "Backend.h"
#include "Channel.h"

#include <cstdint>
#include <unordered_map>
#include <vector>
#include <memory>
#include <iostream>

using std::uint64_t;

namespace Block_Extractor{

class Block{

public:
    Block(int id_, uint64_t pc_, const BlockInstructionGenerator& blockInstrGen_): id(id_), pc(pc_), blockInstrGen(blockInstrGen_) {};
    ~Block() {};

    void appendInstr(uint64_t typeId_, Channel* channel_, uint64_t instrIdx_) { 
        instrVector.push_back(blockInstrGen.getCtor(typeId_)(channel_, instrIdx_)); 
    };
    
    void increaseCallCnt(void) { callCnt++; };
    int getId(void) const { return id; };
    uint64_t getPc(void) const { return pc; };
    uint64_t getFinalPc(void) const { return finalPc; };
    int getCallCnt(void) const {return callCnt; };
    const std::vector<std::unique_ptr<BlockInstruction>>& getInstrVector(void) const { return instrVector; };
    
    bool checkEnd(uint64_t pc_) { 
        if(instrVector.back()->isBranchInstr()){
            finalPc = pc_;
            return true;
        }
        return false;
    };

private:
    int id;
    uint64_t pc;
    uint64_t finalPc = 0;
    int callCnt = 0;
    std::vector<std::unique_ptr<BlockInstruction>> instrVector;
    const BlockInstructionGenerator& blockInstrGen;

};

} // namespace Block_Extractor

class BlockExtractor: public Backend{

public:
    BlockExtractor(){};
    ~BlockExtractor() {};

    virtual void connectChannel(Channel*) = 0;
    void initialize(void);
    void execute(void);
    void finalize(void);

protected:
    std::unique_ptr<BlockInstructionGenerator> blockInstrGen;
    std::string outputPath;

    Channel* channel;
    uint64_t* ch_typeId_ptr;
    uint64_t* ch_instrCnt_ptr;
    uint64_t* ch_pc_ptr;

private:
    bool activeBlock = false;
    bool registeredBlock = false;

    int globalInstrCnt = 0;
    int globalBlockCnt = 0;
    int uniqueBlockCnt = 0;

    std::unordered_map<uint64_t, std::unique_ptr<Block_Extractor::Block>> blockMap;
    Block_Extractor::Block* curBlock;

};

#endif // SWEVAL_BACKENDS_BLOCK_EXTRACTOR_H