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

#ifndef CVA6_BRANCH_PREDICTION_MODEL_H
#define CVA6_BRANCH_PREDICTION_MODEL_H

#include <stdbool.h>
#include <array>
#include <cstdint>

#include "PerformanceModel.h"

class CVA6_PredictFsm
{
public:
  CVA6_PredictFsm(){};
  bool getPrediction(void);
  void update(bool);
private:
  enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
  state_t RESET_STATE = STRONG_NOT_TAKEN;
  state_t FLUSH_STATE = WEAK_TAKEN; 
  state_t state = RESET_STATE;
};


struct CVA6_BranchHistoryEntry
{
  bool valid = false;
  CVA6_PredictFsm state;
};


class CVA6_BranchHistoryTable
{
public:
  CVA6_BranchHistoryTable(){};
  bool getPrediction(uint64_t, uint64_t);
  void update(uint64_t, bool);
private:
  std::array<std::array<CVA6_BranchHistoryEntry, 64>, 2> tab;
  int getPageIndex(uint64_t pc_) { return ((pc_ & 0x00000002) >> 1); };
  int getRowIndex(uint64_t pc_) { return ((pc_ & 0x000000FC) >> 2); };
};


struct CVA6_ReturnAddressEntry
{
  bool valid = false;
  uint64_t addr = 0;
};


class CVA6_ReturnAddressStack
{
public:
  CVA6_ReturnAddressStack(){};
  void push(uint64_t);
  uint64_t pop(void);
private:
  std::array<CVA6_ReturnAddressEntry,2> stack;
};


struct CVA6_TargetBufferEntry
{
  bool valid = false;
  uint64_t addr = 0;
};

class CVA6_BranchTargetBuffer
{
public:
  CVA6_BranchTargetBuffer(){};
  uint64_t getPrediction(uint64_t);
  void update(uint64_t, uint64_t);
private:
  std::array<std::array<CVA6_TargetBufferEntry,16>,2> tab;
  int getPageIndex(uint64_t pc_) { return ((pc_ & 0x00000002) >> 1); };
  int getRowIndex(uint64_t pc_) { return ((pc_ & 0x0000003C) >> 2); };
};

  
class CVA6_BranchPredictionModel : public ConnectorModel
{
public:
  CVA6_BranchPredictionModel(PerformanceModel* parent_) : ConnectorModel("CVA6_BranchPredictionModel", parent_), bht(), ras(), btb() {};
   
  // API
  void setPc_p(uint64_t);
  void setPc_p_j(uint64_t);
  void setPc_p_jr(uint64_t);
  void setPc_c(uint64_t pc_c_) { t_pc_mp = pc_c_; };
  uint64_t getPc_mp(void);
  uint64_t getPc_pt(void);

  // Used for model evaluation TODO: Delete?
  std::string getInfo_mispredict(void) { return std::to_string(isMispredict); };
  std::string getInfo_taken(void) { return std::to_string(isTaken); };
  //std::string getInfo_predictedTaken(void) { return std::to_string(branchPredictedTaken); };
  //std::string getInfo_pc_pt(void) { return std::to_string(t_pc_pt); };
  //std::string getInfo_pc_mp(void) { return std::to_string(t_pc_mp); };
  
  // Trace values
  uint64_t* pc_ptr;
  uint64_t* brTarget_ptr;
  uint64_t* imm_ptr;
  uint64_t* rs1_ptr;
  uint64_t* rd_ptr;
  
private:
  CVA6_BranchHistoryTable bht;
  CVA6_BranchTargetBuffer btb;
  CVA6_ReturnAddressStack ras;

  bool branch_flag = false;
  uint64_t branchPc = 0; 
  uint64_t branchTarget = 0;
  bool branchPredictedTaken = false;

  bool jump_flag = false;

  bool jumpR_flag = false;
  bool return_flag = false;
  
  uint64_t t_pc_pt = 0; // predicted and taken
  uint64_t t_pc_mp = 0; // mispredicted

  bool isMispredict = false;
  bool isTaken = false;
  
  bool isCall(void) { return ( (rd_ptr[getInstrIndex()] == 1) | (rd_ptr[getInstrIndex()] == 5) ); };
  bool isReturn(void) {return ( (rs1_ptr[getInstrIndex()] != rd_ptr[getInstrIndex()]) & ((rs1_ptr[getInstrIndex()] == 1) | (rs1_ptr[getInstrIndex()] == 5)) ); };
  
  // TODO: Use for model evaluation. DELETE!
  uint64_t pc_pt = 0;
  
};

#endif //CVA6_BRANCH_PREDICTION_MODEL_H
