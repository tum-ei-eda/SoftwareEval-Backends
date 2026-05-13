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


#ifndef SWEVAL_BACKENDS_CV32E40P_DSE_BLOCK_EXTRACTOR_H
#define SWEVAL_BACKENDS_CV32E40P_DSE_BLOCK_EXTRACTOR_H

#include "BlockExtractor.h"

#include "CV32E40P_DSE_BlockInstructionGenerator.h"

#include "Channel.h"

namespace CV32E40P_DSE{

class CV32E40P_DSE_BlockExtractor : public BlockExtractor{

public:
    CV32E40P_DSE_BlockExtractor(){
        blockInstrGen = std::make_unique<CV32E40P_DSE_BlockInstructionGenerator>();
        outputPath = "CV32E40P_DSE_BlockList.json";
    };
    ~CV32E40P_DSE_BlockExtractor() = default;

    virtual void connectChannel(Channel* channel_){
        channel = channel_;
        ch_typeId_ptr = channel_->typeId;
        ch_instrCnt_ptr = &(channel_->instrCnt);

        CV32E40P_DSE_Channel* spec_channel = static_cast<CV32E40P_DSE_Channel*>(channel_);
        ch_pc_ptr = spec_channel->pc;
    };

};

} // namespace CV32E40P_DSE

#endif // SWEVAL_BACKENDS_CV32E40P_DSE_BLOCK_EXTRACTOR_H