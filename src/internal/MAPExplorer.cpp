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

/* FILE DEPRECIATED....MOVED TO HEADER

#include "MAPExplorer.h"

#include "Channel.h"

#include "CV32E40P_Channel.h" // TODO: Core-specific

#include <iostream>
#include <array>
#include <vector>

namespace MAP_Explorer{

//void MAPExplorer::connectChannel(Channel* channel_){
//
//    ch_instrCnt_ptr = &(channel_->instrCnt);
//    ch_typeId_ptr = channel_->typeId;
//
//    // TODO: Core-specific
//    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
//    ch_pc_ptr = channel->pc;
//
//    ch_brTarget_ptr = channel->brTarget;
//
//    divider.instrIdx_ptr = &curInstrIdx;
//    divider.rs2_data_ptr = channel->rs2_data;
//
//    dividerUnsigned.instrIdx_ptr = &curInstrIdx;
//    dividerUnsigned.rs2_data_ptr = channel->rs2_data;
//
//}

// TODO: Remove
void MAPExplorer::initialize(void){
  std::cout << "MAPExplorer initialized!" << std::endl;
}

void MAPExplorer::execute(void){

    for(curInstrIdx=0; curInstrIdx<*ch_instrCnt_ptr; curInstrIdx++){

        uint64_t curPc = ch_pc_ptr[curInstrIdx];

        // Start of a new code block
        if(!activeBlock){

            activeBlock = true;
            curBlk = blkDict->getBlock(curPc);
            delayIdx = 0;

            // TODO: Figure out if block was (miss)predicted (Model-call?)
            if(firstBlock){
                firstBlock = false;
            }
            else{
                mispredicted = (curPc == prevBrTarget);
            }

            auto comb = combinations[0];
            uint64_t* tVec = comb->getTimingVector();
            if(mispredicted){
                tVec[36] = tVec[38];
            }
            else{
                tVec[36] = tVec[37];
            }
            //if(mispredicted){
            //    timingVector[36] = timingVector[38];
            //}
            //else{
            //    timingVector[36] = timingVector[37];
            //}

        }

        // Call resource models
        uint64_t typeId = ch_typeId_ptr[curInstrIdx];
//        // if div (25) or rem (26) call divider model
//        if((typeId == 25) || (typeId == 26)){
//            delayVector[delayIdx] = divider.getDelay();
//            delayIdx++;
//        }
//        // else if divu (27) or remu (28) call divider_u model
//        else if((typeId == 27) || (typeId == 28)){
//            delayVector[delayIdx] = dividerUnsigned.getDelay();
//            delayIdx++;{
//            delayVector[delayIdx] = dividerUnsigned.getDelay();
//            delayIdx++;
//        }

//        if((typeId >= 25) and (typeId <= 28)){
//            //const std::vector<int>& instrGrps = instrResModGrLUT[typeId-25];
//            auto instrGrps = getResourceModelGroups(typeId-25);
//            for(auto group_i : instrGrps){
//                getResourceModelGroup(group_i)->calcDelays();
//                //delayVector[delayIdx] = getModelPtr(group_i)->getDelay();
//                delayIdx++;
//            }
//        }

        if((typeId >= 25 ) && (typeId <= 28)){
            auto reqResModGrps = getResourceModelGroups(typeId-25); // TODO: Where to get this info from?
            for(auto group_i : reqResModGrps){;
                resModelGroups[group_i]->calcDelays();
                for(size_t i=0; i<numCombinations; i++){
                    auto comb_i = combinations[i];
                    int modelIdx = comb_i->getModelIdx(group_i);
                    int delay = resModelGroups[group_i]->getDelay(modelIdx);
                    comb_i->appendDelay(delay);

                    comb_i->fetchDelay(resModelGroups[group_i].get());
                }
            }
        }

        // End of block reached
        if(curPc == curBlk->endPc){

            // TODO: Store relevant data for branch prediction evaluation (Model-call?)
            prevBrTarget = ch_brTarget_ptr[curInstrIdx];

            // Execute block-scheduling-function
            auto comb = combinations[0];
            uint64_t* dVec = comb->getDelayVector();
            int dIdx = comb->getDelayIdx();

            //if(dIdx!=0){
            //    for(int i=0; i<dIdx; i++){
            //        std::cout << dVec[i];
            //    }
            //    std::cout << std::endl;
            //}

            //for(int i=0; i<4; i++){
            //    std::cout << comb->getTimingVector()[i] << " ";
            //}
            //std::cout << std::endl;

            //for(int i=0; i<4; i++){
            //    std::cout << timingVector[i] << " ";
            //}
            //std::cout << std::endl;

            curBlk->runScheduleFunction(comb->getTimingVector(), dVec);
            //curBlk->runScheduleFunction(timingVector, delayVector);
            comb->resetDelayIdx();

            activeBlock = false;
        }

    }
    
}

void MAPExplorer::finalize(void){

    auto comb = combinations[0];

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Estimated cycles (No Br.Pred.): " << std::max(comb->getTimingVector()[2],comb->getTimingVector()[3]) << std::endl;
    //std::cout << "Estimated cycles (No Br.Pred.): " << std::max(timingVector[2],timingVector[3]) << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

}

//// TODO: Core-specific
//const std::array<std::vector<int>, 4> MAPExplorer::instrResModGrLUT = {{
//    {0},
//    {0},
//    {1},
//    {1}
//}};

//map_models::ResourceModel* MAPExplorer::getModelPtr(int modIdx_){
//    switch(modIdx_){
//        case 0: return &divider;
//        case 1: return &dividerUnsigned;
//        default: return nullptr;
//    }
//}

} // namespace MAP_Explorer
 */