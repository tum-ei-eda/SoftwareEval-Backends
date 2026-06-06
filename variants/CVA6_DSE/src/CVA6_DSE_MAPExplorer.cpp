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


#include "CVA6_DSE_MAPExplorer.h"

#include "Channel.h"

#include "CVA6_DSE_Channel.h"

namespace CVA6_DSE{

/* BRANCH GROUP */

static map_models::Branch_CVA6 create_branch_cva6()
{
    map_models::Branch_CVA6_Config cfg;
    cfg.BHT_NUM_PAGES = 2;
    cfg.BHT_NUM_ROWS = 64;
    cfg.BTB_NUM_PAGES = 2;
    cfg.BTB_NUM_ROWS = 16;
    cfg.RAS_SIZE = 2;
    return map_models::Branch_CVA6(cfg);
}
static map_models::Branch_CVA6 branch_cva6 = create_branch_cva6();


CVA6_DSE_BranchGroup::CVA6_DSE_BranchGroup()
    : BranchGroupT(
        branch_cva6
    )
{}

void CVA6_DSE_BranchGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);

    branch_cva6.connectInstrIdx(instrIdx_ptr_);
    branch_cva6.pc_ptr = channel->pc;
    branch_cva6.brTarget_ptr = channel->brTarget;
    branch_cva6.imm_ptr = channel->imm;
    branch_cva6.typeId_ptr = channel->typeId;
    branch_cva6.rs1_ptr = channel->rs1;
    branch_cva6.rd_ptr = channel->rd;

}

/* RESOURCE GROUPS */

// -- CVA6_DSE_ICACHE_ResourceGroup

static map_models::ICacheModel create_iCache_0()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 256;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_0 = create_iCache_0();


CVA6_DSE_ICACHE_ResourceGroup::CVA6_DSE_ICACHE_ResourceGroup()
    : ResourceGroupT(
        0,
        iCache_0
    )
{}

void CVA6_DSE_ICACHE_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);

    iCache_0.connectInstrIdx(instrIdx_ptr_);
    iCache_0.pc_ptr = channel->pc;

}

// -- CVA6_DSE_DIVIDER_ResourceGroup

static map_models::Divider_CVA6 divider;

CVA6_DSE_DIVIDER_ResourceGroup::CVA6_DSE_DIVIDER_ResourceGroup()
    : ResourceGroupT(
        1,
        divider
    )
{}

void CVA6_DSE_DIVIDER_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);

    divider.connectInstrIdx(instrIdx_ptr_);
    divider.rs1_data_ptr = channel->rs1_data;
    divider.rs2_data_ptr = channel->rs2_data;

}

// -- CVA6_DSE_DIVIDER_U_ResourceGroup

static map_models::DividerUnsigned_CVA6 divider_u;

CVA6_DSE_DIVIDER_U_ResourceGroup::CVA6_DSE_DIVIDER_U_ResourceGroup()
    : ResourceGroupT(
        2,
        divider_u
    )
{}

void CVA6_DSE_DIVIDER_U_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);

    divider_u.connectInstrIdx(instrIdx_ptr_);
    divider_u.rs1_data_ptr = channel->rs1_data;
    divider_u.rs2_data_ptr = channel->rs2_data;

}

// -- CVA6_DSE_DCACHE_ResourceGroup

static map_models::DCacheModel create_dCache_0()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 256;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_0 = create_dCache_0();


CVA6_DSE_DCACHE_ResourceGroup::CVA6_DSE_DCACHE_ResourceGroup()
    : ResourceGroupT(
        3,
        dCache_0
    )
{}

void CVA6_DSE_DCACHE_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);

    dCache_0.connectInstrIdx(instrIdx_ptr_);
    dCache_0.addr_ptr = channel->addr;

}


/* MAP-EXPLORER */

CVA6_DSE_BranchGroup CVA6_DSE_MAPExplorer::branchGroup;

static CVA6_DSE_ICACHE_ResourceGroup resGroup_ICACHE;
static CVA6_DSE_DIVIDER_ResourceGroup resGroup_DIVIDER;
static CVA6_DSE_DIVIDER_U_ResourceGroup resGroup_DIVIDER_U;
static CVA6_DSE_DCACHE_ResourceGroup resGroup_DCACHE;

constexpr std::array<MAP_Explorer::ResourceGroup*, 4>
CVA6_DSE_MAPExplorer::resGroups = {
    &resGroup_ICACHE,
    &resGroup_DIVIDER,
    &resGroup_DIVIDER_U,
    &resGroup_DCACHE
};

constexpr std::array<const CVA6_DSE_MAPExplorer::ResGroupEntryType, 68>
CVA6_DSE_MAPExplorer::resGroupLUT = {{
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}}
}};

std::array<CVA6_DSE_MAPExplorer::DVecType, 1>
CVA6_DSE_MAPExplorer::delayVectors = {{
    {{{&iCache_0, &divider, &divider_u, &dCache_0}}}
}};

std::array<CVA6_DSE_MAPExplorer::CombType, 1>
CVA6_DSE_MAPExplorer::combs = {{
    {&delayVectors[0], &branch_cva6}
}};

CVA6_DSE_MAPExplorer::CVA6_DSE_MAPExplorer()
    : MAPExplorerBase(
        &CVA6_DSE_blockDict,
        resGroupLUT,
        resGroups,
        &branchGroup,
        delayVectors,
        combs) 
{}

void CVA6_DSE_MAPExplorer::connectChannel(Channel* channel_){
    ch_instrCnt_ptr = &(channel_->instrCnt);
    ch_typeId_ptr = channel_->typeId;

    // TODO: Currently hard-coded. Need to get this information from somewhere
    CVA6_DSE_Channel* channel = static_cast<CVA6_DSE_Channel*>(channel_);
    ch_pc_ptr = channel->pc;

    branchGroup.connectChannel(channel_, &curInstrIdx);

    resGroups[0]->connectChannel(channel_, &curInstrIdx);
    resGroups[1]->connectChannel(channel_, &curInstrIdx);
    resGroups[2]->connectChannel(channel_, &curInstrIdx);
    resGroups[3]->connectChannel(channel_, &curInstrIdx);
}

} // namespace CVA6_DSE