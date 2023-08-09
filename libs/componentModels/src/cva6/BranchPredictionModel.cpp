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

bool PredictFsm::getPrediction(void)
{
  if(state == STRONG_NOT_TAKEN || state == WEAK_NOT_TAKEN)
  {
    return false;
  }
  return true;
}

void PredictFsm::update(bool taken_)
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

//bool BranchHistoryTable::getPrediction(int i_)
//{
//  // TODO: Justifiable to remove this if-statement?
//  if(i_ >= 0 && i_ < 128)
//  {
//    return tab[i_].getPrediction();
//  }
//  return false;
//}
//
//void BranchHistoryTable::update(int i_, bool taken_)
//{
//  // TODO: Justifiable to remove this if-statement?
//  if(i_ >= 0 && i_ < 128)
//  {
//    tab[i_].update(taken_);
//  }
//}

bool BranchHistoryTable::getPrediction(uint64_t pc_, uint64_t imm_)
{

  // TODO: Different behavior for unaligned!
  if (!tab[getPageIndex(pc_)][getRowIndex(pc_)].valid)
  {
    // Predict taken if imm is negative
    return (int64_t(imm_) < 0);
  }
  return tab[getPageIndex(pc_)][getRowIndex(pc_)].state.getPrediction();
}

void BranchHistoryTable::update(uint64_t pc_, bool taken_)
{  
  tab[getPageIndex(pc_)][getRowIndex(pc_)].valid = true;
  tab[getPageIndex(pc_)][getRowIndex(pc_)].state.update(taken_);
}

void ReturnAddressStack::push(uint64_t ra_)
{
  stack[1] = stack[0];

  stack[0].addr = ra_;
  stack[0].valid = true;
}

//int BranchTargetBuffer::getPrediction(int i_)
//{
//  // TODO: Justifiable to remove this if-statement?
//  if(i_ >= 0 && i_ < 32)
//  {
//    return tab[i_];
//  }
//  return 0;
//}
//
//void BranchTargetBuffer::update(int i_, int brAddr_)
//{
//  // TODO: Justifiable to remove this if-statement?
//  if(i_ >=0 && i_ < 32)
//  {
//    tab[i_] = brAddr_;
//  }
//}

void BranchPredictionModel::setPc_p(uint64_t pc_p_)
{
  branchInstr_flag = true;
  branchPc = pc_ptr[getInstrIndex()];
  branchTarget = brTarget_ptr[getInstrIndex()];
  predictedTaken = bht.getPrediction(branchPc, imm_ptr[getInstrIndex()]);
  t_pc_pred = pc_p_;
}

void BranchPredictionModel::setPc_p_jal(uint64_t pc_p_)
{
  jumpInstr_flag = true;
  if(isCall())
  {
    ras.push(pc_ptr[getInstrIndex()]);
  }
  t_pc_pred = pc_p_;
}

uint64_t BranchPredictionModel::getPc(void)
{
  isMispredict = false;
  isTaken = false;
  
  // Check if previous instr was a branch
  if(branchInstr_flag)
  {
    branchInstr_flag = false;
  
    // Determine if branch was taken
    uint64_t curPc = pc_ptr[getInstrIndex()];
    bool taken = (curPc == branchTarget);
    isTaken = taken;

    bool mispredicted = predictedTaken != taken;
    
    // Update BHT
    //bht.update(branchPc, taken);
    if(taken | mispredicted)
    {
      bht.update(branchPc, taken);
    }
      
    // Return time value
    if(predictedTaken && taken)
    {
      return t_pc_pred;
    }
    if(mispredicted) // Misprediction
    {
      isMispredict = true;
      return t_pc_nPred;
    }
  }

  // Check if previous instr was unconditional jump (only imm-dependent)
  if(jumpInstr_flag)
  {
    jumpInstr_flag = false;
    return t_pc_pred;
  }
  
  //  PC provided by PC-Gen Stage
  return 0; // Use 0 to disregard the PC connector in any max operation
}
