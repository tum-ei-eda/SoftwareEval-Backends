/*
* Copyright 2025 Chair of EDA, Technical University of Munich
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


#include "CVA6_PerformanceModel.h"

#include <stdbool.h>
#include <string>
#include <sstream>
#include <algorithm>

#include "Channel.h"

#include "CVA6_Channel.h"

#include "models/cva6/ICacheResModel.h"
#include "models/cva6/CVA6_DividerModel.h"
#include "models/cva6/CVA6_DividerUnsignedModel.h"
#include "models/cva6/DCacheModel.h"
#include "models/common/StandardRegisterModel.h"
#include "models/cva6/CVA6_BranchPredictionModel.h"
#include "models/cva6/ClobberModel.h"
#include "models/cva6/ICacheConModel.h"

namespace CVA6{

void CVA6_PerformanceModel::connectChannel(Channel* channel_)
{
  CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);

  iCacheResModel.pc_ptr = channel->pc;

  divider.rs1_data_ptr = channel->rs1_data;
  divider.rs2_data_ptr = channel->rs2_data;

  divider_u.rs1_data_ptr = channel->rs1_data;
  divider_u.rs2_data_ptr = channel->rs2_data;

  dCacheModel.addr_ptr = channel->addr;

  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;

  dynBranchPredModel.pc_ptr = channel->pc;
  dynBranchPredModel.brTarget_ptr = channel->brTarget;
  dynBranchPredModel.rs1_ptr = channel->rs1;
  dynBranchPredModel.rd_ptr = channel->rd;
  dynBranchPredModel.imm_ptr = channel->imm;

  clobberModel.rd_ptr = channel->rd;

  iCacheConModel.pc_ptr = channel->pc;

}

uint64_t CVA6_PerformanceModel::getCycleCount(void)
{
  
  return std::max({
    PC_stage 
    ,IF_stage
    ,IF_substage_0
    ,IF_substage_1
    ,IF_substage_2
    ,IQ_stage.get(1)
    ,ID_stage
    ,IS_stage
    ,EX_stage.get(1)
    ,EX_substage_alu
    ,EX_substage_mul_i
    ,EX_substage_mul_o
    ,EX_substage_div
    ,EX_substage_lCtrl
    ,EX_substage_dCache
    ,EX_substage_lUnit
    ,EX_substage_sCtrl
    ,EX_substage_sUnit
    ,COM_stage.get(1)
  });
}

std::string CVA6_PerformanceModel::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << PC_stage; 
  ret_strs << "," << IF_stage;
  ret_strs << "," << IQ_stage.get(1);
  ret_strs << "," << ID_stage;
  ret_strs << "," << IS_stage;
  ret_strs << "," << EX_stage.get(1);
  ret_strs << "," << COM_stage.get(1);
  ret_strs << std::endl;
  return ret_strs.str();
}

std::string CVA6_PerformanceModel::getPrintHeader(void)
{
  std::stringstream ret_strs;
  
  ret_strs << "PC_stage"; 
  ret_strs << "," << "IF_stage";
  ret_strs << "," << "IQ_stage";
  ret_strs << "," << "ID_stage";
  ret_strs << "," << "IS_stage";
  ret_strs << "," << "EX_stage";
  ret_strs << "," << "COM_stage";
  ret_strs << std::endl;
  return ret_strs.str();
}

} // namespace CVA6