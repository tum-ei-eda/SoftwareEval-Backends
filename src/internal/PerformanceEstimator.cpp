/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
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

#include "PerformanceEstimator.h"

#include <iostream>
#include <cstdint>

PerformanceEstimator::~PerformanceEstimator()
{
  delete perfModel_ptr;
}

void PerformanceEstimator::connectChannel(Channel* channel_)
{
  // Connect own pointers
  ch_typeId_ptr = channel_->typeId;
  ch_instrCnt_ptr = &(channel_->instrCnt);

  // Forward channel to perfModel
  perfModel_ptr->connectChannel(channel_);
}

void PerformanceEstimator::initialize(void)
{
  // TODO: Need some kind of file/table header
  streamer.setPrintHeader(perfModel_ptr->getPrintHeader());
  streamer.openStream();
}

void PerformanceEstimator::execute(void)
{
  int instrCnt = *ch_instrCnt_ptr;
  
  perfModel_ptr->newTraceBlock();
  
  for(int instr_i=0; instr_i < instrCnt; instr_i++)
  {
    perfModel_ptr->callSchedulingFunction(ch_typeId_ptr[instr_i]);
    perfModel_ptr->update();

    if(streamer.isActive())
    {
      streamer.stream(perfModel_ptr->getPipelineStream());
    }

  }

  globalInstrCnt += instrCnt;
}

void PerformanceEstimator::finalize(void)
{
  uint64_t globalCycleCnt = perfModel_ptr->getCycleCount();
  std::cout << "-----------------------------------------------------------------------------------------------------------------\n";
  std::cout << " >> Number of instructions: " << globalInstrCnt << "\n";
  std::cout << " >> Estimated number of processor cycles: " << globalCycleCnt << "\n";
  std::cout << " >> Estimated average number of processor cycles per instruction: " << ((float)globalCycleCnt/(float)globalInstrCnt) << "\n";
  std::cout << "-----------------------------------------------------------------------------------------------------------------\n";

  streamer.closeStream();
}
