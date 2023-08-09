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

#ifndef BRANCH_PREDICTION_MODEL_H
#define BRANCH_PREDICTION_MODEL_H

#include <stdbool.h>
#include <array>
#include <cstdint>

#include "PerformanceModel.h"

class PredictFsm
{
public:
  PredictFsm(){};
  bool getPrediction(void);
  void update(bool);
private:
  enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
  state_t RESET_STATE = STRONG_NOT_TAKEN;
  state_t FLUSH_STATE = WEAK_TAKEN; 
  state_t state = RESET_STATE;
};


struct BranchHistoryEntry
{
  bool valid = false;
  PredictFsm state;
};


class BranchHistoryTable
{
public:
  BranchHistoryTable(){};
  bool getPrediction(uint64_t, uint64_t);
  void update(uint64_t, bool);
private:
  std::array<std::array<BranchHistoryEntry, 64>, 2> tab;
  int getPageIndex(uint64_t pc_) { return ((pc_ & 0x00000002) >> 1); };
  int getRowIndex(uint64_t pc_) { return ((pc_ & 0x000000FC) >> 2); };
};


struct ReturnAddressEntry
{
  bool valid = false;
  uint64_t addr = 0;
};


class ReturnAddressStack
{
public:
  ReturnAddressStack(){};
  void push(uint64_t);
  //void pop(void); // TODO: Make it return ra?
private:
  std::array<ReturnAddressEntry,2> stack;
};

//class BranchTargetBuffer
//{
//public:
//  BranchTargetBuffer(){};
//  int getPrediction(int);
//  void update(int, int);
//private:
//  std::array<int, 32>tab;
//};

  
class BranchPredictionModel : public ConnectorModel
{
public:
  BranchPredictionModel(PerformanceModel* parent_) : ConnectorModel("BranchPredictionModel", parent_), bht(), ras() {}; //, btb() {};
   
  // API
  void setPc_p(uint64_t);
  void setPc_p_jal(uint64_t);
  void setPc_np(uint64_t pc_np_){ t_pc_nPred = pc_np_; };
  uint64_t getPc(void);

  // Used for model evaluation TODO: Delete?
  std::string getInfo_mispredict(void) { return std::to_string(isMispredict); };
  std::string getInfo_taken(void) { return std::to_string(isTaken); };
  
  // Trace values
  uint64_t* pc_ptr;
  uint64_t* brTarget_ptr;
  uint64_t* imm_ptr;
  uint64_t* rd_ptr;
  
private:
  BranchHistoryTable bht;
  //BranchTargetBuffer btb;
  ReturnAddressStack ras;

  bool branchInstr_flag = false;
  uint64_t branchPc = 0; 
  uint64_t branchTarget = 0;
  bool predictedTaken = false;

  bool jumpInstr_flag = false;
  
  uint64_t t_pc_pred = 0;
  uint64_t t_pc_nPred = 0;

  bool isCall(void) { return ( (rd_ptr[getInstrIndex()] == 1) | (rd_ptr[getInstrIndex()] == 5) ); };
  
  bool isMispredict = false; // Used for model evaluation. TODO: DELETE?
  bool isTaken = false; // Used for model evaluation. TODO: DELETE?
};

#endif //BRANCH_PREDICTION_MODEL_H
