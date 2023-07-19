/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

// TODO: Hand-written as a proof of concept

#include "CVA6_PerformanceModel.h"

#include <stdbool.h>
#include <string>
#include <sstream>

#include "Channel.h"

#include "CVA6_Channel.h"

void CVA6_IfStage_Model::set_leaveICache(int c)
{
  leaveICache[iCache_ptr] = c;
  iCache_ptr = (++iCache_ptr)%2;
}

void CVA6_IqStage_Model::set_leaveStage(int c)
{
  leaveStage[stage_ptr] = c;
  stage_ptr = (++stage_ptr)%7;
}

void CVA6_ExStage_Model::set_leaveMul(int c)
{
  leaveMul[mul_ptr_i2] = c;
  mul_ptr_i2 = (++mul_ptr_i2)%2;
  mul_ptr_i1 = (++mul_ptr_i1)%2;
}

void CVA6_ExStage_Model::set_leaveStage(int c)
{
  leaveStage[stage_ptr_i8] = c;
  stage_ptr_i8 = (++stage_ptr_i8)%8;
  stage_ptr_i1 = (++stage_ptr_i1)%8;
}

void CVA6_ComStage_Model::set_leaveStage(int c)
{
  leaveStage[stage_ptr] = c;
  stage_ptr = (++stage_ptr)%2;
}

void CVA6_Model::connectChannel(Channel* channel_)
{
  CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);	

  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;

  cbModel.rd_ptr = channel->rd;
  
  staBranchPredModel.pc_ptr = channel->pc;
  staBranchPredModel.brTarget_ptr = channel->brTarget;

  iCacheModel.pc_ptr = channel->pc;

  dCacheModel.addr_ptr = channel->memAddr;

  brPredModel.pc_ptr = channel->pc;
  brPredModel.brTarget_ptr = channel->brTarget;
  
}

std::string CVA6_Model::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << PcGenStage.get_leaveStage(); 
  ret_strs << "," << IfStage.get_leaveStage();
  ret_strs << "," << IqStage.get_leaveStage();
  ret_strs << "," << IdStage.get_leaveStage();
  ret_strs << "," << IsStage.get_leaveStage();
  ret_strs << "," << ExStage.get_leaveStage_i1();
  ret_strs << "," << ComStage.get_leaveStage();
  return ret_strs.str();
}
