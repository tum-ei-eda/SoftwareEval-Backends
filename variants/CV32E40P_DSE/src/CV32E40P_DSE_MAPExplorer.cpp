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


#include "CV32E40P_DSE_MAPExplorer.h"

#include "Channel.h"

#include "CV32E40P_DSE_Channel.h"

namespace CV32E40P_DSE{

/* BRANCH GROUP */

static map_models::Branch_ant branch_ant;
static map_models::Branch_fnt_bt branch_fnt_bt;
static map_models::Branch_2sat create_branch_2sat_0()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 2;
    cfg.NUM_ROWS = 64;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_0 = create_branch_2sat_0();

static map_models::Branch_2sat create_branch_2sat_1()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 4;
    cfg.NUM_ROWS = 32;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_1 = create_branch_2sat_1();

static map_models::Branch_2sat create_branch_2sat_2()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 2;
    cfg.NUM_ROWS = 128;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_2 = create_branch_2sat_2();

static map_models::Branch_2sat create_branch_2sat_3()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 4;
    cfg.NUM_ROWS = 64;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_3 = create_branch_2sat_3();

static map_models::Branch_2sat create_branch_2sat_4()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 2;
    cfg.NUM_ROWS = 32;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_4 = create_branch_2sat_4();

static map_models::Branch_2sat create_branch_2sat_5()
{
    map_models::Branch_2sat_Config cfg;
    cfg.NUM_PAGES = 4;
    cfg.NUM_ROWS = 16;
    return map_models::Branch_2sat(cfg);
}
static map_models::Branch_2sat branch_2sat_5 = create_branch_2sat_5();


CV32E40P_DSE_BranchGroup::CV32E40P_DSE_BranchGroup()
    : BranchGroupT(
        branch_ant,
        branch_fnt_bt,
        branch_2sat_0,
        branch_2sat_1,
        branch_2sat_2,
        branch_2sat_3,
        branch_2sat_4,
        branch_2sat_5
    )
{}

void CV32E40P_DSE_BranchGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);

    branch_ant.connectInstrIdx(instrIdx_ptr_);
    branch_ant.pc_ptr = channel->pc;
    branch_ant.brTarget_ptr = channel->brTarget;

    branch_fnt_bt.connectInstrIdx(instrIdx_ptr_);
    branch_fnt_bt.pc_ptr = channel->pc;
    branch_fnt_bt.brTarget_ptr = channel->brTarget;

    branch_2sat_0.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_0.pc_ptr = channel->pc;
    branch_2sat_0.brTarget_ptr = channel->brTarget;

    branch_2sat_1.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_1.pc_ptr = channel->pc;
    branch_2sat_1.brTarget_ptr = channel->brTarget;

    branch_2sat_2.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_2.pc_ptr = channel->pc;
    branch_2sat_2.brTarget_ptr = channel->brTarget;

    branch_2sat_3.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_3.pc_ptr = channel->pc;
    branch_2sat_3.brTarget_ptr = channel->brTarget;

    branch_2sat_4.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_4.pc_ptr = channel->pc;
    branch_2sat_4.brTarget_ptr = channel->brTarget;

    branch_2sat_5.connectInstrIdx(instrIdx_ptr_);
    branch_2sat_5.pc_ptr = channel->pc;
    branch_2sat_5.brTarget_ptr = channel->brTarget;

}

/* RESOURCE GROUPS */

// -- CV32E40P_DSE_ICACHE_ResourceGroup

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

static map_models::ICacheModel create_iCache_1()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 512;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_1 = create_iCache_1();

static map_models::ICacheModel create_iCache_2()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 1024;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_2 = create_iCache_2();

static map_models::ICacheModel create_iCache_3()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 128;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_3 = create_iCache_3();

static map_models::ICacheModel create_iCache_4()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 64;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_4 = create_iCache_4();

static map_models::ICacheModel create_iCache_5()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 32;
    cfg.NUM_ROWS = 32;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_5 = create_iCache_5();

static map_models::ICacheModel create_iCache_6()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 128;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_6 = create_iCache_6();

static map_models::ICacheModel create_iCache_7()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 256;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_7 = create_iCache_7();

static map_models::ICacheModel create_iCache_8()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 512;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_8 = create_iCache_8();

static map_models::ICacheModel create_iCache_9()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 64;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_9 = create_iCache_9();

static map_models::ICacheModel create_iCache_10()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 32;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_10 = create_iCache_10();

static map_models::ICacheModel create_iCache_11()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 512;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_11 = create_iCache_11();

static map_models::ICacheModel create_iCache_12()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 1024;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_12 = create_iCache_12();

static map_models::ICacheModel create_iCache_13()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 2048;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_13 = create_iCache_13();

static map_models::ICacheModel create_iCache_14()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 256;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_14 = create_iCache_14();

static map_models::ICacheModel create_iCache_15()
{
    map_models::ICacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 128;
    return map_models::ICacheModel(cfg);
}
static map_models::ICacheModel iCache_15 = create_iCache_15();


CV32E40P_DSE_ICACHE_ResourceGroup::CV32E40P_DSE_ICACHE_ResourceGroup()
    : ResourceGroupT(
        0,
        iCache_0,
        iCache_1,
        iCache_2,
        iCache_3,
        iCache_4,
        iCache_5,
        iCache_6,
        iCache_7,
        iCache_8,
        iCache_9,
        iCache_10,
        iCache_11,
        iCache_12,
        iCache_13,
        iCache_14,
        iCache_15
    )
{}

void CV32E40P_DSE_ICACHE_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);

    iCache_0.connectInstrIdx(instrIdx_ptr_);
    iCache_0.pc_ptr = channel->pc;

    iCache_1.connectInstrIdx(instrIdx_ptr_);
    iCache_1.pc_ptr = channel->pc;

    iCache_2.connectInstrIdx(instrIdx_ptr_);
    iCache_2.pc_ptr = channel->pc;

    iCache_3.connectInstrIdx(instrIdx_ptr_);
    iCache_3.pc_ptr = channel->pc;

    iCache_4.connectInstrIdx(instrIdx_ptr_);
    iCache_4.pc_ptr = channel->pc;

    iCache_5.connectInstrIdx(instrIdx_ptr_);
    iCache_5.pc_ptr = channel->pc;

    iCache_6.connectInstrIdx(instrIdx_ptr_);
    iCache_6.pc_ptr = channel->pc;

    iCache_7.connectInstrIdx(instrIdx_ptr_);
    iCache_7.pc_ptr = channel->pc;

    iCache_8.connectInstrIdx(instrIdx_ptr_);
    iCache_8.pc_ptr = channel->pc;

    iCache_9.connectInstrIdx(instrIdx_ptr_);
    iCache_9.pc_ptr = channel->pc;

    iCache_10.connectInstrIdx(instrIdx_ptr_);
    iCache_10.pc_ptr = channel->pc;

    iCache_11.connectInstrIdx(instrIdx_ptr_);
    iCache_11.pc_ptr = channel->pc;

    iCache_12.connectInstrIdx(instrIdx_ptr_);
    iCache_12.pc_ptr = channel->pc;

    iCache_13.connectInstrIdx(instrIdx_ptr_);
    iCache_13.pc_ptr = channel->pc;

    iCache_14.connectInstrIdx(instrIdx_ptr_);
    iCache_14.pc_ptr = channel->pc;

    iCache_15.connectInstrIdx(instrIdx_ptr_);
    iCache_15.pc_ptr = channel->pc;

}

// -- CV32E40P_DSE_DIVIDER_ResourceGroup

static map_models::Divider_CV32E40P divider;

CV32E40P_DSE_DIVIDER_ResourceGroup::CV32E40P_DSE_DIVIDER_ResourceGroup()
    : ResourceGroupT(
        1,
        divider
    )
{}

void CV32E40P_DSE_DIVIDER_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);

    divider.connectInstrIdx(instrIdx_ptr_);
    divider.rs2_data_ptr = channel->rs2_data;

}

// -- CV32E40P_DSE_DIVIDER_U_ResourceGroup

static map_models::DividerUnsigned_CV32E40P divider_u;

CV32E40P_DSE_DIVIDER_U_ResourceGroup::CV32E40P_DSE_DIVIDER_U_ResourceGroup()
    : ResourceGroupT(
        2,
        divider_u
    )
{}

void CV32E40P_DSE_DIVIDER_U_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);

    divider_u.connectInstrIdx(instrIdx_ptr_);
    divider_u.rs2_data_ptr = channel->rs2_data;

}

// -- CV32E40P_DSE_DCACHE_ResourceGroup

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

static map_models::DCacheModel create_dCache_1()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 512;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_1 = create_dCache_1();

static map_models::DCacheModel create_dCache_2()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 1024;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_2 = create_dCache_2();

static map_models::DCacheModel create_dCache_3()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 128;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_3 = create_dCache_3();

static map_models::DCacheModel create_dCache_4()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 64;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_4 = create_dCache_4();

static map_models::DCacheModel create_dCache_5()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 5;
    cfg.NUM_WAYS = 32;
    cfg.NUM_ROWS = 32;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_5 = create_dCache_5();

static map_models::DCacheModel create_dCache_6()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 128;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_6 = create_dCache_6();

static map_models::DCacheModel create_dCache_7()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 256;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_7 = create_dCache_7();

static map_models::DCacheModel create_dCache_8()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 512;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_8 = create_dCache_8();

static map_models::DCacheModel create_dCache_9()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 64;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_9 = create_dCache_9();

static map_models::DCacheModel create_dCache_10()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 4;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 32;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_10 = create_dCache_10();

static map_models::DCacheModel create_dCache_11()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 4;
    cfg.NUM_ROWS = 512;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_11 = create_dCache_11();

static map_models::DCacheModel create_dCache_12()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 2;
    cfg.NUM_ROWS = 1024;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_12 = create_dCache_12();

static map_models::DCacheModel create_dCache_13()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 1;
    cfg.NUM_ROWS = 2048;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_13 = create_dCache_13();

static map_models::DCacheModel create_dCache_14()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 8;
    cfg.NUM_ROWS = 256;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_14 = create_dCache_14();

static map_models::DCacheModel create_dCache_15()
{
    map_models::DCacheModel_Config cfg;
    cfg.CACHE_DELAY = 1;
    cfg.MEMORY_DELAY = 6;
    cfg.NUM_WAYS = 16;
    cfg.NUM_ROWS = 128;
    return map_models::DCacheModel(cfg);
}
static map_models::DCacheModel dCache_15 = create_dCache_15();


CV32E40P_DSE_DCACHE_ResourceGroup::CV32E40P_DSE_DCACHE_ResourceGroup()
    : ResourceGroupT(
        3,
        dCache_0,
        dCache_1,
        dCache_2,
        dCache_3,
        dCache_4,
        dCache_5,
        dCache_6,
        dCache_7,
        dCache_8,
        dCache_9,
        dCache_10,
        dCache_11,
        dCache_12,
        dCache_13,
        dCache_14,
        dCache_15
    )
{}

void CV32E40P_DSE_DCACHE_ResourceGroup::connectChannel(Channel* channel_, int* instrIdx_ptr_){
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);

    dCache_0.connectInstrIdx(instrIdx_ptr_);
    dCache_0.addr_ptr = channel->addr;

    dCache_1.connectInstrIdx(instrIdx_ptr_);
    dCache_1.addr_ptr = channel->addr;

    dCache_2.connectInstrIdx(instrIdx_ptr_);
    dCache_2.addr_ptr = channel->addr;

    dCache_3.connectInstrIdx(instrIdx_ptr_);
    dCache_3.addr_ptr = channel->addr;

    dCache_4.connectInstrIdx(instrIdx_ptr_);
    dCache_4.addr_ptr = channel->addr;

    dCache_5.connectInstrIdx(instrIdx_ptr_);
    dCache_5.addr_ptr = channel->addr;

    dCache_6.connectInstrIdx(instrIdx_ptr_);
    dCache_6.addr_ptr = channel->addr;

    dCache_7.connectInstrIdx(instrIdx_ptr_);
    dCache_7.addr_ptr = channel->addr;

    dCache_8.connectInstrIdx(instrIdx_ptr_);
    dCache_8.addr_ptr = channel->addr;

    dCache_9.connectInstrIdx(instrIdx_ptr_);
    dCache_9.addr_ptr = channel->addr;

    dCache_10.connectInstrIdx(instrIdx_ptr_);
    dCache_10.addr_ptr = channel->addr;

    dCache_11.connectInstrIdx(instrIdx_ptr_);
    dCache_11.addr_ptr = channel->addr;

    dCache_12.connectInstrIdx(instrIdx_ptr_);
    dCache_12.addr_ptr = channel->addr;

    dCache_13.connectInstrIdx(instrIdx_ptr_);
    dCache_13.addr_ptr = channel->addr;

    dCache_14.connectInstrIdx(instrIdx_ptr_);
    dCache_14.addr_ptr = channel->addr;

    dCache_15.connectInstrIdx(instrIdx_ptr_);
    dCache_15.addr_ptr = channel->addr;

}


/* MAP-EXPLORER */

CV32E40P_DSE_BranchGroup CV32E40P_DSE_MAPExplorer::branchGroup;

static CV32E40P_DSE_ICACHE_ResourceGroup resGroup_ICACHE;
static CV32E40P_DSE_DIVIDER_ResourceGroup resGroup_DIVIDER;
static CV32E40P_DSE_DIVIDER_U_ResourceGroup resGroup_DIVIDER_U;
static CV32E40P_DSE_DCACHE_ResourceGroup resGroup_DCACHE;

constexpr std::array<MAP_Explorer::ResourceGroup*, 4>
CV32E40P_DSE_MAPExplorer::resGroups = {
    &resGroup_ICACHE,
    &resGroup_DIVIDER,
    &resGroup_DIVIDER_U,
    &resGroup_DCACHE
};

constexpr std::array<const CV32E40P_DSE_MAPExplorer::ResGroupEntryType, 54>
CV32E40P_DSE_MAPExplorer::resGroupLUT = {{
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
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {2,{&resGroup_ICACHE, &resGroup_DIVIDER_U}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {1,{&resGroup_ICACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
    {2,{&resGroup_ICACHE, &resGroup_DCACHE}},
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
    {1,{&resGroup_ICACHE}}
}};

std::array<CV32E40P_DSE_MAPExplorer::DVecType, 256>
CV32E40P_DSE_MAPExplorer::delayVectors = {{
    {{{&iCache_0, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_0, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_1, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_2, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_3, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_4, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_5, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_6, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_7, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_8, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_9, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_10, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_11, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_12, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_13, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_14, &divider, &divider_u, &dCache_15}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_0}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_1}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_2}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_3}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_4}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_5}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_6}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_7}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_8}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_9}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_10}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_11}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_12}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_13}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_14}}},
    {{{&iCache_15, &divider, &divider_u, &dCache_15}}}
}};

