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

#ifndef COMMON_STATIC_BRANCH_PREDICT_MODEL_H
#define COMMON_STATIC_BRANCH_PREDICT_MODEL_H

#include "PerformanceModel.h"

#include <stdbool.h>

namespace common{

class StaticBranchPredictModel : public ConnectorModel
{
public:
    StaticBranchPredictModel(PerformanceModel* parent_) : ConnectorModel("StaticBranchPredictModel", parent_) {};

    uint64_t* pc_ptr;
    uint64_t* brTarget_ptr;

    void setPc_p(uint64_t pc_p_);
    void setPc_np(uint64_t pc_np_);
    uint64_t getPc(void);
    
private:
    uint64_t pc_p = 0;
    uint64_t pc_np = 0;
    uint64_t branchTarget = 0;
    bool branchInstr = false;
};

} //namespace common
  
#endif //COMMON_STATIC_BRANCH_PREDICT_MODEL_H
