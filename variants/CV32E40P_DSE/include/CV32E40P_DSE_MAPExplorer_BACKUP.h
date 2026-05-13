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


#ifndef SWEVAL_BACKENDS_CV32E40P_DSE_MAP_EXPLORER_H
#define SWEVAL_BACKENDS_CV32E40P_DSE_MAP_EXPLORER_H

#include "MAPExplorer.h"

#include "Channel.h"

#include "CV32E40P_DSE_BlockSchedulingFunctions.h"


#include "map_models/Branch_ant.h"



#include "map_models/ICacheModel.h"


#include "map_models/Divider_CV32E40P.h"


#include "map_models/DividerUnsigned_CV32E40P.h"


#include "map_models/DCacheModel.h"


#include <cstdint>
#include <array>
#include <memory>

namespace CV32E40P_DSE{

/* BRANCH GROUP */

class CV32E40P_DSE_BranchGroup : public MAP_Explorer::BranchGroup{

public:
    CV32E40P_DSE_BranchGroup();
    ~CV32E40P_DSE_BranchGroup() = default;

    void connectChannel(Channel*, int*);

private:
    static const std::array<const map_models::BranchModel*, 1> models;
};

class MyGroup : public MAP_Explorer::BranchGroupT<
map_models::Branch_ant
>{
public:
    MyGroup();
    void connectChannel(Channel*, int*);
};

/* RESOURCE GROUPS */

class CV32E40P_DSE_ICACHE_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::ICacheModel
>{

public:
    CV32E40P_DSE_ICACHE_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CV32E40P_DSE_DIVIDER_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::Divider_CV32E40P
>{

public:
    CV32E40P_DSE_DIVIDER_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CV32E40P_DSE_DIVIDER_U_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::DividerUnsigned_CV32E40P
>{

public:
    CV32E40P_DSE_DIVIDER_U_ResourceGroup();
    void connectChannel(Channel*, int*);
};

class CV32E40P_DSE_DCACHE_ResourceGroup : public MAP_Explorer::ResourceGroupT<
map_models::DCacheModel
>{

public:
    CV32E40P_DSE_DCACHE_ResourceGroup();
    void connectChannel(Channel*, int*);
};


/* MAP EXPLORER */

using MAPExplorerBase = MAP_Explorer::MAPExplorer<4, 1, 54, 39, 2>;

class CV32E40P_DSE_MAPExplorer : public MAPExplorerBase{

public:

    using CombType = typename MAPExplorerBase::CombType;
    using ResGroupEntryType = typename MAPExplorerBase::ResGroupEntryType;

    CV32E40P_DSE_MAPExplorer();
    ~CV32E40P_DSE_MAPExplorer() = default;

    virtual void connectChannel(Channel*);

private:

    // Branch-Group
    static CV32E40P_DSE_BranchGroup branchGroup;
    static MyGroup myGroup;

    // Resource-Group
    static const std::array<MAP_Explorer::ResourceGroup*, 4> resGroups;

    // Instr -> ResourceGroup LUT
    static const std::array<const ResGroupEntryType, 54> resGroupLUT;

    // Combinations
    static const std::array<CombType*, 1> combs;
};

} // namespace CV32E40P_DSE

#endif // SWEVAL_BACKENDS_CV32E40P_DSE_MAP_EXPLORER_H