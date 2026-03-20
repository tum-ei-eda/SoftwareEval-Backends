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


#include "CV32E40P_BlockSchedulingFunctions.h"

#include "BlockSchedulingFunctions.h"

#include <array>
#include <algorithm>

namespace CV32E40P{

const MAP_Explorer::Block block_266{
    266,
    1180,
    1232,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[36] + 14});
	int out_1 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 1, vec_[36] + 15});
	int out_2 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[5] + 2, vec_[36] + 16});
	int out_3 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[36] + 15});
	int out_4 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[5] + 2, vec_[36] + 16});
	int out_14 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[36] + 15});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[36] + 14});
	int out_38 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 1, vec_[36] + 15});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_267{
    267,
    960,
    992,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[12] + 7, vec_[13] + 1, vec_[14] + 7, vec_[22] + 4, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 0, vec_[12] + 8, vec_[13] + 2, vec_[14] + 8, vec_[22] + 5, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[12] + 9, vec_[13] + 3, vec_[14] + 9, vec_[22] + 6, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[12] + 6, vec_[14] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[12] + 8, vec_[13] + 2, vec_[14] + 8, vec_[22] + 5, vec_[36] + 10});
	int out_13 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[12] + 7, vec_[13] + 1, vec_[14] + 7, vec_[22] + 4, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[12] + 6, vec_[14] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[12] + 7, vec_[13] + 1, vec_[14] + 7, vec_[22] + 4, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[12] + 9, vec_[13] + 3, vec_[14] + 9, vec_[22] + 6, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_268{
    268,
    956,
    956,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_264{
    264,
    1236,
    1244,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[14] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[14] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[14] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_265{
    265,
    948,
    956,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_269{
    269,
    996,
    1000,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[23] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[23] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[23] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_270{
    270,
    940,
    944,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_343{
    343,
    35808,
    35816,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[23] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[23] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[23] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_23 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[23] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_344{
    344,
    35804,
    35804,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[18] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[18] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[18] + 1, vec_[19] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_242{
    242,
    2348,
    2360,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[18] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[17] + 0, vec_[18] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[15] + 4, vec_[17] + 1, vec_[18] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[15] + 4, vec_[18] + 2, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[15] + 4, vec_[17] + 1, vec_[18] + 2, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_136{
    136,
    46352,
    46360,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[25] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[25] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[25] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_25 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[25] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_406{
    406,
    2152,
    2164,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[17] + 0, vec_[19] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[14] + 0, vec_[17] + 1, vec_[19] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[14] + 1, vec_[17] + 2, vec_[19] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[17] + 2, vec_[19] + 4, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[14] + 1, vec_[17] + 2, vec_[19] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_137{
    137,
    46348,
    46348,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[17] + 0, vec_[18] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[18] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[18] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_186{
    186,
    60588,
    60588,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_188{
    188,
    60632,
    60636,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[16] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[16] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[16] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_206{
    206,
    60660,
    60676,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[19] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[15] + 4, vec_[17] + 0, vec_[19] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[17] + 1, vec_[19] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[19] + 4, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[19] + 2, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[19] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[17] + 1, vec_[19] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_204{
    204,
    60640,
    60648,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[16] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[14] + 2, vec_[16] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[16] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[16] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[16] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_176{
    176,
    60148,
    60172,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[14] + 5, vec_[15] + 4, vec_[20] + 0, vec_[21] + 3, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 0, vec_[14] + 6, vec_[15] + 5, vec_[20] + 1, vec_[21] + 4, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[14] + 7, vec_[15] + 6, vec_[20] + 2, vec_[21] + 5, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[14] + 3, vec_[15] + 2, vec_[21] + 1, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[14] + 6, vec_[15] + 5, vec_[20] + 1, vec_[21] + 4, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[14] + 5, vec_[15] + 4, vec_[21] + 3, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[14] + 7, vec_[15] + 6, vec_[20] + 2, vec_[21] + 5, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_177{
    177,
    60136,
    60144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[10] + 0, vec_[14] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[10] + 1, vec_[14] + 2, vec_[19] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[10] + 1, vec_[14] + 2, vec_[19] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_187{
    187,
    60592,
    60596,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[15] + 0, vec_[16] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 0, vec_[15] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 1, vec_[15] + 2, vec_[16] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 1, vec_[15] + 2, vec_[16] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_376{
    376,
    57120,
    57136,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[18] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 0, vec_[13] + 4, vec_[18] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[13] + 5, vec_[18] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[13] + 5, vec_[18] + 4, vec_[36] + 7});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[18] + 2, vec_[36] + 5});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[18] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[18] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[13] + 5, vec_[18] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_377{
    377,
    57140,
    57144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_378{
    378,
    57148,
    57164,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[22] + 2, vec_[23] + 1, vec_[24] + 0, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[22] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[22] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[22] + 2, vec_[23] + 1, vec_[36] + 5});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[22] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[22] + 2, vec_[23] + 1, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[22] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_379{
    379,
    77500,
    77544,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 4, vec_[6] + 10, vec_[12] + 7, vec_[13] + 6, vec_[15] + 8, vec_[16] + 0, vec_[17] + 1, vec_[22] + 9, vec_[23] + 5, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 5, vec_[6] + 11, vec_[12] + 8, vec_[13] + 7, vec_[15] + 9, vec_[16] + 1, vec_[17] + 2, vec_[22] + 10, vec_[23] + 6, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 6, vec_[6] + 12, vec_[12] + 9, vec_[13] + 8, vec_[15] + 10, vec_[16] + 2, vec_[17] + 3, vec_[22] + 11, vec_[23] + 7, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 3, vec_[6] + 9, vec_[12] + 6, vec_[13] + 5, vec_[15] + 7, vec_[22] + 8, vec_[23] + 4, vec_[36] + 11});
	int out_12 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 3, vec_[6] + 9, vec_[12] + 6, vec_[13] + 5, vec_[15] + 7, vec_[22] + 8, vec_[23] + 4, vec_[36] + 11});
	int out_13 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 4, vec_[6] + 10, vec_[12] + 7, vec_[13] + 6, vec_[15] + 8, vec_[17] + 1, vec_[22] + 9, vec_[23] + 5, vec_[36] + 12});
	int out_19 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 3, vec_[6] + 9, vec_[12] + 6, vec_[13] + 5, vec_[15] + 7, vec_[22] + 8, vec_[23] + 4, vec_[36] + 11});
	int out_22 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[15] + 2, vec_[22] + 3, vec_[36] + 6});
	int out_23 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 5, vec_[6] + 11, vec_[12] + 8, vec_[13] + 7, vec_[15] + 9, vec_[16] + 1, vec_[17] + 2, vec_[22] + 10, vec_[23] + 6, vec_[36] + 13});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 4, vec_[6] + 10, vec_[12] + 7, vec_[13] + 6, vec_[15] + 8, vec_[17] + 1, vec_[22] + 9, vec_[23] + 5, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 6, vec_[6] + 12, vec_[12] + 9, vec_[13] + 8, vec_[15] + 10, vec_[16] + 2, vec_[17] + 3, vec_[22] + 11, vec_[23] + 7, vec_[36] + 14});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_382{
    382,
    77580,
    77632,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 10, vec_[6] + 5, vec_[12] + 12, vec_[13] + 8, vec_[22] + 9, vec_[36] + 14});
	int out_1 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 11, vec_[6] + 6, vec_[12] + 13, vec_[13] + 9, vec_[22] + 10, vec_[36] + 15});
	int out_2 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[4] + 12, vec_[6] + 7, vec_[12] + 14, vec_[13] + 10, vec_[22] + 11, vec_[36] + 16});
	int out_3 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 11, vec_[6] + 6, vec_[12] + 13, vec_[13] + 9, vec_[22] + 10, vec_[36] + 15});
	int out_4 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[4] + 12, vec_[6] + 7, vec_[12] + 14, vec_[13] + 10, vec_[22] + 11, vec_[36] + 16});
	int out_5 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 7, vec_[6] + 2, vec_[12] + 9, vec_[13] + 5, vec_[22] + 6, vec_[36] + 11});
	int out_6 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 11, vec_[6] + 6, vec_[12] + 13, vec_[13] + 9, vec_[22] + 10, vec_[36] + 15});
	int out_12 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 8, vec_[6] + 3, vec_[12] + 10, vec_[13] + 6, vec_[22] + 7, vec_[36] + 12});
	int out_13 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 9, vec_[6] + 4, vec_[12] + 11, vec_[13] + 7, vec_[22] + 8, vec_[36] + 13});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 2, vec_[12] + 4, vec_[22] + 1, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 3, vec_[12] + 5, vec_[13] + 1, vec_[22] + 2, vec_[36] + 7});
	int out_22 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 10, vec_[6] + 5, vec_[12] + 12, vec_[13] + 8, vec_[22] + 9, vec_[36] + 14});
	int out_23 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 11, vec_[6] + 6, vec_[12] + 13, vec_[13] + 9, vec_[22] + 10, vec_[36] + 15});
	int out_37 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 10, vec_[6] + 5, vec_[12] + 12, vec_[13] + 8, vec_[22] + 9, vec_[36] + 14});
	int out_38 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 11, vec_[6] + 6, vec_[12] + 13, vec_[13] + 9, vec_[22] + 10, vec_[36] + 15});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_383{
    383,
    57168,
    57168,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[25] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[25] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_384{
    384,
    57172,
    57192,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 3, vec_[13] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 0, vec_[12] + 4, vec_[13] + 5, vec_[22] + 3, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[12] + 5, vec_[13] + 6, vec_[22] + 4, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 5, vec_[13] + 6, vec_[22] + 4, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 3, vec_[13] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 2, vec_[13] + 3, vec_[22] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 3, vec_[13] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[12] + 5, vec_[13] + 6, vec_[22] + 4, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_78{
    78,
    612,
    616,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[9] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[9] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[9] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_80{
    80,
    2648,
    2672,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 2, vec_[5] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 3, vec_[5] + 5, vec_[6] + 6, vec_[13] + 4, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[5] + 6, vec_[6] + 7, vec_[13] + 5, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 2, vec_[5] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[5] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 3, vec_[5] + 5, vec_[6] + 6, vec_[13] + 4, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 2, vec_[5] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[5] + 6, vec_[6] + 7, vec_[13] + 5, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_205{
    205,
    60652,
    60676,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[15] + 3, vec_[17] + 5, vec_[19] + 4, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[15] + 4, vec_[17] + 6, vec_[19] + 5, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 5, vec_[17] + 7, vec_[19] + 6, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 5, vec_[17] + 7, vec_[19] + 6, vec_[36] + 9});
	int out_15 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[15] + 3, vec_[17] + 5, vec_[19] + 4, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[17] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[17] + 4, vec_[19] + 3, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[17] + 4, vec_[19] + 3, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[15] + 3, vec_[17] + 5, vec_[19] + 4, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 5, vec_[17] + 7, vec_[19] + 6, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_207{
    207,
    60680,
    60680,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_17{
    17,
    61276,
    61284,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_18{
    18,
    61288,
    61324,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 6, vec_[18] + 5, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 7, vec_[18] + 6, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 8, vec_[18] + 7, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 3, vec_[18] + 2, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 3, vec_[18] + 2, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 3, vec_[18] + 2, vec_[36] + 7});
	int out_19 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 7, vec_[18] + 6, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 6, vec_[18] + 5, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 8, vec_[18] + 7, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_19{
    19,
    61328,
    61336,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[14] + 0, vec_[18] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[14] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[14] + 2, vec_[18] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[18] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[14] + 2, vec_[18] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_20{
    20,
    61340,
    61344,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[18] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[18] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[18] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_21{
    21,
    61400,
    61404,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[19] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_77{
    77,
    512,
    596,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 22});
	int out_1 = std::max({vec_[0] + 23, vec_[1] + 22, vec_[2] + 21, vec_[4] + 2, vec_[5] + 20, vec_[6] + 21, vec_[7] + 19, vec_[8] + 18, vec_[9] + 17, vec_[10] + 16, vec_[11] + 15, vec_[14] + 14, vec_[15] + 13, vec_[16] + 12, vec_[17] + 11, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[32] + 6, vec_[33] + 5, vec_[34] + 4, vec_[35] + 3, vec_[36] + 23});
	int out_2 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 3, vec_[5] + 21, vec_[6] + 22, vec_[7] + 20, vec_[8] + 19, vec_[9] + 18, vec_[10] + 17, vec_[11] + 16, vec_[14] + 15, vec_[15] + 14, vec_[16] + 13, vec_[17] + 12, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[32] + 7, vec_[33] + 6, vec_[34] + 5, vec_[35] + 4, vec_[36] + 24});
	int out_3 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 22});
	int out_9 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 22});
	int out_11 = std::max({vec_[0] + 23, vec_[1] + 22, vec_[2] + 21, vec_[4] + 2, vec_[5] + 20, vec_[6] + 21, vec_[7] + 19, vec_[8] + 18, vec_[9] + 17, vec_[10] + 16, vec_[11] + 15, vec_[14] + 14, vec_[15] + 13, vec_[16] + 12, vec_[17] + 11, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[32] + 6, vec_[33] + 5, vec_[34] + 4, vec_[35] + 3, vec_[36] + 23});
	int out_37 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 22});
	int out_38 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 3, vec_[5] + 21, vec_[6] + 22, vec_[7] + 20, vec_[8] + 19, vec_[9] + 18, vec_[10] + 17, vec_[11] + 16, vec_[14] + 15, vec_[15] + 14, vec_[16] + 13, vec_[17] + 12, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[32] + 7, vec_[33] + 6, vec_[34] + 5, vec_[35] + 4, vec_[36] + 24});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[11] = out_11;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_79{
    79,
    620,
    628,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_81{
    81,
    2680,
    2692,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[12] + 2, vec_[14] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[12] + 3, vec_[14] + 1, vec_[21] + 0, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[12] + 4, vec_[14] + 2, vec_[21] + 1, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[12] + 3, vec_[14] + 1, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[12] + 4, vec_[14] + 2, vec_[21] + 1, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_82{
    82,
    2696,
    2696,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[21] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[21] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[21] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_83{
    83,
    2700,
    2704,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[21] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_84{
    84,
    2708,
    2712,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[21] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_195{
    195,
    60844,
    60844,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_232{
    232,
    57568,
    57600,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[14] + 0, vec_[15] + 7, vec_[23] + 4, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 0, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[14] + 1, vec_[15] + 8, vec_[23] + 5, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[5] + 5, vec_[6] + 8, vec_[12] + 7, vec_[14] + 2, vec_[15] + 9, vec_[23] + 6, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[5] + 2, vec_[6] + 5, vec_[12] + 4, vec_[15] + 6, vec_[23] + 3, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[23] + 4, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[5] + 2, vec_[6] + 5, vec_[12] + 4, vec_[15] + 6, vec_[23] + 3, vec_[36] + 8});
	int out_23 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[14] + 1, vec_[15] + 8, vec_[23] + 5, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[23] + 4, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[5] + 5, vec_[6] + 8, vec_[12] + 7, vec_[14] + 2, vec_[15] + 9, vec_[23] + 6, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_249{
    249,
    57864,
    57884,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[6] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[6] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[6] + 5, vec_[36] + 8});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[6] + 2, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[36] + 7});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[6] + 3, vec_[36] + 6});
	int out_23 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[6] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_342{
    342,
    35796,
    35804,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[29] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 0, vec_[29] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[19] + 1, vec_[29] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[19] + 1, vec_[29] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_346{
    346,
    35828,
    35868,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[13] + 7, vec_[24] + 6, vec_[29] + 7, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[13] + 8, vec_[24] + 7, vec_[29] + 8, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[13] + 9, vec_[24] + 8, vec_[29] + 9, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[13] + 7, vec_[24] + 6, vec_[29] + 7, vec_[36] + 11});
	int out_13 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[13] + 8, vec_[24] + 7, vec_[29] + 8, vec_[36] + 12});
	int out_18 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[13] + 7, vec_[24] + 6, vec_[29] + 7, vec_[36] + 11});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[24] + 2, vec_[29] + 3, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[13] + 7, vec_[24] + 6, vec_[29] + 7, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[13] + 9, vec_[24] + 8, vec_[29] + 9, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_347{
    347,
    35872,
    35888,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 0, vec_[6] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[23] + 4, vec_[24] + 3, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[23] + 4, vec_[24] + 3, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[23] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[23] + 4, vec_[24] + 3, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_374{
    374,
    57048,
    57076,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[5] + 2, vec_[6] + 5, vec_[12] + 4, vec_[13] + 3, vec_[16] + 6, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 0, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[16] + 7, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[16] + 8, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[16] + 7, vec_[36] + 9});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[16] + 7, vec_[36] + 9});
	int out_13 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 3, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[16] + 7, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[5] + 2, vec_[6] + 5, vec_[12] + 4, vec_[13] + 3, vec_[16] + 6, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[16] + 8, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_375{
    375,
    57080,
    57108,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 0, vec_[6] + 6, vec_[14] + 2, vec_[15] + 1, vec_[22] + 3, vec_[23] + 6, vec_[24] + 5, vec_[25] + 4, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 7, vec_[14] + 3, vec_[15] + 2, vec_[22] + 4, vec_[23] + 7, vec_[24] + 6, vec_[25] + 5, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 2, vec_[6] + 8, vec_[14] + 4, vec_[15] + 3, vec_[22] + 5, vec_[23] + 8, vec_[24] + 7, vec_[25] + 6, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[22] + 2, vec_[23] + 5, vec_[24] + 4, vec_[25] + 3, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 2, vec_[6] + 8, vec_[14] + 4, vec_[15] + 3, vec_[22] + 5, vec_[23] + 8, vec_[24] + 7, vec_[25] + 6, vec_[36] + 10});
	int out_23 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[14] + 2, vec_[15] + 1, vec_[22] + 3, vec_[23] + 6, vec_[24] + 5, vec_[25] + 4, vec_[36] + 8});
	int out_24 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[14] + 1, vec_[22] + 2, vec_[23] + 5, vec_[24] + 4, vec_[25] + 3, vec_[36] + 7});
	int out_25 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 7, vec_[14] + 3, vec_[15] + 2, vec_[22] + 4, vec_[23] + 7, vec_[24] + 6, vec_[25] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[14] + 2, vec_[15] + 1, vec_[22] + 3, vec_[23] + 6, vec_[24] + 5, vec_[25] + 4, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 7, vec_[14] + 3, vec_[15] + 2, vec_[22] + 4, vec_[23] + 7, vec_[24] + 6, vec_[25] + 5, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_380{
    380,
    77548,
    77556,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[15] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[15] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[15] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[15] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_381{
    381,
    77560,
    77576,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[19] + 2, vec_[22] + 3, vec_[23] + 0, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[19] + 3, vec_[22] + 4, vec_[23] + 1, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[19] + 4, vec_[22] + 5, vec_[23] + 2, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[19] + 4, vec_[22] + 5, vec_[23] + 2, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[19] + 1, vec_[22] + 2, vec_[36] + 4});
	int out_15 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[19] + 3, vec_[22] + 4, vec_[23] + 1, vec_[36] + 6});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[19] + 2, vec_[22] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[19] + 2, vec_[22] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[19] + 3, vec_[22] + 4, vec_[23] + 1, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_385{
    385,
    57196,
    57240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 4, vec_[6] + 10, vec_[13] + 4, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 5, vec_[6] + 11, vec_[13] + 5, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 6, vec_[6] + 12, vec_[13] + 6, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 5, vec_[6] + 11, vec_[13] + 5, vec_[36] + 13});
	int out_4 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 6, vec_[6] + 12, vec_[13] + 6, vec_[36] + 14});
	int out_5 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 5, vec_[6] + 11, vec_[13] + 5, vec_[36] + 13});
	int out_12 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_13 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 5, vec_[6] + 11, vec_[13] + 5, vec_[36] + 13});
	int out_14 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 3, vec_[6] + 9, vec_[13] + 3, vec_[36] + 11});
	int out_23 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_24 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_25 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 4, vec_[6] + 10, vec_[13] + 4, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 5, vec_[6] + 11, vec_[13] + 5, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_15{
    15,
    60384,
    60392,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_30{
    30,
    9252,
    9260,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[16] + 0, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[16] + 1, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[16] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_31{
    31,
    9320,
    9336,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[10] + 3, vec_[16] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[10] + 5, vec_[16] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[10] + 6, vec_[16] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[10] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[10] + 6, vec_[16] + 6, vec_[36] + 8});
	int out_9 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[10] + 3, vec_[16] + 3, vec_[36] + 5});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[10] + 4, vec_[16] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[10] + 3, vec_[16] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[10] + 5, vec_[16] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[9] = out_9;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_32{
    32,
    9368,
    9400,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[15] + 7, vec_[18] + 7, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 1, vec_[15] + 8, vec_[18] + 8, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 2, vec_[15] + 9, vec_[18] + 9, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[15] + 9, vec_[18] + 9, vec_[36] + 11});
	int out_4 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 2, vec_[15] + 9, vec_[18] + 9, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[15] + 7, vec_[18] + 7, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 1, vec_[15] + 8, vec_[18] + 8, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_85{
    85,
    2716,
    2732,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_86{
    86,
    2736,
    2736,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_88{
    88,
    2828,
    2856,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 4, vec_[13] + 6, vec_[20] + 1, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 5, vec_[13] + 7, vec_[20] + 2, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 6, vec_[13] + 8, vec_[20] + 3, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 4, vec_[13] + 6, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 6, vec_[13] + 8, vec_[20] + 3, vec_[36] + 10});
	int out_5 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 3, vec_[13] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 5, vec_[13] + 7, vec_[20] + 2, vec_[36] + 9});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 2, vec_[13] + 4, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 4, vec_[13] + 6, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 4, vec_[13] + 6, vec_[20] + 1, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 4, vec_[13] + 6, vec_[20] + 1, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 5, vec_[13] + 7, vec_[20] + 2, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_89{
    89,
    640,
    712,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[3] + 16, vec_[6] + 17, vec_[36] + 19});
	int out_1 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});
	int out_2 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});
	int out_3 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});
	int out_6 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});
	int out_7 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_8 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_9 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_10 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_11 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_15 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[36] + 10});
	int out_16 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[36] + 11});
	int out_17 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[36] + 12});
	int out_18 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[36] + 13});
	int out_19 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[36] + 14});
	int out_20 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[6] + 13, vec_[36] + 15});
	int out_21 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[6] + 14, vec_[36] + 16});
	int out_32 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[3] + 14, vec_[6] + 15, vec_[36] + 17});
	int out_33 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[3] + 15, vec_[6] + 16, vec_[36] + 18});
	int out_34 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[3] + 16, vec_[6] + 17, vec_[36] + 19});
	int out_35 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});
	int out_37 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[3] + 16, vec_[6] + 17, vec_[36] + 19});
	int out_38 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[3] + 17, vec_[6] + 18, vec_[36] + 20});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[7] = out_7;
	vec_[8] = out_8;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[11] = out_11;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_171{
    171,
    59260,
    59272,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 0, vec_[13] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[13] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_13 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[13] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_172{
    172,
    59276,
    59292,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[19] + 3, vec_[23] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 2, vec_[19] + 4, vec_[23] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 3, vec_[19] + 5, vec_[23] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 3, vec_[19] + 5, vec_[23] + 4, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 2, vec_[19] + 4, vec_[23] + 3, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[19] + 3, vec_[23] + 2, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[19] + 2, vec_[23] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[19] + 3, vec_[23] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 2, vec_[19] + 4, vec_[23] + 3, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_173{
    173,
    60008,
    60016,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[14] + 2, vec_[15] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[15] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[15] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[15] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_178{
    178,
    60080,
    60080,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_180{
    180,
    59296,
    59296,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_183{
    183,
    59152,
    59168,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_22 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_184{
    184,
    59180,
    59180,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[17] + 0, vec_[27] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[27] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[27] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_185{
    185,
    59532,
    59540,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[28] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[27] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[27] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[27] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[27] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[27] + 2, vec_[28] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_196{
    196,
    59544,
    59572,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[27] + 4, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[12] + 7, vec_[27] + 5, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[12] + 8, vec_[27] + 6, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[12] + 8, vec_[27] + 6, vec_[36] + 10});
	int out_4 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[12] + 8, vec_[27] + 6, vec_[36] + 10});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[27] + 2, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[27] + 3, vec_[36] + 7});
	int out_22 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[27] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[27] + 4, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[12] + 7, vec_[27] + 5, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_197{
    197,
    59212,
    59220,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[22] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[22] + 2, vec_[25] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[22] + 3, vec_[25] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[22] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[22] + 2, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[22] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[22] + 3, vec_[25] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_198{
    198,
    59224,
    59244,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[22] + 3, vec_[23] + 2, vec_[26] + 4, vec_[28] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 0, vec_[22] + 4, vec_[23] + 3, vec_[26] + 5, vec_[28] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[22] + 5, vec_[23] + 4, vec_[26] + 6, vec_[28] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[22] + 5, vec_[23] + 4, vec_[26] + 6, vec_[28] + 5, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[22] + 3, vec_[23] + 2, vec_[26] + 4, vec_[28] + 3, vec_[36] + 6});
	int out_23 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[22] + 2, vec_[23] + 1, vec_[26] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_28 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[22] + 1, vec_[26] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[22] + 3, vec_[23] + 2, vec_[26] + 4, vec_[28] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[22] + 5, vec_[23] + 4, vec_[26] + 6, vec_[28] + 5, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_201{
    201,
    60192,
    60196,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[14] + 1, vec_[17] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[17] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[17] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_283{
    283,
    30268,
    30272,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[23] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[23] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[23] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_284{
    284,
    30276,
    30288,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[26] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[22] + 0, vec_[26] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[22] + 1, vec_[26] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[26] + 1, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[22] + 1, vec_[26] + 2, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_285{
    285,
    30292,
    30292,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[27] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[27] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_286{
    286,
    57288,
    57300,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[6] + 2, vec_[22] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 0, vec_[5] + 2, vec_[6] + 3, vec_[15] + 0, vec_[22] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[5] + 3, vec_[6] + 4, vec_[15] + 1, vec_[22] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 3, vec_[6] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[5] + 3, vec_[6] + 4, vec_[15] + 1, vec_[22] + 2, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_287{
    287,
    57304,
    57320,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[12] + 3, vec_[13] + 2, vec_[14] + 0, vec_[15] + 1, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 0, vec_[6] + 4, vec_[12] + 4, vec_[13] + 3, vec_[14] + 1, vec_[15] + 2, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[12] + 5, vec_[13] + 4, vec_[14] + 2, vec_[15] + 3, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[12] + 3, vec_[13] + 2, vec_[15] + 1, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[12] + 4, vec_[13] + 3, vec_[14] + 1, vec_[15] + 2, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[12] + 3, vec_[13] + 2, vec_[15] + 1, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[12] + 5, vec_[13] + 4, vec_[14] + 2, vec_[15] + 3, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_288{
    288,
    57324,
    57328,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_289{
    289,
    57332,
    57336,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_290{
    290,
    57372,
    57380,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_294{
    294,
    57384,
    57392,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[12] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_22 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[14] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_295{
    295,
    57396,
    57404,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[19] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[19] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_296{
    296,
    30868,
    30872,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[15] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_297{
    297,
    31316,
    31344,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[5] + 0, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 3, vec_[12] + 2, vec_[14] + 1, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 3, vec_[14] + 2, vec_[15] + 1, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[14] + 3, vec_[15] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_298{
    298,
    2440,
    2448,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_302{
    302,
    31348,
    31352,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_304{
    304,
    31356,
    31368,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_305{
    305,
    57408,
    57408,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_307{
    307,
    57424,
    57428,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_308{
    308,
    57452,
    57456,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_309{
    309,
    57472,
    57472,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_310{
    310,
    30132,
    30132,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_311{
    311,
    57476,
    57480,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[12] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_312{
    312,
    30136,
    30136,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_313{
    313,
    57484,
    57508,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[22] + 2, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[22] + 4, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[22] + 4, vec_[36] + 9});
	int out_6 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[22] + 1, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[22] + 3, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[22] + 2, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[22] + 3, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_314{
    314,
    30296,
    30308,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 0, vec_[13] + 1, vec_[14] + 2, vec_[24] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 1, vec_[13] + 2, vec_[14] + 3, vec_[22] + 0, vec_[24] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[12] + 2, vec_[13] + 3, vec_[14] + 4, vec_[22] + 1, vec_[24] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[24] + 1, vec_[36] + 3});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 1, vec_[13] + 2, vec_[14] + 3, vec_[24] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 1, vec_[14] + 2, vec_[24] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 1, vec_[14] + 2, vec_[24] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[12] + 2, vec_[13] + 3, vec_[14] + 4, vec_[22] + 1, vec_[24] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_52{
    52,
    2256,
    2264,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_53{
    53,
    2268,
    2284,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 2, vec_[5] + 1, vec_[15] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 3, vec_[5] + 2, vec_[15] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 2, vec_[15] + 3, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 3, vec_[5] + 2, vec_[15] + 4, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 2, vec_[15] + 3, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 2, vec_[5] + 1, vec_[15] + 3, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_62{
    62,
    35576,
    35576,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_74{
    74,
    60408,
    60436,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[5] + 0, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 3, vec_[12] + 2, vec_[14] + 1, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 3, vec_[14] + 2, vec_[15] + 1, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[14] + 3, vec_[15] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_75{
    75,
    85900,
    85924,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 1, vec_[6] + 2, vec_[14] + 0, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 0, vec_[5] + 2, vec_[6] + 3, vec_[14] + 1, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 1, vec_[5] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 2, vec_[6] + 3, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 1, vec_[36] + 6});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 2, vec_[6] + 3, vec_[14] + 1, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 1, vec_[6] + 2, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 1, vec_[5] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_92{
    92,
    2740,
    2740,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[18] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[18] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[18] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_93{
    93,
    2744,
    2748,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[19] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_94{
    94,
    2756,
    2764,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[20] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[20] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[20] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[20] + 2, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[20] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[20] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_95{
    95,
    85968,
    85976,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[17] + 1, vec_[19] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 0, vec_[17] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[14] + 1, vec_[17] + 3, vec_[19] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[17] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[17] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[14] + 1, vec_[17] + 3, vec_[19] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_96{
    96,
    85980,
    85996,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[17] + 2, vec_[18] + 1, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[14] + 3, vec_[17] + 3, vec_[18] + 2, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[14] + 4, vec_[17] + 4, vec_[18] + 3, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[17] + 2, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[14] + 4, vec_[17] + 4, vec_[18] + 3, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[14] + 3, vec_[17] + 3, vec_[18] + 2, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[17] + 2, vec_[18] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[17] + 2, vec_[18] + 1, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[14] + 3, vec_[17] + 3, vec_[18] + 2, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_97{
    97,
    60440,
    60444,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_98{
    98,
    60448,
    60460,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_114{
    114,
    35580,
    35580,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_135{
    135,
    46340,
    46348,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[30] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[18] + 0, vec_[30] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[18] + 1, vec_[30] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[30] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[18] + 1, vec_[30] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_139{
    139,
    46372,
    46412,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[22] + 6, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[22] + 7, vec_[24] + 8, vec_[30] + 8, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[22] + 8, vec_[24] + 9, vec_[30] + 9, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[22] + 6, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});
	int out_17 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[22] + 6, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[22] + 2, vec_[24] + 3, vec_[30] + 3, vec_[36] + 7});
	int out_24 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[22] + 7, vec_[24] + 8, vec_[30] + 8, vec_[36] + 12});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[22] + 6, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[22] + 8, vec_[24] + 9, vec_[30] + 9, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_140{
    140,
    46416,
    46432,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[22] + 1, vec_[25] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 0, vec_[6] + 4, vec_[22] + 2, vec_[25] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[22] + 3, vec_[25] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[22] + 3, vec_[25] + 4, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[25] + 2, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[22] + 1, vec_[25] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[22] + 1, vec_[25] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 1, vec_[6] + 5, vec_[22] + 3, vec_[25] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_163{
    163,
    56972,
    56992,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[5] + 1, vec_[6] + 3, vec_[12] + 2, vec_[16] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 0, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[16] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[16] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[16] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[16] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[5] + 1, vec_[6] + 3, vec_[12] + 2, vec_[16] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[16] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_164{
    164,
    57020,
    57020,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_165{
    165,
    58388,
    58392,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[16] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[16] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_166{
    166,
    58396,
    58436,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 4, vec_[6] + 8, vec_[12] + 7, vec_[14] + 1, vec_[15] + 9, vec_[16] + 2, vec_[24] + 6, vec_[26] + 5, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 0, vec_[5] + 5, vec_[6] + 9, vec_[12] + 8, vec_[14] + 2, vec_[15] + 10, vec_[16] + 3, vec_[24] + 7, vec_[26] + 6, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 1, vec_[5] + 6, vec_[6] + 10, vec_[12] + 9, vec_[14] + 3, vec_[15] + 11, vec_[16] + 4, vec_[24] + 8, vec_[26] + 7, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 2, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[24] + 4, vec_[26] + 3, vec_[36] + 9});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[5] + 5, vec_[6] + 9, vec_[12] + 8, vec_[14] + 2, vec_[15] + 10, vec_[16] + 3, vec_[24] + 7, vec_[26] + 6, vec_[36] + 12});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[5] + 2, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[24] + 4, vec_[26] + 3, vec_[36] + 9});
	int out_24 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 4, vec_[6] + 8, vec_[12] + 7, vec_[14] + 1, vec_[15] + 9, vec_[16] + 2, vec_[24] + 6, vec_[26] + 5, vec_[36] + 11});
	int out_26 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 3, vec_[6] + 7, vec_[12] + 6, vec_[15] + 8, vec_[16] + 1, vec_[24] + 5, vec_[26] + 4, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 4, vec_[6] + 8, vec_[12] + 7, vec_[14] + 1, vec_[15] + 9, vec_[16] + 2, vec_[24] + 6, vec_[26] + 5, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 1, vec_[5] + 6, vec_[6] + 10, vec_[12] + 9, vec_[14] + 3, vec_[15] + 11, vec_[16] + 4, vec_[24] + 8, vec_[26] + 7, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_167{
    167,
    58440,
    58444,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[15] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_168{
    168,
    58448,
    58472,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[17] + 1, vec_[22] + 4, vec_[23] + 3, vec_[25] + 2, vec_[26] + 0, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 0, vec_[6] + 6, vec_[13] + 6, vec_[17] + 2, vec_[22] + 5, vec_[23] + 4, vec_[25] + 3, vec_[26] + 1, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 7, vec_[13] + 7, vec_[17] + 3, vec_[22] + 6, vec_[23] + 5, vec_[25] + 4, vec_[26] + 2, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[13] + 7, vec_[17] + 3, vec_[22] + 6, vec_[23] + 5, vec_[25] + 4, vec_[26] + 2, vec_[36] + 9});
	int out_13 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[13] + 7, vec_[17] + 3, vec_[22] + 6, vec_[23] + 5, vec_[25] + 4, vec_[26] + 2, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[17] + 1, vec_[22] + 4, vec_[23] + 3, vec_[25] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[17] + 1, vec_[22] + 4, vec_[23] + 3, vec_[25] + 2, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 7, vec_[13] + 7, vec_[17] + 3, vec_[22] + 6, vec_[23] + 5, vec_[25] + 4, vec_[26] + 2, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_169{
    169,
    58640,
    58652,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[17] + 0, vec_[27] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 0, vec_[6] + 3, vec_[17] + 1, vec_[27] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[6] + 4, vec_[17] + 2, vec_[27] + 4, vec_[28] + 3, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[27] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[17] + 1, vec_[27] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[27] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[6] + 4, vec_[17] + 2, vec_[27] + 4, vec_[28] + 3, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_170{
    170,
    59112,
    59128,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_23 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[36] + 6});
	int out_28 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_174{
    174,
    60068,
    60076,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[16] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[16] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[16] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_175{
    175,
    60092,
    60132,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 0, vec_[15] + 9, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 1, vec_[15] + 10, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 2, vec_[15] + 11, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 2, vec_[15] + 11, vec_[36] + 13});
	int out_10 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 1, vec_[15] + 10, vec_[36] + 12});
	int out_15 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 7, vec_[36] + 9});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 4, vec_[36] + 6});
	int out_20 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[15] + 9, vec_[36] + 11});
	int out_21 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[15] + 8, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[15] + 9, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 1, vec_[15] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[10] = out_10;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_179{
    179,
    60084,
    60088,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[5] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[5] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_181{
    181,
    59636,
    59644,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[23] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[23] + 3, vec_[36] + 5});
	int out_25 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_182{
    182,
    59140,
    59144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[23] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 0, vec_[23] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[19] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[19] + 1, vec_[23] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_189{
    189,
    60684,
    60692,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[14] + 2, vec_[15] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[15] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[15] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_190{
    190,
    60696,
    60760,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[14] + 15, vec_[15] + 14, vec_[16] + 18, vec_[36] + 20});
	int out_1 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[14] + 16, vec_[15] + 15, vec_[16] + 19, vec_[36] + 21});
	int out_2 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[14] + 17, vec_[15] + 16, vec_[16] + 20, vec_[36] + 22});
	int out_3 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[14] + 17, vec_[15] + 16, vec_[16] + 20, vec_[36] + 22});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 1, vec_[16] + 4, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[14] + 5, vec_[15] + 4, vec_[16] + 8, vec_[36] + 10});
	int out_19 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[14] + 6, vec_[15] + 5, vec_[16] + 9, vec_[36] + 11});
	int out_20 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[14] + 15, vec_[15] + 14, vec_[16] + 18, vec_[36] + 20});
	int out_21 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[16] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[14] + 14, vec_[15] + 13, vec_[16] + 17, vec_[36] + 19});
	int out_38 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[14] + 17, vec_[15] + 16, vec_[16] + 20, vec_[36] + 22});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_191{
    191,
    60764,
    60776,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 0, vec_[15] + 2, vec_[16] + 3, vec_[21] + 2, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[15] + 3, vec_[16] + 4, vec_[21] + 3, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[15] + 2, vec_[16] + 3, vec_[21] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[15] + 3, vec_[16] + 4, vec_[21] + 3, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_192{
    192,
    60780,
    60816,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[15] + 4, vec_[17] + 5, vec_[18] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[15] + 5, vec_[17] + 6, vec_[18] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[15] + 6, vec_[17] + 7, vec_[18] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[15] + 6, vec_[17] + 7, vec_[18] + 10, vec_[36] + 12});
	int out_17 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 3, vec_[17] + 4, vec_[18] + 7, vec_[36] + 9});
	int out_18 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[15] + 4, vec_[17] + 5, vec_[18] + 8, vec_[36] + 10});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[17] + 1, vec_[18] + 4, vec_[36] + 6});
	int out_20 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_21 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[15] + 3, vec_[17] + 4, vec_[18] + 7, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[15] + 4, vec_[17] + 5, vec_[18] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[15] + 6, vec_[17] + 7, vec_[18] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_193{
    193,
    60820,
    60828,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 0, vec_[16] + 1, vec_[20] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[20] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[15] + 2, vec_[16] + 3, vec_[20] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[15] + 2, vec_[16] + 3, vec_[20] + 2, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[20] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 1, vec_[16] + 2, vec_[20] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_194{
    194,
    60644,
    60648,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[16] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[16] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_200{
    200,
    60176,
    60180,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[19] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_202{
    202,
    60184,
    60188,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[19] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_203{
    203,
    59172,
    59176,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[17] + 0, vec_[22] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[22] + 1, vec_[27] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[17] + 2, vec_[22] + 2, vec_[27] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[17] + 2, vec_[22] + 2, vec_[27] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_208{
    208,
    59248,
    59256,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_28 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_209{
    209,
    58980,
    59020,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[36] + 11});
	int out_4 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 3, vec_[6] + 11, vec_[36] + 13});
	int out_6 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[36] + 12});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[36] + 11});
	int out_22 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_23 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_24 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[36] + 10});
	int out_25 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_26 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 1, vec_[6] + 9, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 2, vec_[6] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_210{
    210,
    57024,
    57044,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_220{
    220,
    60056,
    60060,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[14] + 1, vec_[17] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[17] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[17] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_221{
    221,
    60036,
    60044,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_233{
    233,
    57888,
    57896,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[15] + 0, vec_[22] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 0, vec_[6] + 3, vec_[15] + 2, vec_[22] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[6] + 4, vec_[15] + 3, vec_[22] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[15] + 2, vec_[22] + 3, vec_[36] + 5});
	int out_22 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[15] + 2, vec_[22] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[6] + 4, vec_[15] + 3, vec_[22] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_234{
    234,
    57900,
    57924,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 0, vec_[6] + 5, vec_[13] + 5, vec_[15] + 4, vec_[18] + 3, vec_[22] + 2, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[6] + 6, vec_[13] + 6, vec_[15] + 5, vec_[18] + 4, vec_[22] + 3, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 2, vec_[6] + 7, vec_[13] + 7, vec_[15] + 6, vec_[18] + 5, vec_[22] + 4, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[15] + 4, vec_[18] + 3, vec_[22] + 2, vec_[36] + 7});
	int out_13 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[15] + 4, vec_[18] + 3, vec_[22] + 2, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 3, vec_[15] + 2, vec_[18] + 1, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[6] + 6, vec_[13] + 6, vec_[15] + 5, vec_[18] + 4, vec_[22] + 3, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 5, vec_[15] + 4, vec_[18] + 3, vec_[22] + 2, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 2, vec_[6] + 7, vec_[13] + 7, vec_[15] + 6, vec_[18] + 5, vec_[22] + 4, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_235{
    235,
    57932,
    57936,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[13] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[13] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[13] + 1, vec_[19] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_248{
    248,
    58024,
    58032,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_22 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_291{
    291,
    57604,
    57624,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[18] + 1, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 0, vec_[15] + 3, vec_[18] + 2, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[15] + 4, vec_[18] + 3, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[15] + 4, vec_[18] + 3, vec_[36] + 8});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[18] + 1, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 2, vec_[18] + 1, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[15] + 4, vec_[18] + 3, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_292{
    292,
    58012,
    58016,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[15] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_293{
    293,
    58020,
    58020,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_316{
    316,
    2452,
    2456,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[5] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[5] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_317{
    317,
    57412,
    57420,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[12] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_335{
    335,
    30876,
    30896,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 0, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[15] + 0, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[15] + 1, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[15] + 1, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_336{
    336,
    30900,
    30924,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[13] + 4, vec_[14] + 1, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[6] + 5, vec_[13] + 5, vec_[14] + 2, vec_[15] + 0, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[13] + 6, vec_[14] + 3, vec_[15] + 1, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[13] + 6, vec_[14] + 3, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[13] + 4, vec_[14] + 1, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[13] + 6, vec_[14] + 3, vec_[15] + 1, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_338{
    338,
    35584,
    35616,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 6, vec_[6] + 7, vec_[12] + 5, vec_[14] + 0, vec_[15] + 4, vec_[16] + 2, vec_[17] + 1, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[5] + 7, vec_[6] + 8, vec_[12] + 6, vec_[14] + 1, vec_[15] + 5, vec_[16] + 3, vec_[17] + 2, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[14] + 2, vec_[15] + 6, vec_[16] + 4, vec_[17] + 3, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[14] + 2, vec_[15] + 6, vec_[16] + 4, vec_[17] + 3, vec_[36] + 11});
	int out_5 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[14] + 2, vec_[15] + 6, vec_[16] + 4, vec_[17] + 3, vec_[36] + 11});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 4, vec_[6] + 5, vec_[12] + 3, vec_[15] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 6, vec_[6] + 7, vec_[12] + 5, vec_[15] + 4, vec_[16] + 2, vec_[17] + 1, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[5] + 7, vec_[6] + 8, vec_[12] + 6, vec_[14] + 1, vec_[15] + 5, vec_[16] + 3, vec_[17] + 2, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_339{
    339,
    35620,
    35632,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 0, vec_[14] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 1, vec_[14] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 1, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_340{
    340,
    35636,
    35668,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 6, vec_[12] + 7, vec_[14] + 1, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[12] + 8, vec_[14] + 2, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[12] + 9, vec_[14] + 3, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[12] + 9, vec_[14] + 3, vec_[36] + 11});
	int out_10 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[12] + 9, vec_[14] + 3, vec_[36] + 11});
	int out_18 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 5, vec_[12] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 6, vec_[12] + 7, vec_[14] + 1, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[12] + 9, vec_[14] + 3, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_341{
    341,
    35684,
    35792,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[3] + 25, vec_[4] + 11, vec_[6] + 26, vec_[10] + 15, vec_[13] + 26, vec_[22] + 25, vec_[23] + 24, vec_[24] + 23, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 17, vec_[31] + 16, vec_[36] + 28});
	int out_1 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[3] + 26, vec_[4] + 12, vec_[6] + 27, vec_[10] + 16, vec_[13] + 27, vec_[22] + 26, vec_[23] + 25, vec_[24] + 24, vec_[25] + 23, vec_[26] + 22, vec_[27] + 21, vec_[28] + 20, vec_[29] + 19, vec_[30] + 18, vec_[31] + 17, vec_[36] + 29});
	int out_2 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[3] + 27, vec_[4] + 13, vec_[6] + 28, vec_[10] + 17, vec_[13] + 28, vec_[22] + 27, vec_[23] + 26, vec_[24] + 25, vec_[25] + 24, vec_[26] + 23, vec_[27] + 22, vec_[28] + 21, vec_[29] + 20, vec_[30] + 19, vec_[31] + 18, vec_[36] + 30});
	int out_3 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[3] + 25, vec_[4] + 11, vec_[6] + 26, vec_[10] + 15, vec_[13] + 26, vec_[22] + 25, vec_[23] + 24, vec_[24] + 23, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 17, vec_[31] + 16, vec_[36] + 28});
	int out_12 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[3] + 25, vec_[4] + 11, vec_[6] + 26, vec_[10] + 15, vec_[13] + 26, vec_[22] + 25, vec_[23] + 24, vec_[24] + 23, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 17, vec_[31] + 16, vec_[36] + 28});
	int out_13 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[3] + 26, vec_[4] + 12, vec_[6] + 27, vec_[10] + 16, vec_[13] + 27, vec_[22] + 26, vec_[23] + 25, vec_[24] + 24, vec_[25] + 23, vec_[26] + 22, vec_[27] + 21, vec_[28] + 20, vec_[29] + 19, vec_[30] + 18, vec_[31] + 17, vec_[36] + 29});
	int out_19 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[6] + 14, vec_[10] + 3, vec_[13] + 14, vec_[22] + 13, vec_[23] + 12, vec_[24] + 11, vec_[25] + 10, vec_[26] + 9, vec_[27] + 8, vec_[28] + 7, vec_[29] + 6, vec_[30] + 5, vec_[31] + 4, vec_[36] + 16});
	int out_22 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[6] + 14, vec_[10] + 3, vec_[13] + 14, vec_[22] + 13, vec_[23] + 12, vec_[24] + 11, vec_[25] + 10, vec_[26] + 9, vec_[27] + 8, vec_[28] + 7, vec_[29] + 6, vec_[30] + 5, vec_[31] + 4, vec_[36] + 16});
	int out_25 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[3] + 25, vec_[4] + 11, vec_[6] + 26, vec_[10] + 15, vec_[13] + 26, vec_[22] + 25, vec_[23] + 24, vec_[24] + 23, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 17, vec_[31] + 16, vec_[36] + 28});
	int out_29 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[10] + 1, vec_[13] + 12, vec_[22] + 11, vec_[23] + 10, vec_[24] + 9, vec_[25] + 8, vec_[26] + 7, vec_[27] + 6, vec_[28] + 5, vec_[29] + 4, vec_[30] + 3, vec_[31] + 2, vec_[36] + 14});
	int out_37 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[3] + 25, vec_[4] + 11, vec_[6] + 26, vec_[10] + 15, vec_[13] + 26, vec_[22] + 25, vec_[23] + 24, vec_[24] + 23, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 17, vec_[31] + 16, vec_[36] + 28});
	int out_38 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[3] + 27, vec_[4] + 13, vec_[6] + 28, vec_[10] + 17, vec_[13] + 28, vec_[22] + 27, vec_[23] + 26, vec_[24] + 25, vec_[25] + 24, vec_[26] + 23, vec_[27] + 22, vec_[28] + 21, vec_[29] + 20, vec_[30] + 19, vec_[31] + 18, vec_[36] + 30});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_345{
    345,
    36780,
    36784,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[23] + 0, vec_[29] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[29] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[29] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_348{
    348,
    35892,
    35928,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[23] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[23] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 9, vec_[6] + 9, vec_[23] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 2, vec_[23] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[23] + 9, vec_[36] + 11});
	int out_23 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[23] + 8, vec_[36] + 10});
	int out_24 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 3, vec_[23] + 4, vec_[36] + 6});
	int out_26 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 5, vec_[23] + 6, vec_[36] + 8});
	int out_28 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 4, vec_[23] + 5, vec_[36] + 7});
	int out_30 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 6, vec_[23] + 7, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[23] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 9, vec_[6] + 9, vec_[23] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[26] = out_26;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_349{
    349,
    35932,
    35956,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[19] + 4, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[19] + 6, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[19] + 7, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[19] + 4, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[19] + 7, vec_[36] + 11});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[19] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[19] + 3, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[19] + 6, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_350{
    350,
    36520,
    36524,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_351{
    351,
    37492,
    37512,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 0, vec_[6] + 5, vec_[26] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[6] + 6, vec_[26] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[26] + 5, vec_[36] + 8});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[26] + 1, vec_[36] + 4});
	int out_30 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 1, vec_[6] + 6, vec_[26] + 5, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_352{
    352,
    37516,
    37520,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_353{
    353,
    40420,
    40424,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_354{
    354,
    40428,
    40436,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[30] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[30] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[30] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[30] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[30] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_355{
    355,
    36560,
    36560,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_356{
    356,
    36564,
    36568,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[24] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[24] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[24] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_357{
    357,
    36588,
    36588,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[31] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[31] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[31] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_358{
    358,
    36596,
    36600,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[30] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[30] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[30] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_359{
    359,
    36608,
    36636,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 3, vec_[6] + 5, vec_[24] + 0, vec_[30] + 6, vec_[35] + 4, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[6] + 6, vec_[24] + 1, vec_[30] + 7, vec_[35] + 5, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 5, vec_[6] + 7, vec_[24] + 2, vec_[30] + 8, vec_[35] + 6, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[6] + 6, vec_[30] + 7, vec_[35] + 5, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[6] + 6, vec_[30] + 7, vec_[35] + 5, vec_[36] + 9});
	int out_26 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[30] + 3, vec_[35] + 1, vec_[36] + 5});
	int out_29 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 2, vec_[6] + 4, vec_[30] + 5, vec_[35] + 3, vec_[36] + 7});
	int out_30 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 4, vec_[6] + 6, vec_[24] + 1, vec_[30] + 7, vec_[35] + 5, vec_[36] + 9});
	int out_31 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[6] + 3, vec_[30] + 4, vec_[35] + 2, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 3, vec_[6] + 5, vec_[30] + 6, vec_[35] + 4, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 5, vec_[6] + 7, vec_[24] + 2, vec_[30] + 8, vec_[35] + 6, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_360{
    360,
    36640,
    36660,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[6] + 3, vec_[31] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 4, vec_[6] + 4, vec_[19] + 0, vec_[31] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[6] + 5, vec_[19] + 1, vec_[31] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[6] + 5, vec_[31] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[6] + 3, vec_[31] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[6] + 5, vec_[19] + 1, vec_[31] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_361{
    361,
    36056,
    36060,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_362{
    362,
    36068,
    36076,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[6] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[6] + 2, vec_[26] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[26] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[26] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[6] + 2, vec_[26] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_363{
    363,
    36080,
    36084,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[28] + 0, vec_[30] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[28] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[28] + 2, vec_[30] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[28] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[28] + 2, vec_[30] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_364{
    364,
    36088,
    36092,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_365{
    365,
    36144,
    36144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[9] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[9] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[9] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_366{
    366,
    36196,
    36200,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[35] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[35] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[35] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_367{
    367,
    36204,
    36208,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[24] + 0, vec_[31] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[24] + 1, vec_[31] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[24] + 2, vec_[31] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[24] + 1, vec_[31] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[24] + 2, vec_[31] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_368{
    368,
    36212,
    36216,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_369{
    369,
    36220,
    36252,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 0, vec_[6] + 7, vec_[13] + 5, vec_[16] + 6, vec_[29] + 5, vec_[31] + 6, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[6] + 8, vec_[13] + 6, vec_[16] + 7, vec_[29] + 6, vec_[31] + 7, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 2, vec_[6] + 9, vec_[13] + 7, vec_[16] + 8, vec_[29] + 7, vec_[31] + 8, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[13] + 6, vec_[16] + 7, vec_[29] + 6, vec_[31] + 7, vec_[36] + 10});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[16] + 1, vec_[31] + 1, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[6] + 8, vec_[13] + 6, vec_[16] + 7, vec_[29] + 6, vec_[31] + 7, vec_[36] + 10});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[16] + 3, vec_[29] + 2, vec_[31] + 3, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[13] + 5, vec_[16] + 6, vec_[29] + 5, vec_[31] + 6, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 2, vec_[6] + 9, vec_[13] + 7, vec_[16] + 8, vec_[29] + 7, vec_[31] + 8, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_370{
    370,
    36256,
    36264,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[26] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[13] + 2, vec_[26] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[13] + 3, vec_[26] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[36] + 3});
	int out_33 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 2, vec_[26] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[13] + 3, vec_[26] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[33] = out_33;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_371{
    371,
    36276,
    36280,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[28] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[28] + 1, vec_[30] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[28] + 2, vec_[30] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[28] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[28] + 2, vec_[30] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_372{
    372,
    36284,
    36300,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[30] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 0, vec_[6] + 4, vec_[16] + 0, vec_[30] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 5, vec_[16] + 1, vec_[30] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 5, vec_[30] + 6, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[30] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[30] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 5, vec_[16] + 1, vec_[30] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_373{
    373,
    39136,
    39148,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[25] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[25] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[25] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[25] + 2, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[25] + 1, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[25] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_386{
    386,
    39152,
    39152,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_387{
    387,
    36304,
    36312,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_388{
    388,
    36328,
    36340,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 2, vec_[23] + 1, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 0, vec_[22] + 4, vec_[23] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[22] + 5, vec_[23] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[22] + 4, vec_[23] + 3, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[22] + 4, vec_[23] + 3, vec_[36] + 6});
	int out_29 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 2, vec_[23] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 2, vec_[23] + 1, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[22] + 5, vec_[23] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_389{
    389,
    35820,
    35824,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[23] + 0, vec_[29] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[29] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[29] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_390{
    390,
    36344,
    36348,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_391{
    391,
    36352,
    36352,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_392{
    392,
    43476,
    43488,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_393{
    393,
    43492,
    43492,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_394{
    394,
    36356,
    36412,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[6] + 13, vec_[36] + 15});
	int out_1 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[4] + 0, vec_[6] + 14, vec_[36] + 16});
	int out_2 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[3] + 14, vec_[4] + 1, vec_[6] + 15, vec_[36] + 17});
	int out_3 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[3] + 14, vec_[6] + 15, vec_[36] + 17});
	int out_13 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_22 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_23 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_24 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_25 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[36] + 11});
	int out_26 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[36] + 12});
	int out_27 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[36] + 13});
	int out_28 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[36] + 14});
	int out_29 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[6] + 13, vec_[36] + 15});
	int out_30 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[3] + 13, vec_[6] + 14, vec_[36] + 16});
	int out_31 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[3] + 14, vec_[6] + 15, vec_[36] + 17});
	int out_37 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[6] + 13, vec_[36] + 15});
	int out_38 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[3] + 14, vec_[4] + 1, vec_[6] + 15, vec_[36] + 17});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_395{
    395,
    36420,
    36436,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_400{
    400,
    77768,
    77772,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[17] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[17] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[17] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[17] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_401{
    401,
    77564,
    77576,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 1, vec_[19] + 2, vec_[23] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[13] + 2, vec_[19] + 3, vec_[23] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[13] + 3, vec_[19] + 4, vec_[23] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[13] + 3, vec_[19] + 4, vec_[23] + 2, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[13] + 2, vec_[19] + 3, vec_[23] + 1, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[13] + 2, vec_[19] + 3, vec_[23] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_411{
    411,
    2676,
    2676,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_0{
    0,
    256,
    428,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 44, vec_[1] + 43, vec_[2] + 42, vec_[4] + 42, vec_[36] + 44});
	int out_1 = std::max({vec_[0] + 45, vec_[1] + 44, vec_[2] + 43, vec_[4] + 43, vec_[36] + 45});
	int out_2 = std::max({vec_[0] + 46, vec_[1] + 45, vec_[2] + 44, vec_[4] + 44, vec_[36] + 46});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 39, vec_[1] + 38, vec_[2] + 37, vec_[4] + 37, vec_[36] + 39});
	int out_6 = std::max({vec_[0] + 41, vec_[1] + 40, vec_[2] + 39, vec_[4] + 39, vec_[36] + 41});
	int out_7 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_8 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[36] + 6});
	int out_9 = std::max({vec_[0] + 38, vec_[1] + 37, vec_[2] + 36, vec_[4] + 36, vec_[36] + 38});
	int out_10 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[36] + 8});
	int out_11 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[36] + 9});
	int out_12 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 8, vec_[36] + 10});
	int out_13 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 9, vec_[36] + 11});
	int out_14 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 10, vec_[36] + 12});
	int out_15 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 11, vec_[36] + 13});
	int out_16 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[4] + 12, vec_[36] + 14});
	int out_17 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[4] + 13, vec_[36] + 15});
	int out_18 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[4] + 14, vec_[36] + 16});
	int out_19 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[4] + 15, vec_[36] + 17});
	int out_20 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[4] + 16, vec_[36] + 18});
	int out_21 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[4] + 17, vec_[36] + 19});
	int out_22 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[4] + 18, vec_[36] + 20});
	int out_23 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[4] + 19, vec_[36] + 21});
	int out_24 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 20, vec_[36] + 22});
	int out_25 = std::max({vec_[0] + 23, vec_[1] + 22, vec_[2] + 21, vec_[4] + 21, vec_[36] + 23});
	int out_26 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 22, vec_[36] + 24});
	int out_27 = std::max({vec_[0] + 25, vec_[1] + 24, vec_[2] + 23, vec_[4] + 23, vec_[36] + 25});
	int out_28 = std::max({vec_[0] + 26, vec_[1] + 25, vec_[2] + 24, vec_[4] + 24, vec_[36] + 26});
	int out_29 = std::max({vec_[0] + 27, vec_[1] + 26, vec_[2] + 25, vec_[4] + 25, vec_[36] + 27});
	int out_30 = std::max({vec_[0] + 43, vec_[1] + 42, vec_[2] + 41, vec_[4] + 41, vec_[36] + 43});
	int out_31 = std::max({vec_[0] + 45, vec_[1] + 44, vec_[2] + 43, vec_[4] + 43, vec_[36] + 45});
	int out_32 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[4] + 28, vec_[36] + 30});
	int out_33 = std::max({vec_[0] + 31, vec_[1] + 30, vec_[2] + 29, vec_[4] + 29, vec_[36] + 31});
	int out_34 = std::max({vec_[0] + 32, vec_[1] + 31, vec_[2] + 30, vec_[4] + 30, vec_[36] + 32});
	int out_35 = std::max({vec_[0] + 33, vec_[1] + 32, vec_[2] + 31, vec_[4] + 31, vec_[36] + 33});
	int out_37 = std::max({vec_[0] + 44, vec_[1] + 43, vec_[2] + 42, vec_[4] + 42, vec_[36] + 44});
	int out_38 = std::max({vec_[0] + 46, vec_[1] + 45, vec_[2] + 44, vec_[4] + 44, vec_[36] + 46});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[7] = out_7;
	vec_[8] = out_8;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[11] = out_11;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_1{
    1,
    444,
    444,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_2{
    2,
    31948,
    31988,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 2, vec_[6] + 9, vec_[12] + 8, vec_[13] + 1, vec_[22] + 7, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 3, vec_[6] + 10, vec_[12] + 9, vec_[13] + 2, vec_[22] + 8, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 4, vec_[6] + 11, vec_[12] + 10, vec_[13] + 3, vec_[22] + 9, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 3, vec_[6] + 10, vec_[12] + 9, vec_[13] + 2, vec_[22] + 8, vec_[36] + 12});
	int out_12 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 6, vec_[22] + 5, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[22] + 3, vec_[36] + 7});
	int out_22 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 3, vec_[6] + 10, vec_[12] + 9, vec_[13] + 2, vec_[22] + 8, vec_[36] + 12});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 2, vec_[6] + 9, vec_[12] + 8, vec_[13] + 1, vec_[22] + 7, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 4, vec_[6] + 11, vec_[12] + 10, vec_[13] + 3, vec_[22] + 9, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_3{
    3,
    32020,
    32044,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_22 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_4{
    4,
    32048,
    32064,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 4, vec_[12] + 3, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_5{
    5,
    32096,
    32100,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_6{
    6,
    32116,
    32116,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_7{
    7,
    32068,
    32068,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[22] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[22] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_8{
    8,
    32072,
    32092,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_9{
    9,
    448,
    448,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_10{
    10,
    1756,
    1760,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_11{
    11,
    452,
    460,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_12{
    12,
    29148,
    29172,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 0, vec_[6] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 1, vec_[6] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[36] + 9});
	int out_5 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[36] + 9});
	int out_14 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 1, vec_[6] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_13{
    13,
    30432,
    30496,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[5] + 1, vec_[6] + 15, vec_[14] + 3, vec_[15] + 10, vec_[16] + 14, vec_[17] + 13, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[36] + 17});
	int out_1 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[5] + 2, vec_[6] + 16, vec_[14] + 4, vec_[15] + 11, vec_[16] + 15, vec_[17] + 14, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[36] + 18});
	int out_2 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[5] + 3, vec_[6] + 17, vec_[14] + 5, vec_[15] + 12, vec_[16] + 16, vec_[17] + 15, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[36] + 19});
	int out_3 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[5] + 3, vec_[6] + 17, vec_[14] + 5, vec_[15] + 12, vec_[16] + 16, vec_[17] + 15, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[36] + 19});
	int out_5 = std::max({vec_[0] + 19, vec_[1] + 18, vec_[2] + 17, vec_[5] + 3, vec_[6] + 17, vec_[14] + 5, vec_[15] + 12, vec_[16] + 16, vec_[17] + 15, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[36] + 19});
	int out_10 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[16] + 5, vec_[17] + 4, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 14, vec_[14] + 2, vec_[15] + 9, vec_[16] + 13, vec_[17] + 12, vec_[18] + 8, vec_[19] + 7, vec_[20] + 6, vec_[21] + 5, vec_[36] + 16});
	int out_15 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[6] + 12, vec_[15] + 7, vec_[16] + 11, vec_[17] + 10, vec_[18] + 6, vec_[19] + 5, vec_[20] + 4, vec_[21] + 3, vec_[36] + 14});
	int out_16 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 13, vec_[14] + 1, vec_[15] + 8, vec_[16] + 12, vec_[17] + 11, vec_[18] + 7, vec_[19] + 6, vec_[20] + 5, vec_[21] + 4, vec_[36] + 15});
	int out_17 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[6] + 12, vec_[15] + 7, vec_[16] + 11, vec_[17] + 10, vec_[18] + 6, vec_[19] + 5, vec_[20] + 4, vec_[21] + 3, vec_[36] + 14});
	int out_37 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[5] + 1, vec_[6] + 15, vec_[14] + 3, vec_[15] + 10, vec_[16] + 14, vec_[17] + 13, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[36] + 17});
	int out_38 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[5] + 2, vec_[6] + 16, vec_[14] + 4, vec_[15] + 11, vec_[16] + 15, vec_[17] + 14, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[36] + 18});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[10] = out_10;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_14{
    14,
    46056,
    46096,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[13] + 6, vec_[14] + 1, vec_[15] + 4, vec_[16] + 3, vec_[17] + 2, vec_[22] + 5, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 9, vec_[6] + 10, vec_[12] + 8, vec_[13] + 7, vec_[14] + 2, vec_[15] + 5, vec_[16] + 4, vec_[17] + 3, vec_[22] + 6, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 10, vec_[6] + 11, vec_[12] + 9, vec_[13] + 8, vec_[14] + 3, vec_[15] + 6, vec_[16] + 5, vec_[17] + 4, vec_[22] + 7, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 10, vec_[6] + 11, vec_[12] + 9, vec_[13] + 8, vec_[14] + 3, vec_[15] + 6, vec_[16] + 5, vec_[17] + 4, vec_[22] + 7, vec_[36] + 13});
	int out_5 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 10, vec_[6] + 11, vec_[12] + 9, vec_[13] + 8, vec_[14] + 3, vec_[15] + 6, vec_[16] + 5, vec_[17] + 4, vec_[22] + 7, vec_[36] + 13});
	int out_12 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[13] + 6, vec_[14] + 1, vec_[15] + 4, vec_[16] + 3, vec_[17] + 2, vec_[22] + 5, vec_[36] + 11});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 5, vec_[6] + 6, vec_[12] + 4, vec_[13] + 3, vec_[15] + 1, vec_[22] + 2, vec_[36] + 8});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 6, vec_[6] + 7, vec_[12] + 5, vec_[13] + 4, vec_[15] + 2, vec_[16] + 1, vec_[22] + 3, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[5] + 8, vec_[6] + 9, vec_[12] + 7, vec_[13] + 6, vec_[14] + 1, vec_[15] + 4, vec_[16] + 3, vec_[17] + 2, vec_[22] + 5, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[5] + 9, vec_[6] + 10, vec_[12] + 8, vec_[13] + 7, vec_[14] + 2, vec_[15] + 5, vec_[16] + 4, vec_[17] + 3, vec_[22] + 6, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_16{
    16,
    46100,
    46112,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 0, vec_[14] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 1, vec_[14] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 2, vec_[14] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 1, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_22{
    22,
    46116,
    46136,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[12] + 0, vec_[14] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[12] + 1, vec_[14] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[14] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[12] + 1, vec_[14] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_23{
    23,
    46140,
    46144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_24{
    24,
    46148,
    46148,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_25{
    25,
    52568,
    52572,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_26{
    26,
    30092,
    30096,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_27{
    27,
    30104,
    30124,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 0, vec_[14] + 4, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 1, vec_[14] + 5, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 4, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 4, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 1, vec_[14] + 5, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_28{
    28,
    30128,
    30128,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_29{
    29,
    29424,
    29528,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 27, vec_[1] + 26, vec_[2] + 25, vec_[4] + 12, vec_[5] + 22, vec_[6] + 25, vec_[12] + 21, vec_[13] + 20, vec_[22] + 17, vec_[23] + 16, vec_[24] + 15, vec_[36] + 27});
	int out_1 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[4] + 13, vec_[5] + 23, vec_[6] + 26, vec_[12] + 22, vec_[13] + 21, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[36] + 28});
	int out_2 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[4] + 14, vec_[5] + 24, vec_[6] + 27, vec_[12] + 23, vec_[13] + 22, vec_[22] + 19, vec_[23] + 18, vec_[24] + 17, vec_[36] + 29});
	int out_3 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[4] + 14, vec_[5] + 24, vec_[6] + 27, vec_[12] + 23, vec_[13] + 22, vec_[22] + 19, vec_[23] + 18, vec_[24] + 17, vec_[36] + 29});
	int out_5 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[4] + 14, vec_[5] + 24, vec_[6] + 27, vec_[12] + 23, vec_[13] + 22, vec_[22] + 19, vec_[23] + 18, vec_[24] + 17, vec_[36] + 29});
	int out_12 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[5] + 5, vec_[6] + 8, vec_[12] + 4, vec_[13] + 3, vec_[36] + 10});
	int out_14 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[4] + 5, vec_[5] + 15, vec_[6] + 18, vec_[12] + 14, vec_[13] + 13, vec_[22] + 10, vec_[23] + 9, vec_[24] + 8, vec_[36] + 20});
	int out_15 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[4] + 3, vec_[5] + 13, vec_[6] + 16, vec_[12] + 12, vec_[13] + 11, vec_[22] + 8, vec_[23] + 7, vec_[24] + 6, vec_[36] + 18});
	int out_16 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[4] + 1, vec_[5] + 11, vec_[6] + 14, vec_[12] + 10, vec_[13] + 9, vec_[22] + 6, vec_[23] + 5, vec_[24] + 4, vec_[36] + 16});
	int out_18 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 9, vec_[6] + 12, vec_[12] + 8, vec_[13] + 7, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 14});
	int out_19 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[4] + 2, vec_[5] + 12, vec_[6] + 15, vec_[12] + 11, vec_[13] + 10, vec_[22] + 7, vec_[23] + 6, vec_[24] + 5, vec_[36] + 17});
	int out_37 = std::max({vec_[0] + 27, vec_[1] + 26, vec_[2] + 25, vec_[4] + 12, vec_[5] + 22, vec_[6] + 25, vec_[12] + 21, vec_[13] + 20, vec_[22] + 17, vec_[23] + 16, vec_[24] + 15, vec_[36] + 27});
	int out_38 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[4] + 13, vec_[5] + 23, vec_[6] + 26, vec_[12] + 22, vec_[13] + 21, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[36] + 28});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_33{
    33,
    29532,
    29640,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[4] + 16, vec_[12] + 12, vec_[36] + 28});
	int out_1 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[4] + 17, vec_[12] + 13, vec_[36] + 29});
	int out_2 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[4] + 18, vec_[12] + 14, vec_[36] + 30});
	int out_3 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[4] + 18, vec_[12] + 14, vec_[36] + 30});
	int out_5 = std::max({vec_[0] + 30, vec_[1] + 29, vec_[2] + 28, vec_[4] + 18, vec_[12] + 14, vec_[36] + 30});
	int out_13 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[36] + 11});
	int out_14 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[4] + 4, vec_[36] + 16});
	int out_15 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[4] + 2, vec_[36] + 14});
	int out_16 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 1, vec_[36] + 13});
	int out_19 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[36] + 12});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[36] + 9});
	int out_23 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_24 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 28, vec_[1] + 27, vec_[2] + 26, vec_[4] + 16, vec_[12] + 12, vec_[36] + 28});
	int out_38 = std::max({vec_[0] + 29, vec_[1] + 28, vec_[2] + 27, vec_[4] + 17, vec_[12] + 13, vec_[36] + 29});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_34{
    34,
    29644,
    29728,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 16, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 22});
	int out_1 = std::max({vec_[0] + 23, vec_[1] + 22, vec_[2] + 21, vec_[4] + 17, vec_[12] + 13, vec_[13] + 10, vec_[22] + 11, vec_[23] + 12, vec_[24] + 13, vec_[36] + 23});
	int out_2 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 18, vec_[12] + 14, vec_[13] + 11, vec_[22] + 12, vec_[23] + 13, vec_[24] + 14, vec_[36] + 24});
	int out_3 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 18, vec_[12] + 14, vec_[13] + 11, vec_[22] + 12, vec_[23] + 13, vec_[24] + 14, vec_[36] + 24});
	int out_5 = std::max({vec_[0] + 24, vec_[1] + 23, vec_[2] + 22, vec_[4] + 18, vec_[12] + 14, vec_[13] + 11, vec_[22] + 12, vec_[23] + 13, vec_[24] + 14, vec_[36] + 24});
	int out_14 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 4, vec_[36] + 10});
	int out_15 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 2, vec_[36] + 8});
	int out_16 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 16, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 22});
	int out_38 = std::max({vec_[0] + 23, vec_[1] + 22, vec_[2] + 21, vec_[4] + 17, vec_[12] + 13, vec_[13] + 10, vec_[22] + 11, vec_[23] + 12, vec_[24] + 13, vec_[36] + 23});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_35{
    35,
    29732,
    29788,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 7, vec_[12] + 11, vec_[13] + 8, vec_[22] + 9, vec_[23] + 10, vec_[24] + 11, vec_[36] + 15});
	int out_1 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 8, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 16});
	int out_2 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[6] + 9, vec_[12] + 13, vec_[13] + 10, vec_[22] + 11, vec_[23] + 12, vec_[24] + 13, vec_[36] + 17});
	int out_3 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 8, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 16});
	int out_4 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[6] + 9, vec_[12] + 13, vec_[13] + 10, vec_[22] + 11, vec_[23] + 12, vec_[24] + 13, vec_[36] + 17});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 2, vec_[12] + 6, vec_[13] + 3, vec_[22] + 4, vec_[23] + 5, vec_[24] + 6, vec_[36] + 10});
	int out_6 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 8, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 16});
	int out_12 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[6] + 4, vec_[12] + 8, vec_[13] + 5, vec_[22] + 6, vec_[23] + 7, vec_[24] + 8, vec_[36] + 12});
	int out_13 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[6] + 5, vec_[12] + 9, vec_[13] + 6, vec_[22] + 7, vec_[23] + 8, vec_[24] + 9, vec_[36] + 13});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_22 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[6] + 6, vec_[12] + 10, vec_[13] + 7, vec_[22] + 8, vec_[23] + 9, vec_[24] + 10, vec_[36] + 14});
	int out_23 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 7, vec_[12] + 11, vec_[13] + 8, vec_[22] + 9, vec_[23] + 10, vec_[24] + 11, vec_[36] + 15});
	int out_24 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 8, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 16});
	int out_37 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 7, vec_[12] + 11, vec_[13] + 8, vec_[22] + 9, vec_[23] + 10, vec_[24] + 11, vec_[36] + 15});
	int out_38 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 8, vec_[12] + 12, vec_[13] + 9, vec_[22] + 10, vec_[23] + 11, vec_[24] + 12, vec_[36] + 16});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_36{
    36,
    52576,
    52576,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_37{
    37,
    46152,
    46164,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 0, vec_[13] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[13] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 1, vec_[13] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_38{
    38,
    46168,
    46200,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[13] + 2, vec_[17] + 4, vec_[18] + 3, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 0, vec_[13] + 3, vec_[17] + 5, vec_[18] + 4, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[13] + 4, vec_[17] + 6, vec_[18] + 5, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[13] + 3, vec_[17] + 5, vec_[18] + 4, vec_[36] + 10});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[13] + 3, vec_[17] + 5, vec_[18] + 4, vec_[36] + 10});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[17] + 2, vec_[18] + 1, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[13] + 2, vec_[17] + 4, vec_[18] + 3, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[13] + 4, vec_[17] + 6, vec_[18] + 5, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_39{
    39,
    46208,
    46216,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[13] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[13] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[13] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[13] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_40{
    40,
    46220,
    46224,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[13] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_41{
    41,
    46980,
    46988,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_42{
    42,
    59684,
    59716,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 1, vec_[15] + 0, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 0, vec_[5] + 5, vec_[6] + 8, vec_[12] + 7, vec_[13] + 6, vec_[14] + 2, vec_[15] + 1, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[5] + 6, vec_[6] + 9, vec_[12] + 8, vec_[13] + 7, vec_[14] + 3, vec_[15] + 2, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[36] + 9});
	int out_12 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[5] + 5, vec_[6] + 8, vec_[12] + 7, vec_[13] + 6, vec_[14] + 2, vec_[15] + 1, vec_[36] + 10});
	int out_13 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 1, vec_[36] + 9});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 1, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[5] + 6, vec_[6] + 9, vec_[12] + 8, vec_[13] + 7, vec_[14] + 3, vec_[15] + 2, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_43{
    43,
    59720,
    59724,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_44{
    44,
    59728,
    59736,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 0, vec_[12] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 1, vec_[12] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_45{
    45,
    59740,
    59744,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_46{
    46,
    59884,
    59892,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[19] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[19] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_47{
    47,
    59896,
    59904,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_48{
    48,
    77888,
    77912,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[15] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 0, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[15] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[15] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[15] + 6, vec_[36] + 8});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[15] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[15] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[5] + 4, vec_[6] + 6, vec_[12] + 5, vec_[15] + 7, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_49{
    49,
    77952,
    77976,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[13] + 4, vec_[14] + 0, vec_[15] + 5, vec_[22] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 0, vec_[6] + 5, vec_[13] + 5, vec_[14] + 1, vec_[15] + 6, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 6, vec_[13] + 6, vec_[14] + 2, vec_[15] + 7, vec_[22] + 5, vec_[23] + 4, vec_[24] + 3, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 5, vec_[15] + 6, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 8});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 5, vec_[14] + 1, vec_[15] + 6, vec_[22] + 4, vec_[23] + 3, vec_[24] + 2, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[13] + 4, vec_[15] + 5, vec_[22] + 3, vec_[23] + 2, vec_[24] + 1, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 1, vec_[6] + 6, vec_[13] + 6, vec_[14] + 2, vec_[15] + 7, vec_[22] + 5, vec_[23] + 4, vec_[24] + 3, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_50{
    50,
    77980,
    77984,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_51{
    51,
    78772,
    78808,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 0, vec_[6] + 8, vec_[12] + 6, vec_[14] + 4, vec_[15] + 7, vec_[16] + 5, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 2, vec_[5] + 1, vec_[6] + 9, vec_[12] + 7, vec_[14] + 5, vec_[15] + 8, vec_[16] + 6, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 2, vec_[6] + 10, vec_[12] + 8, vec_[14] + 6, vec_[15] + 9, vec_[16] + 7, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 2, vec_[6] + 10, vec_[12] + 8, vec_[14] + 6, vec_[15] + 9, vec_[16] + 7, vec_[36] + 12});
	int out_5 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 2, vec_[6] + 10, vec_[12] + 8, vec_[14] + 6, vec_[15] + 9, vec_[16] + 7, vec_[36] + 12});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 3, vec_[14] + 1, vec_[15] + 4, vec_[16] + 2, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[12] + 4, vec_[14] + 2, vec_[15] + 5, vec_[16] + 3, vec_[36] + 8});
	int out_15 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 2, vec_[15] + 3, vec_[16] + 1, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[15] + 1, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 5, vec_[14] + 3, vec_[15] + 6, vec_[16] + 4, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[6] + 8, vec_[12] + 6, vec_[14] + 4, vec_[15] + 7, vec_[16] + 5, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 2, vec_[5] + 1, vec_[6] + 9, vec_[12] + 7, vec_[14] + 5, vec_[15] + 8, vec_[16] + 6, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_54{
    54,
    78812,
    78816,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_55{
    55,
    78820,
    78832,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_56{
    56,
    77988,
    77988,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_57{
    57,
    77992,
    78036,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 3, vec_[6] + 10, vec_[13] + 0, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 4, vec_[6] + 11, vec_[13] + 1, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 5, vec_[6] + 12, vec_[13] + 2, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 5, vec_[6] + 12, vec_[13] + 2, vec_[36] + 14});
	int out_14 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 4, vec_[6] + 11, vec_[13] + 1, vec_[36] + 13});
	int out_15 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 3, vec_[6] + 10, vec_[36] + 12});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_23 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 2, vec_[6] + 9, vec_[36] + 11});
	int out_24 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[6] + 8, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 3, vec_[6] + 10, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 4, vec_[6] + 11, vec_[13] + 1, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_58{
    58,
    33560,
    33596,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 6, vec_[6] + 8, vec_[12] + 5, vec_[13] + 4, vec_[14] + 0, vec_[15] + 2, vec_[22] + 7, vec_[23] + 3, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 2, vec_[5] + 7, vec_[6] + 9, vec_[12] + 6, vec_[13] + 5, vec_[14] + 1, vec_[15] + 3, vec_[22] + 8, vec_[23] + 4, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 8, vec_[6] + 10, vec_[12] + 7, vec_[13] + 6, vec_[14] + 2, vec_[15] + 4, vec_[22] + 9, vec_[23] + 5, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 5, vec_[6] + 7, vec_[12] + 4, vec_[13] + 3, vec_[22] + 6, vec_[23] + 2, vec_[36] + 9});
	int out_18 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 6, vec_[6] + 8, vec_[12] + 5, vec_[13] + 4, vec_[15] + 2, vec_[22] + 7, vec_[23] + 3, vec_[36] + 10});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 5, vec_[6] + 7, vec_[12] + 4, vec_[13] + 3, vec_[15] + 1, vec_[22] + 6, vec_[23] + 2, vec_[36] + 9});
	int out_22 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 2, vec_[5] + 7, vec_[6] + 9, vec_[12] + 6, vec_[13] + 5, vec_[14] + 1, vec_[15] + 3, vec_[22] + 8, vec_[23] + 4, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 6, vec_[6] + 8, vec_[12] + 5, vec_[13] + 4, vec_[15] + 2, vec_[22] + 7, vec_[23] + 3, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 8, vec_[6] + 10, vec_[12] + 7, vec_[13] + 6, vec_[14] + 2, vec_[15] + 4, vec_[22] + 9, vec_[23] + 5, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_59{
    59,
    33728,
    33732,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_60{
    60,
    33736,
    33736,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[15] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_61{
    61,
    33740,
    33740,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_63{
    63,
    33744,
    33748,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_64{
    64,
    33752,
    33756,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[13] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_65{
    65,
    33760,
    33764,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_66{
    66,
    33768,
    33804,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[13] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[13] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[13] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[13] + 9, vec_[36] + 11});
	int out_12 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[13] + 9, vec_[36] + 11});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[13] + 2, vec_[36] + 4});
	int out_16 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[13] + 9, vec_[36] + 11});
	int out_20 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[13] + 3, vec_[36] + 5});
	int out_23 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[13] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[13] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[13] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_67{
    67,
    33852,
    33864,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[23] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[23] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_21 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[23] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[23] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_68{
    68,
    34500,
    34504,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[23] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[23] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[23] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_69{
    69,
    33968,
    33980,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 0, vec_[15] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[14] + 1, vec_[15] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[15] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[14] + 1, vec_[15] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_70{
    70,
    34160,
    34176,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[23] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[13] + 0, vec_[23] + 5, vec_[26] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 1, vec_[23] + 6, vec_[26] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[23] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[23] + 4, vec_[26] + 3, vec_[36] + 6});
	int out_26 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[23] + 5, vec_[26] + 4, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 2, vec_[23] + 3, vec_[26] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 1, vec_[23] + 6, vec_[26] + 5, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_71{
    71,
    34192,
    34240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 2, vec_[6] + 11, vec_[12] + 1, vec_[13] + 0, vec_[24] + 7, vec_[25] + 6, vec_[26] + 1, vec_[27] + 5, vec_[29] + 11, vec_[36] + 13});
	int out_1 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 3, vec_[6] + 12, vec_[12] + 2, vec_[13] + 1, vec_[24] + 8, vec_[25] + 7, vec_[26] + 2, vec_[27] + 6, vec_[29] + 12, vec_[36] + 14});
	int out_2 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 4, vec_[6] + 13, vec_[12] + 3, vec_[13] + 2, vec_[24] + 9, vec_[25] + 8, vec_[26] + 3, vec_[27] + 7, vec_[29] + 13, vec_[36] + 15});
	int out_3 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[24] + 6, vec_[25] + 5, vec_[27] + 4, vec_[29] + 10, vec_[36] + 12});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[29] + 5, vec_[36] + 7});
	int out_19 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 1, vec_[6] + 10, vec_[24] + 6, vec_[25] + 5, vec_[27] + 4, vec_[29] + 10, vec_[36] + 12});
	int out_24 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 2, vec_[6] + 11, vec_[12] + 1, vec_[24] + 7, vec_[25] + 6, vec_[26] + 1, vec_[27] + 5, vec_[29] + 11, vec_[36] + 13});
	int out_25 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 3, vec_[6] + 12, vec_[12] + 2, vec_[13] + 1, vec_[24] + 8, vec_[25] + 7, vec_[26] + 2, vec_[27] + 6, vec_[29] + 12, vec_[36] + 14});
	int out_29 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[29] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 2, vec_[6] + 11, vec_[12] + 1, vec_[24] + 7, vec_[25] + 6, vec_[26] + 1, vec_[27] + 5, vec_[29] + 11, vec_[36] + 13});
	int out_38 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 4, vec_[6] + 13, vec_[12] + 3, vec_[13] + 2, vec_[24] + 9, vec_[25] + 8, vec_[26] + 3, vec_[27] + 7, vec_[29] + 13, vec_[36] + 15});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_72{
    72,
    35236,
    35240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[25] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_73{
    73,
    34264,
    34272,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[22] + 0, vec_[25] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[22] + 2, vec_[25] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[22] + 2, vec_[25] + 3, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[22] + 1, vec_[25] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_76{
    76,
    85928,
    85936,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_87{
    87,
    3036,
    3044,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_20 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_90{
    90,
    85940,
    85948,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_91{
    91,
    85952,
    85964,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[17] + 2, vec_[18] + 0, vec_[19] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[14] + 3, vec_[17] + 3, vec_[18] + 1, vec_[19] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[14] + 3, vec_[17] + 3, vec_[18] + 1, vec_[19] + 1, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[17] + 2, vec_[36] + 4});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[14] + 3, vec_[17] + 3, vec_[18] + 1, vec_[19] + 1, vec_[36] + 5});
	int out_21 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[17] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[17] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[14] + 3, vec_[17] + 3, vec_[18] + 1, vec_[19] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_99{
    99,
    34276,
    34284,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_27 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[14] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_100{
    100,
    34288,
    34292,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[28] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[14] + 0, vec_[24] + 0, vec_[28] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 1, vec_[24] + 1, vec_[28] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[28] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 1, vec_[24] + 1, vec_[28] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_101{
    101,
    34296,
    34320,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[25] + 2, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[14] + 0, vec_[24] + 0, vec_[25] + 3, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[14] + 1, vec_[24] + 1, vec_[25] + 4, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[25] + 3, vec_[36] + 9});
	int out_15 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[25] + 1, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[25] + 3, vec_[36] + 9});
	int out_28 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[25] + 2, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[14] + 1, vec_[24] + 1, vec_[25] + 4, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_102{
    102,
    35024,
    35032,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[29] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[29] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[29] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_103{
    103,
    35428,
    35432,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[27] + 0, vec_[29] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[27] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[27] + 2, vec_[29] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[27] + 2, vec_[29] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[27] + 2, vec_[29] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[29] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_104{
    104,
    35048,
    35052,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[27] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[27] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[27] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[27] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_105{
    105,
    35056,
    35100,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[22] + 0, vec_[25] + 5, vec_[27] + 10, vec_[29] + 10, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[22] + 1, vec_[25] + 6, vec_[27] + 11, vec_[29] + 11, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[22] + 2, vec_[25] + 7, vec_[27] + 12, vec_[29] + 12, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[22] + 2, vec_[25] + 7, vec_[27] + 12, vec_[29] + 12, vec_[36] + 14});
	int out_14 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[22] + 1, vec_[25] + 6, vec_[27] + 11, vec_[29] + 11, vec_[36] + 13});
	int out_15 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[25] + 5, vec_[27] + 10, vec_[29] + 10, vec_[36] + 12});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[27] + 3, vec_[29] + 3, vec_[36] + 5});
	int out_24 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[25] + 4, vec_[27] + 9, vec_[29] + 9, vec_[36] + 11});
	int out_25 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[25] + 1, vec_[27] + 6, vec_[29] + 6, vec_[36] + 8});
	int out_27 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[27] + 4, vec_[29] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[25] + 5, vec_[27] + 10, vec_[29] + 10, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[22] + 1, vec_[25] + 6, vec_[27] + 11, vec_[29] + 11, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_106{
    106,
    85956,
    85964,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[18] + 0, vec_[19] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_107{
    107,
    35104,
    35108,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_108{
    108,
    35112,
    35144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[14] + 7, vec_[23] + 4, vec_[24] + 6, vec_[27] + 7, vec_[28] + 5, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[12] + 0, vec_[14] + 8, vec_[23] + 5, vec_[24] + 7, vec_[27] + 8, vec_[28] + 6, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[12] + 1, vec_[14] + 9, vec_[23] + 6, vec_[24] + 8, vec_[27] + 9, vec_[28] + 7, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[14] + 9, vec_[23] + 6, vec_[24] + 8, vec_[27] + 9, vec_[28] + 7, vec_[36] + 11});
	int out_15 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 6, vec_[23] + 3, vec_[24] + 5, vec_[27] + 6, vec_[28] + 4, vec_[36] + 8});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 4, vec_[24] + 3, vec_[27] + 4, vec_[28] + 2, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[14] + 5, vec_[23] + 2, vec_[24] + 4, vec_[27] + 5, vec_[28] + 3, vec_[36] + 7});
	int out_25 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[24] + 1, vec_[27] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[14] + 7, vec_[23] + 4, vec_[24] + 6, vec_[27] + 7, vec_[28] + 5, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[12] + 1, vec_[14] + 9, vec_[23] + 6, vec_[24] + 8, vec_[27] + 9, vec_[28] + 7, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_109{
    109,
    34348,
    34360,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[15] + 0, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[15] + 1, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[15] + 1, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_110{
    110,
    34364,
    34380,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[18] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[15] + 6, vec_[18] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[18] + 5, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[15] + 5, vec_[18] + 5, vec_[36] + 7});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[15] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[15] + 6, vec_[18] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_111{
    111,
    34384,
    34404,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[13] + 0, vec_[15] + 4, vec_[18] + 4, vec_[19] + 1, vec_[27] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[13] + 1, vec_[15] + 5, vec_[18] + 5, vec_[19] + 2, vec_[27] + 3, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 2, vec_[15] + 6, vec_[18] + 6, vec_[19] + 3, vec_[27] + 4, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 2, vec_[15] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 2, vec_[15] + 3, vec_[18] + 3, vec_[27] + 1, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 4, vec_[13] + 1, vec_[15] + 5, vec_[18] + 5, vec_[19] + 2, vec_[27] + 3, vec_[36] + 7});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[15] + 4, vec_[18] + 4, vec_[19] + 1, vec_[27] + 2, vec_[36] + 6});
	int out_28 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 2, vec_[15] + 3, vec_[18] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[15] + 4, vec_[18] + 4, vec_[19] + 1, vec_[27] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 2, vec_[15] + 6, vec_[18] + 6, vec_[19] + 3, vec_[27] + 4, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_112{
    112,
    34408,
    34412,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[18] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[18] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_113{
    113,
    34416,
    34460,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[12] + 5, vec_[13] + 6, vec_[18] + 2, vec_[22] + 1, vec_[23] + 3, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[12] + 6, vec_[13] + 7, vec_[18] + 3, vec_[22] + 2, vec_[23] + 4, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[12] + 7, vec_[13] + 8, vec_[18] + 4, vec_[22] + 3, vec_[23] + 5, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[12] + 7, vec_[13] + 8, vec_[18] + 4, vec_[22] + 3, vec_[23] + 5, vec_[36] + 14});
	int out_5 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[12] + 7, vec_[13] + 8, vec_[18] + 4, vec_[22] + 3, vec_[23] + 5, vec_[36] + 14});
	int out_13 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[12] + 2, vec_[13] + 3, vec_[36] + 9});
	int out_14 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[12] + 5, vec_[13] + 6, vec_[18] + 2, vec_[22] + 1, vec_[23] + 3, vec_[36] + 12});
	int out_18 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 4, vec_[13] + 5, vec_[18] + 1, vec_[23] + 2, vec_[36] + 11});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 1, vec_[36] + 7});
	int out_25 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_27 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_29 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[12] + 5, vec_[13] + 6, vec_[18] + 2, vec_[22] + 1, vec_[23] + 3, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[12] + 6, vec_[13] + 7, vec_[18] + 3, vec_[22] + 2, vec_[23] + 4, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_115{
    115,
    34464,
    34496,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 8, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_4 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 8, vec_[36] + 11});
	int out_6 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[12] + 1, vec_[36] + 4});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_23 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_26 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_116{
    116,
    78040,
    78044,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[12] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_117{
    117,
    78048,
    78068,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[12] + 3, vec_[14] + 3, vec_[19] + 4, vec_[24] + 0, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 0, vec_[12] + 4, vec_[14] + 4, vec_[19] + 5, vec_[22] + 0, vec_[24] + 1, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[12] + 5, vec_[14] + 5, vec_[19] + 6, vec_[22] + 1, vec_[24] + 2, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[12] + 5, vec_[14] + 5, vec_[19] + 6, vec_[24] + 2, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[12] + 3, vec_[14] + 3, vec_[19] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[12] + 5, vec_[14] + 5, vec_[19] + 6, vec_[22] + 1, vec_[24] + 2, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_118{
    118,
    78228,
    78236,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_119{
    119,
    78868,
    78896,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[5] + 0, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 3, vec_[5] + 2, vec_[6] + 8, vec_[12] + 7, vec_[14] + 6, vec_[15] + 5, vec_[36] + 10});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 3, vec_[12] + 2, vec_[14] + 1, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 3, vec_[14] + 2, vec_[15] + 1, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[14] + 3, vec_[15] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 6, vec_[12] + 5, vec_[14] + 4, vec_[15] + 3, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 2, vec_[5] + 1, vec_[6] + 7, vec_[12] + 6, vec_[14] + 5, vec_[15] + 4, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_120{
    120,
    85664,
    85676,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 0, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 1, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[36] + 6});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 1, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_121{
    121,
    85680,
    85684,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_122{
    122,
    85688,
    85708,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_123{
    123,
    78900,
    78904,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_124{
    124,
    78908,
    78920,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_125{
    125,
    78240,
    78240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_126{
    126,
    78272,
    78292,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_127{
    127,
    78072,
    78108,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 7, vec_[12] + 6, vec_[19] + 8, vec_[23] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 8, vec_[12] + 7, vec_[19] + 9, vec_[23] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[6] + 9, vec_[12] + 8, vec_[19] + 10, vec_[23] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 8, vec_[12] + 7, vec_[19] + 9, vec_[23] + 9, vec_[36] + 11});
	int out_4 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[6] + 9, vec_[12] + 8, vec_[19] + 10, vec_[23] + 10, vec_[36] + 12});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[19] + 3, vec_[23] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 8, vec_[12] + 7, vec_[19] + 9, vec_[23] + 9, vec_[36] + 11});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 4, vec_[12] + 3, vec_[19] + 5, vec_[23] + 5, vec_[36] + 7});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 5, vec_[12] + 4, vec_[19] + 6, vec_[23] + 6, vec_[36] + 8});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 6, vec_[12] + 5, vec_[19] + 7, vec_[23] + 7, vec_[36] + 9});
	int out_23 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 7, vec_[12] + 6, vec_[19] + 8, vec_[23] + 8, vec_[36] + 10});
	int out_24 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 8, vec_[12] + 7, vec_[19] + 9, vec_[23] + 9, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 7, vec_[12] + 6, vec_[19] + 8, vec_[23] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 8, vec_[12] + 7, vec_[19] + 9, vec_[23] + 9, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_128{
    128,
    59908,
    59916,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_129{
    129,
    59748,
    59752,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[19] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_130{
    130,
    59756,
    59776,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[12] + 5, vec_[18] + 0, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[12] + 6, vec_[18] + 1, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[12] + 6, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[12] + 6, vec_[18] + 1, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_131{
    131,
    59780,
    59796,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_132{
    132,
    46992,
    46992,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_133{
    133,
    47000,
    47012,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[13] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[13] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[13] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_134{
    134,
    46240,
    46336,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 25, vec_[1] + 24, vec_[2] + 23, vec_[3] + 22, vec_[4] + 10, vec_[6] + 23, vec_[22] + 14, vec_[23] + 23, vec_[24] + 22, vec_[25] + 20, vec_[26] + 19, vec_[27] + 18, vec_[28] + 17, vec_[29] + 16, vec_[30] + 21, vec_[31] + 15, vec_[36] + 25});
	int out_1 = std::max({vec_[0] + 26, vec_[1] + 25, vec_[2] + 24, vec_[3] + 23, vec_[4] + 11, vec_[6] + 24, vec_[22] + 15, vec_[23] + 24, vec_[24] + 23, vec_[25] + 21, vec_[26] + 20, vec_[27] + 19, vec_[28] + 18, vec_[29] + 17, vec_[30] + 22, vec_[31] + 16, vec_[36] + 26});
	int out_2 = std::max({vec_[0] + 27, vec_[1] + 26, vec_[2] + 25, vec_[3] + 24, vec_[4] + 12, vec_[6] + 25, vec_[22] + 16, vec_[23] + 25, vec_[24] + 24, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 23, vec_[31] + 17, vec_[36] + 27});
	int out_3 = std::max({vec_[0] + 25, vec_[1] + 24, vec_[2] + 23, vec_[3] + 22, vec_[4] + 10, vec_[6] + 23, vec_[22] + 14, vec_[23] + 23, vec_[24] + 22, vec_[25] + 20, vec_[26] + 19, vec_[27] + 18, vec_[28] + 17, vec_[29] + 16, vec_[30] + 21, vec_[31] + 15, vec_[36] + 25});
	int out_12 = std::max({vec_[0] + 25, vec_[1] + 24, vec_[2] + 23, vec_[3] + 22, vec_[4] + 10, vec_[6] + 23, vec_[22] + 14, vec_[23] + 23, vec_[24] + 22, vec_[25] + 20, vec_[26] + 19, vec_[27] + 18, vec_[28] + 17, vec_[29] + 16, vec_[30] + 21, vec_[31] + 15, vec_[36] + 25});
	int out_18 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[22] + 3, vec_[23] + 12, vec_[24] + 11, vec_[25] + 9, vec_[26] + 8, vec_[27] + 7, vec_[28] + 6, vec_[29] + 5, vec_[30] + 10, vec_[31] + 4, vec_[36] + 14});
	int out_23 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[22] + 3, vec_[23] + 12, vec_[24] + 11, vec_[25] + 9, vec_[26] + 8, vec_[27] + 7, vec_[28] + 6, vec_[29] + 5, vec_[30] + 10, vec_[31] + 4, vec_[36] + 14});
	int out_24 = std::max({vec_[0] + 26, vec_[1] + 25, vec_[2] + 24, vec_[3] + 23, vec_[4] + 11, vec_[6] + 24, vec_[22] + 15, vec_[23] + 24, vec_[24] + 23, vec_[25] + 21, vec_[26] + 20, vec_[27] + 19, vec_[28] + 18, vec_[29] + 17, vec_[30] + 22, vec_[31] + 16, vec_[36] + 26});
	int out_30 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[22] + 1, vec_[23] + 10, vec_[24] + 9, vec_[25] + 7, vec_[26] + 6, vec_[27] + 5, vec_[28] + 4, vec_[29] + 3, vec_[30] + 8, vec_[31] + 2, vec_[36] + 12});
	int out_37 = std::max({vec_[0] + 25, vec_[1] + 24, vec_[2] + 23, vec_[3] + 22, vec_[4] + 10, vec_[6] + 23, vec_[22] + 14, vec_[23] + 23, vec_[24] + 22, vec_[25] + 20, vec_[26] + 19, vec_[27] + 18, vec_[28] + 17, vec_[29] + 16, vec_[30] + 21, vec_[31] + 15, vec_[36] + 25});
	int out_38 = std::max({vec_[0] + 27, vec_[1] + 26, vec_[2] + 25, vec_[3] + 24, vec_[4] + 12, vec_[6] + 25, vec_[22] + 16, vec_[23] + 25, vec_[24] + 24, vec_[25] + 22, vec_[26] + 21, vec_[27] + 20, vec_[28] + 19, vec_[29] + 18, vec_[30] + 23, vec_[31] + 17, vec_[36] + 27});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_138{
    138,
    47368,
    47372,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[25] + 0, vec_[30] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[30] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[30] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_141{
    141,
    46436,
    46472,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[25] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[25] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 9, vec_[6] + 9, vec_[25] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 2, vec_[25] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 8, vec_[6] + 8, vec_[25] + 9, vec_[36] + 11});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 6, vec_[25] + 7, vec_[36] + 9});
	int out_25 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[25] + 8, vec_[36] + 10});
	int out_26 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 3, vec_[25] + 4, vec_[36] + 6});
	int out_27 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 4, vec_[25] + 5, vec_[36] + 7});
	int out_29 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 5, vec_[25] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 7, vec_[6] + 7, vec_[25] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 9, vec_[6] + 9, vec_[25] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_142{
    142,
    46476,
    46500,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[19] + 4, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[19] + 6, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[19] + 7, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[19] + 4, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[19] + 7, vec_[36] + 11});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[19] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[19] + 3, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[19] + 6, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_143{
    143,
    48324,
    48340,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_28 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_30 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_144{
    144,
    48344,
    48344,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[26] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_145{
    145,
    48348,
    48348,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_146{
    146,
    52888,
    52896,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 0, vec_[21] + 0, vec_[30] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 1, vec_[21] + 1, vec_[30] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[21] + 2, vec_[30] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[21] + 2, vec_[30] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[21] + 2, vec_[30] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 1, vec_[21] + 1, vec_[30] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_147{
    147,
    61300,
    61324,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[17] + 3, vec_[18] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[15] + 0, vec_[17] + 4, vec_[18] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[15] + 1, vec_[17] + 5, vec_[18] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[18] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[17] + 4, vec_[18] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[17] + 3, vec_[18] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[15] + 1, vec_[17] + 5, vec_[18] + 7, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_148{
    148,
    52900,
    52948,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 7, vec_[6] + 11, vec_[14] + 10, vec_[28] + 8, vec_[36] + 13});
	int out_1 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 8, vec_[6] + 12, vec_[14] + 11, vec_[28] + 9, vec_[36] + 14});
	int out_2 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 9, vec_[6] + 13, vec_[14] + 12, vec_[28] + 10, vec_[36] + 15});
	int out_3 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 6, vec_[6] + 10, vec_[14] + 9, vec_[28] + 7, vec_[36] + 12});
	int out_17 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_21 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 6, vec_[6] + 10, vec_[14] + 9, vec_[28] + 7, vec_[36] + 12});
	int out_22 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[4] + 6, vec_[6] + 10, vec_[14] + 9, vec_[28] + 7, vec_[36] + 12});
	int out_26 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 8, vec_[6] + 12, vec_[14] + 11, vec_[28] + 9, vec_[36] + 14});
	int out_31 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 7, vec_[6] + 11, vec_[14] + 10, vec_[28] + 8, vec_[36] + 13});
	int out_37 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 7, vec_[6] + 11, vec_[14] + 10, vec_[28] + 8, vec_[36] + 13});
	int out_38 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 9, vec_[6] + 13, vec_[14] + 12, vec_[28] + 10, vec_[36] + 15});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[26] = out_26;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_149{
    149,
    52956,
    52956,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_150{
    150,
    46600,
    46604,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[29] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[29] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_151{
    151,
    46612,
    46620,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 0, vec_[29] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[6] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[6] + 2, vec_[29] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[29] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[29] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[6] + 2, vec_[29] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_152{
    152,
    46624,
    46628,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[27] + 0, vec_[31] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[27] + 1, vec_[31] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[27] + 2, vec_[31] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[31] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[27] + 2, vec_[31] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_153{
    153,
    46632,
    46636,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_154{
    154,
    46688,
    46688,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[9] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[9] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[9] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_155{
    155,
    46740,
    46744,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[35] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[35] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[35] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_156{
    156,
    46748,
    46752,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[22] + 0, vec_[26] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[22] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[22] + 2, vec_[26] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[22] + 1, vec_[26] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[22] + 2, vec_[26] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_157{
    157,
    46756,
    46760,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[29] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[29] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[29] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[29] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_158{
    158,
    46764,
    46796,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 0, vec_[6] + 7, vec_[16] + 6, vec_[22] + 6, vec_[24] + 5, vec_[30] + 5, vec_[36] + 9});
	int out_1 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[6] + 8, vec_[16] + 7, vec_[22] + 7, vec_[24] + 6, vec_[30] + 6, vec_[36] + 10});
	int out_2 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 2, vec_[6] + 9, vec_[16] + 8, vec_[22] + 8, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[16] + 7, vec_[22] + 7, vec_[24] + 6, vec_[30] + 6, vec_[36] + 10});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[16] + 1, vec_[22] + 1, vec_[36] + 4});
	int out_18 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[4] + 1, vec_[6] + 8, vec_[16] + 7, vec_[22] + 7, vec_[24] + 6, vec_[30] + 6, vec_[36] + 10});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[16] + 3, vec_[22] + 3, vec_[24] + 2, vec_[30] + 2, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[16] + 6, vec_[22] + 6, vec_[24] + 5, vec_[30] + 5, vec_[36] + 9});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[4] + 2, vec_[6] + 9, vec_[16] + 8, vec_[22] + 8, vec_[24] + 7, vec_[30] + 7, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_159{
    159,
    46800,
    46808,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[24] + 1, vec_[29] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[24] + 2, vec_[29] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[24] + 3, vec_[29] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[24] + 1, vec_[36] + 3});
	int out_32 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[24] + 2, vec_[29] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[24] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[24] + 3, vec_[29] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_160{
    160,
    46820,
    46824,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[27] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[31] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[27] + 2, vec_[31] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[27] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[27] + 2, vec_[31] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_161{
    161,
    46828,
    46844,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[31] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 0, vec_[6] + 4, vec_[16] + 0, vec_[31] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 5, vec_[16] + 1, vec_[31] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 5, vec_[31] + 6, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[31] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[31] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 1, vec_[6] + 5, vec_[16] + 1, vec_[31] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_162{
    162,
    49764,
    49776,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[13] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_199{
    199,
    59128,
    59128,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[23] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[23] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[23] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_211{
    211,
    49780,
    49780,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_212{
    212,
    46848,
    46856,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_213{
    213,
    46872,
    46884,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[25] + 1, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 0, vec_[23] + 4, vec_[25] + 3, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[23] + 5, vec_[25] + 4, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[23] + 4, vec_[25] + 3, vec_[36] + 6});
	int out_18 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[23] + 4, vec_[25] + 3, vec_[36] + 6});
	int out_30 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[25] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 2, vec_[25] + 1, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[23] + 5, vec_[25] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_214{
    214,
    46364,
    46368,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[25] + 0, vec_[30] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[30] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[30] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[25] + 2, vec_[30] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_215{
    215,
    46888,
    46892,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_216{
    216,
    46896,
    46896,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_217{
    217,
    53972,
    53984,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[13] + 0, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_218{
    218,
    60020,
    60024,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[16] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[16] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[16] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_219{
    219,
    60028,
    60032,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_222{
    222,
    60048,
    60052,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 0, vec_[19] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[16] + 1, vec_[19] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[16] + 1, vec_[19] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_223{
    223,
    60072,
    60076,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[19] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[19] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[19] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_224{
    224,
    60200,
    60200,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_225{
    225,
    59300,
    59308,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[28] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 3, vec_[28] + 2, vec_[36] + 5});
	int out_25 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[28] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[28] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_226{
    226,
    59136,
    59144,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[23] + 0, vec_[25] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[23] + 2, vec_[25] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_27 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[23] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[25] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[23] + 2, vec_[25] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_227{
    227,
    59024,
    59032,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[24] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[24] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[24] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[12] + 3, vec_[24] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[24] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[24] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_228{
    228,
    58156,
    58172,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 1, vec_[6] + 3, vec_[12] + 2, vec_[14] + 0, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 0, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[14] + 1, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[14] + 2, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 2, vec_[6] + 4, vec_[12] + 3, vec_[14] + 1, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 1, vec_[6] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 1, vec_[5] + 3, vec_[6] + 5, vec_[12] + 4, vec_[14] + 2, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_229{
    229,
    58176,
    58180,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_230{
    230,
    58184,
    58188,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[15] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_231{
    231,
    58212,
    58228,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 3, vec_[12] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_236{
    236,
    57952,
    57972,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[13] + 2, vec_[22] + 1, vec_[23] + 0, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[13] + 3, vec_[22] + 2, vec_[23] + 1, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[13] + 4, vec_[22] + 3, vec_[23] + 2, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[13] + 4, vec_[22] + 3, vec_[23] + 2, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[13] + 3, vec_[22] + 2, vec_[23] + 1, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_16 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[13] + 2, vec_[22] + 1, vec_[36] + 6});
	int out_17 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[13] + 2, vec_[22] + 1, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[13] + 3, vec_[22] + 2, vec_[23] + 1, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_237{
    237,
    30612,
    30660,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[5] + 5, vec_[6] + 10, vec_[12] + 9, vec_[13] + 8, vec_[14] + 2, vec_[15] + 11, vec_[16] + 1, vec_[17] + 0, vec_[22] + 7, vec_[23] + 6, vec_[36] + 13});
	int out_1 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 0, vec_[5] + 6, vec_[6] + 11, vec_[12] + 10, vec_[13] + 9, vec_[14] + 3, vec_[15] + 12, vec_[16] + 2, vec_[17] + 1, vec_[22] + 8, vec_[23] + 7, vec_[36] + 14});
	int out_2 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 1, vec_[5] + 7, vec_[6] + 12, vec_[12] + 11, vec_[13] + 10, vec_[14] + 4, vec_[15] + 13, vec_[16] + 3, vec_[17] + 2, vec_[22] + 9, vec_[23] + 8, vec_[36] + 15});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 2, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[15] + 8, vec_[22] + 4, vec_[23] + 3, vec_[36] + 10});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_12 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[5] + 3, vec_[6] + 8, vec_[12] + 7, vec_[13] + 6, vec_[15] + 9, vec_[22] + 5, vec_[23] + 4, vec_[36] + 11});
	int out_13 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[5] + 4, vec_[6] + 9, vec_[12] + 8, vec_[13] + 7, vec_[14] + 1, vec_[15] + 10, vec_[22] + 6, vec_[23] + 5, vec_[36] + 12});
	int out_18 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[5] + 2, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[15] + 8, vec_[22] + 4, vec_[23] + 3, vec_[36] + 10});
	int out_22 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[5] + 5, vec_[6] + 10, vec_[12] + 9, vec_[13] + 8, vec_[14] + 2, vec_[15] + 11, vec_[16] + 1, vec_[22] + 7, vec_[23] + 6, vec_[36] + 13});
	int out_23 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[5] + 6, vec_[6] + 11, vec_[12] + 10, vec_[13] + 9, vec_[14] + 3, vec_[15] + 12, vec_[16] + 2, vec_[17] + 1, vec_[22] + 8, vec_[23] + 7, vec_[36] + 14});
	int out_37 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[5] + 5, vec_[6] + 10, vec_[12] + 9, vec_[13] + 8, vec_[14] + 2, vec_[15] + 11, vec_[16] + 1, vec_[22] + 7, vec_[23] + 6, vec_[36] + 13});
	int out_38 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[3] + 12, vec_[4] + 1, vec_[5] + 7, vec_[6] + 12, vec_[12] + 11, vec_[13] + 10, vec_[14] + 4, vec_[15] + 13, vec_[16] + 3, vec_[17] + 2, vec_[22] + 9, vec_[23] + 8, vec_[36] + 15});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_238{
    238,
    30664,
    30720,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 8, vec_[12] + 10, vec_[13] + 2, vec_[19] + 11, vec_[22] + 5, vec_[23] + 6, vec_[36] + 15});
	int out_1 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 9, vec_[12] + 11, vec_[13] + 3, vec_[19] + 12, vec_[22] + 6, vec_[23] + 7, vec_[36] + 16});
	int out_2 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[6] + 10, vec_[12] + 12, vec_[13] + 4, vec_[19] + 13, vec_[22] + 7, vec_[23] + 8, vec_[36] + 17});
	int out_3 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 9, vec_[12] + 11, vec_[13] + 3, vec_[19] + 12, vec_[22] + 6, vec_[23] + 7, vec_[36] + 16});
	int out_4 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[6] + 10, vec_[12] + 12, vec_[13] + 4, vec_[19] + 13, vec_[22] + 7, vec_[23] + 8, vec_[36] + 17});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 3, vec_[12] + 5, vec_[19] + 6, vec_[36] + 10});
	int out_6 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 9, vec_[12] + 11, vec_[13] + 3, vec_[19] + 12, vec_[22] + 6, vec_[23] + 7, vec_[36] + 16});
	int out_12 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 2, vec_[12] + 4, vec_[19] + 5, vec_[36] + 9});
	int out_13 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 9, vec_[12] + 11, vec_[13] + 3, vec_[19] + 12, vec_[22] + 6, vec_[23] + 7, vec_[36] + 16});
	int out_14 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[6] + 7, vec_[12] + 9, vec_[13] + 1, vec_[19] + 10, vec_[22] + 4, vec_[23] + 5, vec_[36] + 14});
	int out_15 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[12] + 2, vec_[19] + 3, vec_[36] + 7});
	int out_16 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[6] + 4, vec_[12] + 6, vec_[19] + 7, vec_[22] + 1, vec_[23] + 2, vec_[36] + 11});
	int out_17 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 3, vec_[12] + 5, vec_[19] + 6, vec_[23] + 1, vec_[36] + 10});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[19] + 1, vec_[36] + 5});
	int out_22 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[6] + 7, vec_[12] + 9, vec_[19] + 10, vec_[22] + 4, vec_[23] + 5, vec_[36] + 14});
	int out_23 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[6] + 6, vec_[12] + 8, vec_[19] + 9, vec_[22] + 3, vec_[23] + 4, vec_[36] + 13});
	int out_37 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[6] + 8, vec_[12] + 10, vec_[13] + 2, vec_[19] + 11, vec_[22] + 5, vec_[23] + 6, vec_[36] + 15});
	int out_38 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[6] + 9, vec_[12] + 11, vec_[13] + 3, vec_[19] + 12, vec_[22] + 6, vec_[23] + 7, vec_[36] + 16});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_239{
    239,
    31836,
    31876,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[5] + 0, vec_[6] + 9, vec_[12] + 7, vec_[14] + 5, vec_[15] + 8, vec_[16] + 6, vec_[17] + 4, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 2, vec_[5] + 1, vec_[6] + 10, vec_[12] + 8, vec_[14] + 6, vec_[15] + 9, vec_[16] + 7, vec_[17] + 5, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 3, vec_[5] + 2, vec_[6] + 11, vec_[12] + 9, vec_[14] + 7, vec_[15] + 10, vec_[16] + 8, vec_[17] + 6, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 3, vec_[5] + 2, vec_[6] + 11, vec_[12] + 9, vec_[14] + 7, vec_[15] + 10, vec_[16] + 8, vec_[17] + 6, vec_[36] + 13});
	int out_5 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 3, vec_[5] + 2, vec_[6] + 11, vec_[12] + 9, vec_[14] + 7, vec_[15] + 10, vec_[16] + 8, vec_[17] + 6, vec_[36] + 13});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 3, vec_[14] + 1, vec_[15] + 4, vec_[16] + 2, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 5, vec_[14] + 3, vec_[15] + 6, vec_[16] + 4, vec_[17] + 2, vec_[36] + 9});
	int out_15 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 2, vec_[15] + 3, vec_[16] + 1, vec_[36] + 6});
	int out_16 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[12] + 4, vec_[14] + 2, vec_[15] + 5, vec_[16] + 3, vec_[17] + 1, vec_[36] + 8});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[15] + 1, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[6] + 8, vec_[12] + 6, vec_[14] + 4, vec_[15] + 7, vec_[16] + 5, vec_[17] + 3, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 1, vec_[6] + 9, vec_[12] + 7, vec_[14] + 5, vec_[15] + 8, vec_[16] + 6, vec_[17] + 4, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 2, vec_[5] + 1, vec_[6] + 10, vec_[12] + 8, vec_[14] + 6, vec_[15] + 9, vec_[16] + 7, vec_[17] + 5, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_240{
    240,
    2324,
    2332,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[14] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_241{
    241,
    2336,
    2344,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[15] + 2, vec_[16] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 3, vec_[16] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 2, vec_[16] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 3, vec_[16] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_243{
    243,
    2364,
    2368,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[16] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[16] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[16] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 2, vec_[16] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 1, vec_[16] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_244{
    244,
    31880,
    31884,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[14] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_245{
    245,
    31888,
    31900,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_246{
    246,
    57976,
    57980,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 2, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_247{
    247,
    57944,
    57948,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[14] + 0, vec_[22] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 0, vec_[13] + 0, vec_[14] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 1, vec_[14] + 2, vec_[22] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[13] + 1, vec_[14] + 2, vec_[22] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_250{
    250,
    59036,
    59036,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_251{
    251,
    53988,
    53988,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_252{
    252,
    46900,
    46944,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 9, vec_[13] + 10, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[4] + 0, vec_[6] + 10, vec_[13] + 11, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 1, vec_[6] + 11, vec_[13] + 12, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 11, vec_[13] + 12, vec_[36] + 14});
	int out_19 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[13] + 4, vec_[36] + 6});
	int out_23 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 2, vec_[13] + 3, vec_[36] + 5});
	int out_24 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 3, vec_[13] + 4, vec_[36] + 6});
	int out_25 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 5, vec_[13] + 6, vec_[36] + 8});
	int out_26 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 6, vec_[13] + 7, vec_[36] + 9});
	int out_27 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 7, vec_[13] + 8, vec_[36] + 10});
	int out_28 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 8, vec_[13] + 9, vec_[36] + 11});
	int out_29 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 9, vec_[13] + 10, vec_[36] + 12});
	int out_30 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 10, vec_[13] + 11, vec_[36] + 13});
	int out_31 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 11, vec_[13] + 12, vec_[36] + 14});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 9, vec_[13] + 10, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[4] + 1, vec_[6] + 11, vec_[13] + 12, vec_[36] + 14});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_253{
    253,
    46952,
    46976,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_6 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_254{
    254,
    30500,
    30508,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_255{
    255,
    29176,
    29176,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_256{
    256,
    1148,
    1148,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_257{
    257,
    29180,
    29184,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_258{
    258,
    1152,
    1152,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_259{
    259,
    812,
    812,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_260{
    260,
    900,
    900,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[5] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[5] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_261{
    261,
    29188,
    29188,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_262{
    262,
    1156,
    1156,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_263{
    263,
    904,
    944,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 3, vec_[5] + 6, vec_[6] + 9, vec_[12] + 5, vec_[13] + 4, vec_[22] + 8, vec_[23] + 7, vec_[36] + 11});
	int out_1 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 4, vec_[5] + 7, vec_[6] + 10, vec_[12] + 6, vec_[13] + 5, vec_[22] + 9, vec_[23] + 8, vec_[36] + 12});
	int out_2 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 5, vec_[5] + 8, vec_[6] + 11, vec_[12] + 7, vec_[13] + 6, vec_[22] + 10, vec_[23] + 9, vec_[36] + 13});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 4, vec_[6] + 7, vec_[12] + 3, vec_[13] + 2, vec_[22] + 6, vec_[23] + 5, vec_[36] + 9});
	int out_5 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 5, vec_[5] + 8, vec_[6] + 11, vec_[12] + 7, vec_[13] + 6, vec_[22] + 10, vec_[23] + 9, vec_[36] + 13});
	int out_14 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 4, vec_[5] + 7, vec_[6] + 10, vec_[12] + 6, vec_[13] + 5, vec_[22] + 9, vec_[23] + 8, vec_[36] + 12});
	int out_22 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 3, vec_[5] + 6, vec_[6] + 9, vec_[12] + 5, vec_[13] + 4, vec_[22] + 8, vec_[23] + 7, vec_[36] + 11});
	int out_23 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 1, vec_[5] + 4, vec_[6] + 7, vec_[12] + 3, vec_[13] + 2, vec_[22] + 6, vec_[23] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 3, vec_[5] + 6, vec_[6] + 9, vec_[12] + 5, vec_[13] + 4, vec_[22] + 8, vec_[23] + 7, vec_[36] + 11});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 4, vec_[5] + 7, vec_[6] + 10, vec_[12] + 6, vec_[13] + 5, vec_[22] + 9, vec_[23] + 8, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_271{
    271,
    1004,
    1040,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 8, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[12] + 9, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_4 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[12] + 9, vec_[36] + 12});
	int out_6 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 8, vec_[36] + 11});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[12] + 3, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_23 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[12] + 7, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[12] + 8, vec_[36] + 11});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_272{
    272,
    29192,
    29200,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_273{
    273,
    1160,
    1176,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 1, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 1, vec_[14] + 2, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 2, vec_[14] + 3, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 2, vec_[14] + 3, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 1, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 1, vec_[14] + 2, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_274{
    274,
    29204,
    29216,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[14] + 3, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[14] + 3, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[14] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_275{
    275,
    464,
    472,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 3, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_276{
    276,
    29220,
    29240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[5] + 1, vec_[6] + 4, vec_[12] + 2, vec_[14] + 0, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 4, vec_[5] + 2, vec_[6] + 5, vec_[12] + 3, vec_[14] + 1, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[5] + 3, vec_[6] + 6, vec_[12] + 4, vec_[14] + 2, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 4, vec_[5] + 2, vec_[6] + 5, vec_[12] + 3, vec_[36] + 7});
	int out_5 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[5] + 3, vec_[6] + 6, vec_[12] + 4, vec_[14] + 2, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 4, vec_[5] + 2, vec_[6] + 5, vec_[12] + 3, vec_[14] + 1, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[5] + 1, vec_[6] + 4, vec_[12] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 4, vec_[5] + 2, vec_[6] + 5, vec_[12] + 3, vec_[14] + 1, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_277{
    277,
    32120,
    32148,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 0, vec_[6] + 6, vec_[22] + 2, vec_[24] + 5, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 0, vec_[5] + 1, vec_[6] + 7, vec_[22] + 3, vec_[24] + 6, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 2, vec_[6] + 8, vec_[22] + 4, vec_[24] + 7, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[5] + 2, vec_[6] + 8, vec_[22] + 4, vec_[24] + 7, vec_[36] + 10});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[22] + 3, vec_[24] + 6, vec_[36] + 9});
	int out_24 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[24] + 3, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[22] + 2, vec_[24] + 5, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[5] + 2, vec_[6] + 8, vec_[22] + 4, vec_[24] + 7, vec_[36] + 10});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_278{
    278,
    32324,
    32340,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_24 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_279{
    279,
    29244,
    29252,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 0, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_280{
    280,
    29256,
    29256,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[19] + 1, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 2, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[19] + 2, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[19] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_281{
    281,
    29276,
    29300,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_4 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[36] + 9});
	int out_14 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[36] + 8});
	int out_15 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[36] + 6});
	int out_16 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_282{
    282,
    30188,
    30264,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[4] + 5, vec_[5] + 11, vec_[6] + 18, vec_[12] + 10, vec_[13] + 9, vec_[14] + 8, vec_[15] + 7, vec_[16] + 6, vec_[22] + 17, vec_[23] + 16, vec_[24] + 15, vec_[25] + 14, vec_[26] + 13, vec_[27] + 12, vec_[36] + 20});
	int out_1 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[4] + 6, vec_[5] + 12, vec_[6] + 19, vec_[12] + 11, vec_[13] + 10, vec_[14] + 9, vec_[15] + 8, vec_[16] + 7, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[25] + 15, vec_[26] + 14, vec_[27] + 13, vec_[36] + 21});
	int out_2 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 7, vec_[5] + 13, vec_[6] + 20, vec_[12] + 12, vec_[13] + 11, vec_[14] + 10, vec_[15] + 9, vec_[16] + 8, vec_[22] + 19, vec_[23] + 18, vec_[24] + 17, vec_[25] + 16, vec_[26] + 15, vec_[27] + 14, vec_[36] + 22});
	int out_3 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[4] + 6, vec_[5] + 12, vec_[6] + 19, vec_[12] + 11, vec_[13] + 10, vec_[14] + 9, vec_[15] + 8, vec_[16] + 7, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[25] + 15, vec_[26] + 14, vec_[27] + 13, vec_[36] + 21});
	int out_12 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[4] + 6, vec_[5] + 12, vec_[6] + 19, vec_[12] + 11, vec_[13] + 10, vec_[14] + 9, vec_[15] + 8, vec_[16] + 7, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[25] + 15, vec_[26] + 14, vec_[27] + 13, vec_[36] + 21});
	int out_13 = std::max({vec_[0] + 21, vec_[1] + 20, vec_[2] + 19, vec_[4] + 6, vec_[5] + 12, vec_[6] + 19, vec_[12] + 11, vec_[13] + 10, vec_[14] + 9, vec_[15] + 8, vec_[16] + 7, vec_[22] + 18, vec_[23] + 17, vec_[24] + 16, vec_[25] + 15, vec_[26] + 14, vec_[27] + 13, vec_[36] + 21});
	int out_22 = std::max({vec_[0] + 18, vec_[1] + 17, vec_[2] + 16, vec_[4] + 3, vec_[5] + 9, vec_[6] + 16, vec_[12] + 8, vec_[13] + 7, vec_[14] + 6, vec_[15] + 5, vec_[16] + 4, vec_[22] + 15, vec_[23] + 14, vec_[24] + 13, vec_[25] + 12, vec_[26] + 11, vec_[27] + 10, vec_[36] + 18});
	int out_23 = std::max({vec_[0] + 17, vec_[1] + 16, vec_[2] + 15, vec_[4] + 2, vec_[5] + 8, vec_[6] + 15, vec_[12] + 7, vec_[13] + 6, vec_[14] + 5, vec_[15] + 4, vec_[16] + 3, vec_[22] + 14, vec_[23] + 13, vec_[24] + 12, vec_[25] + 11, vec_[26] + 10, vec_[27] + 9, vec_[36] + 17});
	int out_24 = std::max({vec_[0] + 16, vec_[1] + 15, vec_[2] + 14, vec_[4] + 1, vec_[5] + 7, vec_[6] + 14, vec_[12] + 6, vec_[13] + 5, vec_[14] + 4, vec_[15] + 3, vec_[16] + 2, vec_[22] + 13, vec_[23] + 12, vec_[24] + 11, vec_[25] + 10, vec_[26] + 9, vec_[27] + 8, vec_[36] + 16});
	int out_25 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 6, vec_[6] + 13, vec_[12] + 5, vec_[13] + 4, vec_[14] + 3, vec_[15] + 2, vec_[16] + 1, vec_[22] + 12, vec_[23] + 11, vec_[24] + 10, vec_[25] + 9, vec_[26] + 8, vec_[27] + 7, vec_[36] + 15});
	int out_26 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 4, vec_[6] + 11, vec_[12] + 3, vec_[13] + 2, vec_[14] + 1, vec_[22] + 10, vec_[23] + 9, vec_[24] + 8, vec_[25] + 7, vec_[26] + 6, vec_[27] + 5, vec_[36] + 13});
	int out_27 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 5, vec_[6] + 12, vec_[12] + 4, vec_[13] + 3, vec_[14] + 2, vec_[15] + 1, vec_[22] + 11, vec_[23] + 10, vec_[24] + 9, vec_[25] + 8, vec_[26] + 7, vec_[27] + 6, vec_[36] + 14});
	int out_37 = std::max({vec_[0] + 20, vec_[1] + 19, vec_[2] + 18, vec_[4] + 5, vec_[5] + 11, vec_[6] + 18, vec_[12] + 10, vec_[13] + 9, vec_[14] + 8, vec_[15] + 7, vec_[16] + 6, vec_[22] + 17, vec_[23] + 16, vec_[24] + 15, vec_[25] + 14, vec_[26] + 13, vec_[27] + 12, vec_[36] + 20});
	int out_38 = std::max({vec_[0] + 22, vec_[1] + 21, vec_[2] + 20, vec_[4] + 7, vec_[5] + 13, vec_[6] + 20, vec_[12] + 12, vec_[13] + 11, vec_[14] + 10, vec_[15] + 9, vec_[16] + 8, vec_[22] + 19, vec_[23] + 18, vec_[24] + 17, vec_[25] + 16, vec_[26] + 15, vec_[27] + 14, vec_[36] + 22});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_299{
    299,
    2460,
    2468,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[5] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_300{
    300,
    31936,
    31944,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[5] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[5] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_301{
    301,
    2472,
    2492,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[14] + 3, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[14] + 4, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[14] + 4, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[14] + 3, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_19 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[14] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[14] + 3, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_303{
    303,
    31372,
    31380,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 0, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 1, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_306{
    306,
    57512,
    57524,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_1 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_2 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[4] + 2, vec_[12] + 3, vec_[36] + 5});
	int out_22 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[12] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_315{
    315,
    57940,
    57940,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_318{
    318,
    57528,
    57536,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[12] + 1, vec_[13] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[12] + 3, vec_[13] + 2, vec_[36] + 5});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[13] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_319{
    319,
    32780,
    32780,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[15] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[15] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_320{
    320,
    32784,
    32808,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 0, vec_[6] + 5, vec_[12] + 4, vec_[13] + 3, vec_[14] + 1, vec_[15] + 2, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 1, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[14] + 2, vec_[15] + 3, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 3, vec_[15] + 4, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 3, vec_[15] + 4, vec_[36] + 9});
	int out_5 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[5] + 2, vec_[6] + 7, vec_[12] + 6, vec_[13] + 5, vec_[14] + 3, vec_[15] + 4, vec_[36] + 9});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[12] + 3, vec_[13] + 2, vec_[15] + 1, vec_[36] + 6});
	int out_13 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[13] + 3, vec_[14] + 1, vec_[15] + 2, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[13] + 3, vec_[14] + 1, vec_[15] + 2, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 1, vec_[6] + 6, vec_[12] + 5, vec_[13] + 4, vec_[14] + 2, vec_[15] + 3, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_321{
    321,
    32812,
    32848,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[12] + 8, vec_[36] + 10});
	int out_1 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[12] + 9, vec_[36] + 11});
	int out_2 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[12] + 10, vec_[36] + 12});
	int out_3 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[12] + 9, vec_[36] + 11});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[12] + 4, vec_[36] + 6});
	int out_16 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[12] + 6, vec_[36] + 8});
	int out_17 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[12] + 9, vec_[36] + 11});
	int out_18 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[12] + 2, vec_[36] + 4});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[12] + 5, vec_[36] + 7});
	int out_20 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[12] + 9, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[12] + 8, vec_[36] + 10});
	int out_38 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[12] + 10, vec_[36] + 12});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_322{
    322,
    33268,
    33276,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[17] + 0, vec_[19] + 0, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 0, vec_[15] + 2, vec_[17] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 3, vec_[17] + 2, vec_[19] + 2, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_17 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[15] + 2, vec_[17] + 1, vec_[19] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[15] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 1, vec_[15] + 3, vec_[17] + 2, vec_[19] + 2, vec_[36] + 5});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_323{
    323,
    33308,
    33328,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 2, vec_[17] + 4, vec_[18] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 4, vec_[17] + 6, vec_[18] + 5, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[14] + 5, vec_[17] + 7, vec_[18] + 6, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 4, vec_[17] + 6, vec_[18] + 5, vec_[36] + 8});
	int out_19 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[14] + 4, vec_[17] + 6, vec_[18] + 5, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[14] + 2, vec_[17] + 4, vec_[18] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[14] + 5, vec_[17] + 7, vec_[18] + 6, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_324{
    324,
    33000,
    33020,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[13] + 4, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[13] + 4, vec_[36] + 8});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_13 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[13] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[13] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[13] + 3, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_325{
    325,
    57540,
    57540,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_326{
    326,
    30312,
    30316,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[25] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[4] + 0, vec_[25] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[25] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[4] + 1, vec_[25] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_327{
    327,
    30320,
    30364,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[24] + 2, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[24] + 3, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[24] + 4, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[24] + 3, vec_[36] + 13});
	int out_4 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[3] + 11, vec_[6] + 12, vec_[24] + 4, vec_[36] + 14});
	int out_6 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[24] + 3, vec_[36] + 13});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_14 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[24] + 1, vec_[36] + 11});
	int out_22 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_23 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_24 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[24] + 3, vec_[36] + 13});
	int out_25 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_26 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[3] + 7, vec_[6] + 8, vec_[36] + 10});
	int out_27 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[3] + 8, vec_[6] + 9, vec_[36] + 11});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[3] + 9, vec_[6] + 10, vec_[24] + 2, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[3] + 10, vec_[6] + 11, vec_[24] + 3, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_328{
    328,
    29260,
    29264,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[12] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[12] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_329{
    329,
    85608,
    85612,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_330{
    330,
    3048,
    3052,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[21] + 0, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[21] + 1, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_331{
    331,
    3056,
    3060,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[6] + 0, vec_[22] + 0, vec_[36] + 2});
	int out_1 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[22] + 1, vec_[36] + 3});
	int out_2 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[22] + 2, vec_[36] + 4});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[22] + 2, vec_[36] + 4});
	int out_5 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[22] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[22] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_332{
    332,
    2408,
    2428,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[5] + 0, vec_[6] + 4, vec_[14] + 3, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 1, vec_[6] + 5, vec_[14] + 4, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 2, vec_[6] + 6, vec_[14] + 5, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 2, vec_[6] + 6, vec_[14] + 5, vec_[36] + 8});
	int out_5 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[5] + 2, vec_[6] + 6, vec_[14] + 5, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[14] + 3, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[14] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[14] + 3, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[5] + 1, vec_[6] + 5, vec_[14] + 4, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_333{
    333,
    2192,
    2240,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 7, vec_[6] + 11, vec_[15] + 9, vec_[16] + 6, vec_[17] + 5, vec_[18] + 4, vec_[19] + 3, vec_[20] + 2, vec_[21] + 1, vec_[36] + 13});
	int out_1 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 8, vec_[6] + 12, vec_[15] + 10, vec_[16] + 7, vec_[17] + 6, vec_[18] + 5, vec_[19] + 4, vec_[20] + 3, vec_[21] + 2, vec_[36] + 14});
	int out_2 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 9, vec_[6] + 13, vec_[15] + 11, vec_[16] + 8, vec_[17] + 7, vec_[18] + 6, vec_[19] + 5, vec_[20] + 4, vec_[21] + 3, vec_[36] + 15});
	int out_3 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 9, vec_[6] + 13, vec_[15] + 11, vec_[16] + 8, vec_[17] + 7, vec_[18] + 6, vec_[19] + 5, vec_[20] + 4, vec_[21] + 3, vec_[36] + 15});
	int out_5 = std::max({vec_[0] + 15, vec_[1] + 14, vec_[2] + 13, vec_[5] + 9, vec_[6] + 13, vec_[15] + 11, vec_[16] + 8, vec_[17] + 7, vec_[18] + 6, vec_[19] + 5, vec_[20] + 4, vec_[21] + 3, vec_[36] + 15});
	int out_10 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[36] + 4});
	int out_15 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[15] + 2, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[5] + 7, vec_[6] + 11, vec_[15] + 9, vec_[16] + 6, vec_[17] + 5, vec_[18] + 4, vec_[19] + 3, vec_[20] + 2, vec_[21] + 1, vec_[36] + 13});
	int out_38 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[5] + 8, vec_[6] + 12, vec_[15] + 10, vec_[16] + 7, vec_[17] + 6, vec_[18] + 5, vec_[19] + 4, vec_[20] + 3, vec_[21] + 2, vec_[36] + 14});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[10] = out_10;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_334{
    334,
    2064,
    2108,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[5] + 0, vec_[6] + 10, vec_[12] + 1, vec_[13] + 9, vec_[14] + 6, vec_[15] + 7, vec_[22] + 8, vec_[36] + 12});
	int out_1 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 4, vec_[5] + 1, vec_[6] + 11, vec_[12] + 2, vec_[13] + 10, vec_[14] + 7, vec_[15] + 8, vec_[22] + 9, vec_[36] + 13});
	int out_2 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[4] + 5, vec_[5] + 2, vec_[6] + 12, vec_[12] + 3, vec_[13] + 11, vec_[14] + 8, vec_[15] + 9, vec_[22] + 10, vec_[36] + 14});
	int out_3 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[4] + 5, vec_[5] + 2, vec_[6] + 12, vec_[12] + 3, vec_[13] + 11, vec_[14] + 8, vec_[15] + 9, vec_[22] + 10, vec_[36] + 14});
	int out_5 = std::max({vec_[0] + 14, vec_[1] + 13, vec_[2] + 12, vec_[4] + 5, vec_[5] + 2, vec_[6] + 12, vec_[12] + 3, vec_[13] + 11, vec_[14] + 8, vec_[15] + 9, vec_[22] + 10, vec_[36] + 14});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[13] + 5, vec_[14] + 2, vec_[15] + 3, vec_[22] + 4, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 1, vec_[6] + 8, vec_[13] + 7, vec_[14] + 4, vec_[15] + 5, vec_[22] + 6, vec_[36] + 10});
	int out_15 = std::max({vec_[0] + 11, vec_[1] + 10, vec_[2] + 9, vec_[4] + 2, vec_[6] + 9, vec_[13] + 8, vec_[14] + 5, vec_[15] + 6, vec_[22] + 7, vec_[36] + 11});
	int out_16 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[13] + 4, vec_[14] + 1, vec_[15] + 2, vec_[22] + 3, vec_[36] + 7});
	int out_17 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 4, vec_[13] + 3, vec_[15] + 1, vec_[22] + 2, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[13] + 6, vec_[14] + 3, vec_[15] + 4, vec_[22] + 5, vec_[36] + 9});
	int out_37 = std::max({vec_[0] + 12, vec_[1] + 11, vec_[2] + 10, vec_[4] + 3, vec_[6] + 10, vec_[12] + 1, vec_[13] + 9, vec_[14] + 6, vec_[15] + 7, vec_[22] + 8, vec_[36] + 12});
	int out_38 = std::max({vec_[0] + 13, vec_[1] + 12, vec_[2] + 11, vec_[4] + 4, vec_[5] + 1, vec_[6] + 11, vec_[12] + 2, vec_[13] + 10, vec_[14] + 7, vec_[15] + 8, vec_[22] + 9, vec_[36] + 13});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_337{
    337,
    31000,
    31024,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[12] + 3, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[6] + 5, vec_[12] + 4, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[36] + 9});
	int out_5 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[36] + 9});
	int out_14 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 3, vec_[6] + 2, vec_[12] + 1, vec_[36] + 5});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 2, vec_[6] + 1, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[4] + 5, vec_[6] + 4, vec_[12] + 3, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 6, vec_[6] + 5, vec_[12] + 4, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_396{
    396,
    31028,
    31028,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_397{
    397,
    31032,
    31048,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_1 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_2 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_3 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_4 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_5 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_12 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_37 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_38 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_398{
    398,
    2112,
    2132,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[6] + 0, vec_[13] + 1, vec_[14] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 1, vec_[13] + 2, vec_[14] + 5, vec_[22] + 3, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 2, vec_[13] + 3, vec_[14] + 6, vec_[22] + 4, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_5 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 2, vec_[13] + 3, vec_[14] + 6, vec_[22] + 4, vec_[36] + 8});
	int out_14 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 1, vec_[13] + 2, vec_[14] + 5, vec_[22] + 3, vec_[36] + 7});
	int out_15 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[14] + 2, vec_[36] + 4});
	int out_16 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[13] + 1, vec_[14] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_17 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[14] + 3, vec_[22] + 1, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[13] + 1, vec_[14] + 4, vec_[22] + 2, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 1, vec_[13] + 2, vec_[14] + 5, vec_[22] + 3, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_399{
    399,
    30928,
    30956,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[6] + 4, vec_[12] + 3, vec_[15] + 6, vec_[36] + 8});
	int out_1 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 6, vec_[6] + 5, vec_[12] + 4, vec_[15] + 7, vec_[36] + 9});
	int out_2 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[15] + 8, vec_[36] + 10});
	int out_3 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[15] + 8, vec_[36] + 10});
	int out_5 = std::max({vec_[0] + 10, vec_[1] + 9, vec_[2] + 8, vec_[4] + 7, vec_[6] + 6, vec_[12] + 5, vec_[15] + 8, vec_[36] + 10});
	int out_13 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[4] + 1, vec_[15] + 2, vec_[36] + 4});
	int out_14 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[4] + 3, vec_[6] + 2, vec_[12] + 1, vec_[15] + 4, vec_[36] + 6});
	int out_15 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[4] + 2, vec_[6] + 1, vec_[15] + 3, vec_[36] + 5});
	int out_37 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[4] + 5, vec_[6] + 4, vec_[12] + 3, vec_[15] + 6, vec_[36] + 8});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[4] + 6, vec_[6] + 5, vec_[12] + 4, vec_[15] + 7, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_402{
    402,
    30960,
    30960,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[13] + 0, vec_[14] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[13] + 1, vec_[14] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_403{
    403,
    30972,
    30996,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_4 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[3] + 6, vec_[4] + 6, vec_[6] + 7, vec_[36] + 9});
	int out_5 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[4] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_6 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_12 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_13 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[4] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[4] + 5, vec_[6] + 6, vec_[36] + 8});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_404{
    404,
    2136,
    2136,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[4] + 0, vec_[12] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[12] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[4] + 1, vec_[12] + 1, vec_[36] + 3});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_405{
    405,
    2140,
    2164,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_1 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[6] + 6, vec_[12] + 5, vec_[36] + 8});
	int out_2 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_3 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});
	int out_14 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[6] + 2, vec_[12] + 1, vec_[36] + 4});
	int out_17 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[6] + 3, vec_[12] + 2, vec_[36] + 5});
	int out_18 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_19 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[6] + 5, vec_[12] + 4, vec_[36] + 7});
	int out_38 = std::max({vec_[0] + 9, vec_[1] + 8, vec_[2] + 7, vec_[6] + 7, vec_[12] + 6, vec_[36] + 9});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_407{
    407,
    2168,
    2188,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_1 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_2 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_3 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_4 = std::max({vec_[0] + 8, vec_[1] + 7, vec_[2] + 6, vec_[3] + 5, vec_[6] + 6, vec_[36] + 8});
	int out_6 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_12 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_13 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_22 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});
	int out_37 = std::max({vec_[0] + 6, vec_[1] + 5, vec_[2] + 4, vec_[3] + 3, vec_[6] + 4, vec_[36] + 6});
	int out_38 = std::max({vec_[0] + 7, vec_[1] + 6, vec_[2] + 5, vec_[3] + 4, vec_[6] + 5, vec_[36] + 7});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_408{
    408,
    2244,
    2252,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[3] + 0, vec_[6] + 1, vec_[36] + 3});
	int out_1 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_2 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_3 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_4 = std::max({vec_[0] + 5, vec_[1] + 4, vec_[2] + 3, vec_[3] + 2, vec_[6] + 3, vec_[36] + 5});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});
	int out_37 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 3});
	int out_38 = std::max({vec_[0] + 4, vec_[1] + 3, vec_[2] + 2, vec_[3] + 1, vec_[6] + 2, vec_[36] + 4});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_409{
    409,
    2432,
    596,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 23, vec_[1] + 21, vec_[2] + 20, vec_[3] + 18, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 23});
	int out_1 = std::max({vec_[0] + 24, vec_[1] + 22, vec_[2] + 21, vec_[3] + 19, vec_[4] + 2, vec_[5] + 20, vec_[6] + 21, vec_[7] + 19, vec_[8] + 18, vec_[9] + 17, vec_[10] + 16, vec_[11] + 15, vec_[14] + 14, vec_[15] + 13, vec_[16] + 12, vec_[17] + 11, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[32] + 6, vec_[33] + 5, vec_[34] + 4, vec_[35] + 3, vec_[36] + 24});
	int out_2 = std::max({vec_[0] + 25, vec_[1] + 23, vec_[2] + 22, vec_[3] + 20, vec_[4] + 3, vec_[5] + 21, vec_[6] + 22, vec_[7] + 20, vec_[8] + 19, vec_[9] + 18, vec_[10] + 17, vec_[11] + 16, vec_[14] + 15, vec_[15] + 14, vec_[16] + 13, vec_[17] + 12, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[32] + 7, vec_[33] + 6, vec_[34] + 5, vec_[35] + 4, vec_[36] + 25});
	int out_3 = std::max({vec_[0] + 23, vec_[1] + 21, vec_[2] + 20, vec_[3] + 18, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 23});
	int out_6 = std::max({vec_[0] + 4, vec_[1] + 2, vec_[2] + 1, vec_[6] + 1, vec_[36] + 4});
	int out_9 = std::max({vec_[0] + 23, vec_[1] + 21, vec_[2] + 20, vec_[3] + 18, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 23});
	int out_11 = std::max({vec_[0] + 24, vec_[1] + 22, vec_[2] + 21, vec_[3] + 19, vec_[4] + 2, vec_[5] + 20, vec_[6] + 21, vec_[7] + 19, vec_[8] + 18, vec_[9] + 17, vec_[10] + 16, vec_[11] + 15, vec_[14] + 14, vec_[15] + 13, vec_[16] + 12, vec_[17] + 11, vec_[18] + 10, vec_[19] + 9, vec_[20] + 8, vec_[21] + 7, vec_[32] + 6, vec_[33] + 5, vec_[34] + 4, vec_[35] + 3, vec_[36] + 24});
	int out_37 = std::max({vec_[0] + 23, vec_[1] + 21, vec_[2] + 20, vec_[3] + 18, vec_[4] + 1, vec_[5] + 19, vec_[6] + 20, vec_[7] + 18, vec_[8] + 17, vec_[9] + 16, vec_[10] + 15, vec_[11] + 14, vec_[14] + 13, vec_[15] + 12, vec_[16] + 11, vec_[17] + 10, vec_[18] + 9, vec_[19] + 8, vec_[20] + 7, vec_[21] + 6, vec_[32] + 5, vec_[33] + 4, vec_[34] + 3, vec_[35] + 2, vec_[36] + 23});
	int out_38 = std::max({vec_[0] + 25, vec_[1] + 23, vec_[2] + 22, vec_[3] + 20, vec_[4] + 3, vec_[5] + 21, vec_[6] + 22, vec_[7] + 20, vec_[8] + 19, vec_[9] + 18, vec_[10] + 17, vec_[11] + 16, vec_[14] + 15, vec_[15] + 14, vec_[16] + 13, vec_[17] + 12, vec_[18] + 11, vec_[19] + 10, vec_[20] + 9, vec_[21] + 8, vec_[32] + 7, vec_[33] + 6, vec_[34] + 5, vec_[35] + 4, vec_[36] + 25});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[9] = out_9;
	vec_[11] = out_11;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};

