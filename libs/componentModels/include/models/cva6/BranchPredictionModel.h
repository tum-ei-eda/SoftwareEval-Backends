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

#include "PerformanceModel.h"

class PredictFsm
{
public:
  PredictFsm(){};
  bool getPrediction(void);
  void update(bool);
private:
  enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
  state_t RESET_STATE = WEAK_TAKEN;
  state_t state = RESET_STATE;
};


class BranchHistoryTable
{
public:
  BranchHistoryTable(){};
  bool getPrediction(int);
  void update(int, bool);
private:
  std::array<PredictFsm, 128> tab;
};


class BranchTargetBuffer
{
public:
  BranchTargetBuffer(){};
  int getPrediction(int);
  void update(int, int);
private:
  std::array<int, 32>tab;
};

  
class BranchPredictionModel : public ConnectorModel
{
public:
  BranchPredictionModel(PerformanceModel* parent_) : ConnectorModel("BranchPredictionModel", parent_), bht(), btb() {};

  // API
  void setPc_p(int);
  void setPc_np(int pc_np_){ t_pc_nPred = pc_np_; };
  int getPc(void);

  // Trace values
  int* pc_ptr;
  int* brTarget_ptr;
  
private:
  BranchHistoryTable bht;
  BranchTargetBuffer btb;

  bool branchInstr_flag = false;
  int bhtIndex = 0;
  bool predictedTaken = false;
  int branchTarget = 0;
  int t_pc_pred = 0;
  int t_pc_nPred = 0;
};

#endif //BRANCH_PREDICTION_MODEL_H
