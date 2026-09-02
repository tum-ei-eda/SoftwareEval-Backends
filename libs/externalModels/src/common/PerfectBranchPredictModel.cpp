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

#include "models/common/PerfectBranchPredictModel.h"

#include <cstdint>
#include <string>
#include <sstream>

namespace common{

void PerfectBranchPredictModel::setPc_p(uint64_t pc_p_)
{
  // Every instruction calls setPc_p, so assume it is not a branch
  branchInstr = false;
  pc_p = pc_p_;
}

void PerfectBranchPredictModel::setPc_np(uint64_t pc_np_)
{
  pc_np = pc_np_;
  branchInstr = true;
  branchTarget = brTarget_ptr[getInstrIndex()];
}

uint64_t PerfectBranchPredictModel::getPc(void)
{
  if(!branchInstr)
  {
    return pc_p;
  }

  branch_info = true;
  mispredicted_info = false;
  pc_info = pc_p;

  return pc_p;
}

std::string PerfectBranchPredictModel::getInfoHeader()
{
  std::stringstream ret_strs;
  ret_strs << "br:is_branch";
  ret_strs << "," << "br:mispredict";
  return ret_strs.str();
}

std::string PerfectBranchPredictModel::getInfoStream()
{
  std::stringstream ret_strs;
  ret_strs << branch_info;
  ret_strs << "," << mispredicted_info;
  branch_info = false;
  mispredicted_info = false;
  return ret_strs.str();
}

    
} // namespace common
