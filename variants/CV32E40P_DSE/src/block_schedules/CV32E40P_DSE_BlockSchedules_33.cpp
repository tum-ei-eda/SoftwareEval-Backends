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


#include "BlockSchedulingFunctions.h"

#include <algorithm>

namespace CV32E40P_DSE{

static void block_567_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_567{
    567,
    47436,
    47440,
    block_567_fn
    };

static void block_568_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_568{
    568,
    16024,
    16040,
    block_568_fn
    };

static void block_569_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_569{
    569,
    44156,
    44168,
    block_569_fn
    };

static void block_570_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[2];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_570{
    570,
    464,
    472,
    block_570_fn
    };

static void block_571_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +2+d_[1]+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6], vec_[1] +1+d_[1]+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +1+d_[1]+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_571{
    571,
    45224,
    45244,
    block_571_fn
    };

static void block_572_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[5], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[4]+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[5]+d_[7], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[6]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[6]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[6]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7]+d_[8], +1+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[8], +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[8], +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+t_9, +1+t_6);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8], +d_[6]);
	uint64_t t_15 = MAP_Explorer::max2(+t_11, +t_8);
	uint64_t t_16 = MAP_Explorer::max2(+d_[10]+t_9, +1+t_12);
	uint64_t t_17 = MAP_Explorer::max2(+d_[10]+t_10, +t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+d_[10]+t_11, +1+t_15);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_16, vec_[1] +d_[1]+t_16);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_16);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_17);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_16);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +t_19);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_16);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[9]+t_12, vec_[1] +2+d_[1]+d_[9]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[9]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[9]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[9]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+d_[9]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[9]+t_12);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_6, vec_[1] +3+d_[1]+t_6);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+t_6);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+t_6);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[6]);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+t_6);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_9, vec_[1] +1+d_[1]+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_9);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_572{
    572,
    48936,
    48964,
    block_572_fn
    };

static void block_573_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_24;
	uint64_t out_6 = out_24 -1+d_[3];
	uint64_t out_37 = out_24 -2+d_[3];
	uint64_t out_38 = out_24 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_573{
    573,
    49140,
    49156,
    block_573_fn
    };

static void block_574_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_574{
    574,
    45248,
    45256,
    block_574_fn
    };

static void block_575_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_575{
    575,
    45260,
    45260,
    block_575_fn
    };

static void block_576_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_16 +d_[2]+d_[3];
	uint64_t out_37 = out_16 -1+d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_16 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_15 +d_[4]+d_[5];
	uint64_t out_4 = out_14 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_576{
    576,
    45280,
    45304,
    block_576_fn
    };

