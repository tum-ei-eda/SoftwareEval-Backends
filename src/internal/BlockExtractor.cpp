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

#include "BlockExtractor.h"

#include "Channel.h"

#include <iostream>
#include <memory>
#include <fstream>
#include <algorithm> 

void BlockExtractor::initialize(void){
    std::cout << "BlockExtractor initialized" << std::endl;
}

void BlockExtractor::execute(void){

    for(int instrIdx_i=0; instrIdx_i < *ch_instrCnt_ptr; instrIdx_i++){
        globalInstrCnt++;

        uint64_t curPc = ch_pc_ptr[instrIdx_i];

        // Check if Block-Start
        if(!activeBlock){
            activeBlock = true;
            globalBlockCnt++;

            // Check if block has been observed before
            auto it = blockMap.find(curPc);
            if(it != blockMap.end()){
                curBlock = it->second.get();
                registeredBlock = true;
            }
            else{
                blockMap.emplace(curPc, std::make_unique<Block_Extractor::Block>(uniqueBlockCnt, curPc, *blockInstrGen));
                uniqueBlockCnt++;
                curBlock = blockMap[curPc].get();
                registeredBlock = false;
            }
            curBlock->increaseCallCnt();
        }

        // Append instrType if block has not been observed before
        if(!registeredBlock){
            curBlock->appendInstr(
                ch_typeId_ptr[instrIdx_i],
                channel,
                instrIdx_i
            );
        }

        // Check if Block-End
        if(!registeredBlock){
            if(curBlock->checkEnd(curPc)){
                activeBlock = false;
            }
        }
        else{
            if(curBlock->getFinalPc() == curPc){
                activeBlock = false;
            }
        }
    }
}

void BlockExtractor::finalize(void){

    // Sort blocks from unordered map into a vector (sorted by id)
    std::vector<Block_Extractor::Block*> blockVector;
    blockVector.reserve(blockMap.size());
    for(const auto& [pc_i, block_i]: blockMap){
        blockVector.push_back(block_i.get());
    }
    std::sort(blockVector.begin(), blockVector.end(),
        [](const Block_Extractor::Block* a, const Block_Extractor::Block* b){ return a->getId() < b->getId(); }
    );

    // Write json file
    std::ofstream file(outputPath);

    file << "{\n";
    file << "\t\"blocks\": [\n";

    bool isFirst = true;
    for(const auto& block_i: blockVector){
        if(isFirst){
            isFirst = false;
        }
        else{
            file << ",\n";
        }
        
        file << "\t\t{\n";
        file << "\t\t\t\"id\": " << block_i->getId() << ",\n";
        file << "\t\t\t\"startPc\": " << block_i->getPc() << ",\n";
        file << "\t\t\t\"endPc\": " << block_i->getFinalPc() << ",\n";
        file << "\t\t\t\"callCnt\": " << block_i->getCallCnt() << ",\n";
        file << "\t\t\t\"instrs\": [\n";
        bool isFirstInstr = true;
        for(const auto& instr_i : block_i->getInstrVector()){
            if(isFirstInstr){
                isFirstInstr = false;
            }
            else{
                file << ",\n";
            }
            file << instr_i->getJsonStr(std::string("\t\t\t\t"));
        }

        file << "\n";
        file << "\t\t\t]\n";

        file << "\t\t}";
    }

    file << "\n";
    file << "\t]\n";
    file << "}\n";

    file.close();

    // Summary to terminal
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Writing block list to: " << outputPath << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "SUMMARY:" << std::endl;

    std::cout << "Number of counted instructions: " << globalInstrCnt << std::endl;
    std::cout << "Number of counted blocks: " << globalBlockCnt << std::endl;
    std::cout << "Number of unique blocks: " << uniqueBlockCnt << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

}