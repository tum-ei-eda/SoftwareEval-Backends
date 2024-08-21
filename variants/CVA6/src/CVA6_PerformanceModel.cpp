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
#include <cstdint>

#include "Channel.h"

#include "CVA6_Channel.h"

void CVA6_IqStage_Model::set_leaveStage(uint64_t c)
{
  curLeaveStage = c;
  leaveStage[stage_ptr] = c;
  stage_ptr = (++stage_ptr)%7;
}

//void CVA6_ExStage_Model::set_leaveMul(uint64_t c)
//{
//  leaveMul[mul_ptr_i2] = c;
//  mul_ptr_i2 = (++mul_ptr_i2)%2;
//  mul_ptr_i1 = (++mul_ptr_i1)%2;
//}

void CVA6_ExStage_Model::set_leaveStage(uint64_t c)
{
  curLeaveStage = c;
  leaveStage[stage_ptr_i8] = c;
  stage_ptr_i8 = (++stage_ptr_i8)%8;
  stage_ptr_i1 = (++stage_ptr_i1)%8;
}

void CVA6_ComStage_Model::set_leaveStage(uint64_t c)
{
  curLeaveStage = c;
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
 
  iCacheModel.pc_ptr = channel->pc;

  dCacheModel.addr_ptr = channel->memAddr;

  brPredModel.pc_ptr = channel->pc;
  brPredModel.brTarget_ptr = channel->brTarget;
  brPredModel.rs1_ptr = channel->rs1;
  brPredModel.rd_ptr = channel->rd;
  brPredModel.imm_ptr = channel->imm;  

  divModel.rs1_data_ptr = channel->rs1_data;
  divModel.rs2_data_ptr = channel->rs2_data;

  divUModel.rs1_data_ptr = channel->rs1_data;
  divUModel.rs2_data_ptr = channel->rs2_data;
}

std::string CVA6_Model::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << PcGenStage.getStageInfo(); 
  ret_strs << "," << IfStage.getStageInfo();
  ret_strs << "," << IqStage.getStageInfo();
  ret_strs << "," << IdStage.getStageInfo();
  ret_strs << "," << IsStage.getStageInfo();
  ret_strs << "," << ExStage.getStageInfo();
  ret_strs << "," << ComStage.getStageInfo();
  ret_strs << "," << iCacheModel.getInfo_miss();
  ret_strs << "," << dCacheModel.getInfo_miss();
  ret_strs << "," << brPredModel.getInfo_taken();
  ret_strs << "," << brPredModel.getInfo_mispredict();
  //ret_strs << "," << brPredModel.getInfo_predictedTaken();
  //ret_strs << "," << brPredModel.getInfo_pc_pt();
  //ret_strs << "," << brPredModel.getInfo_pc_mp();
  return ret_strs.str();
}

std::string CVA6_Model::getPrintHeader(void)
{
  std::stringstream ret_strs;

  ret_strs << "PCGEN";
  ret_strs << "," << "IF";
  ret_strs << "," << "IQ";
  ret_strs << "," << "ID";
  ret_strs << "," << "IS";
  ret_strs << "," << "EX";
  ret_strs << "," << "COM";
  ret_strs << "," << "iCache:miss";
  ret_strs << "," << "dCache:miss";
  ret_strs << "," << "branch:taken";
  ret_strs << "," << "branch:mispredict";
  //ret_strs << "," << "predictedTaken";
  //ret_strs << "," << "cyc_pc_pt";
  //ret_strs << "," << "cyc_pc_mp";
  ret_strs << std::endl;
 return ret_strs.str();
}
