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


#ifndef SWEVAL_BACKENDS_CVA6_DSE_MAP_EXPLORER_H
#define SWEVAL_BACKENDS_CVA6_DSE_MAP_EXPLORER_H

#include "MAPExplorer.h"

#include "Channel.h"

#include "CVA6_DSE_BlockSchedulingFunctions.h"
#include "CVA6_DSE_InstructionSchedulingFunctions.h"


#include "map_models/Branch_CVA6.h"



#include "map_models/ICacheModel.h"


#include "map_models/Divider_CVA6.h"


#include "map_models/DividerUnsigned_CVA6.h"


#include "map_models/DCacheModel.h"


#include <cstdint>
#include <array>
#include <memory>

namespace CVA6_DSE{

/* BRANCH GROUP */

class CVA6_DSE_BranchGroup : public MAP_Explorer::BranchGroupT<
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6,
map_models::Branch_CVA6
>{

public:
    CVA6_DSE_BranchGroup();
    void connectChannel(Channel*, int*);
};

/* RESOURCE GROUPS */

class CVA6_DSE_ICACHE_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel,
map_models::ICacheModel
>{

public:
    CVA6_DSE_ICACHE_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CVA6_DSE_DIVIDER_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::Divider_CVA6
>{

public:
    CVA6_DSE_DIVIDER_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CVA6_DSE_DIVIDER_U_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::DividerUnsigned_CVA6
>{

public:
    CVA6_DSE_DIVIDER_U_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CVA6_DSE_DCACHE_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel,
map_models::DCacheModel
>{

public:
    CVA6_DSE_DCACHE_ResourceGroup();
    void connectChannel(Channel*, int*);
};


/* MAP EXPLORER */

template<bool USE_BLK>
using MAPExplorerBase = MAP_Explorer::MAPExplorer<USE_BLK, 4, 16384, 1024, 68, 104, 2, 34>;

template<bool USE_BLK>
class CVA6_DSE_MAPExplorer : public MAPExplorerBase<USE_BLK>{

public:

    using CombType = typename MAPExplorerBase<USE_BLK>::CombType;
    using DVecType = typename MAPExplorerBase<USE_BLK>::DVecType;
    using ResGroupEntryType = typename MAPExplorerBase<USE_BLK>::ResGroupEntryType;

    CVA6_DSE_MAPExplorer();
    ~CVA6_DSE_MAPExplorer() = default;

    virtual void connectChannel(Channel*);

private:

    // Branch-Group
    static CVA6_DSE_BranchGroup branchGroup;

    // Resource-Group
    static const std::array<MAP_Explorer::ResourceGroup*, 4> resGroups;

    // Instr -> ResourceGroup LUT
    static const std::array<const ResGroupEntryType, 68> resGroupLUT;

    // Delay-Vectors
    static std::array<DVecType, 1024> delayVectors;

    // Combinations
    static std::array<CombType, 16384> combs;
};

} // namespace CVA6_DSE

#endif // SWEVAL_BACKENDS_CVA6_DSE_MAP_EXPLORER_H