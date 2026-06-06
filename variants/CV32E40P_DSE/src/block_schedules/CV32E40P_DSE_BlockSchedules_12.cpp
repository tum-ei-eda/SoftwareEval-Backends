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

static void block_56_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_56{
    56,
    77992,
    77992,
    block_56_fn
    };

static void block_57_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_22 = out_19 +d_[5]+d_[6];
	uint64_t out_23 = out_19 +d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_15 = MAP_Explorer::max2(out_19 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +2);
	uint64_t out_24 = MAP_Explorer::max2(out_19 +d_[5]+d_[6]+d_[7], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +2);
	uint64_t out_5 = out_37 +1+d_[11];
	uint64_t out_38 = out_37 +d_[11];
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[15] = out_15;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_57{
    57,
    77996,
    78040,
    block_57_fn
    };

static void block_58_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +d_[6]+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]+d_[6]);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+t_3, +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[9]+t_4, +t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_10, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +d_[8]+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_12, +d_[8]+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_9, +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+t_10, +t_12);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_16, +t_14);
	uint64_t t_19 = MAP_Explorer::max2(+d_[12]+t_15, +1+t_17);
	uint64_t t_20 = MAP_Explorer::max2(+d_[12]+t_16, +t_18);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+d_[14]+t_19, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[13]+d_[14]+t_20, +t_18);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[10]+t_13, vec_[1] +2+d_[1]+d_[10]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[10]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[10]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[10]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[10]+t_13);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_19, vec_[1] +2+d_[1]+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_20);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+t_19);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_17, vec_[1] +2+d_[1]+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_17);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[13]+t_19, vec_[1] +1+d_[1]+d_[13]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[13]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[13]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[13]+t_19);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_21, vec_[1] +2+d_[1]+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_22);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_21);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[14];
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_58{
    58,
    33564,
    33600,
    block_58_fn
    };

static void block_59_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_59{
    59,
    33732,
    33736,
    block_59_fn
    };

static void block_60_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_60{
    60,
    33740,
    33740,
    block_60_fn
    };

static void block_61_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_61{
    61,
    33744,
    33744,
    block_61_fn
    };

static void block_63_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_63{
    63,
    33748,
    33752,
    block_63_fn
    };

static void block_64_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_64{
    64,
    33756,
    33760,
    block_64_fn
    };

static void block_65_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_65{
    65,
    33764,
    33768,
    block_65_fn
    };

static void block_66_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_20 = out_15 +d_[2];
	uint64_t out_23 = out_15 +d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_37 = out_15 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_12 = MAP_Explorer::max2(out_15 +1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[3] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_15 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[3] +2);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_66{
    66,
    33772,
    33808,
    block_66_fn
    };

static void block_67_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_12;
	uint64_t out_21 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_21 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_67{
    67,
    33856,
    33868,
    block_67_fn
    };

static void block_68_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_3 = out_14;
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_68{
    68,
    34504,
    34508,
    block_68_fn
    };

static void block_69_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_69{
    69,
    33972,
    33984,
    block_69_fn
    };

static void block_70_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_4);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_5, vec_[1] +2+d_[1]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_5);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_70{
    70,
    34164,
    34180,
    block_70_fn
    };