static void block_577_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[6]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[2]+d_[4]+d_[6]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[6]+t_4);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[4]+d_[6]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[8]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[8]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[8]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[8]+t_15);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[6]+d_[8]);
	uint64_t t_30 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_17, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_18, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+t_19, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +d_[10]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[10]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[10]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[10]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[10]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[8]+d_[10]);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+t_30, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[13]+t_31, +t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+t_32, +1+t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[13]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+t_47, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_48, +t_42);
	uint64_t t_55 = MAP_Explorer::max2(+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_60 = MAP_Explorer::max2(+t_53, +d_[12]+t_41);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_54, +d_[12]+t_42);
	uint64_t t_62 = MAP_Explorer::max2(+1+t_55, +d_[12]+t_43);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_56, +d_[12]+t_44);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_57, +d_[12]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+1+t_58, +d_[12]+t_46);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_59, +d_[10]+d_[12]);
	uint64_t t_67 = MAP_Explorer::max2(+d_[15]+t_47, +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+d_[15]+t_48, +t_54);
	uint64_t t_69 = MAP_Explorer::max2(+d_[15]+t_49, +1+t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[15]+t_50, +1+t_56);
	uint64_t t_71 = MAP_Explorer::max2(+d_[15]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[15]+t_52, +1+t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+t_67, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+1+t_68, +t_61);
	uint64_t t_76 = MAP_Explorer::max2(+t_69, +t_62);
	uint64_t t_77 = MAP_Explorer::max2(+t_70, +t_63);
	uint64_t t_78 = MAP_Explorer::max2(+t_71, +t_64);
	uint64_t t_79 = MAP_Explorer::max2(+t_72, +t_65);
	uint64_t t_80 = MAP_Explorer::max2(+t_73, +t_66);
	uint64_t t_81 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_82 = MAP_Explorer::max2(+t_74, +d_[14]+t_60);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[14]+t_61);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_76, +d_[14]+t_62);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_77, +d_[14]+t_63);
	uint64_t t_86 = MAP_Explorer::max2(+1+t_78, +d_[14]+t_64);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_79, +d_[14]+t_65);
	uint64_t t_88 = MAP_Explorer::max2(+1+t_80, +d_[14]+t_66);
	uint64_t t_89 = MAP_Explorer::max2(+1+t_81, +d_[12]+d_[14]);
	uint64_t t_90 = MAP_Explorer::max2(+d_[17]+t_67, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[17]+t_68, +t_75);
	uint64_t t_92 = MAP_Explorer::max2(+d_[17]+t_69, +1+t_76);
	uint64_t t_93 = MAP_Explorer::max2(+d_[17]+t_70, +1+t_77);
	uint64_t t_94 = MAP_Explorer::max2(+d_[17]+t_71, +1+t_78);
	uint64_t t_95 = MAP_Explorer::max2(+d_[17]+t_72, +1+t_79);
	uint64_t t_96 = MAP_Explorer::max2(+d_[17]+t_73, +1+t_80);
	uint64_t t_97 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_81);
	uint64_t t_98 = MAP_Explorer::max2(+t_90, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_91, +t_83);
	uint64_t t_100 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_101 = MAP_Explorer::max2(+t_92, +t_84);
	uint64_t t_102 = MAP_Explorer::max2(+t_93, +t_85);
	uint64_t t_103 = MAP_Explorer::max2(+t_94, +t_86);
	uint64_t t_104 = MAP_Explorer::max2(+t_95, +t_87);
	uint64_t t_105 = MAP_Explorer::max2(+t_96, +t_88);
	uint64_t t_106 = MAP_Explorer::max2(+t_97, +t_89);
	uint64_t t_107 = MAP_Explorer::max2(+t_98, +d_[16]+t_82);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_99, +d_[16]+t_83);
	uint64_t t_109 = MAP_Explorer::max2(+1+t_100, +d_[14]+d_[16]);
	uint64_t t_110 = MAP_Explorer::max2(+1+t_101, +d_[16]+t_84);
	uint64_t t_111 = MAP_Explorer::max2(+1+t_102, +d_[16]+t_85);
	uint64_t t_112 = MAP_Explorer::max2(+1+t_103, +d_[16]+t_86);
	uint64_t t_113 = MAP_Explorer::max2(+1+t_104, +d_[16]+t_87);
	uint64_t t_114 = MAP_Explorer::max2(+1+t_105, +d_[16]+t_88);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_106, +d_[16]+t_89);
	uint64_t t_116 = MAP_Explorer::max2(+d_[19]+t_90, +1+t_98);
	uint64_t t_117 = MAP_Explorer::max2(+d_[19]+t_91, +t_99);
	uint64_t t_118 = MAP_Explorer::max2(+d_[17]+d_[19], +1+t_100);
	uint64_t t_119 = MAP_Explorer::max2(+d_[19]+t_92, +1+t_101);
	uint64_t t_120 = MAP_Explorer::max2(+d_[19]+t_93, +1+t_102);
	uint64_t t_121 = MAP_Explorer::max2(+d_[19]+t_94, +1+t_103);
	uint64_t t_122 = MAP_Explorer::max2(+d_[19]+t_95, +1+t_104);
	uint64_t t_123 = MAP_Explorer::max2(+d_[19]+t_96, +1+t_105);
	uint64_t t_124 = MAP_Explorer::max2(+d_[19]+t_97, +1+t_106);
	uint64_t t_125 = MAP_Explorer::max2(+t_116, +1+t_107);
	uint64_t t_126 = MAP_Explorer::max2(+1+t_117, +t_108);
	uint64_t t_127 = MAP_Explorer::max2(+t_118, +t_109);
	uint64_t t_128 = MAP_Explorer::max2(+d_[19], +d_[16]);
	uint64_t t_129 = MAP_Explorer::max2(+t_119, +t_110);
	uint64_t t_130 = MAP_Explorer::max2(+t_120, +t_111);
	uint64_t t_131 = MAP_Explorer::max2(+t_121, +t_112);
	uint64_t t_132 = MAP_Explorer::max2(+t_122, +t_113);
	uint64_t t_133 = MAP_Explorer::max2(+t_123, +t_114);
	uint64_t t_134 = MAP_Explorer::max2(+t_124, +t_115);
	uint64_t t_135 = MAP_Explorer::max2(+d_[20]+t_116, +1+t_125);
	uint64_t t_136 = MAP_Explorer::max2(+d_[20]+t_117, +t_126);
	uint64_t t_137 = MAP_Explorer::max2(+d_[20]+t_118, +1+t_127);
	uint64_t t_138 = MAP_Explorer::max2(+d_[19]+d_[20], +1+t_128);
	uint64_t t_139 = MAP_Explorer::max2(+d_[20]+t_119, +1+t_129);
	uint64_t t_140 = MAP_Explorer::max2(+d_[20]+t_120, +1+t_130);
	uint64_t t_141 = MAP_Explorer::max2(+d_[20]+t_121, +1+t_131);
	uint64_t t_142 = MAP_Explorer::max2(+d_[20]+t_122, +1+t_132);
	uint64_t t_143 = MAP_Explorer::max2(+d_[20]+t_123, +1+t_133);
	uint64_t t_144 = MAP_Explorer::max2(+d_[20]+t_124, +1+t_134);
	uint64_t t_145 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_135, +d_[18]+t_107);
	uint64_t t_146 = MAP_Explorer::max2(+2+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_136, +d_[18]+t_108);
	uint64_t t_147 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_137, +d_[18]+t_109);
	uint64_t t_148 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_138, +d_[16]+d_[18]);
	uint64_t t_149 = MAP_Explorer::max2(+1+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25], +d_[18]);
	uint64_t t_150 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_139, +d_[18]+t_110);
	uint64_t t_151 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_140, +d_[18]+t_111);
	uint64_t t_152 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_141, +d_[18]+t_112);
	uint64_t t_153 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_142, +d_[18]+t_113);
	uint64_t t_154 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_143, +d_[18]+t_114);
	uint64_t t_155 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_144, +d_[18]+t_115);
	uint64_t t_156 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_135, +1+t_145);
	uint64_t t_157 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_136, +t_146);
	uint64_t t_158 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_137, +t_147);
	uint64_t t_159 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_138, +t_148);
	uint64_t t_160 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26], +t_149);
	uint64_t t_161 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_139, +t_150);
	uint64_t t_162 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_140, +t_151);
	uint64_t t_163 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_141, +t_152);
	uint64_t t_164 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_142, +t_153);
	uint64_t t_165 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_143, +t_154);
	uint64_t t_166 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_144, +t_155);
	uint64_t t_167 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_135, +1+t_156);
	uint64_t t_168 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_136, +t_157);
	uint64_t t_169 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_137, +1+t_158);
	uint64_t t_170 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_138, +1+t_159);
	uint64_t t_171 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27], +1+t_160);
	uint64_t t_172 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_139, +1+t_161);
	uint64_t t_173 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_140, +1+t_162);
	uint64_t t_174 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_141, +1+t_163);
	uint64_t t_175 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_142, +1+t_164);
	uint64_t t_176 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_143, +1+t_165);
	uint64_t t_177 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_144, +1+t_166);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_156, vec_[1] +3+d_[1]+t_156);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_156);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_157);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +3+d_[24]+d_[25]+d_[26]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+t_158);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_156);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_159);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+t_160);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +3+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +3+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +3+d_[23]+d_[24]+d_[25]+d_[26]);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+t_161);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+t_162);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+t_163);
	out_12 = MAP_Explorer::max2(out_12, vec_[25] +3+t_164);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +3+t_165);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +3+t_166);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_156);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+t_135, vec_[1] +2+d_[1]+d_[21]+d_[22]+d_[23]+t_135);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[21]+d_[22]+d_[23]+t_135);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2+d_[21]+d_[22]+d_[23]+t_136);
	out_23 = MAP_Explorer::max2(out_23, vec_[4] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[5] +2+d_[21]+d_[22]+d_[23]+t_137);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+d_[21]+d_[22]+d_[23]+t_135);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +2+d_[21]+d_[22]+d_[23]+t_138);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2+d_[20]+d_[21]+d_[22]+d_[23]);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +2+d_[21]+d_[22]+d_[23]);
	out_23 = MAP_Explorer::max2(out_23, vec_[15] +2+d_[22]+d_[23]);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +2+d_[23]);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +2+d_[21]+d_[22]+d_[23]+t_139);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+d_[21]+d_[22]+d_[23]+t_140);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+d_[21]+d_[22]+d_[23]+t_141);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+d_[21]+d_[22]+d_[23]+t_142);
	out_23 = MAP_Explorer::max2(out_23, vec_[26] +2+d_[21]+d_[22]+d_[23]+t_143);
	out_23 = MAP_Explorer::max2(out_23, vec_[27] +2+d_[21]+d_[22]+d_[23]+t_144);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+t_135);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+d_[22]+t_135, vec_[1] +2+d_[1]+d_[21]+d_[22]+t_135);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[21]+d_[22]+t_135);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+d_[21]+d_[22]+t_136);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[5] +2+d_[21]+d_[22]+t_137);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[21]+d_[22]+t_135);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +2+d_[21]+d_[22]+t_138);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +2+d_[20]+d_[21]+d_[22]);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +2+d_[21]+d_[22]);
	out_24 = MAP_Explorer::max2(out_24, vec_[15] +2+d_[22]);
	out_24 = MAP_Explorer::max2(out_24, vec_[16] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2+d_[21]+d_[22]+t_139);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+d_[21]+d_[22]+t_140);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[21]+d_[22]+t_141);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[21]+d_[22]+t_142);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +2+d_[21]+d_[22]+t_143);
	out_24 = MAP_Explorer::max2(out_24, vec_[27] +2+d_[21]+d_[22]+t_144);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[21]+d_[22]+t_135);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+t_135, vec_[1] +2+d_[1]+d_[21]+t_135);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+d_[21]+t_135);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+d_[21]+t_136);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+d_[21]+t_137);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+d_[21]+t_135);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+d_[21]+t_138);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+d_[20]+d_[21]);
	out_25 = MAP_Explorer::max2(out_25, vec_[14] +2+d_[21]);
	out_25 = MAP_Explorer::max2(out_25, vec_[15] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[16] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+d_[21]+t_139);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+d_[21]+t_140);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+d_[21]+t_141);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+d_[21]+t_142);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2+d_[21]+t_143);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +2+d_[21]+t_144);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+d_[1]+d_[21]+t_135);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_125, vec_[1] +2+d_[1]+t_125);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+t_125);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1+t_126);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+t_127);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2+t_125);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+t_128);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +2+t_129);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+t_130);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+t_131);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+t_132);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+t_133);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+t_134);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+t_125);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_135, vec_[1] +2+d_[1]+t_135);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +2+t_135);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +2+t_136);
	out_27 = MAP_Explorer::max2(out_27, vec_[5] +2+t_137);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +2+t_135);
	out_27 = MAP_Explorer::max2(out_27, vec_[12] +2+t_138);
	out_27 = MAP_Explorer::max2(out_27, vec_[13] +2+d_[20]);
	out_27 = MAP_Explorer::max2(out_27, vec_[14] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[15] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[22] +2+t_139);
	out_27 = MAP_Explorer::max2(out_27, vec_[23] +2+t_140);
	out_27 = MAP_Explorer::max2(out_27, vec_[24] +2+t_141);
	out_27 = MAP_Explorer::max2(out_27, vec_[25] +2+t_142);
	out_27 = MAP_Explorer::max2(out_27, vec_[26] +2+t_143);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +2+t_144);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +2+d_[0]+d_[1]+t_135);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_167, vec_[1] +1+d_[1]+t_167);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_167);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_168);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[24]+d_[25]+d_[26]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_169);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_167);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_170);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_171);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_172);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_173);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_174);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+t_175);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1+t_176);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+t_177);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_167);
	uint64_t out_3 = out_12;
	uint64_t out_13 = out_37 +1;
	uint64_t out_22 = out_23 +d_[24];
	uint64_t out_38 = out_37 +1+d_[28];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_13 -1+d_[28];
	uint64_t out_0 = out_1 -1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_577{
    577,
    46192,
    46268,
    block_577_fn
    };

