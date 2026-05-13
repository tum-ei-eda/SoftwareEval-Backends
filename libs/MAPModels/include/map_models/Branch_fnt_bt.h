/*
 * Copyright 2026 Chair of EDA, Technical University of Munich
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

#ifndef MAP_MODEL_BRANCH_FNT_BT_H
#define MAP_MODEL_BRANCH_FNT_BT_H

#include "Models.h"

#include <iostream>

namespace map_models{

class Branch_fnt_bt: public BranchModel {

public:
    Branch_fnt_bt() {};
    ~Branch_fnt_bt() = default;

    uint64_t* pc_ptr = nullptr;
    uint64_t* brTarget_ptr = nullptr;

    void catchBranch() const { 
        prevBrTarget = brTarget_ptr[getInstrIdx()]; 
        predictedTaken = (prevBrTarget < pc_ptr[getInstrIdx()]);
    };
    
    void evaluate() const { 
        bool taken = (pc_ptr[getInstrIdx()] == prevBrTarget);
        mispredicted = !(taken ^ predictedTaken); 
    };
    
    void shiftVector(uint64_t* vec_) const {
        if(mispredicted){
            vec_[36] = vec_[38];
        }
        else{
            vec_[36] = vec_[37];
        }
    }

private:
    mutable bool mispredicted = true;
    mutable bool predictedTaken = true;
    mutable uint64_t prevBrTarget = 0;

};

} // namespace map_models

#endif // MAP_MODEL_BRANCH_FNT_BT_H