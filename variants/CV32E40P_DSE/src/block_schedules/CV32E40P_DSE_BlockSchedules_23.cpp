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

static void block_59_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_59{
    59,
    44112,
    44116,
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
    44120,
    44120,
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
    44124,
    44124,
    block_61_fn
    };

static void block_63_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_63{
    63,
    44128,
    44132,
    block_63_fn
    };

static void block_64_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_64{
    64,
    44136,
    44140,
    block_64_fn
    };

static void block_65_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_65{
    65,
    44144,
    44148,
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
    44152,
    44188,
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
    44236,
    44248,
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
    44884,
    44888,
    block_68_fn
    };

static void block_69_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_69{
    69,
    44352,
    44364,
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

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_5, vec_[1] +d_[1]+t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[26] +t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_5);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_3 = out_19;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_70{
    70,
    44544,
    44560,
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
	uint64_t t_15 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +d_[8]+t_9);
	uint64_t t_17 = MAP_Explorer::max2(+t_13, +d_[8]+t_10);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_14, +d_[8]+t_11);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_15, +d_[6]+d_[8]);
	uint64_t t_20 = MAP_Explorer::max2(+d_[9]+d_[11]+t_6, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+d_[9]+d_[11]+t_7, +1+t_13);
	uint64_t t_22 = MAP_Explorer::max2(+d_[9]+d_[11]+t_8, +1+t_14);
	uint64_t t_23 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_15);
	uint64_t t_24 = MAP_Explorer::max2(+t_20, +1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(+t_21, +1+t_17);
	uint64_t t_26 = MAP_Explorer::max2(+t_22, +t_18);
	uint64_t t_27 = MAP_Explorer::max2(+t_23, +t_19);
	uint64_t t_28 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_29 = MAP_Explorer::max2(+d_[12]+t_20, +1+t_24);
	uint64_t t_30 = MAP_Explorer::max2(+d_[12]+t_21, +1+t_25);
	uint64_t t_31 = MAP_Explorer::max2(+d_[12]+t_22, +1+t_26);
	uint64_t t_32 = MAP_Explorer::max2(+d_[12]+t_23, +1+t_27);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+d_[12], +1+t_28);
	uint64_t t_34 = MAP_Explorer::max2(+t_29, +d_[10]+t_16);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +d_[10]+t_17);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +d_[10]+t_18);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +d_[10]+t_19);
	uint64_t t_38 = MAP_Explorer::max2(+1+t_33, +d_[8]+d_[10]);
	uint64_t t_39 = MAP_Explorer::max2(+1+d_[12], +d_[10]);
	uint64_t t_40 = MAP_Explorer::max2(+d_[13]+t_29, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+d_[13]+t_30, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[13]+t_31, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[13]+t_32, +t_37);
	uint64_t t_44 = MAP_Explorer::max2(+d_[13]+t_33, +t_38);
	uint64_t t_45 = MAP_Explorer::max2(+d_[12]+d_[13], +t_39);
	uint64_t t_46 = MAP_Explorer::max2(+d_[13]+d_[14]+t_29, +1+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+d_[14]+t_30, +1+t_41);
	uint64_t t_48 = MAP_Explorer::max2(+d_[13]+d_[14]+t_31, +1+t_42);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+d_[14]+t_32, +1+t_43);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+d_[14]+t_33, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14], +1+t_45);
	uint64_t t_52 = MAP_Explorer::max2(+d_[15]+t_46, +2+t_34);
	uint64_t t_53 = MAP_Explorer::max2(+d_[15]+t_47, +2+t_35);
	uint64_t t_54 = MAP_Explorer::max2(+d_[15]+t_48, +1+t_36);
	uint64_t t_55 = MAP_Explorer::max2(+d_[15]+t_49, +1+t_37);
	uint64_t t_56 = MAP_Explorer::max2(+d_[15]+t_50, +1+t_38);
	uint64_t t_57 = MAP_Explorer::max2(+d_[15]+t_51, +1+t_39);
	uint64_t t_58 = MAP_Explorer::max2(+d_[15]+d_[16]+t_46, +1+t_52);
	uint64_t t_59 = MAP_Explorer::max2(+d_[15]+d_[16]+t_47, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+d_[15]+d_[16]+t_48, +1+t_54);
	uint64_t t_61 = MAP_Explorer::max2(+d_[15]+d_[16]+t_49, +1+t_55);
	uint64_t t_62 = MAP_Explorer::max2(+d_[15]+d_[16]+t_50, +1+t_56);
	uint64_t t_63 = MAP_Explorer::max2(+d_[15]+d_[16]+t_51, +1+t_57);
	uint64_t t_64 = MAP_Explorer::max2(+t_58, +2+t_0);
	uint64_t t_65 = MAP_Explorer::max2(+t_64, +1+t_40);
	uint64_t t_66 = MAP_Explorer::max2(+t_59, +1+t_1);
	uint64_t t_67 = MAP_Explorer::max2(+t_66, +1+t_41);
	uint64_t t_68 = MAP_Explorer::max2(+t_60, +t_2);
	uint64_t t_69 = MAP_Explorer::max2(+t_68, +1+t_42);
	uint64_t t_70 = MAP_Explorer::max2(+t_61, +1+t_43);
	uint64_t t_71 = MAP_Explorer::max2(+t_62, +1+t_44);
	uint64_t t_72 = MAP_Explorer::max2(+t_63, +1+t_45);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_58, vec_[1] +t_58);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_59);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_60);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[15]+d_[16]);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_59);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[16]);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +t_61);
	out_0 = MAP_Explorer::max2(out_0, vec_[25] +t_62);
	out_0 = MAP_Explorer::max2(out_0, vec_[26] +d_[16]);
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +t_63);
	out_0 = MAP_Explorer::max2(out_0, vec_[29] +t_59);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_58);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_34, vec_[1] +3+t_34);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+t_35);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+t_36);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +3+t_35);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+t_37);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+t_38);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+t_39);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +3+t_35);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+t_34);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_40, vec_[1] +2+t_40);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_42);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_43);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+t_44);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_45);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_40);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_46, vec_[1] +2+t_46);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_47);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+t_48);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_47);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_49);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+t_50);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[27] +2+t_51);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +2+t_47);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+t_46);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_52, vec_[1] +2+t_52);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+t_53);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+t_54);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +2+d_[15]);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+t_53);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+t_55);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+t_56);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +2+t_57);
	out_25 = MAP_Explorer::max2(out_25, vec_[29] +2+t_53);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+t_52);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2]+d_[3], vec_[1] +2+d_[2]+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+d_[2]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[15]+t_46, vec_[1] +1+d_[15]+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[15]+t_47);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[15]+t_48);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[15]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[15]+t_47);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[15]+t_49);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[15]+t_50);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+d_[15]+t_51);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+d_[15]+t_47);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[15]+t_46);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_65, vec_[1] +2+t_65);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_67);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_69);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[15]+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_67);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_70);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+t_71);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+t_72);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_67);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_65);
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
    44576,
    44624,
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
    45620,
    45624,
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
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[22] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_73{
    73,
    44648,
    44656,
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
    96312,
    96320,
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
    9432,
    9440,
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
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_90{
    90,
    96324,
    96332,
    block_90_fn
    };

static void block_91_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2]+d_[3], vec_[1] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]+d_[3]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_91{
    91,
    96336,
    96348,
    block_91_fn
    };

static void block_99_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_99{
    99,
    44660,
    44668,
    block_99_fn
    };

static void block_100_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_100{
    100,
    44672,
    44676,
    block_100_fn
    };


} // namespace CV32E40P_DSE