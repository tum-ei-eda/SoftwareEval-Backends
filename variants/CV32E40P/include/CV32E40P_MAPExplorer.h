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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/


#ifndef SWEVAL_BACKENDS_CV32E40P_BLOCK_EXTRACTOR_H
#define SWEVAL_BACKENDS_CV32E40P_BLOCK_EXTRACTOR_H

#include "MAPExplorer.h"

#include "CV32E40P_BlockSchedulingFunctions.h"

namespace CV32E40P{

class CV32E40P_MAPExplorer : public MAPExplorer{

public:
    CV32E40P_MAPExplorer() : MAPExplorer(&CV32E40P_blockDict) {};
    ~CV32E40P_MAPExplorer() = default;

};

} // namespace CV32E40P

#endif // SWEVAL_BACKENDS_CV32E40P_BLOCK_EXTRACTOR_H