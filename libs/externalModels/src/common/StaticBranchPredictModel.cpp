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

#include "models/common/StaticBranchPredictModel.h"

#include <cstdint>
#include <string>
#include <sstream>

namespace common{

void StaticBranchPredictModel::setPc_p(uint64_t pc_p_)
{
  // Every instruction calls setPc_p, so assume it is not a branch
  branchInstr = false;
  pc_p = pc_p_;
}

void StaticBranchPredictModel::setPc_np(uint64_t pc_np_)
{
  pc_np = pc_np_;
  branchInstr = true;
  branchTarget = brTarget_ptr[getInstrIndex()];
}

uint64_t StaticBranchPredictModel::getPc(void)
{
  // Set info print default
  mispredicted_info = false;
  pc_info = pc_p;
  if(!branchInstr)
  {
    return pc_p;
  }
  else
  {
    // Always predict branch-not-taken
    if(pc_ptr[getInstrIndex()] == branchTarget)
    {
      // Set info print for misprediction
      mispredicted_info = true;
      pc_info = pc_np;
      return pc_np;
    }
    else
    {
      return pc_p;
    }
  }
}

std::string StaticBranchPredictModel::getInfoHeader()
{
  std::stringstream ret_strs;
  ret_strs << "br:mispredict";
  ret_strs << "," << "br:pc_avail";
  return ret_strs.str();
}

std::string StaticBranchPredictModel::getInfoStream()
{
  std::stringstream ret_strs;
  ret_strs << mispredicted_info;
  ret_strs << "," << pc_info;
  return ret_strs.str();
}

    
} // namespace common
