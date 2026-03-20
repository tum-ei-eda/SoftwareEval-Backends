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

#include "MAPExplorer.h"

#include "Channel.h"

#include "CV32E40P_Channel.h" // TODO: Core-specific

#include <iostream>

void MAPExplorer::connectChannel(Channel* channel_){

    ch_instrCnt_ptr = &(channel_->instrCnt);

    // TODO: Core-specific
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ch_pc_ptr = channel->pc;

    ch_brTarget_ptr = channel->brTarget;

}

// TODO: Remove
void MAPExplorer::initialize(void){
  std::cout << "MAPExplorer initialized!" << std::endl;
}

void MAPExplorer::execute(void){

    for(int instrIdx_i=0; instrIdx_i<*ch_instrCnt_ptr; instrIdx_i++){

        uint64_t curPc = ch_pc_ptr[instrIdx_i];

        // Start of a new code block
        if(!activeBlock){
            activeBlock = true;
            curBlk = blkDict->getBlock(curPc);

            // TODO: Figure out if block was (miss)predicted (Model-call?)
            if(firstBlock){
                firstBlock = false;
            }
            else{
                mispredicted = (curPc == prevBrTarget);
            }

            if(mispredicted){
                timingVector[36] = timingVector[38];
            }
            else{
                timingVector[36] = timingVector[37];
            }
        }

        // End of block reached
        if(curPc == curBlk->endPc){
            
            // TODO: Store relevant data for branch prediction evaluation (Model-call?)
            prevBrTarget = ch_brTarget_ptr[instrIdx_i];

            // Execute block-scheduling-function
            curBlk->runScheduleFunction(timingVector);

            activeBlock = false;
        }

    }
    
}

void MAPExplorer::finalize(void){

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Estimated cycles (No Br.Pred.): " << std::max(timingVector[2],timingVector[3]) << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

}