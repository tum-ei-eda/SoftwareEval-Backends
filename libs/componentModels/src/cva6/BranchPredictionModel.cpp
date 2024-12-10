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

// TODO: Proof-of-concept model, taken from Robert (more or less)!

#include "models/cva6/BranchPredictionModel.h"

#include <cstdint>

// TODO: Find a better way to define this constant!?
#define INVALID_BRANCH_ADDRESS 0xFFFFFFFFFFFFFFFF

bool CVA6_PredictFsm::getPrediction(void)
{
  if(state == STRONG_NOT_TAKEN || state == WEAK_NOT_TAKEN)
  {
    return false;
  }
  return true;
}

void CVA6_PredictFsm::update(bool taken_)
{
  switch(state)
  {
  case STRONG_NOT_TAKEN: state = taken_ ? WEAK_NOT_TAKEN : STRONG_NOT_TAKEN;
    break;

  case WEAK_NOT_TAKEN : state = taken_ ? WEAK_TAKEN : STRONG_NOT_TAKEN;
    break;

  case WEAK_TAKEN : state = taken_ ? STRONG_TAKEN : WEAK_NOT_TAKEN;
    break;

  case STRONG_TAKEN : state = taken_ ? STRONG_TAKEN : WEAK_TAKEN;
    break;

  default: state = RESET_STATE;
  }
}

bool CVA6_BranchHistoryTable::getPrediction(uint64_t pc_, uint64_t imm_)
{
  // TODO: Different behavior for unaligned!
  if (!tab[getPageIndex(pc_)][getRowIndex(pc_)].valid)
  {
    // Predict taken if imm is negative
    return (int64_t(imm_) < 0);
  }
  return tab[getPageIndex(pc_)][getRowIndex(pc_)].state.getPrediction();
}

void CVA6_BranchHistoryTable::update(uint64_t pc_, bool taken_)
{  
  tab[getPageIndex(pc_)][getRowIndex(pc_)].valid = true;
  tab[getPageIndex(pc_)][getRowIndex(pc_)].state.update(taken_);
}

void CVA6_ReturnAddressStack::push(uint64_t ra_)
{
  stack[1].valid = stack[0].valid;
  stack[1].addr = stack[0].addr;
  
  stack[0].addr = ra_;
  stack[0].valid = true;
}

uint64_t CVA6_ReturnAddressStack::pop(void)
{
  uint64_t ret = stack[0].valid ? stack[0].addr : INVALID_BRANCH_ADDRESS;

  stack[0].valid = stack[1].valid;
  stack[0].addr = stack[1].addr;
  
  stack[1].addr = 0;
  stack[1].valid = false;
  
  return ret;
}

uint64_t CVA6_BranchTargetBuffer::getPrediction(uint64_t pc_)
{
  // TODO: Different behavior for unaligned!
  if(tab[getPageIndex(pc_)][getRowIndex(pc_)].valid)
  {
    return tab[getPageIndex(pc_)][getRowIndex(pc_)].addr;
  }
  return INVALID_BRANCH_ADDRESS;
}

void CVA6_BranchTargetBuffer::update(uint64_t pc_, uint64_t taddr_)
{
  tab[getPageIndex(pc_)][getRowIndex(pc_)].valid = true;
  tab[getPageIndex(pc_)][getRowIndex(pc_)].addr = taddr_;
}


void CVA6_BranchPredictionModel::setPc_p(uint64_t pc_p_)
{
  branch_flag = true;
  branchPc = pc_ptr[getInstrIndex()];
  branchTarget = brTarget_ptr[getInstrIndex()];
  branchPredictedTaken = bht.getPrediction(branchPc, imm_ptr[getInstrIndex()]);
  t_pc_pt = pc_p_;
}

void CVA6_BranchPredictionModel::setPc_p_j(uint64_t pc_p_)
{
  jump_flag = true;

  if(isCall())
  {
    // TODO: Different handling for compressed
    ras.push(pc_ptr[getInstrIndex()] + 4);
  }

  t_pc_pt = pc_p_;
}

void CVA6_BranchPredictionModel::setPc_p_jr(uint64_t pc_p_)
{
  jumpR_flag = true;

  if(isCall() | isReturn())
  {
    branchTarget = INVALID_BRANCH_ADDRESS;
    
    if(isReturn())
    {
      return_flag = true;
      branchTarget = ras.pop();
    }
          
    if(isCall())
    {
      // TODO: Different handling for compressed
      ras.push(pc_ptr[getInstrIndex()] + 4);
    }
  }

  // JumpR if not call or return
  else
  {
    branchPc = pc_ptr[getInstrIndex()];
    branchTarget = btb.getPrediction(branchPc);
  }

  t_pc_pt = pc_p_;
}

// Return t_pc_mp in case of mispredict, else 0
// Do evalutation and updates here, as this function is always called before getPc_pt
uint64_t CVA6_BranchPredictionModel::getPc_mp(void)
{
  isMispredict = false;
  isTaken = false;
  
  // Check if previous instr was a branch
  if(branch_flag)
  {
    // Determine if branch was taken
    uint64_t curPc = pc_ptr[getInstrIndex()];
    isTaken = (curPc == branchTarget);
    
    // Determine if branch was mispredicted
    isMispredict = branchPredictedTaken != isTaken;
    
    // Update BHT
    if(isTaken | isMispredict)
    {
      bht.update(branchPc, isTaken);
    }
      
    // In case of mispredict: Return time when corrected address is available (t_pc_mp)
    if(isMispredict)
    {
      return t_pc_mp;
    }
  }

  // Check if previous instr was jump with immediate base
  else if(jump_flag)
  {
    isTaken = true; // used for info prints
  }
  
  // Check if previous instr was jump with register base
  else if(jumpR_flag)
  {
    // For a jump, branch is always taken
    isTaken = true; // Used for info print
    
    // Determine if branch was mispredicted
    uint64_t curPc = pc_ptr[getInstrIndex()];
    isMispredict = (curPc != branchTarget);

    // Update BTB
    if(isMispredict & !return_flag)
    {
      btb.update(branchPc, curPc);
    }
    
    // On mispredict: Return time when corrected address is available (t_pc_mp)
    if(isMispredict)
    {
      return t_pc_mp;
    }
  }
  
  // Default: Branch/Jump was not mispredicted
  return 0; // Use 0 to disregard the pc_mp connector in any max operation
}

// Return t_pc_pt in case of a correctly predicted taken branch / jump, else 0
// Clear all flags here, as it is always called after getPc_mp
uint64_t CVA6_BranchPredictionModel::getPc_pt(void)
{
  // In case of branch: Check if corretly predicted and taken
  if(branch_flag)
  {
    branch_flag = false;
    if(!isMispredict & isTaken)
    {
      pc_pt = t_pc_pt;
      return t_pc_pt;
    }   
  }

  // In case of (only imm-dependent) jump: Always taken
  if(jump_flag)
  {
    jump_flag = false;
    pc_pt = t_pc_pt;
    return t_pc_pt;
  }

  // In case of register-base jump
  if(jumpR_flag)
  {
    jumpR_flag = false;
    return_flag = false;
    if(!isMispredict)
    {
      pc_pt = t_pc_pt;
      return t_pc_pt;
    }
  }
  
  // Default: Branch/Jump was not correctly predicted
  pc_pt = 0;
  return 0; // Use 0 to disregard the pc_pt connector in any max operation
}