static void block_71_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[3]+d_[4], +d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(+2+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4]+d_[5], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+1+d_[4]+d_[5], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4]+d_[5]+d_[7], +1+t_3);
	uint64_t t_7 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7], +1+t_4);
	uint64_t t_8 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +t_5);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +d_[6]+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[6]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[6]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_9);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_10);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_8, +t_11);
	uint64_t t_15 = MAP_Explorer::max2(+t_12, +d_[8]+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +d_[8]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_14, +d_[8]+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+d_[9]+d_[11]+t_6, +1+t_12);
	uint64_t t_19 = MAP_Explorer::max2(+d_[9]+d_[11]+t_7, +1+t_13);
	uint64_t t_20 = MAP_Explorer::max2(+d_[9]+d_[11]+t_8, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+t_18, +1+t_15);
	uint64_t t_22 = MAP_Explorer::max2(+t_19, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[12]+t_18, +1+t_21);
	uint64_t t_25 = MAP_Explorer::max2(+d_[12]+t_19, +1+t_22);
	uint64_t t_26 = MAP_Explorer::max2(+d_[12]+t_20, +1+t_23);
	uint64_t t_27 = MAP_Explorer::max2(+t_24, +d_[10]+t_15);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +d_[10]+t_16);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_26, +d_[10]+t_17);
	uint64_t t_30 = MAP_Explorer::max2(+d_[13]+t_24, +1+t_27);
	uint64_t t_31 = MAP_Explorer::max2(+d_[13]+t_25, +1+t_28);
	uint64_t t_32 = MAP_Explorer::max2(+d_[13]+t_26, +t_29);
	uint64_t t_33 = MAP_Explorer::max2(+d_[13]+d_[14]+t_24, +1+t_30);
	uint64_t t_34 = MAP_Explorer::max2(+d_[13]+d_[14]+t_25, +1+t_31);
	uint64_t t_35 = MAP_Explorer::max2(+d_[13]+d_[14]+t_26, +1+t_32);
	uint64_t t_36 = MAP_Explorer::max2(+d_[15]+t_33, +2+t_27);
	uint64_t t_37 = MAP_Explorer::max2(+d_[15]+t_34, +2+t_28);
	uint64_t t_38 = MAP_Explorer::max2(+d_[15]+t_35, +1+t_29);
	uint64_t t_39 = MAP_Explorer::max2(+d_[15]+d_[16]+t_33, +1+t_36);
	uint64_t t_40 = MAP_Explorer::max2(+d_[15]+d_[16]+t_34, +1+t_37);
	uint64_t t_41 = MAP_Explorer::max2(+d_[15]+d_[16]+t_35, +1+t_38);
	uint64_t t_42 = MAP_Explorer::max2(+t_39, +2+t_0);
	uint64_t t_43 = MAP_Explorer::max2(+t_42, +1+t_30);
	uint64_t t_44 = MAP_Explorer::max2(+t_40, +1+t_1);
	uint64_t t_45 = MAP_Explorer::max2(+t_44, +1+t_31);
	uint64_t t_46 = MAP_Explorer::max2(+t_41, +t_2);
	uint64_t t_47 = MAP_Explorer::max2(+t_46, +1+t_32);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_39, vec_[1] +t_39);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_40);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_41);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_40);
	out_0 = MAP_Explorer::max2(out_0, vec_[29] +t_40);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_39);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_27, vec_[1] +3+t_27);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+t_28);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+t_29);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +3+t_28);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +3+t_28);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+t_27);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_30, vec_[1] +2+t_30);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_32);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_30);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_33, vec_[1] +2+t_33);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_34);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+t_35);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_34);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +2+t_34);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+t_33);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_36, vec_[1] +2+t_36);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+t_37);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+t_38);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+t_37);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[29] +2+t_37);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+t_36);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2]+d_[3], vec_[1] +2+d_[2]+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+d_[2]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[15]+t_33, vec_[1] +1+d_[15]+t_33);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[15]+t_34);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[15]+t_35);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[15]+t_34);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+d_[15]+t_34);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[15]+t_33);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_43, vec_[1] +2+t_43);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_45);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_45);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_45);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_43);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_71{
    71,
    34196,
    34244,
    block_71_fn
    };

static void block_72_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_72{
    72,
    35240,
    35244,
    block_72_fn
    };

static void block_73_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_5 = out_37 +1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_73{
    73,
    34268,
    34276,
    block_73_fn
    };

static void block_76_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -2+d_[2];


	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_76{
    76,
    85932,
    85940,
    block_76_fn
    };

static void block_87_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_4 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[4] = out_4;
	vec_[20] = out_20;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_87{
    87,
    3040,
    3048,
    block_87_fn
    };

static void block_90_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_90{
    90,
    85944,
    85952,
    block_90_fn
    };


} // namespace CV32E40P_DSE