static void block_594_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_594{
    594,
    17336,
    17344,
    block_594_fn
    };

static void block_595_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[5] +1);
	uint64_t out_3 = out_14;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_595{
    595,
    48064,
    48072,
    block_595_fn
    };

static void block_596_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_6 = out_14 +d_[5];
	uint64_t out_37 = out_14 -1+d_[5];
	uint64_t out_38 = out_14 -1+d_[5]+d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_596{
    596,
    17348,
    17368,
    block_596_fn
    };

static void block_598_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_598{
    598,
    47500,
    47508,
    block_598_fn
    };

static void block_601_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_601{
    601,
    74328,
    74340,
    block_601_fn
    };

static void block_610_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_610{
    610,
    74756,
    74756,
    block_610_fn
    };

static void block_613_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_15;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_613{
    613,
    74344,
    74352,
    block_613_fn
    };

static void block_614_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_614{
    614,
    49596,
    49596,
    block_614_fn
    };

static void block_615_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+d_[7]+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[7]+t_5, +d_[2]+d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[6]+d_[7], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[9]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+d_[9]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+d_[9]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[9], +t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_6, vec_[1] +2+d_[1]+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[8]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[7]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_6);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_10, vec_[1] +2+d_[1]+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_11);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_10);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[7]+t_3, vec_[1] +1+d_[1]+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[7]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[7]+t_3);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[9], vec_[5] +1);
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_615{
    615,
    49600,
    49624,
    block_615_fn
    };


} // namespace CV32E40P_DSE