std::array<CV32E40P_DSE_MAPExplorer::CombType, 2048>
CV32E40P_DSE_MAPExplorer::combs = {{
    {&delayVectors[0], &branch_ant},
    {&delayVectors[1], &branch_ant},
    {&delayVectors[2], &branch_ant},
    {&delayVectors[3], &branch_ant},
    {&delayVectors[4], &branch_ant},
    {&delayVectors[5], &branch_ant},
    {&delayVectors[6], &branch_ant},
    {&delayVectors[7], &branch_ant},
    {&delayVectors[8], &branch_ant},
    {&delayVectors[9], &branch_ant},
    {&delayVectors[10], &branch_ant},
    {&delayVectors[11], &branch_ant},
    {&delayVectors[12], &branch_ant},
    {&delayVectors[13], &branch_ant},
    {&delayVectors[14], &branch_ant},
    {&delayVectors[15], &branch_ant},
    {&delayVectors[16], &branch_ant},
    {&delayVectors[17], &branch_ant},
    {&delayVectors[18], &branch_ant},
    {&delayVectors[19], &branch_ant},
    {&delayVectors[20], &branch_ant},
    {&delayVectors[21], &branch_ant},
    {&delayVectors[22], &branch_ant},
    {&delayVectors[23], &branch_ant},
    {&delayVectors[24], &branch_ant},
    {&delayVectors[25], &branch_ant},
    {&delayVectors[26], &branch_ant},
    {&delayVectors[27], &branch_ant},
    {&delayVectors[28], &branch_ant},
    {&delayVectors[29], &branch_ant},
    {&delayVectors[30], &branch_ant},
    {&delayVectors[31], &branch_ant},
    {&delayVectors[32], &branch_ant},
    {&delayVectors[33], &branch_ant},
    {&delayVectors[34], &branch_ant},
    {&delayVectors[35], &branch_ant},
    {&delayVectors[36], &branch_ant},
    {&delayVectors[37], &branch_ant},
    {&delayVectors[38], &branch_ant},
    {&delayVectors[39], &branch_ant},
    {&delayVectors[40], &branch_ant},
    {&delayVectors[41], &branch_ant},
    {&delayVectors[42], &branch_ant},
    {&delayVectors[43], &branch_ant},
    {&delayVectors[44], &branch_ant},
    {&delayVectors[45], &branch_ant},
    {&delayVectors[46], &branch_ant},
    {&delayVectors[47], &branch_ant},
    {&delayVectors[48], &branch_ant},
    {&delayVectors[49], &branch_ant},
    {&delayVectors[50], &branch_ant},
    {&delayVectors[51], &branch_ant},
    {&delayVectors[52], &branch_ant},
    {&delayVectors[53], &branch_ant},
    {&delayVectors[54], &branch_ant},
    {&delayVectors[55], &branch_ant},
    {&delayVectors[56], &branch_ant},
    {&delayVectors[57], &branch_ant},
    {&delayVectors[58], &branch_ant},
    {&delayVectors[59], &branch_ant},
    {&delayVectors[60], &branch_ant},
    {&delayVectors[61], &branch_ant},
    {&delayVectors[62], &branch_ant},
    {&delayVectors[63], &branch_ant},
    {&delayVectors[64], &branch_ant},
    {&delayVectors[65], &branch_ant},
    {&delayVectors[66], &branch_ant},
    {&delayVectors[67], &branch_ant},
    {&delayVectors[68], &branch_ant},
    {&delayVectors[69], &branch_ant},
    {&delayVectors[70], &branch_ant},
    {&delayVectors[71], &branch_ant},
    {&delayVectors[72], &branch_ant},
    {&delayVectors[73], &branch_ant},
    {&delayVectors[74], &branch_ant},
    {&delayVectors[75], &branch_ant},
    {&delayVectors[76], &branch_ant},
    {&delayVectors[77], &branch_ant},
    {&delayVectors[78], &branch_ant},
    {&delayVectors[79], &branch_ant},
    {&delayVectors[80], &branch_ant},
    {&delayVectors[81], &branch_ant},
    {&delayVectors[82], &branch_ant},
    {&delayVectors[83], &branch_ant},
    {&delayVectors[84], &branch_ant},
    {&delayVectors[85], &branch_ant},
    {&delayVectors[86], &branch_ant},
    {&delayVectors[87], &branch_ant},
    {&delayVectors[88], &branch_ant},
    {&delayVectors[89], &branch_ant},
    {&delayVectors[90], &branch_ant},
    {&delayVectors[91], &branch_ant},
    {&delayVectors[92], &branch_ant},
    {&delayVectors[93], &branch_ant},
    {&delayVectors[94], &branch_ant},
    {&delayVectors[95], &branch_ant},
    {&delayVectors[96], &branch_ant},
    {&delayVectors[97], &branch_ant},
    {&delayVectors[98], &branch_ant},
    {&delayVectors[99], &branch_ant},
    {&delayVectors[100], &branch_ant},
    {&delayVectors[101], &branch_ant},
    {&delayVectors[102], &branch_ant},
    {&delayVectors[103], &branch_ant},
    {&delayVectors[104], &branch_ant},
    {&delayVectors[105], &branch_ant},
    {&delayVectors[106], &branch_ant},
    {&delayVectors[107], &branch_ant},
    {&delayVectors[108], &branch_ant},
    {&delayVectors[109], &branch_ant},
    {&delayVectors[110], &branch_ant},
    {&delayVectors[111], &branch_ant},
    {&delayVectors[112], &branch_ant},
    {&delayVectors[113], &branch_ant},
    {&delayVectors[114], &branch_ant},
    {&delayVectors[115], &branch_ant},
    {&delayVectors[116], &branch_ant},
    {&delayVectors[117], &branch_ant},
    {&delayVectors[118], &branch_ant},
    {&delayVectors[119], &branch_ant},
    {&delayVectors[120], &branch_ant},
    {&delayVectors[121], &branch_ant},
    {&delayVectors[122], &branch_ant},
    {&delayVectors[123], &branch_ant},
    {&delayVectors[124], &branch_ant},
    {&delayVectors[125], &branch_ant},
    {&delayVectors[126], &branch_ant},
    {&delayVectors[127], &branch_ant},
    {&delayVectors[128], &branch_ant},
    {&delayVectors[129], &branch_ant},
    {&delayVectors[130], &branch_ant},
    {&delayVectors[131], &branch_ant},
    {&delayVectors[132], &branch_ant},
    {&delayVectors[133], &branch_ant},
    {&delayVectors[134], &branch_ant},
    {&delayVectors[135], &branch_ant},
    {&delayVectors[136], &branch_ant},
    {&delayVectors[137], &branch_ant},
    {&delayVectors[138], &branch_ant},
    {&delayVectors[139], &branch_ant},
    {&delayVectors[140], &branch_ant},
    {&delayVectors[141], &branch_ant},
    {&delayVectors[142], &branch_ant},
    {&delayVectors[143], &branch_ant},
    {&delayVectors[144], &branch_ant},
    {&delayVectors[145], &branch_ant},
    {&delayVectors[146], &branch_ant},
    {&delayVectors[147], &branch_ant},
    {&delayVectors[148], &branch_ant},
    {&delayVectors[149], &branch_ant},
    {&delayVectors[150], &branch_ant},
    {&delayVectors[151], &branch_ant},
    {&delayVectors[152], &branch_ant},
    {&delayVectors[153], &branch_ant},
    {&delayVectors[154], &branch_ant},
    {&delayVectors[155], &branch_ant},
    {&delayVectors[156], &branch_ant},
    {&delayVectors[157], &branch_ant},
    {&delayVectors[158], &branch_ant},
    {&delayVectors[159], &branch_ant},
    {&delayVectors[160], &branch_ant},
    {&delayVectors[161], &branch_ant},
    {&delayVectors[162], &branch_ant},
    {&delayVectors[163], &branch_ant},
    {&delayVectors[164], &branch_ant},
    {&delayVectors[165], &branch_ant},
    {&delayVectors[166], &branch_ant},
    {&delayVectors[167], &branch_ant},
    {&delayVectors[168], &branch_ant},
    {&delayVectors[169], &branch_ant},
    {&delayVectors[170], &branch_ant},
    {&delayVectors[171], &branch_ant},
    {&delayVectors[172], &branch_ant},
    {&delayVectors[173], &branch_ant},
    {&delayVectors[174], &branch_ant},
    {&delayVectors[175], &branch_ant},
    {&delayVectors[176], &branch_ant},
    {&delayVectors[177], &branch_ant},
    {&delayVectors[178], &branch_ant},
    {&delayVectors[179], &branch_ant},
    {&delayVectors[180], &branch_ant},
    {&delayVectors[181], &branch_ant},
    {&delayVectors[182], &branch_ant},
    {&delayVectors[183], &branch_ant},
    {&delayVectors[184], &branch_ant},
    {&delayVectors[185], &branch_ant},
    {&delayVectors[186], &branch_ant},
    {&delayVectors[187], &branch_ant},
    {&delayVectors[188], &branch_ant},
    {&delayVectors[189], &branch_ant},
    {&delayVectors[190], &branch_ant},
    {&delayVectors[191], &branch_ant},
    {&delayVectors[192], &branch_ant},
    {&delayVectors[193], &branch_ant},
    {&delayVectors[194], &branch_ant},
    {&delayVectors[195], &branch_ant},
    {&delayVectors[196], &branch_ant},
    {&delayVectors[197], &branch_ant},
    {&delayVectors[198], &branch_ant},
    {&delayVectors[199], &branch_ant},
    {&delayVectors[200], &branch_ant},
    {&delayVectors[201], &branch_ant},
    {&delayVectors[202], &branch_ant},
    {&delayVectors[203], &branch_ant},
    {&delayVectors[204], &branch_ant},
    {&delayVectors[205], &branch_ant},
    {&delayVectors[206], &branch_ant},
    {&delayVectors[207], &branch_ant},
    {&delayVectors[208], &branch_ant},
    {&delayVectors[209], &branch_ant},
    {&delayVectors[210], &branch_ant},
    {&delayVectors[211], &branch_ant},
    {&delayVectors[212], &branch_ant},
    {&delayVectors[213], &branch_ant},
    {&delayVectors[214], &branch_ant},
    {&delayVectors[215], &branch_ant},
    {&delayVectors[216], &branch_ant},
    {&delayVectors[217], &branch_ant},
    {&delayVectors[218], &branch_ant},
    {&delayVectors[219], &branch_ant},
    {&delayVectors[220], &branch_ant},
    {&delayVectors[221], &branch_ant},
    {&delayVectors[222], &branch_ant},
    {&delayVectors[223], &branch_ant},
    {&delayVectors[224], &branch_ant},
    {&delayVectors[225], &branch_ant},
    {&delayVectors[226], &branch_ant},
    {&delayVectors[227], &branch_ant},
    {&delayVectors[228], &branch_ant},
    {&delayVectors[229], &branch_ant},
    {&delayVectors[230], &branch_ant},
    {&delayVectors[231], &branch_ant},
    {&delayVectors[232], &branch_ant},
    {&delayVectors[233], &branch_ant},
    {&delayVectors[234], &branch_ant},
    {&delayVectors[235], &branch_ant},
    {&delayVectors[236], &branch_ant},
    {&delayVectors[237], &branch_ant},
    {&delayVectors[238], &branch_ant},
    {&delayVectors[239], &branch_ant},
    {&delayVectors[240], &branch_ant},
    {&delayVectors[241], &branch_ant},
    {&delayVectors[242], &branch_ant},
    {&delayVectors[243], &branch_ant},
    {&delayVectors[244], &branch_ant},
    {&delayVectors[245], &branch_ant},
    {&delayVectors[246], &branch_ant},
    {&delayVectors[247], &branch_ant},
    {&delayVectors[248], &branch_ant},
    {&delayVectors[249], &branch_ant},
    {&delayVectors[250], &branch_ant},
    {&delayVectors[251], &branch_ant},
    {&delayVectors[252], &branch_ant},
    {&delayVectors[253], &branch_ant},
    {&delayVectors[254], &branch_ant},
    {&delayVectors[255], &branch_ant},
    {&delayVectors[0], &branch_fnt_bt},
    {&delayVectors[1], &branch_fnt_bt},
    {&delayVectors[2], &branch_fnt_bt},
    {&delayVectors[3], &branch_fnt_bt},
    {&delayVectors[4], &branch_fnt_bt},
    {&delayVectors[5], &branch_fnt_bt},
    {&delayVectors[6], &branch_fnt_bt},
    {&delayVectors[7], &branch_fnt_bt},
    {&delayVectors[8], &branch_fnt_bt},
    {&delayVectors[9], &branch_fnt_bt},
    {&delayVectors[10], &branch_fnt_bt},
    {&delayVectors[11], &branch_fnt_bt},
    {&delayVectors[12], &branch_fnt_bt},
    {&delayVectors[13], &branch_fnt_bt},
    {&delayVectors[14], &branch_fnt_bt},
    {&delayVectors[15], &branch_fnt_bt},
    {&delayVectors[16], &branch_fnt_bt},
    {&delayVectors[17], &branch_fnt_bt},
    {&delayVectors[18], &branch_fnt_bt},
    {&delayVectors[19], &branch_fnt_bt},
    {&delayVectors[20], &branch_fnt_bt},
    {&delayVectors[21], &branch_fnt_bt},
    {&delayVectors[22], &branch_fnt_bt},
    {&delayVectors[23], &branch_fnt_bt},
    {&delayVectors[24], &branch_fnt_bt},
    {&delayVectors[25], &branch_fnt_bt},
    {&delayVectors[26], &branch_fnt_bt},
    {&delayVectors[27], &branch_fnt_bt},
    {&delayVectors[28], &branch_fnt_bt},
    {&delayVectors[29], &branch_fnt_bt},
    {&delayVectors[30], &branch_fnt_bt},
    {&delayVectors[31], &branch_fnt_bt},
    {&delayVectors[32], &branch_fnt_bt},
    {&delayVectors[33], &branch_fnt_bt},
    {&delayVectors[34], &branch_fnt_bt},
    {&delayVectors[35], &branch_fnt_bt},
    {&delayVectors[36], &branch_fnt_bt},
    {&delayVectors[37], &branch_fnt_bt},
    {&delayVectors[38], &branch_fnt_bt},
    {&delayVectors[39], &branch_fnt_bt},
    {&delayVectors[40], &branch_fnt_bt},
    {&delayVectors[41], &branch_fnt_bt},
    {&delayVectors[42], &branch_fnt_bt},
    {&delayVectors[43], &branch_fnt_bt},
    {&delayVectors[44], &branch_fnt_bt},
    {&delayVectors[45], &branch_fnt_bt},
    {&delayVectors[46], &branch_fnt_bt},
    {&delayVectors[47], &branch_fnt_bt},
    {&delayVectors[48], &branch_fnt_bt},
    {&delayVectors[49], &branch_fnt_bt},
    {&delayVectors[50], &branch_fnt_bt},
    {&delayVectors[51], &branch_fnt_bt},
    {&delayVectors[52], &branch_fnt_bt},
    {&delayVectors[53], &branch_fnt_bt},
    {&delayVectors[54], &branch_fnt_bt},
    {&delayVectors[55], &branch_fnt_bt},
    {&delayVectors[56], &branch_fnt_bt},
    {&delayVectors[57], &branch_fnt_bt},
    {&delayVectors[58], &branch_fnt_bt},
    {&delayVectors[59], &branch_fnt_bt},
    {&delayVectors[60], &branch_fnt_bt},
    {&delayVectors[61], &branch_fnt_bt},
    {&delayVectors[62], &branch_fnt_bt},
    {&delayVectors[63], &branch_fnt_bt},
    {&delayVectors[64], &branch_fnt_bt},
    {&delayVectors[65], &branch_fnt_bt},
    {&delayVectors[66], &branch_fnt_bt},
    {&delayVectors[67], &branch_fnt_bt},
    {&delayVectors[68], &branch_fnt_bt},
    {&delayVectors[69], &branch_fnt_bt},
    {&delayVectors[70], &branch_fnt_bt},
    {&delayVectors[71], &branch_fnt_bt},
    {&delayVectors[72], &branch_fnt_bt},
    {&delayVectors[73], &branch_fnt_bt},
    {&delayVectors[74], &branch_fnt_bt},
    {&delayVectors[75], &branch_fnt_bt},
    {&delayVectors[76], &branch_fnt_bt},
    {&delayVectors[77], &branch_fnt_bt},
    {&delayVectors[78], &branch_fnt_bt},
    {&delayVectors[79], &branch_fnt_bt},
    {&delayVectors[80], &branch_fnt_bt},
    {&delayVectors[81], &branch_fnt_bt},
    {&delayVectors[82], &branch_fnt_bt},
    {&delayVectors[83], &branch_fnt_bt},
    {&delayVectors[84], &branch_fnt_bt},
    {&delayVectors[85], &branch_fnt_bt},
    {&delayVectors[86], &branch_fnt_bt},
    {&delayVectors[87], &branch_fnt_bt},
    {&delayVectors[88], &branch_fnt_bt},
    {&delayVectors[89], &branch_fnt_bt},
    {&delayVectors[90], &branch_fnt_bt},
    {&delayVectors[91], &branch_fnt_bt},
    {&delayVectors[92], &branch_fnt_bt},
    {&delayVectors[93], &branch_fnt_bt},
    {&delayVectors[94], &branch_fnt_bt},
    {&delayVectors[95], &branch_fnt_bt},
    {&delayVectors[96], &branch_fnt_bt},
    {&delayVectors[97], &branch_fnt_bt},
    {&delayVectors[98], &branch_fnt_bt},
    {&delayVectors[99], &branch_fnt_bt},
    {&delayVectors[100], &branch_fnt_bt},
    {&delayVectors[101], &branch_fnt_bt},
    {&delayVectors[102], &branch_fnt_bt},
    {&delayVectors[103], &branch_fnt_bt},
    {&delayVectors[104], &branch_fnt_bt},
    {&delayVectors[105], &branch_fnt_bt},
    {&delayVectors[106], &branch_fnt_bt},
    {&delayVectors[107], &branch_fnt_bt},
    {&delayVectors[108], &branch_fnt_bt},
    {&delayVectors[109], &branch_fnt_bt},
    {&delayVectors[110], &branch_fnt_bt},
    {&delayVectors[111], &branch_fnt_bt},
    {&delayVectors[112], &branch_fnt_bt},
    {&delayVectors[113], &branch_fnt_bt},
    {&delayVectors[114], &branch_fnt_bt},
    {&delayVectors[115], &branch_fnt_bt},
    {&delayVectors[116], &branch_fnt_bt},
    {&delayVectors[117], &branch_fnt_bt},
    {&delayVectors[118], &branch_fnt_bt},
    {&delayVectors[119], &branch_fnt_bt},
    {&delayVectors[120], &branch_fnt_bt},
    {&delayVectors[121], &branch_fnt_bt},
    {&delayVectors[122], &branch_fnt_bt},
    {&delayVectors[123], &branch_fnt_bt},
    {&delayVectors[124], &branch_fnt_bt},
    {&delayVectors[125], &branch_fnt_bt},
    {&delayVectors[126], &branch_fnt_bt},
    {&delayVectors[127], &branch_fnt_bt},
    {&delayVectors[128], &branch_fnt_bt},
    {&delayVectors[129], &branch_fnt_bt},
    {&delayVectors[130], &branch_fnt_bt},
    {&delayVectors[131], &branch_fnt_bt},
    {&delayVectors[132], &branch_fnt_bt},
    {&delayVectors[133], &branch_fnt_bt},
    {&delayVectors[134], &branch_fnt_bt},
    {&delayVectors[135], &branch_fnt_bt},
    {&delayVectors[136], &branch_fnt_bt},
    {&delayVectors[137], &branch_fnt_bt},
    {&delayVectors[138], &branch_fnt_bt},
    {&delayVectors[139], &branch_fnt_bt},
    {&delayVectors[140], &branch_fnt_bt},
    {&delayVectors[141], &branch_fnt_bt},
    {&delayVectors[142], &branch_fnt_bt},
    {&delayVectors[143], &branch_fnt_bt},
    {&delayVectors[144], &branch_fnt_bt},
    {&delayVectors[145], &branch_fnt_bt},
    {&delayVectors[146], &branch_fnt_bt},
    {&delayVectors[147], &branch_fnt_bt},
    {&delayVectors[148], &branch_fnt_bt},
    {&delayVectors[149], &branch_fnt_bt},
    {&delayVectors[150], &branch_fnt_bt},
    {&delayVectors[151], &branch_fnt_bt},
    {&delayVectors[152], &branch_fnt_bt},
    {&delayVectors[153], &branch_fnt_bt},
    {&delayVectors[154], &branch_fnt_bt},
    {&delayVectors[155], &branch_fnt_bt},
    {&delayVectors[156], &branch_fnt_bt},
    {&delayVectors[157], &branch_fnt_bt},
    {&delayVectors[158], &branch_fnt_bt},
    {&delayVectors[159], &branch_fnt_bt},
    {&delayVectors[160], &branch_fnt_bt},
    {&delayVectors[161], &branch_fnt_bt},
    {&delayVectors[162], &branch_fnt_bt},
    {&delayVectors[163], &branch_fnt_bt},
    {&delayVectors[164], &branch_fnt_bt},
    {&delayVectors[165], &branch_fnt_bt},
    {&delayVectors[166], &branch_fnt_bt},
    {&delayVectors[167], &branch_fnt_bt},
    {&delayVectors[168], &branch_fnt_bt},
    {&delayVectors[169], &branch_fnt_bt},
    {&delayVectors[170], &branch_fnt_bt},
    {&delayVectors[171], &branch_fnt_bt},
    {&delayVectors[172], &branch_fnt_bt},
    {&delayVectors[173], &branch_fnt_bt},
    {&delayVectors[174], &branch_fnt_bt},
    {&delayVectors[175], &branch_fnt_bt},
    {&delayVectors[176], &branch_fnt_bt},
    {&delayVectors[177], &branch_fnt_bt},
    {&delayVectors[178], &branch_fnt_bt},
    {&delayVectors[179], &branch_fnt_bt},
    {&delayVectors[180], &branch_fnt_bt},
    {&delayVectors[181], &branch_fnt_bt},
    {&delayVectors[182], &branch_fnt_bt},
    {&delayVectors[183], &branch_fnt_bt},
    {&delayVectors[184], &branch_fnt_bt},
    {&delayVectors[185], &branch_fnt_bt},
    {&delayVectors[186], &branch_fnt_bt},
    {&delayVectors[187], &branch_fnt_bt},
    {&delayVectors[188], &branch_fnt_bt},
    {&delayVectors[189], &branch_fnt_bt},
    {&delayVectors[190], &branch_fnt_bt},
    {&delayVectors[191], &branch_fnt_bt},
    {&delayVectors[192], &branch_fnt_bt},
    {&delayVectors[193], &branch_fnt_bt},
    {&delayVectors[194], &branch_fnt_bt},
    {&delayVectors[195], &branch_fnt_bt},
    {&delayVectors[196], &branch_fnt_bt},
    {&delayVectors[197], &branch_fnt_bt},
    {&delayVectors[198], &branch_fnt_bt},
    {&delayVectors[199], &branch_fnt_bt},
    {&delayVectors[200], &branch_fnt_bt},
    {&delayVectors[201], &branch_fnt_bt},
    {&delayVectors[202], &branch_fnt_bt},
    {&delayVectors[203], &branch_fnt_bt},
    {&delayVectors[204], &branch_fnt_bt},
    {&delayVectors[205], &branch_fnt_bt},
    {&delayVectors[206], &branch_fnt_bt},
    {&delayVectors[207], &branch_fnt_bt},
    {&delayVectors[208], &branch_fnt_bt},
    {&delayVectors[209], &branch_fnt_bt},
    {&delayVectors[210], &branch_fnt_bt},
    {&delayVectors[211], &branch_fnt_bt},
    {&delayVectors[212], &branch_fnt_bt},
    {&delayVectors[213], &branch_fnt_bt},
    {&delayVectors[214], &branch_fnt_bt},
    {&delayVectors[215], &branch_fnt_bt},
    {&delayVectors[216], &branch_fnt_bt},
    {&delayVectors[217], &branch_fnt_bt},
    {&delayVectors[218], &branch_fnt_bt},
    {&delayVectors[219], &branch_fnt_bt},
    {&delayVectors[220], &branch_fnt_bt},
    {&delayVectors[221], &branch_fnt_bt},
    {&delayVectors[222], &branch_fnt_bt},
    {&delayVectors[223], &branch_fnt_bt},
    {&delayVectors[224], &branch_fnt_bt},
    {&delayVectors[225], &branch_fnt_bt},
    {&delayVectors[226], &branch_fnt_bt},
    {&delayVectors[227], &branch_fnt_bt},
    {&delayVectors[228], &branch_fnt_bt},
    {&delayVectors[229], &branch_fnt_bt},
    {&delayVectors[230], &branch_fnt_bt},
    {&delayVectors[231], &branch_fnt_bt},
    {&delayVectors[232], &branch_fnt_bt},
    {&delayVectors[233], &branch_fnt_bt},
    {&delayVectors[234], &branch_fnt_bt},
    {&delayVectors[235], &branch_fnt_bt},
    {&delayVectors[236], &branch_fnt_bt},
    {&delayVectors[237], &branch_fnt_bt},
    {&delayVectors[238], &branch_fnt_bt},
    {&delayVectors[239], &branch_fnt_bt},
    {&delayVectors[240], &branch_fnt_bt},
    {&delayVectors[241], &branch_fnt_bt},
    {&delayVectors[242], &branch_fnt_bt},
    {&delayVectors[243], &branch_fnt_bt},
    {&delayVectors[244], &branch_fnt_bt},
    {&delayVectors[245], &branch_fnt_bt},
    {&delayVectors[246], &branch_fnt_bt},
    {&delayVectors[247], &branch_fnt_bt},
    {&delayVectors[248], &branch_fnt_bt},
    {&delayVectors[249], &branch_fnt_bt},
    {&delayVectors[250], &branch_fnt_bt},
    {&delayVectors[251], &branch_fnt_bt},
    {&delayVectors[252], &branch_fnt_bt},
    {&delayVectors[253], &branch_fnt_bt},
    {&delayVectors[254], &branch_fnt_bt},
    {&delayVectors[255], &branch_fnt_bt},
    {&delayVectors[0], &branch_2sat_0},
    {&delayVectors[1], &branch_2sat_0},
    {&delayVectors[2], &branch_2sat_0},
    {&delayVectors[3], &branch_2sat_0},
    {&delayVectors[4], &branch_2sat_0},
    {&delayVectors[5], &branch_2sat_0},
    {&delayVectors[6], &branch_2sat_0},
    {&delayVectors[7], &branch_2sat_0},
    {&delayVectors[8], &branch_2sat_0},
    {&delayVectors[9], &branch_2sat_0},
    {&delayVectors[10], &branch_2sat_0},
    {&delayVectors[11], &branch_2sat_0},
    {&delayVectors[12], &branch_2sat_0},
    {&delayVectors[13], &branch_2sat_0},
    {&delayVectors[14], &branch_2sat_0},
    {&delayVectors[15], &branch_2sat_0},
    {&delayVectors[16], &branch_2sat_0},
    {&delayVectors[17], &branch_2sat_0},
    {&delayVectors[18], &branch_2sat_0},
    {&delayVectors[19], &branch_2sat_0},
    {&delayVectors[20], &branch_2sat_0},
    {&delayVectors[21], &branch_2sat_0},
    {&delayVectors[22], &branch_2sat_0},
    {&delayVectors[23], &branch_2sat_0},
    {&delayVectors[24], &branch_2sat_0},
    {&delayVectors[25], &branch_2sat_0},
    {&delayVectors[26], &branch_2sat_0},
    {&delayVectors[27], &branch_2sat_0},
    {&delayVectors[28], &branch_2sat_0},
    {&delayVectors[29], &branch_2sat_0},
    {&delayVectors[30], &branch_2sat_0},
    {&delayVectors[31], &branch_2sat_0},
    {&delayVectors[32], &branch_2sat_0},
    {&delayVectors[33], &branch_2sat_0},
    {&delayVectors[34], &branch_2sat_0},
    {&delayVectors[35], &branch_2sat_0},
    {&delayVectors[36], &branch_2sat_0},
    {&delayVectors[37], &branch_2sat_0},
    {&delayVectors[38], &branch_2sat_0},
    {&delayVectors[39], &branch_2sat_0},
    {&delayVectors[40], &branch_2sat_0},
    {&delayVectors[41], &branch_2sat_0},
    {&delayVectors[42], &branch_2sat_0},
    {&delayVectors[43], &branch_2sat_0},
    {&delayVectors[44], &branch_2sat_0},
    {&delayVectors[45], &branch_2sat_0},
    {&delayVectors[46], &branch_2sat_0},
    {&delayVectors[47], &branch_2sat_0},
    {&delayVectors[48], &branch_2sat_0},
    {&delayVectors[49], &branch_2sat_0},
    {&delayVectors[50], &branch_2sat_0},
    {&delayVectors[51], &branch_2sat_0},
    {&delayVectors[52], &branch_2sat_0},
    {&delayVectors[53], &branch_2sat_0},
    {&delayVectors[54], &branch_2sat_0},
    {&delayVectors[55], &branch_2sat_0},
    {&delayVectors[56], &branch_2sat_0},
    {&delayVectors[57], &branch_2sat_0},
    {&delayVectors[58], &branch_2sat_0},
    {&delayVectors[59], &branch_2sat_0},
    {&delayVectors[60], &branch_2sat_0},
    {&delayVectors[61], &branch_2sat_0},
    {&delayVectors[62], &branch_2sat_0},
    {&delayVectors[63], &branch_2sat_0},
    {&delayVectors[64], &branch_2sat_0},
    {&delayVectors[65], &branch_2sat_0},
    {&delayVectors[66], &branch_2sat_0},
    {&delayVectors[67], &branch_2sat_0},
    {&delayVectors[68], &branch_2sat_0},
    {&delayVectors[69], &branch_2sat_0},
    {&delayVectors[70], &branch_2sat_0},
    {&delayVectors[71], &branch_2sat_0},
    {&delayVectors[72], &branch_2sat_0},
    {&delayVectors[73], &branch_2sat_0},
    {&delayVectors[74], &branch_2sat_0},
    {&delayVectors[75], &branch_2sat_0},
    {&delayVectors[76], &branch_2sat_0},
    {&delayVectors[77], &branch_2sat_0},
    {&delayVectors[78], &branch_2sat_0},
    {&delayVectors[79], &branch_2sat_0},
    {&delayVectors[80], &branch_2sat_0},
    {&delayVectors[81], &branch_2sat_0},
    {&delayVectors[82], &branch_2sat_0},
    {&delayVectors[83], &branch_2sat_0},
    {&delayVectors[84], &branch_2sat_0},
    {&delayVectors[85], &branch_2sat_0},
    {&delayVectors[86], &branch_2sat_0},
    {&delayVectors[87], &branch_2sat_0},
    {&delayVectors[88], &branch_2sat_0},
    {&delayVectors[89], &branch_2sat_0},
    {&delayVectors[90], &branch_2sat_0},
    {&delayVectors[91], &branch_2sat_0},
    {&delayVectors[92], &branch_2sat_0},
    {&delayVectors[93], &branch_2sat_0},
    {&delayVectors[94], &branch_2sat_0},
    {&delayVectors[95], &branch_2sat_0},
    {&delayVectors[96], &branch_2sat_0},
    {&delayVectors[97], &branch_2sat_0},
    {&delayVectors[98], &branch_2sat_0},
    {&delayVectors[99], &branch_2sat_0},
    {&delayVectors[100], &branch_2sat_0},
    {&delayVectors[101], &branch_2sat_0},
    {&delayVectors[102], &branch_2sat_0},
    {&delayVectors[103], &branch_2sat_0},
    {&delayVectors[104], &branch_2sat_0},
    {&delayVectors[105], &branch_2sat_0},
    {&delayVectors[106], &branch_2sat_0},
    {&delayVectors[107], &branch_2sat_0},
    {&delayVectors[108], &branch_2sat_0},
    {&delayVectors[109], &branch_2sat_0},
    {&delayVectors[110], &branch_2sat_0},
    {&delayVectors[111], &branch_2sat_0},
    {&delayVectors[112], &branch_2sat_0},
    {&delayVectors[113], &branch_2sat_0},
    {&delayVectors[114], &branch_2sat_0},
    {&delayVectors[115], &branch_2sat_0},
    {&delayVectors[116], &branch_2sat_0},
    {&delayVectors[117], &branch_2sat_0},
    {&delayVectors[118], &branch_2sat_0},
    {&delayVectors[119], &branch_2sat_0},
    {&delayVectors[120], &branch_2sat_0},
    {&delayVectors[121], &branch_2sat_0},
    {&delayVectors[122], &branch_2sat_0},
    {&delayVectors[123], &branch_2sat_0},
    {&delayVectors[124], &branch_2sat_0},
    {&delayVectors[125], &branch_2sat_0},
    {&delayVectors[126], &branch_2sat_0},
    {&delayVectors[127], &branch_2sat_0},
    {&delayVectors[128], &branch_2sat_0},
    {&delayVectors[129], &branch_2sat_0},
    {&delayVectors[130], &branch_2sat_0},
    {&delayVectors[131], &branch_2sat_0},
    {&delayVectors[132], &branch_2sat_0},
    {&delayVectors[133], &branch_2sat_0},
    {&delayVectors[134], &branch_2sat_0},
    {&delayVectors[135], &branch_2sat_0},
    {&delayVectors[136], &branch_2sat_0},
    {&delayVectors[137], &branch_2sat_0},
    {&delayVectors[138], &branch_2sat_0},
    {&delayVectors[139], &branch_2sat_0},
    {&delayVectors[140], &branch_2sat_0},
    {&delayVectors[141], &branch_2sat_0},
    {&delayVectors[142], &branch_2sat_0},
    {&delayVectors[143], &branch_2sat_0},
    {&delayVectors[144], &branch_2sat_0},
    {&delayVectors[145], &branch_2sat_0},
    {&delayVectors[146], &branch_2sat_0},
    {&delayVectors[147], &branch_2sat_0},
    {&delayVectors[148], &branch_2sat_0},
    {&delayVectors[149], &branch_2sat_0},
    {&delayVectors[150], &branch_2sat_0},
    {&delayVectors[151], &branch_2sat_0},
    {&delayVectors[152], &branch_2sat_0},
    {&delayVectors[153], &branch_2sat_0},
    {&delayVectors[154], &branch_2sat_0},
    {&delayVectors[155], &branch_2sat_0},
    {&delayVectors[156], &branch_2sat_0},
    {&delayVectors[157], &branch_2sat_0},
    {&delayVectors[158], &branch_2sat_0},
    {&delayVectors[159], &branch_2sat_0},
    {&delayVectors[160], &branch_2sat_0},
    {&delayVectors[161], &branch_2sat_0},
    {&delayVectors[162], &branch_2sat_0},
    {&delayVectors[163], &branch_2sat_0},
    {&delayVectors[164], &branch_2sat_0},
    {&delayVectors[165], &branch_2sat_0},
    {&delayVectors[166], &branch_2sat_0},
    {&delayVectors[167], &branch_2sat_0},
    {&delayVectors[168], &branch_2sat_0},
    {&delayVectors[169], &branch_2sat_0},
    {&delayVectors[170], &branch_2sat_0},
    {&delayVectors[171], &branch_2sat_0},
    {&delayVectors[172], &branch_2sat_0},
    {&delayVectors[173], &branch_2sat_0},
    {&delayVectors[174], &branch_2sat_0},
    {&delayVectors[175], &branch_2sat_0},
    {&delayVectors[176], &branch_2sat_0},
    {&delayVectors[177], &branch_2sat_0},
    {&delayVectors[178], &branch_2sat_0},
    {&delayVectors[179], &branch_2sat_0},
    {&delayVectors[180], &branch_2sat_0},
    {&delayVectors[181], &branch_2sat_0},
    {&delayVectors[182], &branch_2sat_0},
    {&delayVectors[183], &branch_2sat_0},
    {&delayVectors[184], &branch_2sat_0},
    {&delayVectors[185], &branch_2sat_0},
    {&delayVectors[186], &branch_2sat_0},
    {&delayVectors[187], &branch_2sat_0},
    {&delayVectors[188], &branch_2sat_0},
    {&delayVectors[189], &branch_2sat_0},
    {&delayVectors[190], &branch_2sat_0},
    {&delayVectors[191], &branch_2sat_0},
    {&delayVectors[192], &branch_2sat_0},
    {&delayVectors[193], &branch_2sat_0},
    {&delayVectors[194], &branch_2sat_0},
    {&delayVectors[195], &branch_2sat_0},
    {&delayVectors[196], &branch_2sat_0},
    {&delayVectors[197], &branch_2sat_0},
    {&delayVectors[198], &branch_2sat_0},
    {&delayVectors[199], &branch_2sat_0},
    {&delayVectors[200], &branch_2sat_0},
    {&delayVectors[201], &branch_2sat_0},
    {&delayVectors[202], &branch_2sat_0},
    {&delayVectors[203], &branch_2sat_0},
    {&delayVectors[204], &branch_2sat_0},
    {&delayVectors[205], &branch_2sat_0},
    {&delayVectors[206], &branch_2sat_0},
    {&delayVectors[207], &branch_2sat_0},
    {&delayVectors[208], &branch_2sat_0},
    {&delayVectors[209], &branch_2sat_0},
    {&delayVectors[210], &branch_2sat_0},
    {&delayVectors[211], &branch_2sat_0},
    {&delayVectors[212], &branch_2sat_0},
    {&delayVectors[213], &branch_2sat_0},
    {&delayVectors[214], &branch_2sat_0},
    {&delayVectors[215], &branch_2sat_0},
    {&delayVectors[216], &branch_2sat_0},
    {&delayVectors[217], &branch_2sat_0},
    {&delayVectors[218], &branch_2sat_0},
    {&delayVectors[219], &branch_2sat_0},
    {&delayVectors[220], &branch_2sat_0},
    {&delayVectors[221], &branch_2sat_0},
    {&delayVectors[222], &branch_2sat_0},
    {&delayVectors[223], &branch_2sat_0},
    {&delayVectors[224], &branch_2sat_0},
    {&delayVectors[225], &branch_2sat_0},
    {&delayVectors[226], &branch_2sat_0},
    {&delayVectors[227], &branch_2sat_0},
    {&delayVectors[228], &branch_2sat_0},
    {&delayVectors[229], &branch_2sat_0},
    {&delayVectors[230], &branch_2sat_0},
    {&delayVectors[231], &branch_2sat_0},
    {&delayVectors[232], &branch_2sat_0},
    {&delayVectors[233], &branch_2sat_0},
    {&delayVectors[234], &branch_2sat_0},
    {&delayVectors[235], &branch_2sat_0},
    {&delayVectors[236], &branch_2sat_0},
    {&delayVectors[237], &branch_2sat_0},
    {&delayVectors[238], &branch_2sat_0},
    {&delayVectors[239], &branch_2sat_0},
    {&delayVectors[240], &branch_2sat_0},
    {&delayVectors[241], &branch_2sat_0},
    {&delayVectors[242], &branch_2sat_0},
    {&delayVectors[243], &branch_2sat_0},
    {&delayVectors[244], &branch_2sat_0},
    {&delayVectors[245], &branch_2sat_0},
    {&delayVectors[246], &branch_2sat_0},
    {&delayVectors[247], &branch_2sat_0},
    {&delayVectors[248], &branch_2sat_0},
    {&delayVectors[249], &branch_2sat_0},
    {&delayVectors[250], &branch_2sat_0},
    {&delayVectors[251], &branch_2sat_0},
    {&delayVectors[252], &branch_2sat_0},
    {&delayVectors[253], &branch_2sat_0},
    {&delayVectors[254], &branch_2sat_0},
    {&delayVectors[255], &branch_2sat_0},
    {&delayVectors[0], &branch_2sat_1},
    {&delayVectors[1], &branch_2sat_1},
    {&delayVectors[2], &branch_2sat_1},
    {&delayVectors[3], &branch_2sat_1},
    {&delayVectors[4], &branch_2sat_1},
    {&delayVectors[5], &branch_2sat_1},
    {&delayVectors[6], &branch_2sat_1},
    {&delayVectors[7], &branch_2sat_1},
    {&delayVectors[8], &branch_2sat_1},
    {&delayVectors[9], &branch_2sat_1},
    {&delayVectors[10], &branch_2sat_1},
    {&delayVectors[11], &branch_2sat_1},
    {&delayVectors[12], &branch_2sat_1},
    {&delayVectors[13], &branch_2sat_1},
    {&delayVectors[14], &branch_2sat_1},
    {&delayVectors[15], &branch_2sat_1},
    {&delayVectors[16], &branch_2sat_1},
    {&delayVectors[17], &branch_2sat_1},
    {&delayVectors[18], &branch_2sat_1},
    {&delayVectors[19], &branch_2sat_1},
    {&delayVectors[20], &branch_2sat_1},
    {&delayVectors[21], &branch_2sat_1},
    {&delayVectors[22], &branch_2sat_1},
    {&delayVectors[23], &branch_2sat_1},
    {&delayVectors[24], &branch_2sat_1},
    {&delayVectors[25], &branch_2sat_1},
    {&delayVectors[26], &branch_2sat_1},
    {&delayVectors[27], &branch_2sat_1},
    {&delayVectors[28], &branch_2sat_1},
    {&delayVectors[29], &branch_2sat_1},
    {&delayVectors[30], &branch_2sat_1},
    {&delayVectors[31], &branch_2sat_1},
    {&delayVectors[32], &branch_2sat_1},
    {&delayVectors[33], &branch_2sat_1},
    {&delayVectors[34], &branch_2sat_1},
    {&delayVectors[35], &branch_2sat_1},
    {&delayVectors[36], &branch_2sat_1},
    {&delayVectors[37], &branch_2sat_1},
    {&delayVectors[38], &branch_2sat_1},
    {&delayVectors[39], &branch_2sat_1},
    {&delayVectors[40], &branch_2sat_1},
    {&delayVectors[41], &branch_2sat_1},
    {&delayVectors[42], &branch_2sat_1},
    {&delayVectors[43], &branch_2sat_1},
    {&delayVectors[44], &branch_2sat_1},
    {&delayVectors[45], &branch_2sat_1},
    {&delayVectors[46], &branch_2sat_1},
    {&delayVectors[47], &branch_2sat_1},
    {&delayVectors[48], &branch_2sat_1},
    {&delayVectors[49], &branch_2sat_1},
    {&delayVectors[50], &branch_2sat_1},
    {&delayVectors[51], &branch_2sat_1},
    {&delayVectors[52], &branch_2sat_1},
    {&delayVectors[53], &branch_2sat_1},
    {&delayVectors[54], &branch_2sat_1},
    {&delayVectors[55], &branch_2sat_1},
    {&delayVectors[56], &branch_2sat_1},
    {&delayVectors[57], &branch_2sat_1},
    {&delayVectors[58], &branch_2sat_1},
    {&delayVectors[59], &branch_2sat_1},
    {&delayVectors[60], &branch_2sat_1},
    {&delayVectors[61], &branch_2sat_1},
    {&delayVectors[62], &branch_2sat_1},
    {&delayVectors[63], &branch_2sat_1},
    {&delayVectors[64], &branch_2sat_1},
    {&delayVectors[65], &branch_2sat_1},
    {&delayVectors[66], &branch_2sat_1},
    {&delayVectors[67], &branch_2sat_1},
    {&delayVectors[68], &branch_2sat_1},
    {&delayVectors[69], &branch_2sat_1},
    {&delayVectors[70], &branch_2sat_1},
    {&delayVectors[71], &branch_2sat_1},
    {&delayVectors[72], &branch_2sat_1},
    {&delayVectors[73], &branch_2sat_1},
    {&delayVectors[74], &branch_2sat_1},
    {&delayVectors[75], &branch_2sat_1},
    {&delayVectors[76], &branch_2sat_1},
    {&delayVectors[77], &branch_2sat_1},
    {&delayVectors[78], &branch_2sat_1},
    {&delayVectors[79], &branch_2sat_1},
    {&delayVectors[80], &branch_2sat_1},
    {&delayVectors[81], &branch_2sat_1},
    {&delayVectors[82], &branch_2sat_1},
    {&delayVectors[83], &branch_2sat_1},
    {&delayVectors[84], &branch_2sat_1},
    {&delayVectors[85], &branch_2sat_1},
    {&delayVectors[86], &branch_2sat_1},
    {&delayVectors[87], &branch_2sat_1},
    {&delayVectors[88], &branch_2sat_1},
    {&delayVectors[89], &branch_2sat_1},
    {&delayVectors[90], &branch_2sat_1},
    {&delayVectors[91], &branch_2sat_1},
    {&delayVectors[92], &branch_2sat_1},
    {&delayVectors[93], &branch_2sat_1},
    {&delayVectors[94], &branch_2sat_1},
    {&delayVectors[95], &branch_2sat_1},
    {&delayVectors[96], &branch_2sat_1},
    {&delayVectors[97], &branch_2sat_1},
    {&delayVectors[98], &branch_2sat_1},
    {&delayVectors[99], &branch_2sat_1},
    {&delayVectors[100], &branch_2sat_1},
    {&delayVectors[101], &branch_2sat_1},
    {&delayVectors[102], &branch_2sat_1},
    {&delayVectors[103], &branch_2sat_1},
    {&delayVectors[104], &branch_2sat_1},
    {&delayVectors[105], &branch_2sat_1},
    {&delayVectors[106], &branch_2sat_1},
    {&delayVectors[107], &branch_2sat_1},
    {&delayVectors[108], &branch_2sat_1},
    {&delayVectors[109], &branch_2sat_1},
    {&delayVectors[110], &branch_2sat_1},
    {&delayVectors[111], &branch_2sat_1},
    {&delayVectors[112], &branch_2sat_1},
    {&delayVectors[113], &branch_2sat_1},
    {&delayVectors[114], &branch_2sat_1},
    {&delayVectors[115], &branch_2sat_1},
    {&delayVectors[116], &branch_2sat_1},
    {&delayVectors[117], &branch_2sat_1},
    {&delayVectors[118], &branch_2sat_1},
    {&delayVectors[119], &branch_2sat_1},
    {&delayVectors[120], &branch_2sat_1},
    {&delayVectors[121], &branch_2sat_1},
    {&delayVectors[122], &branch_2sat_1},
    {&delayVectors[123], &branch_2sat_1},
    {&delayVectors[124], &branch_2sat_1},
    {&delayVectors[125], &branch_2sat_1},
    {&delayVectors[126], &branch_2sat_1},
    {&delayVectors[127], &branch_2sat_1},
    {&delayVectors[128], &branch_2sat_1},
    {&delayVectors[129], &branch_2sat_1},
    {&delayVectors[130], &branch_2sat_1},
    {&delayVectors[131], &branch_2sat_1},
    {&delayVectors[132], &branch_2sat_1},
    {&delayVectors[133], &branch_2sat_1},
    {&delayVectors[134], &branch_2sat_1},
    {&delayVectors[135], &branch_2sat_1},
    {&delayVectors[136], &branch_2sat_1},
    {&delayVectors[137], &branch_2sat_1},
    {&delayVectors[138], &branch_2sat_1},
    {&delayVectors[139], &branch_2sat_1},
    {&delayVectors[140], &branch_2sat_1},
    {&delayVectors[141], &branch_2sat_1},
    {&delayVectors[142], &branch_2sat_1},
    {&delayVectors[143], &branch_2sat_1},
    {&delayVectors[144], &branch_2sat_1},
    {&delayVectors[145], &branch_2sat_1},
    {&delayVectors[146], &branch_2sat_1},
    {&delayVectors[147], &branch_2sat_1},
    {&delayVectors[148], &branch_2sat_1},
    {&delayVectors[149], &branch_2sat_1},
    {&delayVectors[150], &branch_2sat_1},
    {&delayVectors[151], &branch_2sat_1},
    {&delayVectors[152], &branch_2sat_1},
    {&delayVectors[153], &branch_2sat_1},
    {&delayVectors[154], &branch_2sat_1},
    {&delayVectors[155], &branch_2sat_1},
    {&delayVectors[156], &branch_2sat_1},
    {&delayVectors[157], &branch_2sat_1},
    {&delayVectors[158], &branch_2sat_1},
    {&delayVectors[159], &branch_2sat_1},
    {&delayVectors[160], &branch_2sat_1},
    {&delayVectors[161], &branch_2sat_1},
    {&delayVectors[162], &branch_2sat_1},
    {&delayVectors[163], &branch_2sat_1},
    {&delayVectors[164], &branch_2sat_1},
    {&delayVectors[165], &branch_2sat_1},
    {&delayVectors[166], &branch_2sat_1},
    {&delayVectors[167], &branch_2sat_1},
    {&delayVectors[168], &branch_2sat_1},
    {&delayVectors[169], &branch_2sat_1},
    {&delayVectors[170], &branch_2sat_1},
    {&delayVectors[171], &branch_2sat_1},
    {&delayVectors[172], &branch_2sat_1},
    {&delayVectors[173], &branch_2sat_1},
    {&delayVectors[174], &branch_2sat_1},
    {&delayVectors[175], &branch_2sat_1},
    {&delayVectors[176], &branch_2sat_1},
    {&delayVectors[177], &branch_2sat_1},
    {&delayVectors[178], &branch_2sat_1},
    {&delayVectors[179], &branch_2sat_1},
    {&delayVectors[180], &branch_2sat_1},
    {&delayVectors[181], &branch_2sat_1},
    {&delayVectors[182], &branch_2sat_1},
    {&delayVectors[183], &branch_2sat_1},
    {&delayVectors[184], &branch_2sat_1},
    {&delayVectors[185], &branch_2sat_1},
    {&delayVectors[186], &branch_2sat_1},
    {&delayVectors[187], &branch_2sat_1},
    {&delayVectors[188], &branch_2sat_1},
    {&delayVectors[189], &branch_2sat_1},
    {&delayVectors[190], &branch_2sat_1},
    {&delayVectors[191], &branch_2sat_1},
    {&delayVectors[192], &branch_2sat_1},
    {&delayVectors[193], &branch_2sat_1},
    {&delayVectors[194], &branch_2sat_1},
    {&delayVectors[195], &branch_2sat_1},
    {&delayVectors[196], &branch_2sat_1},
    {&delayVectors[197], &branch_2sat_1},
    {&delayVectors[198], &branch_2sat_1},
    {&delayVectors[199], &branch_2sat_1},
    {&delayVectors[200], &branch_2sat_1},
    {&delayVectors[201], &branch_2sat_1},
    {&delayVectors[202], &branch_2sat_1},
    {&delayVectors[203], &branch_2sat_1},
    {&delayVectors[204], &branch_2sat_1},
    {&delayVectors[205], &branch_2sat_1},
    {&delayVectors[206], &branch_2sat_1},
    {&delayVectors[207], &branch_2sat_1},
    {&delayVectors[208], &branch_2sat_1},
    {&delayVectors[209], &branch_2sat_1},
    {&delayVectors[210], &branch_2sat_1},
    {&delayVectors[211], &branch_2sat_1},
    {&delayVectors[212], &branch_2sat_1},
    {&delayVectors[213], &branch_2sat_1},
    {&delayVectors[214], &branch_2sat_1},
    {&delayVectors[215], &branch_2sat_1},
    {&delayVectors[216], &branch_2sat_1},
    {&delayVectors[217], &branch_2sat_1},
    {&delayVectors[218], &branch_2sat_1},
    {&delayVectors[219], &branch_2sat_1},
    {&delayVectors[220], &branch_2sat_1},
    {&delayVectors[221], &branch_2sat_1},
    {&delayVectors[222], &branch_2sat_1},
    {&delayVectors[223], &branch_2sat_1},
    {&delayVectors[224], &branch_2sat_1},
    {&delayVectors[225], &branch_2sat_1},
    {&delayVectors[226], &branch_2sat_1},
    {&delayVectors[227], &branch_2sat_1},
    {&delayVectors[228], &branch_2sat_1},
    {&delayVectors[229], &branch_2sat_1},
    {&delayVectors[230], &branch_2sat_1},
    {&delayVectors[231], &branch_2sat_1},
    {&delayVectors[232], &branch_2sat_1},
    {&delayVectors[233], &branch_2sat_1},
    {&delayVectors[234], &branch_2sat_1},
    {&delayVectors[235], &branch_2sat_1},
    {&delayVectors[236], &branch_2sat_1},
    {&delayVectors[237], &branch_2sat_1},
    {&delayVectors[238], &branch_2sat_1},
    {&delayVectors[239], &branch_2sat_1},
    {&delayVectors[240], &branch_2sat_1},
    {&delayVectors[241], &branch_2sat_1},
    {&delayVectors[242], &branch_2sat_1},
    {&delayVectors[243], &branch_2sat_1},
    {&delayVectors[244], &branch_2sat_1},
    {&delayVectors[245], &branch_2sat_1},
    {&delayVectors[246], &branch_2sat_1},
    {&delayVectors[247], &branch_2sat_1},
    {&delayVectors[248], &branch_2sat_1},
    {&delayVectors[249], &branch_2sat_1},
    {&delayVectors[250], &branch_2sat_1},
    {&delayVectors[251], &branch_2sat_1},
    {&delayVectors[252], &branch_2sat_1},
    {&delayVectors[253], &branch_2sat_1},
    {&delayVectors[254], &branch_2sat_1},
    {&delayVectors[255], &branch_2sat_1},
    {&delayVectors[0], &branch_2sat_2},
    {&delayVectors[1], &branch_2sat_2},
    {&delayVectors[2], &branch_2sat_2},
    {&delayVectors[3], &branch_2sat_2},
    {&delayVectors[4], &branch_2sat_2},
    {&delayVectors[5], &branch_2sat_2},
    {&delayVectors[6], &branch_2sat_2},
    {&delayVectors[7], &branch_2sat_2},
    {&delayVectors[8], &branch_2sat_2},
    {&delayVectors[9], &branch_2sat_2},
    {&delayVectors[10], &branch_2sat_2},
    {&delayVectors[11], &branch_2sat_2},
    {&delayVectors[12], &branch_2sat_2},
    {&delayVectors[13], &branch_2sat_2},
    {&delayVectors[14], &branch_2sat_2},
    {&delayVectors[15], &branch_2sat_2},
    {&delayVectors[16], &branch_2sat_2},
    {&delayVectors[17], &branch_2sat_2},
    {&delayVectors[18], &branch_2sat_2},
    {&delayVectors[19], &branch_2sat_2},
    {&delayVectors[20], &branch_2sat_2},
    {&delayVectors[21], &branch_2sat_2},
    {&delayVectors[22], &branch_2sat_2},
    {&delayVectors[23], &branch_2sat_2},
    {&delayVectors[24], &branch_2sat_2},
    {&delayVectors[25], &branch_2sat_2},
    {&delayVectors[26], &branch_2sat_2},
    {&delayVectors[27], &branch_2sat_2},
    {&delayVectors[28], &branch_2sat_2},
    {&delayVectors[29], &branch_2sat_2},
    {&delayVectors[30], &branch_2sat_2},
    {&delayVectors[31], &branch_2sat_2},
    {&delayVectors[32], &branch_2sat_2},
    {&delayVectors[33], &branch_2sat_2},
    {&delayVectors[34], &branch_2sat_2},
    {&delayVectors[35], &branch_2sat_2},
    {&delayVectors[36], &branch_2sat_2},
    {&delayVectors[37], &branch_2sat_2},
    {&delayVectors[38], &branch_2sat_2},
    {&delayVectors[39], &branch_2sat_2},
    {&delayVectors[40], &branch_2sat_2},
    {&delayVectors[41], &branch_2sat_2},
    {&delayVectors[42], &branch_2sat_2},
    {&delayVectors[43], &branch_2sat_2},
    {&delayVectors[44], &branch_2sat_2},
    {&delayVectors[45], &branch_2sat_2},
    {&delayVectors[46], &branch_2sat_2},
    {&delayVectors[47], &branch_2sat_2},
    {&delayVectors[48], &branch_2sat_2},
    {&delayVectors[49], &branch_2sat_2},
    {&delayVectors[50], &branch_2sat_2},
    {&delayVectors[51], &branch_2sat_2},
    {&delayVectors[52], &branch_2sat_2},
    {&delayVectors[53], &branch_2sat_2},
    {&delayVectors[54], &branch_2sat_2},
    {&delayVectors[55], &branch_2sat_2},
    {&delayVectors[56], &branch_2sat_2},
    {&delayVectors[57], &branch_2sat_2},
    {&delayVectors[58], &branch_2sat_2},
    {&delayVectors[59], &branch_2sat_2},
    {&delayVectors[60], &branch_2sat_2},
    {&delayVectors[61], &branch_2sat_2},
    {&delayVectors[62], &branch_2sat_2},
    {&delayVectors[63], &branch_2sat_2},
    {&delayVectors[64], &branch_2sat_2},
    {&delayVectors[65], &branch_2sat_2},
    {&delayVectors[66], &branch_2sat_2},
    {&delayVectors[67], &branch_2sat_2},
    {&delayVectors[68], &branch_2sat_2},
    {&delayVectors[69], &branch_2sat_2},
    {&delayVectors[70], &branch_2sat_2},
    {&delayVectors[71], &branch_2sat_2},
    {&delayVectors[72], &branch_2sat_2},
    {&delayVectors[73], &branch_2sat_2},
    {&delayVectors[74], &branch_2sat_2},
    {&delayVectors[75], &branch_2sat_2},
    {&delayVectors[76], &branch_2sat_2},
    {&delayVectors[77], &branch_2sat_2},
    {&delayVectors[78], &branch_2sat_2},
    {&delayVectors[79], &branch_2sat_2},
    {&delayVectors[80], &branch_2sat_2},
    {&delayVectors[81], &branch_2sat_2},
    {&delayVectors[82], &branch_2sat_2},
    {&delayVectors[83], &branch_2sat_2},
    {&delayVectors[84], &branch_2sat_2},
    {&delayVectors[85], &branch_2sat_2},
    {&delayVectors[86], &branch_2sat_2},
    {&delayVectors[87], &branch_2sat_2},
    {&delayVectors[88], &branch_2sat_2},
    {&delayVectors[89], &branch_2sat_2},
    {&delayVectors[90], &branch_2sat_2},
    {&delayVectors[91], &branch_2sat_2},
    {&delayVectors[92], &branch_2sat_2},
    {&delayVectors[93], &branch_2sat_2},
    {&delayVectors[94], &branch_2sat_2},
    {&delayVectors[95], &branch_2sat_2},
    {&delayVectors[96], &branch_2sat_2},
    {&delayVectors[97], &branch_2sat_2},
    {&delayVectors[98], &branch_2sat_2},
    {&delayVectors[99], &branch_2sat_2},
    {&delayVectors[100], &branch_2sat_2},
    {&delayVectors[101], &branch_2sat_2},
    {&delayVectors[102], &branch_2sat_2},
    {&delayVectors[103], &branch_2sat_2},
    {&delayVectors[104], &branch_2sat_2},
    {&delayVectors[105], &branch_2sat_2},
    {&delayVectors[106], &branch_2sat_2},
    {&delayVectors[107], &branch_2sat_2},
    {&delayVectors[108], &branch_2sat_2},
    {&delayVectors[109], &branch_2sat_2},
    {&delayVectors[110], &branch_2sat_2},
    {&delayVectors[111], &branch_2sat_2},
    {&delayVectors[112], &branch_2sat_2},
    {&delayVectors[113], &branch_2sat_2},
    {&delayVectors[114], &branch_2sat_2},
    {&delayVectors[115], &branch_2sat_2},
    {&delayVectors[116], &branch_2sat_2},
    {&delayVectors[117], &branch_2sat_2},
    {&delayVectors[118], &branch_2sat_2},
    {&delayVectors[119], &branch_2sat_2},
    {&delayVectors[120], &branch_2sat_2},
    {&delayVectors[121], &branch_2sat_2},
    {&delayVectors[122], &branch_2sat_2},
    {&delayVectors[123], &branch_2sat_2},
    {&delayVectors[124], &branch_2sat_2},
    {&delayVectors[125], &branch_2sat_2},
    {&delayVectors[126], &branch_2sat_2},
    {&delayVectors[127], &branch_2sat_2},
    {&delayVectors[128], &branch_2sat_2},
    {&delayVectors[129], &branch_2sat_2},
    {&delayVectors[130], &branch_2sat_2},
    {&delayVectors[131], &branch_2sat_2},
    {&delayVectors[132], &branch_2sat_2},
    {&delayVectors[133], &branch_2sat_2},
    {&delayVectors[134], &branch_2sat_2},
    {&delayVectors[135], &branch_2sat_2},
    {&delayVectors[136], &branch_2sat_2},
    {&delayVectors[137], &branch_2sat_2},
    {&delayVectors[138], &branch_2sat_2},
    {&delayVectors[139], &branch_2sat_2},
    {&delayVectors[140], &branch_2sat_2},
    {&delayVectors[141], &branch_2sat_2},
    {&delayVectors[142], &branch_2sat_2},
    {&delayVectors[143], &branch_2sat_2},
    {&delayVectors[144], &branch_2sat_2},
    {&delayVectors[145], &branch_2sat_2},
    {&delayVectors[146], &branch_2sat_2},
    {&delayVectors[147], &branch_2sat_2},
    {&delayVectors[148], &branch_2sat_2},
    {&delayVectors[149], &branch_2sat_2},
    {&delayVectors[150], &branch_2sat_2},
    {&delayVectors[151], &branch_2sat_2},
    {&delayVectors[152], &branch_2sat_2},
    {&delayVectors[153], &branch_2sat_2},
    {&delayVectors[154], &branch_2sat_2},
    {&delayVectors[155], &branch_2sat_2},
    {&delayVectors[156], &branch_2sat_2},
    {&delayVectors[157], &branch_2sat_2},
    {&delayVectors[158], &branch_2sat_2},
    {&delayVectors[159], &branch_2sat_2},
    {&delayVectors[160], &branch_2sat_2},
    {&delayVectors[161], &branch_2sat_2},
    {&delayVectors[162], &branch_2sat_2},
    {&delayVectors[163], &branch_2sat_2},
    {&delayVectors[164], &branch_2sat_2},
    {&delayVectors[165], &branch_2sat_2},
    {&delayVectors[166], &branch_2sat_2},
    {&delayVectors[167], &branch_2sat_2},
    {&delayVectors[168], &branch_2sat_2},
    {&delayVectors[169], &branch_2sat_2},
    {&delayVectors[170], &branch_2sat_2},
    {&delayVectors[171], &branch_2sat_2},
    {&delayVectors[172], &branch_2sat_2},
    {&delayVectors[173], &branch_2sat_2},
    {&delayVectors[174], &branch_2sat_2},
    {&delayVectors[175], &branch_2sat_2},
    {&delayVectors[176], &branch_2sat_2},
    {&delayVectors[177], &branch_2sat_2},
    {&delayVectors[178], &branch_2sat_2},
    {&delayVectors[179], &branch_2sat_2},
    {&delayVectors[180], &branch_2sat_2},
    {&delayVectors[181], &branch_2sat_2},
    {&delayVectors[182], &branch_2sat_2},
    {&delayVectors[183], &branch_2sat_2},
    {&delayVectors[184], &branch_2sat_2},
    {&delayVectors[185], &branch_2sat_2},
    {&delayVectors[186], &branch_2sat_2},
    {&delayVectors[187], &branch_2sat_2},
    {&delayVectors[188], &branch_2sat_2},
    {&delayVectors[189], &branch_2sat_2},
    {&delayVectors[190], &branch_2sat_2},
    {&delayVectors[191], &branch_2sat_2},
    {&delayVectors[192], &branch_2sat_2},
    {&delayVectors[193], &branch_2sat_2},
    {&delayVectors[194], &branch_2sat_2},
    {&delayVectors[195], &branch_2sat_2},
    {&delayVectors[196], &branch_2sat_2},
    {&delayVectors[197], &branch_2sat_2},
    {&delayVectors[198], &branch_2sat_2},
    {&delayVectors[199], &branch_2sat_2},
    {&delayVectors[200], &branch_2sat_2},
    {&delayVectors[201], &branch_2sat_2},
    {&delayVectors[202], &branch_2sat_2},
    {&delayVectors[203], &branch_2sat_2},
    {&delayVectors[204], &branch_2sat_2},
    {&delayVectors[205], &branch_2sat_2},
    {&delayVectors[206], &branch_2sat_2},
    {&delayVectors[207], &branch_2sat_2},
    {&delayVectors[208], &branch_2sat_2},
    {&delayVectors[209], &branch_2sat_2},
    {&delayVectors[210], &branch_2sat_2},
    {&delayVectors[211], &branch_2sat_2},
    {&delayVectors[212], &branch_2sat_2},
    {&delayVectors[213], &branch_2sat_2},
    {&delayVectors[214], &branch_2sat_2},
    {&delayVectors[215], &branch_2sat_2},
    {&delayVectors[216], &branch_2sat_2},
    {&delayVectors[217], &branch_2sat_2},
    {&delayVectors[218], &branch_2sat_2},
    {&delayVectors[219], &branch_2sat_2},
    {&delayVectors[220], &branch_2sat_2},
    {&delayVectors[221], &branch_2sat_2},
    {&delayVectors[222], &branch_2sat_2},
    {&delayVectors[223], &branch_2sat_2},
    {&delayVectors[224], &branch_2sat_2},
    {&delayVectors[225], &branch_2sat_2},
    {&delayVectors[226], &branch_2sat_2},
    {&delayVectors[227], &branch_2sat_2},
    {&delayVectors[228], &branch_2sat_2},
    {&delayVectors[229], &branch_2sat_2},
    {&delayVectors[230], &branch_2sat_2},
    {&delayVectors[231], &branch_2sat_2},
    {&delayVectors[232], &branch_2sat_2},
    {&delayVectors[233], &branch_2sat_2},
    {&delayVectors[234], &branch_2sat_2},
    {&delayVectors[235], &branch_2sat_2},
    {&delayVectors[236], &branch_2sat_2},
    {&delayVectors[237], &branch_2sat_2},
    {&delayVectors[238], &branch_2sat_2},
    {&delayVectors[239], &branch_2sat_2},
    {&delayVectors[240], &branch_2sat_2},
    {&delayVectors[241], &branch_2sat_2},
    {&delayVectors[242], &branch_2sat_2},
    {&delayVectors[243], &branch_2sat_2},
    {&delayVectors[244], &branch_2sat_2},
    {&delayVectors[245], &branch_2sat_2},
    {&delayVectors[246], &branch_2sat_2},
    {&delayVectors[247], &branch_2sat_2},
    {&delayVectors[248], &branch_2sat_2},
    {&delayVectors[249], &branch_2sat_2},
    {&delayVectors[250], &branch_2sat_2},
    {&delayVectors[251], &branch_2sat_2},
    {&delayVectors[252], &branch_2sat_2},
    {&delayVectors[253], &branch_2sat_2},
    {&delayVectors[254], &branch_2sat_2},
    {&delayVectors[255], &branch_2sat_2},
    {&delayVectors[0], &branch_2sat_3},
    {&delayVectors[1], &branch_2sat_3},
    {&delayVectors[2], &branch_2sat_3},
    {&delayVectors[3], &branch_2sat_3},
    {&delayVectors[4], &branch_2sat_3},
    {&delayVectors[5], &branch_2sat_3},
    {&delayVectors[6], &branch_2sat_3},
    {&delayVectors[7], &branch_2sat_3},
    {&delayVectors[8], &branch_2sat_3},
    {&delayVectors[9], &branch_2sat_3},
    {&delayVectors[10], &branch_2sat_3},
    {&delayVectors[11], &branch_2sat_3},
    {&delayVectors[12], &branch_2sat_3},
    {&delayVectors[13], &branch_2sat_3},
    {&delayVectors[14], &branch_2sat_3},
    {&delayVectors[15], &branch_2sat_3},
    {&delayVectors[16], &branch_2sat_3},
    {&delayVectors[17], &branch_2sat_3},
    {&delayVectors[18], &branch_2sat_3},
    {&delayVectors[19], &branch_2sat_3},
    {&delayVectors[20], &branch_2sat_3},
    {&delayVectors[21], &branch_2sat_3},
    {&delayVectors[22], &branch_2sat_3},
    {&delayVectors[23], &branch_2sat_3},
    {&delayVectors[24], &branch_2sat_3},
    {&delayVectors[25], &branch_2sat_3},
    {&delayVectors[26], &branch_2sat_3},
    {&delayVectors[27], &branch_2sat_3},
    {&delayVectors[28], &branch_2sat_3},
    {&delayVectors[29], &branch_2sat_3},
    {&delayVectors[30], &branch_2sat_3},
    {&delayVectors[31], &branch_2sat_3},
    {&delayVectors[32], &branch_2sat_3},
    {&delayVectors[33], &branch_2sat_3},
    {&delayVectors[34], &branch_2sat_3},
    {&delayVectors[35], &branch_2sat_3},
    {&delayVectors[36], &branch_2sat_3},
    {&delayVectors[37], &branch_2sat_3},
    {&delayVectors[38], &branch_2sat_3},
    {&delayVectors[39], &branch_2sat_3},
    {&delayVectors[40], &branch_2sat_3},
    {&delayVectors[41], &branch_2sat_3},
    {&delayVectors[42], &branch_2sat_3},
    {&delayVectors[43], &branch_2sat_3},
    {&delayVectors[44], &branch_2sat_3},
    {&delayVectors[45], &branch_2sat_3},
    {&delayVectors[46], &branch_2sat_3},
    {&delayVectors[47], &branch_2sat_3},
    {&delayVectors[48], &branch_2sat_3},
    {&delayVectors[49], &branch_2sat_3},
    {&delayVectors[50], &branch_2sat_3},
    {&delayVectors[51], &branch_2sat_3},
    {&delayVectors[52], &branch_2sat_3},
    {&delayVectors[53], &branch_2sat_3},
    {&delayVectors[54], &branch_2sat_3},
    {&delayVectors[55], &branch_2sat_3},
    {&delayVectors[56], &branch_2sat_3},
    {&delayVectors[57], &branch_2sat_3},
    {&delayVectors[58], &branch_2sat_3},
    {&delayVectors[59], &branch_2sat_3},
    {&delayVectors[60], &branch_2sat_3},
    {&delayVectors[61], &branch_2sat_3},
    {&delayVectors[62], &branch_2sat_3},
    {&delayVectors[63], &branch_2sat_3},
    {&delayVectors[64], &branch_2sat_3},
    {&delayVectors[65], &branch_2sat_3},
    {&delayVectors[66], &branch_2sat_3},
    {&delayVectors[67], &branch_2sat_3},
    {&delayVectors[68], &branch_2sat_3},
    {&delayVectors[69], &branch_2sat_3},
    {&delayVectors[70], &branch_2sat_3},
    {&delayVectors[71], &branch_2sat_3},
    {&delayVectors[72], &branch_2sat_3},
    {&delayVectors[73], &branch_2sat_3},
    {&delayVectors[74], &branch_2sat_3},
    {&delayVectors[75], &branch_2sat_3},
    {&delayVectors[76], &branch_2sat_3},
    {&delayVectors[77], &branch_2sat_3},
    {&delayVectors[78], &branch_2sat_3},
    {&delayVectors[79], &branch_2sat_3},
    {&delayVectors[80], &branch_2sat_3},
    {&delayVectors[81], &branch_2sat_3},
    {&delayVectors[82], &branch_2sat_3},
    {&delayVectors[83], &branch_2sat_3},
    {&delayVectors[84], &branch_2sat_3},
    {&delayVectors[85], &branch_2sat_3},
    {&delayVectors[86], &branch_2sat_3},
    {&delayVectors[87], &branch_2sat_3},
    {&delayVectors[88], &branch_2sat_3},
    {&delayVectors[89], &branch_2sat_3},
    {&delayVectors[90], &branch_2sat_3},
    {&delayVectors[91], &branch_2sat_3},
    {&delayVectors[92], &branch_2sat_3},
    {&delayVectors[93], &branch_2sat_3},
    {&delayVectors[94], &branch_2sat_3},
    {&delayVectors[95], &branch_2sat_3},
    {&delayVectors[96], &branch_2sat_3},
    {&delayVectors[97], &branch_2sat_3},
    {&delayVectors[98], &branch_2sat_3},
    {&delayVectors[99], &branch_2sat_3},
    {&delayVectors[100], &branch_2sat_3},
    {&delayVectors[101], &branch_2sat_3},
    {&delayVectors[102], &branch_2sat_3},
    {&delayVectors[103], &branch_2sat_3},
    {&delayVectors[104], &branch_2sat_3},
    {&delayVectors[105], &branch_2sat_3},
    {&delayVectors[106], &branch_2sat_3},
    {&delayVectors[107], &branch_2sat_3},
    {&delayVectors[108], &branch_2sat_3},
    {&delayVectors[109], &branch_2sat_3},
    {&delayVectors[110], &branch_2sat_3},
    {&delayVectors[111], &branch_2sat_3},
    {&delayVectors[112], &branch_2sat_3},
    {&delayVectors[113], &branch_2sat_3},
    {&delayVectors[114], &branch_2sat_3},
    {&delayVectors[115], &branch_2sat_3},
    {&delayVectors[116], &branch_2sat_3},
    {&delayVectors[117], &branch_2sat_3},
    {&delayVectors[118], &branch_2sat_3},
    {&delayVectors[119], &branch_2sat_3},
    {&delayVectors[120], &branch_2sat_3},
    {&delayVectors[121], &branch_2sat_3},
    {&delayVectors[122], &branch_2sat_3},
    {&delayVectors[123], &branch_2sat_3},
    {&delayVectors[124], &branch_2sat_3},
    {&delayVectors[125], &branch_2sat_3},
    {&delayVectors[126], &branch_2sat_3},
    {&delayVectors[127], &branch_2sat_3},
    {&delayVectors[128], &branch_2sat_3},
    {&delayVectors[129], &branch_2sat_3},
    {&delayVectors[130], &branch_2sat_3},
    {&delayVectors[131], &branch_2sat_3},
    {&delayVectors[132], &branch_2sat_3},
    {&delayVectors[133], &branch_2sat_3},
    {&delayVectors[134], &branch_2sat_3},
    {&delayVectors[135], &branch_2sat_3},
    {&delayVectors[136], &branch_2sat_3},
    {&delayVectors[137], &branch_2sat_3},
    {&delayVectors[138], &branch_2sat_3},
    {&delayVectors[139], &branch_2sat_3},
    {&delayVectors[140], &branch_2sat_3},
    {&delayVectors[141], &branch_2sat_3},
    {&delayVectors[142], &branch_2sat_3},
    {&delayVectors[143], &branch_2sat_3},
    {&delayVectors[144], &branch_2sat_3},
    {&delayVectors[145], &branch_2sat_3},
    {&delayVectors[146], &branch_2sat_3},
    {&delayVectors[147], &branch_2sat_3},
    {&delayVectors[148], &branch_2sat_3},
    {&delayVectors[149], &branch_2sat_3},
    {&delayVectors[150], &branch_2sat_3},
    {&delayVectors[151], &branch_2sat_3},
    {&delayVectors[152], &branch_2sat_3},
    {&delayVectors[153], &branch_2sat_3},
    {&delayVectors[154], &branch_2sat_3},
    {&delayVectors[155], &branch_2sat_3},
    {&delayVectors[156], &branch_2sat_3},
    {&delayVectors[157], &branch_2sat_3},
    {&delayVectors[158], &branch_2sat_3},
    {&delayVectors[159], &branch_2sat_3},
    {&delayVectors[160], &branch_2sat_3},
    {&delayVectors[161], &branch_2sat_3},
    {&delayVectors[162], &branch_2sat_3},
    {&delayVectors[163], &branch_2sat_3},
    {&delayVectors[164], &branch_2sat_3},
    {&delayVectors[165], &branch_2sat_3},
    {&delayVectors[166], &branch_2sat_3},
    {&delayVectors[167], &branch_2sat_3},
    {&delayVectors[168], &branch_2sat_3},
    {&delayVectors[169], &branch_2sat_3},
    {&delayVectors[170], &branch_2sat_3},
    {&delayVectors[171], &branch_2sat_3},
    {&delayVectors[172], &branch_2sat_3},
    {&delayVectors[173], &branch_2sat_3},
    {&delayVectors[174], &branch_2sat_3},
    {&delayVectors[175], &branch_2sat_3},
    {&delayVectors[176], &branch_2sat_3},
    {&delayVectors[177], &branch_2sat_3},
    {&delayVectors[178], &branch_2sat_3},
    {&delayVectors[179], &branch_2sat_3},
    {&delayVectors[180], &branch_2sat_3},
    {&delayVectors[181], &branch_2sat_3},
    {&delayVectors[182], &branch_2sat_3},
    {&delayVectors[183], &branch_2sat_3},
    {&delayVectors[184], &branch_2sat_3},
    {&delayVectors[185], &branch_2sat_3},
    {&delayVectors[186], &branch_2sat_3},
    {&delayVectors[187], &branch_2sat_3},
    {&delayVectors[188], &branch_2sat_3},
    {&delayVectors[189], &branch_2sat_3},
    {&delayVectors[190], &branch_2sat_3},
    {&delayVectors[191], &branch_2sat_3},
    {&delayVectors[192], &branch_2sat_3},
    {&delayVectors[193], &branch_2sat_3},
    {&delayVectors[194], &branch_2sat_3},
    {&delayVectors[195], &branch_2sat_3},
    {&delayVectors[196], &branch_2sat_3},
    {&delayVectors[197], &branch_2sat_3},
    {&delayVectors[198], &branch_2sat_3},
    {&delayVectors[199], &branch_2sat_3},
    {&delayVectors[200], &branch_2sat_3},
    {&delayVectors[201], &branch_2sat_3},
    {&delayVectors[202], &branch_2sat_3},
    {&delayVectors[203], &branch_2sat_3},
    {&delayVectors[204], &branch_2sat_3},
    {&delayVectors[205], &branch_2sat_3},
    {&delayVectors[206], &branch_2sat_3},
    {&delayVectors[207], &branch_2sat_3},
    {&delayVectors[208], &branch_2sat_3},
    {&delayVectors[209], &branch_2sat_3},
    {&delayVectors[210], &branch_2sat_3},
    {&delayVectors[211], &branch_2sat_3},
    {&delayVectors[212], &branch_2sat_3},
    {&delayVectors[213], &branch_2sat_3},
    {&delayVectors[214], &branch_2sat_3},
    {&delayVectors[215], &branch_2sat_3},
    {&delayVectors[216], &branch_2sat_3},
    {&delayVectors[217], &branch_2sat_3},
    {&delayVectors[218], &branch_2sat_3},
    {&delayVectors[219], &branch_2sat_3},
    {&delayVectors[220], &branch_2sat_3},
    {&delayVectors[221], &branch_2sat_3},
    {&delayVectors[222], &branch_2sat_3},
    {&delayVectors[223], &branch_2sat_3},
    {&delayVectors[224], &branch_2sat_3},
    {&delayVectors[225], &branch_2sat_3},
    {&delayVectors[226], &branch_2sat_3},
    {&delayVectors[227], &branch_2sat_3},
    {&delayVectors[228], &branch_2sat_3},
    {&delayVectors[229], &branch_2sat_3},
    {&delayVectors[230], &branch_2sat_3},
    {&delayVectors[231], &branch_2sat_3},
    {&delayVectors[232], &branch_2sat_3},
    {&delayVectors[233], &branch_2sat_3},
    {&delayVectors[234], &branch_2sat_3},
    {&delayVectors[235], &branch_2sat_3},
    {&delayVectors[236], &branch_2sat_3},
    {&delayVectors[237], &branch_2sat_3},
    {&delayVectors[238], &branch_2sat_3},
    {&delayVectors[239], &branch_2sat_3},
    {&delayVectors[240], &branch_2sat_3},
    {&delayVectors[241], &branch_2sat_3},
    {&delayVectors[242], &branch_2sat_3},
    {&delayVectors[243], &branch_2sat_3},
    {&delayVectors[244], &branch_2sat_3},
    {&delayVectors[245], &branch_2sat_3},
    {&delayVectors[246], &branch_2sat_3},
    {&delayVectors[247], &branch_2sat_3},
    {&delayVectors[248], &branch_2sat_3},
    {&delayVectors[249], &branch_2sat_3},
    {&delayVectors[250], &branch_2sat_3},
    {&delayVectors[251], &branch_2sat_3},
    {&delayVectors[252], &branch_2sat_3},
    {&delayVectors[253], &branch_2sat_3},
    {&delayVectors[254], &branch_2sat_3},
    {&delayVectors[255], &branch_2sat_3},
    {&delayVectors[0], &branch_2sat_4},
    {&delayVectors[1], &branch_2sat_4},
    {&delayVectors[2], &branch_2sat_4},
    {&delayVectors[3], &branch_2sat_4},
    {&delayVectors[4], &branch_2sat_4},
    {&delayVectors[5], &branch_2sat_4},
    {&delayVectors[6], &branch_2sat_4},
    {&delayVectors[7], &branch_2sat_4},
    {&delayVectors[8], &branch_2sat_4},
    {&delayVectors[9], &branch_2sat_4},
    {&delayVectors[10], &branch_2sat_4},
    {&delayVectors[11], &branch_2sat_4},
    {&delayVectors[12], &branch_2sat_4},
    {&delayVectors[13], &branch_2sat_4},
    {&delayVectors[14], &branch_2sat_4},
    {&delayVectors[15], &branch_2sat_4},
    {&delayVectors[16], &branch_2sat_4},
    {&delayVectors[17], &branch_2sat_4},
    {&delayVectors[18], &branch_2sat_4},
    {&delayVectors[19], &branch_2sat_4},
    {&delayVectors[20], &branch_2sat_4},
    {&delayVectors[21], &branch_2sat_4},
    {&delayVectors[22], &branch_2sat_4},
    {&delayVectors[23], &branch_2sat_4},
    {&delayVectors[24], &branch_2sat_4},
    {&delayVectors[25], &branch_2sat_4},
    {&delayVectors[26], &branch_2sat_4},
    {&delayVectors[27], &branch_2sat_4},
    {&delayVectors[28], &branch_2sat_4},
    {&delayVectors[29], &branch_2sat_4},
    {&delayVectors[30], &branch_2sat_4},
    {&delayVectors[31], &branch_2sat_4},
    {&delayVectors[32], &branch_2sat_4},
    {&delayVectors[33], &branch_2sat_4},
    {&delayVectors[34], &branch_2sat_4},
    {&delayVectors[35], &branch_2sat_4},
    {&delayVectors[36], &branch_2sat_4},
    {&delayVectors[37], &branch_2sat_4},
    {&delayVectors[38], &branch_2sat_4},
    {&delayVectors[39], &branch_2sat_4},
    {&delayVectors[40], &branch_2sat_4},
    {&delayVectors[41], &branch_2sat_4},
    {&delayVectors[42], &branch_2sat_4},
    {&delayVectors[43], &branch_2sat_4},
    {&delayVectors[44], &branch_2sat_4},
    {&delayVectors[45], &branch_2sat_4},
    {&delayVectors[46], &branch_2sat_4},
    {&delayVectors[47], &branch_2sat_4},
    {&delayVectors[48], &branch_2sat_4},
    {&delayVectors[49], &branch_2sat_4},
    {&delayVectors[50], &branch_2sat_4},
    {&delayVectors[51], &branch_2sat_4},
    {&delayVectors[52], &branch_2sat_4},
    {&delayVectors[53], &branch_2sat_4},
    {&delayVectors[54], &branch_2sat_4},
    {&delayVectors[55], &branch_2sat_4},
    {&delayVectors[56], &branch_2sat_4},
    {&delayVectors[57], &branch_2sat_4},
    {&delayVectors[58], &branch_2sat_4},
    {&delayVectors[59], &branch_2sat_4},
    {&delayVectors[60], &branch_2sat_4},
    {&delayVectors[61], &branch_2sat_4},
    {&delayVectors[62], &branch_2sat_4},
    {&delayVectors[63], &branch_2sat_4},
    {&delayVectors[64], &branch_2sat_4},
    {&delayVectors[65], &branch_2sat_4},
    {&delayVectors[66], &branch_2sat_4},
    {&delayVectors[67], &branch_2sat_4},
    {&delayVectors[68], &branch_2sat_4},
    {&delayVectors[69], &branch_2sat_4},
    {&delayVectors[70], &branch_2sat_4},
    {&delayVectors[71], &branch_2sat_4},
    {&delayVectors[72], &branch_2sat_4},
    {&delayVectors[73], &branch_2sat_4},
    {&delayVectors[74], &branch_2sat_4},
    {&delayVectors[75], &branch_2sat_4},
    {&delayVectors[76], &branch_2sat_4},
    {&delayVectors[77], &branch_2sat_4},
    {&delayVectors[78], &branch_2sat_4},
    {&delayVectors[79], &branch_2sat_4},
    {&delayVectors[80], &branch_2sat_4},
    {&delayVectors[81], &branch_2sat_4},
    {&delayVectors[82], &branch_2sat_4},
    {&delayVectors[83], &branch_2sat_4},
    {&delayVectors[84], &branch_2sat_4},
    {&delayVectors[85], &branch_2sat_4},
    {&delayVectors[86], &branch_2sat_4},
    {&delayVectors[87], &branch_2sat_4},
    {&delayVectors[88], &branch_2sat_4},
    {&delayVectors[89], &branch_2sat_4},
    {&delayVectors[90], &branch_2sat_4},
    {&delayVectors[91], &branch_2sat_4},
    {&delayVectors[92], &branch_2sat_4},
    {&delayVectors[93], &branch_2sat_4},
    {&delayVectors[94], &branch_2sat_4},
    {&delayVectors[95], &branch_2sat_4},
    {&delayVectors[96], &branch_2sat_4},
    {&delayVectors[97], &branch_2sat_4},
    {&delayVectors[98], &branch_2sat_4},
    {&delayVectors[99], &branch_2sat_4},
    {&delayVectors[100], &branch_2sat_4},
    {&delayVectors[101], &branch_2sat_4},
    {&delayVectors[102], &branch_2sat_4},
    {&delayVectors[103], &branch_2sat_4},
    {&delayVectors[104], &branch_2sat_4},
    {&delayVectors[105], &branch_2sat_4},
    {&delayVectors[106], &branch_2sat_4},
    {&delayVectors[107], &branch_2sat_4},
    {&delayVectors[108], &branch_2sat_4},
    {&delayVectors[109], &branch_2sat_4},
    {&delayVectors[110], &branch_2sat_4},
    {&delayVectors[111], &branch_2sat_4},
    {&delayVectors[112], &branch_2sat_4},
    {&delayVectors[113], &branch_2sat_4},
    {&delayVectors[114], &branch_2sat_4},
    {&delayVectors[115], &branch_2sat_4},
    {&delayVectors[116], &branch_2sat_4},
    {&delayVectors[117], &branch_2sat_4},
    {&delayVectors[118], &branch_2sat_4},
    {&delayVectors[119], &branch_2sat_4},
    {&delayVectors[120], &branch_2sat_4},
    {&delayVectors[121], &branch_2sat_4},
    {&delayVectors[122], &branch_2sat_4},
    {&delayVectors[123], &branch_2sat_4},
    {&delayVectors[124], &branch_2sat_4},
    {&delayVectors[125], &branch_2sat_4},
    {&delayVectors[126], &branch_2sat_4},
    {&delayVectors[127], &branch_2sat_4},
    {&delayVectors[128], &branch_2sat_4},
    {&delayVectors[129], &branch_2sat_4},
    {&delayVectors[130], &branch_2sat_4},
    {&delayVectors[131], &branch_2sat_4},
    {&delayVectors[132], &branch_2sat_4},
    {&delayVectors[133], &branch_2sat_4},
    {&delayVectors[134], &branch_2sat_4},
    {&delayVectors[135], &branch_2sat_4},
    {&delayVectors[136], &branch_2sat_4},
    {&delayVectors[137], &branch_2sat_4},
    {&delayVectors[138], &branch_2sat_4},
    {&delayVectors[139], &branch_2sat_4},
    {&delayVectors[140], &branch_2sat_4},
    {&delayVectors[141], &branch_2sat_4},
    {&delayVectors[142], &branch_2sat_4},
    {&delayVectors[143], &branch_2sat_4},
    {&delayVectors[144], &branch_2sat_4},
    {&delayVectors[145], &branch_2sat_4},
    {&delayVectors[146], &branch_2sat_4},
    {&delayVectors[147], &branch_2sat_4},
    {&delayVectors[148], &branch_2sat_4},
    {&delayVectors[149], &branch_2sat_4},
    {&delayVectors[150], &branch_2sat_4},
    {&delayVectors[151], &branch_2sat_4},
    {&delayVectors[152], &branch_2sat_4},
    {&delayVectors[153], &branch_2sat_4},
    {&delayVectors[154], &branch_2sat_4},
    {&delayVectors[155], &branch_2sat_4},
    {&delayVectors[156], &branch_2sat_4},
    {&delayVectors[157], &branch_2sat_4},
    {&delayVectors[158], &branch_2sat_4},
    {&delayVectors[159], &branch_2sat_4},
    {&delayVectors[160], &branch_2sat_4},
    {&delayVectors[161], &branch_2sat_4},
    {&delayVectors[162], &branch_2sat_4},
    {&delayVectors[163], &branch_2sat_4},
    {&delayVectors[164], &branch_2sat_4},
    {&delayVectors[165], &branch_2sat_4},
    {&delayVectors[166], &branch_2sat_4},
    {&delayVectors[167], &branch_2sat_4},
    {&delayVectors[168], &branch_2sat_4},
    {&delayVectors[169], &branch_2sat_4},
    {&delayVectors[170], &branch_2sat_4},
    {&delayVectors[171], &branch_2sat_4},
    {&delayVectors[172], &branch_2sat_4},
    {&delayVectors[173], &branch_2sat_4},
    {&delayVectors[174], &branch_2sat_4},
    {&delayVectors[175], &branch_2sat_4},
    {&delayVectors[176], &branch_2sat_4},
    {&delayVectors[177], &branch_2sat_4},
    {&delayVectors[178], &branch_2sat_4},
    {&delayVectors[179], &branch_2sat_4},
    {&delayVectors[180], &branch_2sat_4},
    {&delayVectors[181], &branch_2sat_4},
    {&delayVectors[182], &branch_2sat_4},
    {&delayVectors[183], &branch_2sat_4},
    {&delayVectors[184], &branch_2sat_4},
    {&delayVectors[185], &branch_2sat_4},
    {&delayVectors[186], &branch_2sat_4},
    {&delayVectors[187], &branch_2sat_4},
    {&delayVectors[188], &branch_2sat_4},
    {&delayVectors[189], &branch_2sat_4},
    {&delayVectors[190], &branch_2sat_4},
    {&delayVectors[191], &branch_2sat_4},
    {&delayVectors[192], &branch_2sat_4},
    {&delayVectors[193], &branch_2sat_4},
    {&delayVectors[194], &branch_2sat_4},
    {&delayVectors[195], &branch_2sat_4},
    {&delayVectors[196], &branch_2sat_4},
    {&delayVectors[197], &branch_2sat_4},
    {&delayVectors[198], &branch_2sat_4},
    {&delayVectors[199], &branch_2sat_4},
    {&delayVectors[200], &branch_2sat_4},
    {&delayVectors[201], &branch_2sat_4},
    {&delayVectors[202], &branch_2sat_4},
    {&delayVectors[203], &branch_2sat_4},
    {&delayVectors[204], &branch_2sat_4},
    {&delayVectors[205], &branch_2sat_4},
    {&delayVectors[206], &branch_2sat_4},
    {&delayVectors[207], &branch_2sat_4},
    {&delayVectors[208], &branch_2sat_4},
    {&delayVectors[209], &branch_2sat_4},
    {&delayVectors[210], &branch_2sat_4},
    {&delayVectors[211], &branch_2sat_4},
    {&delayVectors[212], &branch_2sat_4},
    {&delayVectors[213], &branch_2sat_4},
    {&delayVectors[214], &branch_2sat_4},
    {&delayVectors[215], &branch_2sat_4},
    {&delayVectors[216], &branch_2sat_4},
    {&delayVectors[217], &branch_2sat_4},
    {&delayVectors[218], &branch_2sat_4},
    {&delayVectors[219], &branch_2sat_4},
    {&delayVectors[220], &branch_2sat_4},
    {&delayVectors[221], &branch_2sat_4},
    {&delayVectors[222], &branch_2sat_4},
    {&delayVectors[223], &branch_2sat_4},
    {&delayVectors[224], &branch_2sat_4},
    {&delayVectors[225], &branch_2sat_4},
    {&delayVectors[226], &branch_2sat_4},
    {&delayVectors[227], &branch_2sat_4},
    {&delayVectors[228], &branch_2sat_4},
    {&delayVectors[229], &branch_2sat_4},
    {&delayVectors[230], &branch_2sat_4},
    {&delayVectors[231], &branch_2sat_4},
    {&delayVectors[232], &branch_2sat_4},
    {&delayVectors[233], &branch_2sat_4},
    {&delayVectors[234], &branch_2sat_4},
    {&delayVectors[235], &branch_2sat_4},
    {&delayVectors[236], &branch_2sat_4},
    {&delayVectors[237], &branch_2sat_4},
    {&delayVectors[238], &branch_2sat_4},
    {&delayVectors[239], &branch_2sat_4},
    {&delayVectors[240], &branch_2sat_4},
    {&delayVectors[241], &branch_2sat_4},
    {&delayVectors[242], &branch_2sat_4},
    {&delayVectors[243], &branch_2sat_4},
    {&delayVectors[244], &branch_2sat_4},
    {&delayVectors[245], &branch_2sat_4},
    {&delayVectors[246], &branch_2sat_4},
    {&delayVectors[247], &branch_2sat_4},
    {&delayVectors[248], &branch_2sat_4},
    {&delayVectors[249], &branch_2sat_4},
    {&delayVectors[250], &branch_2sat_4},
    {&delayVectors[251], &branch_2sat_4},
    {&delayVectors[252], &branch_2sat_4},
    {&delayVectors[253], &branch_2sat_4},
    {&delayVectors[254], &branch_2sat_4},
    {&delayVectors[255], &branch_2sat_4},
    {&delayVectors[0], &branch_2sat_5},
    {&delayVectors[1], &branch_2sat_5},
    {&delayVectors[2], &branch_2sat_5},
    {&delayVectors[3], &branch_2sat_5},
    {&delayVectors[4], &branch_2sat_5},
    {&delayVectors[5], &branch_2sat_5},
    {&delayVectors[6], &branch_2sat_5},
    {&delayVectors[7], &branch_2sat_5},
    {&delayVectors[8], &branch_2sat_5},
    {&delayVectors[9], &branch_2sat_5},
    {&delayVectors[10], &branch_2sat_5},
    {&delayVectors[11], &branch_2sat_5},
    {&delayVectors[12], &branch_2sat_5},
    {&delayVectors[13], &branch_2sat_5},
    {&delayVectors[14], &branch_2sat_5},
    {&delayVectors[15], &branch_2sat_5},
    {&delayVectors[16], &branch_2sat_5},
    {&delayVectors[17], &branch_2sat_5},
    {&delayVectors[18], &branch_2sat_5},
    {&delayVectors[19], &branch_2sat_5},
    {&delayVectors[20], &branch_2sat_5},
    {&delayVectors[21], &branch_2sat_5},
    {&delayVectors[22], &branch_2sat_5},
    {&delayVectors[23], &branch_2sat_5},
    {&delayVectors[24], &branch_2sat_5},
    {&delayVectors[25], &branch_2sat_5},
    {&delayVectors[26], &branch_2sat_5},
    {&delayVectors[27], &branch_2sat_5},
    {&delayVectors[28], &branch_2sat_5},
    {&delayVectors[29], &branch_2sat_5},
    {&delayVectors[30], &branch_2sat_5},
    {&delayVectors[31], &branch_2sat_5},
    {&delayVectors[32], &branch_2sat_5},
    {&delayVectors[33], &branch_2sat_5},
    {&delayVectors[34], &branch_2sat_5},
    {&delayVectors[35], &branch_2sat_5},
    {&delayVectors[36], &branch_2sat_5},
    {&delayVectors[37], &branch_2sat_5},
    {&delayVectors[38], &branch_2sat_5},
    {&delayVectors[39], &branch_2sat_5},
    {&delayVectors[40], &branch_2sat_5},
    {&delayVectors[41], &branch_2sat_5},
    {&delayVectors[42], &branch_2sat_5},
    {&delayVectors[43], &branch_2sat_5},
    {&delayVectors[44], &branch_2sat_5},
    {&delayVectors[45], &branch_2sat_5},
    {&delayVectors[46], &branch_2sat_5},
    {&delayVectors[47], &branch_2sat_5},
    {&delayVectors[48], &branch_2sat_5},
    {&delayVectors[49], &branch_2sat_5},
    {&delayVectors[50], &branch_2sat_5},
    {&delayVectors[51], &branch_2sat_5},
    {&delayVectors[52], &branch_2sat_5},
    {&delayVectors[53], &branch_2sat_5},
    {&delayVectors[54], &branch_2sat_5},
    {&delayVectors[55], &branch_2sat_5},
    {&delayVectors[56], &branch_2sat_5},
    {&delayVectors[57], &branch_2sat_5},
    {&delayVectors[58], &branch_2sat_5},
    {&delayVectors[59], &branch_2sat_5},
    {&delayVectors[60], &branch_2sat_5},
    {&delayVectors[61], &branch_2sat_5},
    {&delayVectors[62], &branch_2sat_5},
    {&delayVectors[63], &branch_2sat_5},
    {&delayVectors[64], &branch_2sat_5},
    {&delayVectors[65], &branch_2sat_5},
    {&delayVectors[66], &branch_2sat_5},
    {&delayVectors[67], &branch_2sat_5},
    {&delayVectors[68], &branch_2sat_5},
    {&delayVectors[69], &branch_2sat_5},
    {&delayVectors[70], &branch_2sat_5},
    {&delayVectors[71], &branch_2sat_5},
    {&delayVectors[72], &branch_2sat_5},
    {&delayVectors[73], &branch_2sat_5},
    {&delayVectors[74], &branch_2sat_5},
    {&delayVectors[75], &branch_2sat_5},
    {&delayVectors[76], &branch_2sat_5},
    {&delayVectors[77], &branch_2sat_5},
    {&delayVectors[78], &branch_2sat_5},
    {&delayVectors[79], &branch_2sat_5},
    {&delayVectors[80], &branch_2sat_5},
    {&delayVectors[81], &branch_2sat_5},
    {&delayVectors[82], &branch_2sat_5},
    {&delayVectors[83], &branch_2sat_5},
    {&delayVectors[84], &branch_2sat_5},
    {&delayVectors[85], &branch_2sat_5},
    {&delayVectors[86], &branch_2sat_5},
    {&delayVectors[87], &branch_2sat_5},
    {&delayVectors[88], &branch_2sat_5},
    {&delayVectors[89], &branch_2sat_5},
    {&delayVectors[90], &branch_2sat_5},
    {&delayVectors[91], &branch_2sat_5},
    {&delayVectors[92], &branch_2sat_5},
    {&delayVectors[93], &branch_2sat_5},
    {&delayVectors[94], &branch_2sat_5},
    {&delayVectors[95], &branch_2sat_5},
    {&delayVectors[96], &branch_2sat_5},
    {&delayVectors[97], &branch_2sat_5},
    {&delayVectors[98], &branch_2sat_5},
    {&delayVectors[99], &branch_2sat_5},
    {&delayVectors[100], &branch_2sat_5},
    {&delayVectors[101], &branch_2sat_5},
    {&delayVectors[102], &branch_2sat_5},
    {&delayVectors[103], &branch_2sat_5},
    {&delayVectors[104], &branch_2sat_5},
    {&delayVectors[105], &branch_2sat_5},
    {&delayVectors[106], &branch_2sat_5},
    {&delayVectors[107], &branch_2sat_5},
    {&delayVectors[108], &branch_2sat_5},
    {&delayVectors[109], &branch_2sat_5},
    {&delayVectors[110], &branch_2sat_5},
    {&delayVectors[111], &branch_2sat_5},
    {&delayVectors[112], &branch_2sat_5},
    {&delayVectors[113], &branch_2sat_5},
    {&delayVectors[114], &branch_2sat_5},
    {&delayVectors[115], &branch_2sat_5},
    {&delayVectors[116], &branch_2sat_5},
    {&delayVectors[117], &branch_2sat_5},
    {&delayVectors[118], &branch_2sat_5},
    {&delayVectors[119], &branch_2sat_5},
    {&delayVectors[120], &branch_2sat_5},
    {&delayVectors[121], &branch_2sat_5},
    {&delayVectors[122], &branch_2sat_5},
    {&delayVectors[123], &branch_2sat_5},
    {&delayVectors[124], &branch_2sat_5},
    {&delayVectors[125], &branch_2sat_5},
    {&delayVectors[126], &branch_2sat_5},
    {&delayVectors[127], &branch_2sat_5},
    {&delayVectors[128], &branch_2sat_5},
    {&delayVectors[129], &branch_2sat_5},
    {&delayVectors[130], &branch_2sat_5},
    {&delayVectors[131], &branch_2sat_5},
    {&delayVectors[132], &branch_2sat_5},
    {&delayVectors[133], &branch_2sat_5},
    {&delayVectors[134], &branch_2sat_5},
    {&delayVectors[135], &branch_2sat_5},
    {&delayVectors[136], &branch_2sat_5},
    {&delayVectors[137], &branch_2sat_5},
    {&delayVectors[138], &branch_2sat_5},
    {&delayVectors[139], &branch_2sat_5},
    {&delayVectors[140], &branch_2sat_5},
    {&delayVectors[141], &branch_2sat_5},
    {&delayVectors[142], &branch_2sat_5},
    {&delayVectors[143], &branch_2sat_5},
    {&delayVectors[144], &branch_2sat_5},
    {&delayVectors[145], &branch_2sat_5},
    {&delayVectors[146], &branch_2sat_5},
    {&delayVectors[147], &branch_2sat_5},
    {&delayVectors[148], &branch_2sat_5},
    {&delayVectors[149], &branch_2sat_5},
    {&delayVectors[150], &branch_2sat_5},
    {&delayVectors[151], &branch_2sat_5},
    {&delayVectors[152], &branch_2sat_5},
    {&delayVectors[153], &branch_2sat_5},
    {&delayVectors[154], &branch_2sat_5},
    {&delayVectors[155], &branch_2sat_5},
    {&delayVectors[156], &branch_2sat_5},
    {&delayVectors[157], &branch_2sat_5},
    {&delayVectors[158], &branch_2sat_5},
    {&delayVectors[159], &branch_2sat_5},
    {&delayVectors[160], &branch_2sat_5},
    {&delayVectors[161], &branch_2sat_5},
    {&delayVectors[162], &branch_2sat_5},
    {&delayVectors[163], &branch_2sat_5},
    {&delayVectors[164], &branch_2sat_5},
    {&delayVectors[165], &branch_2sat_5},
    {&delayVectors[166], &branch_2sat_5},
    {&delayVectors[167], &branch_2sat_5},
    {&delayVectors[168], &branch_2sat_5},
    {&delayVectors[169], &branch_2sat_5},
    {&delayVectors[170], &branch_2sat_5},
    {&delayVectors[171], &branch_2sat_5},
    {&delayVectors[172], &branch_2sat_5},
    {&delayVectors[173], &branch_2sat_5},
    {&delayVectors[174], &branch_2sat_5},
    {&delayVectors[175], &branch_2sat_5},
    {&delayVectors[176], &branch_2sat_5},
    {&delayVectors[177], &branch_2sat_5},
    {&delayVectors[178], &branch_2sat_5},
    {&delayVectors[179], &branch_2sat_5},
    {&delayVectors[180], &branch_2sat_5},
    {&delayVectors[181], &branch_2sat_5},
    {&delayVectors[182], &branch_2sat_5},
    {&delayVectors[183], &branch_2sat_5},
    {&delayVectors[184], &branch_2sat_5},
    {&delayVectors[185], &branch_2sat_5},
    {&delayVectors[186], &branch_2sat_5},
    {&delayVectors[187], &branch_2sat_5},
    {&delayVectors[188], &branch_2sat_5},
    {&delayVectors[189], &branch_2sat_5},
    {&delayVectors[190], &branch_2sat_5},
    {&delayVectors[191], &branch_2sat_5},
    {&delayVectors[192], &branch_2sat_5},
    {&delayVectors[193], &branch_2sat_5},
    {&delayVectors[194], &branch_2sat_5},
    {&delayVectors[195], &branch_2sat_5},
    {&delayVectors[196], &branch_2sat_5},
    {&delayVectors[197], &branch_2sat_5},
    {&delayVectors[198], &branch_2sat_5},
    {&delayVectors[199], &branch_2sat_5},
    {&delayVectors[200], &branch_2sat_5},
    {&delayVectors[201], &branch_2sat_5},
    {&delayVectors[202], &branch_2sat_5},
    {&delayVectors[203], &branch_2sat_5},
    {&delayVectors[204], &branch_2sat_5},
    {&delayVectors[205], &branch_2sat_5},
    {&delayVectors[206], &branch_2sat_5},
    {&delayVectors[207], &branch_2sat_5},
    {&delayVectors[208], &branch_2sat_5},
    {&delayVectors[209], &branch_2sat_5},
    {&delayVectors[210], &branch_2sat_5},
    {&delayVectors[211], &branch_2sat_5},
    {&delayVectors[212], &branch_2sat_5},
    {&delayVectors[213], &branch_2sat_5},
    {&delayVectors[214], &branch_2sat_5},
    {&delayVectors[215], &branch_2sat_5},
    {&delayVectors[216], &branch_2sat_5},
    {&delayVectors[217], &branch_2sat_5},
    {&delayVectors[218], &branch_2sat_5},
    {&delayVectors[219], &branch_2sat_5},
    {&delayVectors[220], &branch_2sat_5},
    {&delayVectors[221], &branch_2sat_5},
    {&delayVectors[222], &branch_2sat_5},
    {&delayVectors[223], &branch_2sat_5},
    {&delayVectors[224], &branch_2sat_5},
    {&delayVectors[225], &branch_2sat_5},
    {&delayVectors[226], &branch_2sat_5},
    {&delayVectors[227], &branch_2sat_5},
    {&delayVectors[228], &branch_2sat_5},
    {&delayVectors[229], &branch_2sat_5},
    {&delayVectors[230], &branch_2sat_5},
    {&delayVectors[231], &branch_2sat_5},
    {&delayVectors[232], &branch_2sat_5},
    {&delayVectors[233], &branch_2sat_5},
    {&delayVectors[234], &branch_2sat_5},
    {&delayVectors[235], &branch_2sat_5},
    {&delayVectors[236], &branch_2sat_5},
    {&delayVectors[237], &branch_2sat_5},
    {&delayVectors[238], &branch_2sat_5},
    {&delayVectors[239], &branch_2sat_5},
    {&delayVectors[240], &branch_2sat_5},
    {&delayVectors[241], &branch_2sat_5},
    {&delayVectors[242], &branch_2sat_5},
    {&delayVectors[243], &branch_2sat_5},
    {&delayVectors[244], &branch_2sat_5},
    {&delayVectors[245], &branch_2sat_5},
    {&delayVectors[246], &branch_2sat_5},
    {&delayVectors[247], &branch_2sat_5},
    {&delayVectors[248], &branch_2sat_5},
    {&delayVectors[249], &branch_2sat_5},
    {&delayVectors[250], &branch_2sat_5},
    {&delayVectors[251], &branch_2sat_5},
    {&delayVectors[252], &branch_2sat_5},
    {&delayVectors[253], &branch_2sat_5},
    {&delayVectors[254], &branch_2sat_5},
    {&delayVectors[255], &branch_2sat_5}
}};

CV32E40P_DSE_MAPExplorer::CV32E40P_DSE_MAPExplorer()
    : MAPExplorerBase(
        &CV32E40P_DSE_blockDict,
        resGroupLUT,
        resGroups,
        &branchGroup,
        delayVectors,
        combs) 
{}

void CV32E40P_DSE_MAPExplorer::connectChannel(Channel* channel_){
    ch_instrCnt_ptr = &(channel_->instrCnt);
    ch_typeId_ptr = channel_->typeId;

    // TODO: Currently hard-coded. Need to get this information from somewhere
    CV32E40P_DSE_Channel* channel = static_cast<CV32E40P_DSE_Channel*>(channel_);
    ch_pc_ptr = channel->pc;

    branchGroup.connectChannel(channel_, &curInstrIdx);

    resGroups[0]->connectChannel(channel_, &curInstrIdx);
    resGroups[1]->connectChannel(channel_, &curInstrIdx);
    resGroups[2]->connectChannel(channel_, &curInstrIdx);
    resGroups[3]->connectChannel(channel_, &curInstrIdx);
}

} // namespace CV32E40P_DSE