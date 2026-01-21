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


#include "Vicuna_zvl128b_PerformanceModel.h"

#include <stdbool.h>
#include <string>
#include <sstream>
#include <algorithm>

#include "Channel.h"

#include "Vicuna_zvl128b_Channel.h"

#include "models/common/StandardRegisterModel.h"
#include "models/Vicuna/VectorRegisterModel.h"
#include "models/common/StaticBranchPredictModel.h"
#include "models/Vicuna/VectorMemModel.h"
#include "models/Vicuna/VectorMemNfModel.h"
#include "models/Vicuna/VectorArithModel.h"
#include "models/Vicuna/VectorArithWideningModel.h"
#include "models/Vicuna/VectorElmModel.h"
#include "models/Vicuna/VectorDivModel.h"
#include "models/Vicuna/VectorSignaller.h"
#include "models/Vicuna/LsuElmShiftRegister.h"
#include "models/cv32e40p/DividerModel.h"
#include "models/cv32e40p/DividerUnsignedModel.h"

namespace Vicuna_zvl128b{

void Vicuna_zvl128b_PerformanceModel::connectChannel(Channel* channel_)
{
  Vicuna_zvl128b_Channel* channel = static_cast<Vicuna_zvl128b_Channel*>(channel_);

  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;

  vectorRegModel.vs1_ptr = channel->vs1;
  vectorRegModel.vs2_ptr = channel->vs2;
  vectorRegModel.vs3_ptr = channel->vs3;
  vectorRegModel.vd_ptr = channel->vd;
  vectorRegModel.vm_ptr = channel->vm;
  vectorRegModel.vtype_ptr = channel->vtype;
  vectorRegModel.lsWidth_ptr = channel->lsWidth;
  vectorRegModel.nf_ptr = channel->nf;

  staBranchPredModel.pc_ptr = channel->pc;
  staBranchPredModel.brTarget_ptr = channel->brTarget;

  vectorMemModel.vtype_ptr = channel->vtype;
  vectorMemModel.vl_ptr = channel->vl;
  vectorMemModel.lsWidth_ptr = channel->lsWidth;

  vectorMemNfModel.nf_ptr = channel->nf;

  vectorArithModel.vtype_ptr = channel->vtype;

  vectorArithWideningModel.vtype_ptr = channel->vtype;

  vectorElmModel.vtype_ptr = channel->vtype;

  vectorDivModel.vtype_ptr = channel->vtype;



  divider.rs2_data_ptr = channel->rs2_data;

  divider_u.rs2_data_ptr = channel->rs2_data;

}

uint64_t Vicuna_zvl128b_PerformanceModel::getCycleCount(void)
{
  
  return std::max({
    IF_stg 
    ,ID_stg
    ,EX_stg
    ,WB_stg
    ,V_ID_stg
    ,V_IQ_stg.get(1)
    ,V_DISP_stg
    ,V_EX_Arith_Unpack_Enter_stg
    ,V_EX_Arith_Unpack_Leave_stg
    ,V_EX_Arith_Unit_stg.get(1)
    ,V_EX_ALU_BUF_OP_stg
    ,V_EX_ALU_BUF_INT_stg
    ,V_EX_ALU_stg
    ,V_EX_MUL_BUF_OP_stg
    ,V_EX_MUL_BUF_IN_stg
    ,V_EX_MUL_BUF_OUT_stg
    ,V_EX_MUL_stg
    ,V_EX_DIV_stg
    ,V_EX_FPU_stg
    ,V_EX_SLD_stg
    ,V_EX_LSU_ELM_Unpack_Enter_stg
    ,V_EX_LSU_ELM_Unpack_Leave_stg
    ,V_EX_LSU_ELM_Unit_stg.get(1)
    ,V_EX_LSU_BUF_REQ_stg
    ,V_EX_LSU_REQ_stg
    ,V_EX_LSU_BUF_RESP_stg
    ,V_EX_ELM_stg
    ,V_EX_LSU_ELM_Pack_stg
    ,V_RES_stg
  });
}

std::string Vicuna_zvl128b_PerformanceModel::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << IF_stg; 
  ret_strs << "," << ID_stg;
  ret_strs << "," << EX_stg;
  ret_strs << "," << WB_stg;
  ret_strs << "," << V_ID_stg;
  ret_strs << "," << V_IQ_stg.get(1);
  ret_strs << "," << V_DISP_stg;
  ret_strs << "," << V_EX_Arith_Unpack_Enter_stg;
  ret_strs << "," << V_EX_Arith_Unpack_Leave_stg;
  ret_strs << "," << V_EX_Arith_Unit_stg.get(1);
  ret_strs << "," << V_EX_LSU_ELM_Unpack_Enter_stg;
  ret_strs << "," << V_EX_LSU_ELM_Unpack_Leave_stg;
  ret_strs << "," << V_EX_LSU_ELM_Unit_stg.get(1);
  ret_strs << "," << V_EX_LSU_ELM_Pack_stg;
  ret_strs << "," << V_RES_stg;
  ret_strs << std::endl;
  return ret_strs.str();
}

std::string Vicuna_zvl128b_PerformanceModel::getPrintHeader(void)
{
  std::stringstream ret_strs;
  
  ret_strs << "IF_stg"; 
  ret_strs << "," << "ID_stg";
  ret_strs << "," << "EX_stg";
  ret_strs << "," << "WB_stg";
  ret_strs << "," << "V_ID_stg";
  ret_strs << "," << "V_IQ_stg";
  ret_strs << "," << "V_DISP_stg";
  ret_strs << "," << "V_EX_Arith_Unpack_Enter_stg";
  ret_strs << "," << "V_EX_Arith_Unpack_Leave_stg";
  ret_strs << "," << "V_EX_Arith_Unit_stg";
  ret_strs << "," << "V_EX_LSU_ELM_Unpack_Enter_stg";
  ret_strs << "," << "V_EX_LSU_ELM_Unpack_Leave_stg";
  ret_strs << "," << "V_EX_LSU_ELM_Unit_stg";
  ret_strs << "," << "V_EX_LSU_ELM_Pack_stg";
  ret_strs << "," << "V_RES_stg";
  ret_strs << std::endl;
  return ret_strs.str();
}

} // namespace Vicuna_zvl128b