const MAP_Explorer::Block block_410{
    410,
    632,
    632,
    [](uint64_t* vec_){
        
	int out_0 = std::max({vec_[0] + 1, vec_[1] + 0, vec_[36] + 1});
	int out_1 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[2] + 0, vec_[36] + 2});
	int out_2 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_3 = std::max({vec_[0] + 3, vec_[1] + 2, vec_[2] + 1, vec_[36] + 3});
	int out_37 = std::max({vec_[0] + 1, vec_[36] + 1});
	int out_38 = std::max({vec_[0] + 2, vec_[1] + 1, vec_[36] + 2});

	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
    }};


const std::array<MAP_Explorer::Block, 412> CV32E40P_blocks{{
    block_266,
    block_267,
    block_268,
    block_264,
    block_265,
    block_269,
    block_270,
    block_343,
    block_344,
    block_242,
    block_136,
    block_406,
    block_137,
    block_186,
    block_188,
    block_206,
    block_204,
    block_176,
    block_177,
    block_187,
    block_376,
    block_377,
    block_378,
    block_379,
    block_382,
    block_383,
    block_384,
    block_78,
    block_80,
    block_205,
    block_207,
    block_17,
    block_18,
    block_19,
    block_20,
    block_21,
    block_77,
    block_79,
    block_81,
    block_82,
    block_83,
    block_84,
    block_195,
    block_232,
    block_249,
    block_342,
    block_346,
    block_347,
    block_374,
    block_375,
    block_380,
    block_381,
    block_385,
    block_15,
    block_30,
    block_31,
    block_32,
    block_85,
    block_86,
    block_88,
    block_89,
    block_171,
    block_172,
    block_173,
    block_178,
    block_180,
    block_183,
    block_184,
    block_185,
    block_196,
    block_197,
    block_198,
    block_201,
    block_283,
    block_284,
    block_285,
    block_286,
    block_287,
    block_288,
    block_289,
    block_290,
    block_294,
    block_295,
    block_296,
    block_297,
    block_298,
    block_302,
    block_304,
    block_305,
    block_307,
    block_308,
    block_309,
    block_310,
    block_311,
    block_312,
    block_313,
    block_314,
    block_52,
    block_53,
    block_62,
    block_74,
    block_75,
    block_92,
    block_93,
    block_94,
    block_95,
    block_96,
    block_97,
    block_98,
    block_114,
    block_135,
    block_139,
    block_140,
    block_163,
    block_164,
    block_165,
    block_166,
    block_167,
    block_168,
    block_169,
    block_170,
    block_174,
    block_175,
    block_179,
    block_181,
    block_182,
    block_189,
    block_190,
    block_191,
    block_192,
    block_193,
    block_194,
    block_200,
    block_202,
    block_203,
    block_208,
    block_209,
    block_210,
    block_220,
    block_221,
    block_233,
    block_234,
    block_235,
    block_248,
    block_291,
    block_292,
    block_293,
    block_316,
    block_317,
    block_335,
    block_336,
    block_338,
    block_339,
    block_340,
    block_341,
    block_345,
    block_348,
    block_349,
    block_350,
    block_351,
    block_352,
    block_353,
    block_354,
    block_355,
    block_356,
    block_357,
    block_358,
    block_359,
    block_360,
    block_361,
    block_362,
    block_363,
    block_364,
    block_365,
    block_366,
    block_367,
    block_368,
    block_369,
    block_370,
    block_371,
    block_372,
    block_373,
    block_386,
    block_387,
    block_388,
    block_389,
    block_390,
    block_391,
    block_392,
    block_393,
    block_394,
    block_395,
    block_400,
    block_401,
    block_411,
    block_0,
    block_1,
    block_2,
    block_3,
    block_4,
    block_5,
    block_6,
    block_7,
    block_8,
    block_9,
    block_10,
    block_11,
    block_12,
    block_13,
    block_14,
    block_16,
    block_22,
    block_23,
    block_24,
    block_25,
    block_26,
    block_27,
    block_28,
    block_29,
    block_33,
    block_34,
    block_35,
    block_36,
    block_37,
    block_38,
    block_39,
    block_40,
    block_41,
    block_42,
    block_43,
    block_44,
    block_45,
    block_46,
    block_47,
    block_48,
    block_49,
    block_50,
    block_51,
    block_54,
    block_55,
    block_56,
    block_57,
    block_58,
    block_59,
    block_60,
    block_61,
    block_63,
    block_64,
    block_65,
    block_66,
    block_67,
    block_68,
    block_69,
    block_70,
    block_71,
    block_72,
    block_73,
    block_76,
    block_87,
    block_90,
    block_91,
    block_99,
    block_100,
    block_101,
    block_102,
    block_103,
    block_104,
    block_105,
    block_106,
    block_107,
    block_108,
    block_109,
    block_110,
    block_111,
    block_112,
    block_113,
    block_115,
    block_116,
    block_117,
    block_118,
    block_119,
    block_120,
    block_121,
    block_122,
    block_123,
    block_124,
    block_125,
    block_126,
    block_127,
    block_128,
    block_129,
    block_130,
    block_131,
    block_132,
    block_133,
    block_134,
    block_138,
    block_141,
    block_142,
    block_143,
    block_144,
    block_145,
    block_146,
    block_147,
    block_148,
    block_149,
    block_150,
    block_151,
    block_152,
    block_153,
    block_154,
    block_155,
    block_156,
    block_157,
    block_158,
    block_159,
    block_160,
    block_161,
    block_162,
    block_199,
    block_211,
    block_212,
    block_213,
    block_214,
    block_215,
    block_216,
    block_217,
    block_218,
    block_219,
    block_222,
    block_223,
    block_224,
    block_225,
    block_226,
    block_227,
    block_228,
    block_229,
    block_230,
    block_231,
    block_236,
    block_237,
    block_238,
    block_239,
    block_240,
    block_241,
    block_243,
    block_244,
    block_245,
    block_246,
    block_247,
    block_250,
    block_251,
    block_252,
    block_253,
    block_254,
    block_255,
    block_256,
    block_257,
    block_258,
    block_259,
    block_260,
    block_261,
    block_262,
    block_263,
    block_271,
    block_272,
    block_273,
    block_274,
    block_275,
    block_276,
    block_277,
    block_278,
    block_279,
    block_280,
    block_281,
    block_282,
    block_299,
    block_300,
    block_301,
    block_303,
    block_306,
    block_315,
    block_318,
    block_319,
    block_320,
    block_321,
    block_322,
    block_323,
    block_324,
    block_325,
    block_326,
    block_327,
    block_328,
    block_329,
    block_330,
    block_331,
    block_332,
    block_333,
    block_334,
    block_337,
    block_396,
    block_397,
    block_398,
    block_399,
    block_402,
    block_403,
    block_404,
    block_405,
    block_407,
    block_408,
    block_409,
    block_410
}};

const CV32E40P_BlockDictionary CV32E40P_blockDict{CV32E40P_blocks};

} // namespace CV32E40P