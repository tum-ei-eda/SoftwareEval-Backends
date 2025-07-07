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


#include "Vicuna_PerformanceModel.h"

#include <stdbool.h>
#include <string>
#include <sstream>
#include <algorithm>

#include "Channel.h"

#include "Vicuna_Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/Vicuna/VectorRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/Vicuna/VectorMemModel.h"
#include "models/Vicuna/VectorStoreModel.h"
#include "models/Vicuna/VectorAluModel.h"
#include "models/Vicuna/VectorDividerModel.h"
#include "models/Vicuna/VectorSignaller.h"
#include "models/Vicuna/PackUnpack.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"
#include "models/Vicuna/VectorMemVregSignal.h"

namespace Vicuna{

void Vicuna_PerformanceModel::connectChannel(Channel* channel_)
{
  Vicuna_Channel* channel = static_cast<Vicuna_Channel*>(channel_);

  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;

  vectorRegModel.vs1_ptr = channel->vs1;
  vectorRegModel.vs2_ptr = channel->vs2;
  vectorRegModel.vs3_ptr = channel->vs3;
  vectorRegModel.vd_ptr = channel->vd;
  vectorRegModel.vtype_ptr = channel->vtype;
  vectorRegModel.width_ptr = channel->width;

  staBranchPredModel.pc_ptr = channel->pc;
  staBranchPredModel.brTarget_ptr = channel->brTarget;

  vectorMemModel.vtype_ptr = channel->vtype;
  vectorMemModel.vl_ptr = channel->vl;
  vectorMemModel.width_ptr = channel->width;

  vectorStoreModel.vtype_ptr = channel->vtype;
  vectorStoreModel.vl_ptr = channel->vl;
  vectorStoreModel.width_ptr = channel->width;

  vectorAluModel.vtype_ptr = channel->vtype;

  vectorDividerModel.vtype_ptr = channel->vtype;


  packUnpack.vtype_ptr = channel->vtype;

  divider.rs2_data_ptr = channel->rs2_data;

  divider_u.rs2_data_ptr = channel->rs2_data;

  vectorMemVregSignal.vtype_ptr = channel->vtype;
  vectorMemVregSignal.width_ptr = channel->width;

}

uint64_t Vicuna_PerformanceModel::getCycleCount(void)
{
  
  return std::max({
    IF_stage 
    ,ID_stage
    ,EX_stage
    ,V_DISP_stage.get(1)
    ,V_EX_stage.get(1)
    ,V_EX_ALU_Unpack_substage
    ,V_EX_ALU_Op_substage
    ,V_EX_ALU_Pack_substage
    ,V_EX_LSU_substage_fifo
    ,V_EX_LSU_substage_last
    ,V_EX_LSU_substage_mem
    ,V_WB_stage
    ,V_RES_stage
    ,R_SIG_stage.get(1)
    ,R_RET_stage
  });
}

std::string Vicuna_PerformanceModel::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << IF_stage; 
  ret_strs << "," << ID_stage;
  ret_strs << "," << EX_stage;
  ret_strs << "," << V_DISP_stage.get(1);
  ret_strs << "," << V_EX_stage.get(1);
  ret_strs << "," << V_WB_stage;
  ret_strs << "," << V_RES_stage;
  ret_strs << "," << R_SIG_stage.get(1);
  ret_strs << "," << R_RET_stage;
  ret_strs << std::endl;
  return ret_strs.str();
}

std::string Vicuna_PerformanceModel::getPrintHeader(void)
{
  std::stringstream ret_strs;
  
  ret_strs << "IF_stage"; 
  ret_strs << "," << "ID_stage";
  ret_strs << "," << "EX_stage";
  ret_strs << "," << "V_DISP_stage";
  ret_strs << "," << "V_EX_stage";
  ret_strs << "," << "V_WB_stage";
  ret_strs << "," << "V_RES_stage";
  ret_strs << "," << "R_SIG_stage";
  ret_strs << "," << "R_RET_stage";
  ret_strs << std::endl;
  return ret_strs.str();
}

} // namespace Vicuna