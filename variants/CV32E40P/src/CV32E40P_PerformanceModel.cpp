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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/

#include "CV32E40P_PerformanceModel.h"

#include <stdbool.h>
#include <string>
#include <sstream>

#include "Channel.h"

#include "CV32E40P_Channel.h"

#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/common/StandardRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"

namespace CV32E40P{

void CV32E40P_PerformanceModel::connectChannel(Channel* channel_)
{
  CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);	

  divider.rs2_data_ptr = channel->rs2_data;
  
  divider_u.rs2_data_ptr = channel->rs2_data;
  
  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;
  
  staBranchPredModel.pc_ptr = channel->pc;
  staBranchPredModel.brTarget_ptr = channel->brTarget;
  
}

std::string CV32E40P_PerformanceModel::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << CV32E40P_pipeline.getIF_stage(); 
  ret_strs << "," << CV32E40P_pipeline.getID_stage();
  ret_strs << "," << CV32E40P_pipeline.getEX_stage();
  ret_strs << "," << CV32E40P_pipeline.getWB_stage();
  return ret_strs.str();
}

std::string CV32E40P_PerformanceModel::getPrintHeader(void)
{
  std::stringstream ret_strs;
  
  ret_strs << "IF_stage"; 
  ret_strs << "," << "ID_stage";
  ret_strs << "," << "EX_stage";
  ret_strs << "," << "WB_stage";
  ret_strs << std::endl;
  return ret_strs.str();
}

} // namespace CV32E40P
