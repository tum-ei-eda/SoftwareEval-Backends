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

#include "map_models/Branch_2sat.h"

namespace map_models{

//bool SaturationFsm_2Bit::getPrediction() const {
//    if(state == STRONG_TAKEN | state == WEAK_TAKEN){
//        return true;
//    }
//    return false;
//}
//
//void SaturationFsm_2Bit::update(bool taken_) {
//    switch(state){
//
//        case STRONG_NOT_TAKEN: state = taken_ ? WEAK_NOT_TAKEN : STRONG_NOT_TAKEN;
//            break;
//
//        case WEAK_NOT_TAKEN: state = taken_ ? WEAK_TAKEN : STRONG_NOT_TAKEN;
//            break;
//
//        case WEAK_TAKEN: state = taken_ ? STRONG_TAKEN : WEAK_NOT_TAKEN;
//            break;
//
//        case STRONG_TAKEN: state = taken_ ? STRONG_TAKEN : WEAK_TAKEN;
//            break;
//
//        default: state = RESET_STATE;
//    }
//}

} // namespace map_models