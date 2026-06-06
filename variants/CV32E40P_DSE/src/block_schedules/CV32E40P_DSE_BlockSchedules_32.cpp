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

static void block_253_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_24 -1+d_[3];
	uint64_t out_25 = out_24 +d_[3]+d_[4];
	uint64_t out_26 = out_24 +d_[3]+d_[4]+d_[5];
	uint64_t out_27 = out_24 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_28 = out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_29 = out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_30 = out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_31 = out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_37 = out_24 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_38 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[4] +1);
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_1 = out_38 -1;


	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_253{
    253,
    63716,
    63760,
    block_253_fn
    };

static void block_254_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = out_14 +d_[3];
	uint64_t out_22 = out_14 +d_[3]+d_[4];
	uint64_t out_37 = out_14 -2+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_14 -2+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_13 -1+d_[4]+d_[5];
	uint64_t out_4 = out_6 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_254{
    254,
    63768,
    63792,
    block_254_fn
    };

static void block_255_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1]+d_[2], +3);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_0, vec_[1] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+t_0);
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_6 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_255{
    255,
    46504,
    46512,
    block_255_fn
    };

static void block_256_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_256{
    256,
    44128,
    44128,
    block_256_fn
    };

static void block_257_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_257{
    257,
    16044,
    16044,
    block_257_fn
    };

static void block_258_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_258{
    258,
    44132,
    44136,
    block_258_fn
    };

static void block_259_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_259{
    259,
    16048,
    16048,
    block_259_fn
    };

static void block_260_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[14], +d_[13]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[16], +d_[13]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[15]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[13]+d_[15]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[14]+d_[16]+d_[18], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[17]+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[17]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[20]+t_5, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[20]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+t_13, +d_[19]+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+1+t_14, +d_[19]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[22]+t_11, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[22]+t_12, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +1+t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +t_16);
	uint64_t t_21 = MAP_Explorer::max2(+t_19, +d_[21]+t_15);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_20, +d_[21]+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+d_[24]+t_17, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+d_[24]+t_18, +1+t_20);
	uint64_t t_25 = MAP_Explorer::max2(+t_23, +1+t_21);
	uint64_t t_26 = MAP_Explorer::max2(+t_24, +t_22);
	uint64_t t_27 = MAP_Explorer::max2(+t_25, +d_[23]+t_21);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_26, +d_[23]+t_22);
	uint64_t t_29 = MAP_Explorer::max2(+d_[26]+t_23, +1+t_25);
	uint64_t t_30 = MAP_Explorer::max2(+d_[26]+t_24, +1+t_26);
	uint64_t t_31 = MAP_Explorer::max2(+t_29, +1+t_27);
	uint64_t t_32 = MAP_Explorer::max2(+t_30, +t_28);
	uint64_t t_33 = MAP_Explorer::max2(+t_31, +d_[25]+t_27);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_32, +d_[25]+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+d_[28]+t_29, +1+t_31);
	uint64_t t_36 = MAP_Explorer::max2(+d_[28]+t_30, +1+t_32);
	uint64_t t_37 = MAP_Explorer::max2(+t_35, +1+t_33);
	uint64_t t_38 = MAP_Explorer::max2(+t_36, +t_34);
	uint64_t t_39 = MAP_Explorer::max2(+t_37, +d_[27]+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+1+t_38, +d_[27]+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+d_[30]+t_35, +1+t_37);
	uint64_t t_42 = MAP_Explorer::max2(+d_[30]+t_36, +1+t_38);
	uint64_t t_43 = MAP_Explorer::max2(+t_41, +1+t_39);
	uint64_t t_44 = MAP_Explorer::max2(+t_42, +t_40);
	uint64_t t_45 = MAP_Explorer::max2(+t_43, +d_[29]+t_39);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_44, +d_[29]+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+d_[32]+t_41, +1+t_43);
	uint64_t t_48 = MAP_Explorer::max2(+d_[32]+t_42, +1+t_44);
	uint64_t t_49 = MAP_Explorer::max2(+t_47, +1+t_45);
	uint64_t t_50 = MAP_Explorer::max2(+t_48, +t_46);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3+d_[2]+d_[3]+d_[4]);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +3+d_[2]);
	out_32 = MAP_Explorer::max2(out_32, vec_[3] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_20 = out_21 +d_[5];
	uint64_t out_0 = MAP_Explorer::max2(out_21 -3+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+t_47, vec_[5] +t_48);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_47);
	uint64_t out_3 = MAP_Explorer::max2(out_21 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[31]+t_45, vec_[5] +1+d_[31]+t_46);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[31]+t_45);
	uint64_t out_6 = MAP_Explorer::max2(out_21 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_21 -2+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+t_41, vec_[5] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_41);
	uint64_t out_38 = MAP_Explorer::max2(out_21 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+t_49, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_50);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_49);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = out_20 +d_[6];
	uint64_t out_16 = out_20 +d_[6]+d_[7];
	uint64_t out_17 = out_20 +d_[6]+d_[7]+d_[8];
	uint64_t out_18 = out_20 +d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_19 = out_20 +d_[6]+d_[7]+d_[8]+d_[9]+d_[10];


	vec_[10] = out_10;
	vec_[21] = out_21;
	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_260{
    260,
    7472,
    7560,
    block_260_fn
    };

static void block_261_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1]+d_[2], +3);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_0, vec_[1] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+t_0);
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_6 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_261{
    261,
    7716,
    7724,
    block_261_fn
    };

static void block_262_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_262{
    262,
    44140,
    44140,
    block_262_fn
    };

static void block_263_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_263{
    263,
    16052,
    16052,
    block_263_fn
    };

static void block_264_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[14], +d_[13]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[16], +d_[13]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[15]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[13]+d_[15]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[14]+d_[16]+d_[18], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[18], +d_[15]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[17]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[17]+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[15]+d_[17]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[20]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[20]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[18]+d_[20], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[20], +d_[17]);
	uint64_t t_18 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_19 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +d_[19]+t_10);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +d_[17]+d_[19]);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +d_[19]+t_11);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_19, +d_[19]+t_12);
	uint64_t t_24 = MAP_Explorer::max2(+d_[22]+t_13, +1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(+d_[20]+d_[22], +1+t_17);
	uint64_t t_26 = MAP_Explorer::max2(+d_[22]+t_14, +1+t_18);
	uint64_t t_27 = MAP_Explorer::max2(+d_[22]+t_15, +1+t_19);
	uint64_t t_28 = MAP_Explorer::max2(+t_24, +1+t_20);
	uint64_t t_29 = MAP_Explorer::max2(+t_25, +t_21);
	uint64_t t_30 = MAP_Explorer::max2(+d_[22], +d_[19]);
	uint64_t t_31 = MAP_Explorer::max2(+t_26, +t_22);
	uint64_t t_32 = MAP_Explorer::max2(+t_27, +t_23);
	uint64_t t_33 = MAP_Explorer::max2(+t_28, +d_[21]+t_20);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_29, +d_[21]+t_21);
	uint64_t t_35 = MAP_Explorer::max2(+1+t_30, +d_[19]+d_[21]);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +d_[21]+t_22);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +d_[21]+t_23);
	uint64_t t_38 = MAP_Explorer::max2(+d_[24]+t_24, +1+t_28);
	uint64_t t_39 = MAP_Explorer::max2(+d_[24]+t_25, +1+t_29);
	uint64_t t_40 = MAP_Explorer::max2(+d_[22]+d_[24], +1+t_30);
	uint64_t t_41 = MAP_Explorer::max2(+d_[24]+t_26, +1+t_31);
	uint64_t t_42 = MAP_Explorer::max2(+d_[24]+t_27, +1+t_32);
	uint64_t t_43 = MAP_Explorer::max2(+t_38, +1+t_33);
	uint64_t t_44 = MAP_Explorer::max2(+t_39, +t_34);
	uint64_t t_45 = MAP_Explorer::max2(+t_40, +t_35);
	uint64_t t_46 = MAP_Explorer::max2(+d_[24], +d_[21]);
	uint64_t t_47 = MAP_Explorer::max2(+t_41, +t_36);
	uint64_t t_48 = MAP_Explorer::max2(+t_42, +t_37);
	uint64_t t_49 = MAP_Explorer::max2(+t_43, +d_[23]+t_33);
	uint64_t t_50 = MAP_Explorer::max2(+1+t_44, +d_[23]+t_34);
	uint64_t t_51 = MAP_Explorer::max2(+1+t_45, +d_[23]+t_35);
	uint64_t t_52 = MAP_Explorer::max2(+1+t_46, +d_[21]+d_[23]);
	uint64_t t_53 = MAP_Explorer::max2(+1+t_47, +d_[23]+t_36);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_48, +d_[23]+t_37);
	uint64_t t_55 = MAP_Explorer::max2(+d_[26]+t_38, +1+t_43);
	uint64_t t_56 = MAP_Explorer::max2(+d_[26]+t_39, +1+t_44);
	uint64_t t_57 = MAP_Explorer::max2(+d_[26]+t_40, +1+t_45);
	uint64_t t_58 = MAP_Explorer::max2(+d_[24]+d_[26], +1+t_46);
	uint64_t t_59 = MAP_Explorer::max2(+d_[26]+t_41, +1+t_47);
	uint64_t t_60 = MAP_Explorer::max2(+d_[26]+t_42, +1+t_48);
	uint64_t t_61 = MAP_Explorer::max2(+t_55, +1+t_49);
	uint64_t t_62 = MAP_Explorer::max2(+t_56, +t_50);
	uint64_t t_63 = MAP_Explorer::max2(+t_57, +t_51);
	uint64_t t_64 = MAP_Explorer::max2(+t_58, +t_52);
	uint64_t t_65 = MAP_Explorer::max2(+d_[26], +d_[23]);
	uint64_t t_66 = MAP_Explorer::max2(+t_59, +t_53);
	uint64_t t_67 = MAP_Explorer::max2(+t_60, +t_54);
	uint64_t t_68 = MAP_Explorer::max2(+t_61, +d_[25]+t_49);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_62, +d_[25]+t_50);
	uint64_t t_70 = MAP_Explorer::max2(+1+t_63, +d_[25]+t_51);
	uint64_t t_71 = MAP_Explorer::max2(+1+t_64, +d_[25]+t_52);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_65, +d_[23]+d_[25]);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_66, +d_[25]+t_53);
	uint64_t t_74 = MAP_Explorer::max2(+1+t_67, +d_[25]+t_54);
	uint64_t t_75 = MAP_Explorer::max2(+d_[28]+t_55, +1+t_61);
	uint64_t t_76 = MAP_Explorer::max2(+d_[28]+t_56, +1+t_62);
	uint64_t t_77 = MAP_Explorer::max2(+d_[28]+t_57, +1+t_63);
	uint64_t t_78 = MAP_Explorer::max2(+d_[28]+t_58, +1+t_64);
	uint64_t t_79 = MAP_Explorer::max2(+d_[26]+d_[28], +1+t_65);
	uint64_t t_80 = MAP_Explorer::max2(+d_[28]+t_59, +1+t_66);
	uint64_t t_81 = MAP_Explorer::max2(+d_[28]+t_60, +1+t_67);
	uint64_t t_82 = MAP_Explorer::max2(+t_75, +1+t_68);
	uint64_t t_83 = MAP_Explorer::max2(+t_76, +t_69);
	uint64_t t_84 = MAP_Explorer::max2(+t_77, +t_70);
	uint64_t t_85 = MAP_Explorer::max2(+t_78, +t_71);
	uint64_t t_86 = MAP_Explorer::max2(+t_79, +t_72);
	uint64_t t_87 = MAP_Explorer::max2(+d_[28], +d_[25]);
	uint64_t t_88 = MAP_Explorer::max2(+t_80, +t_73);
	uint64_t t_89 = MAP_Explorer::max2(+t_81, +t_74);
	uint64_t t_90 = MAP_Explorer::max2(+t_82, +d_[27]+t_68);
	uint64_t t_91 = MAP_Explorer::max2(+1+t_83, +d_[27]+t_69);
	uint64_t t_92 = MAP_Explorer::max2(+1+t_84, +d_[27]+t_70);
	uint64_t t_93 = MAP_Explorer::max2(+1+t_85, +d_[27]+t_71);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_86, +d_[27]+t_72);
	uint64_t t_95 = MAP_Explorer::max2(+1+t_87, +d_[25]+d_[27]);
	uint64_t t_96 = MAP_Explorer::max2(+1+t_88, +d_[27]+t_73);
	uint64_t t_97 = MAP_Explorer::max2(+1+t_89, +d_[27]+t_74);
	uint64_t t_98 = MAP_Explorer::max2(+d_[30]+t_75, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+d_[30]+t_76, +1+t_83);
	uint64_t t_100 = MAP_Explorer::max2(+d_[30]+t_77, +1+t_84);
	uint64_t t_101 = MAP_Explorer::max2(+d_[30]+t_78, +1+t_85);
	uint64_t t_102 = MAP_Explorer::max2(+d_[30]+t_79, +1+t_86);
	uint64_t t_103 = MAP_Explorer::max2(+d_[28]+d_[30], +1+t_87);
	uint64_t t_104 = MAP_Explorer::max2(+d_[30]+t_80, +1+t_88);
	uint64_t t_105 = MAP_Explorer::max2(+d_[30]+t_81, +1+t_89);
	uint64_t t_106 = MAP_Explorer::max2(+t_98, +1+t_90);
	uint64_t t_107 = MAP_Explorer::max2(+t_99, +t_91);
	uint64_t t_108 = MAP_Explorer::max2(+t_100, +t_92);
	uint64_t t_109 = MAP_Explorer::max2(+t_101, +t_93);
	uint64_t t_110 = MAP_Explorer::max2(+t_102, +t_94);
	uint64_t t_111 = MAP_Explorer::max2(+t_103, +t_95);
	uint64_t t_112 = MAP_Explorer::max2(+t_104, +t_96);
	uint64_t t_113 = MAP_Explorer::max2(+t_105, +t_97);
	uint64_t t_114 = MAP_Explorer::max2(+t_106, +d_[29]+t_90);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_107, +d_[29]+t_91);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_108, +d_[29]+t_92);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_109, +d_[29]+t_93);
	uint64_t t_118 = MAP_Explorer::max2(+1+t_110, +d_[29]+t_94);
	uint64_t t_119 = MAP_Explorer::max2(+1+t_111, +d_[29]+t_95);
	uint64_t t_120 = MAP_Explorer::max2(+1+t_112, +d_[29]+t_96);
	uint64_t t_121 = MAP_Explorer::max2(+1+t_113, +d_[29]+t_97);
	uint64_t t_122 = MAP_Explorer::max2(+d_[32]+t_98, +1+t_106);
	uint64_t t_123 = MAP_Explorer::max2(+d_[32]+t_99, +1+t_107);
	uint64_t t_124 = MAP_Explorer::max2(+d_[32]+t_100, +1+t_108);
	uint64_t t_125 = MAP_Explorer::max2(+d_[32]+t_101, +1+t_109);
	uint64_t t_126 = MAP_Explorer::max2(+d_[32]+t_102, +1+t_110);
	uint64_t t_127 = MAP_Explorer::max2(+d_[32]+t_103, +1+t_111);
	uint64_t t_128 = MAP_Explorer::max2(+d_[32]+t_104, +1+t_112);
	uint64_t t_129 = MAP_Explorer::max2(+d_[32]+t_105, +1+t_113);
	uint64_t t_130 = MAP_Explorer::max2(+t_122, +1+t_114);
	uint64_t t_131 = MAP_Explorer::max2(+t_123, +t_115);
	uint64_t t_132 = MAP_Explorer::max2(+t_124, +t_116);
	uint64_t t_133 = MAP_Explorer::max2(+t_125, +t_117);
	uint64_t t_134 = MAP_Explorer::max2(+t_126, +t_118);
	uint64_t t_135 = MAP_Explorer::max2(+t_127, +t_119);
	uint64_t t_136 = MAP_Explorer::max2(+t_128, +t_120);
	uint64_t t_137 = MAP_Explorer::max2(+t_129, +t_121);
	uint64_t t_138 = MAP_Explorer::max2(+t_130, +d_[31]+t_114);
	uint64_t t_139 = MAP_Explorer::max2(+1+t_131, +d_[31]+t_115);
	uint64_t t_140 = MAP_Explorer::max2(+1+t_132, +d_[31]+t_116);
	uint64_t t_141 = MAP_Explorer::max2(+1+t_133, +d_[31]+t_117);
	uint64_t t_142 = MAP_Explorer::max2(+1+t_134, +d_[31]+t_118);
	uint64_t t_143 = MAP_Explorer::max2(+1+t_135, +d_[31]+t_119);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_136, +d_[31]+t_120);
	uint64_t t_145 = MAP_Explorer::max2(+1+t_137, +d_[31]+t_121);
	uint64_t t_146 = MAP_Explorer::max2(+d_[34]+t_122, +1+t_130);
	uint64_t t_147 = MAP_Explorer::max2(+d_[34]+t_123, +1+t_131);
	uint64_t t_148 = MAP_Explorer::max2(+d_[34]+t_124, +1+t_132);
	uint64_t t_149 = MAP_Explorer::max2(+d_[34]+t_125, +1+t_133);
	uint64_t t_150 = MAP_Explorer::max2(+d_[34]+t_126, +1+t_134);
	uint64_t t_151 = MAP_Explorer::max2(+d_[34]+t_127, +1+t_135);
	uint64_t t_152 = MAP_Explorer::max2(+d_[34]+t_128, +1+t_136);
	uint64_t t_153 = MAP_Explorer::max2(+d_[34]+t_129, +1+t_137);
	uint64_t t_154 = MAP_Explorer::max2(+t_146, +1+t_138);
	uint64_t t_155 = MAP_Explorer::max2(+t_147, +t_139);
	uint64_t t_156 = MAP_Explorer::max2(+t_148, +t_140);
	uint64_t t_157 = MAP_Explorer::max2(+t_149, +t_141);
	uint64_t t_158 = MAP_Explorer::max2(+t_150, +t_142);
	uint64_t t_159 = MAP_Explorer::max2(+t_151, +t_143);
	uint64_t t_160 = MAP_Explorer::max2(+t_152, +t_144);
	uint64_t t_161 = MAP_Explorer::max2(+t_153, +t_145);
	uint64_t t_162 = MAP_Explorer::max2(+t_154, +d_[33]+t_138);
	uint64_t t_163 = MAP_Explorer::max2(+1+t_155, +d_[33]+t_139);
	uint64_t t_164 = MAP_Explorer::max2(+1+t_156, +d_[33]+t_140);
	uint64_t t_165 = MAP_Explorer::max2(+1+t_157, +d_[33]+t_141);
	uint64_t t_166 = MAP_Explorer::max2(+1+t_158, +d_[33]+t_142);
	uint64_t t_167 = MAP_Explorer::max2(+1+t_159, +d_[33]+t_143);
	uint64_t t_168 = MAP_Explorer::max2(+1+t_160, +d_[33]+t_144);
	uint64_t t_169 = MAP_Explorer::max2(+1+t_161, +d_[33]+t_145);
	uint64_t t_170 = MAP_Explorer::max2(+d_[36]+t_146, +1+t_154);
	uint64_t t_171 = MAP_Explorer::max2(+d_[36]+t_147, +1+t_155);
	uint64_t t_172 = MAP_Explorer::max2(+d_[36]+t_148, +1+t_156);
	uint64_t t_173 = MAP_Explorer::max2(+d_[36]+t_149, +1+t_157);
	uint64_t t_174 = MAP_Explorer::max2(+d_[36]+t_150, +1+t_158);
	uint64_t t_175 = MAP_Explorer::max2(+d_[36]+t_151, +1+t_159);
	uint64_t t_176 = MAP_Explorer::max2(+d_[36]+t_152, +1+t_160);
	uint64_t t_177 = MAP_Explorer::max2(+d_[36]+t_153, +1+t_161);
	uint64_t t_178 = MAP_Explorer::max2(+t_170, +1+t_162);
	uint64_t t_179 = MAP_Explorer::max2(+t_171, +t_163);
	uint64_t t_180 = MAP_Explorer::max2(+t_172, +t_164);
	uint64_t t_181 = MAP_Explorer::max2(+t_173, +t_165);
	uint64_t t_182 = MAP_Explorer::max2(+t_174, +t_166);
	uint64_t t_183 = MAP_Explorer::max2(+t_175, +t_167);
	uint64_t t_184 = MAP_Explorer::max2(+t_176, +t_168);
	uint64_t t_185 = MAP_Explorer::max2(+t_177, +t_169);
	uint64_t t_186 = MAP_Explorer::max2(+t_178, +d_[35]+t_162);
	uint64_t t_187 = MAP_Explorer::max2(+1+t_179, +d_[35]+t_163);
	uint64_t t_188 = MAP_Explorer::max2(+1+t_180, +d_[35]+t_164);
	uint64_t t_189 = MAP_Explorer::max2(+1+t_181, +d_[35]+t_165);
	uint64_t t_190 = MAP_Explorer::max2(+1+t_182, +d_[35]+t_166);
	uint64_t t_191 = MAP_Explorer::max2(+1+t_183, +d_[35]+t_167);
	uint64_t t_192 = MAP_Explorer::max2(+1+t_184, +d_[35]+t_168);
	uint64_t t_193 = MAP_Explorer::max2(+1+t_185, +d_[35]+t_169);
	uint64_t t_194 = MAP_Explorer::max2(+d_[38]+t_170, +1+t_178);
	uint64_t t_195 = MAP_Explorer::max2(+d_[38]+t_171, +1+t_179);
	uint64_t t_196 = MAP_Explorer::max2(+d_[38]+t_172, +1+t_180);
	uint64_t t_197 = MAP_Explorer::max2(+d_[38]+t_173, +1+t_181);
	uint64_t t_198 = MAP_Explorer::max2(+d_[38]+t_174, +1+t_182);
	uint64_t t_199 = MAP_Explorer::max2(+d_[38]+t_175, +1+t_183);
	uint64_t t_200 = MAP_Explorer::max2(+d_[38]+t_176, +1+t_184);
	uint64_t t_201 = MAP_Explorer::max2(+d_[38]+t_177, +1+t_185);
	uint64_t t_202 = MAP_Explorer::max2(+t_194, +1+t_186);
	uint64_t t_203 = MAP_Explorer::max2(+t_195, +t_187);
	uint64_t t_204 = MAP_Explorer::max2(+t_196, +t_188);
	uint64_t t_205 = MAP_Explorer::max2(+t_197, +t_189);
	uint64_t t_206 = MAP_Explorer::max2(+t_198, +t_190);
	uint64_t t_207 = MAP_Explorer::max2(+t_199, +t_191);
	uint64_t t_208 = MAP_Explorer::max2(+t_200, +t_192);
	uint64_t t_209 = MAP_Explorer::max2(+t_201, +t_193);
	uint64_t t_210 = MAP_Explorer::max2(+t_202, +d_[37]+t_186);
	uint64_t t_211 = MAP_Explorer::max2(+1+t_203, +d_[37]+t_187);
	uint64_t t_212 = MAP_Explorer::max2(+1+t_204, +d_[37]+t_188);
	uint64_t t_213 = MAP_Explorer::max2(+1+t_205, +d_[37]+t_189);
	uint64_t t_214 = MAP_Explorer::max2(+1+t_206, +d_[37]+t_190);
	uint64_t t_215 = MAP_Explorer::max2(+1+t_207, +d_[37]+t_191);
	uint64_t t_216 = MAP_Explorer::max2(+1+t_208, +d_[37]+t_192);
	uint64_t t_217 = MAP_Explorer::max2(+1+t_209, +d_[37]+t_193);
	uint64_t t_218 = MAP_Explorer::max2(+d_[40]+t_194, +1+t_202);
	uint64_t t_219 = MAP_Explorer::max2(+d_[40]+t_195, +1+t_203);
	uint64_t t_220 = MAP_Explorer::max2(+d_[40]+t_196, +1+t_204);
	uint64_t t_221 = MAP_Explorer::max2(+d_[40]+t_197, +1+t_205);
	uint64_t t_222 = MAP_Explorer::max2(+d_[40]+t_198, +1+t_206);
	uint64_t t_223 = MAP_Explorer::max2(+d_[40]+t_199, +1+t_207);
	uint64_t t_224 = MAP_Explorer::max2(+d_[40]+t_200, +1+t_208);
	uint64_t t_225 = MAP_Explorer::max2(+d_[40]+t_201, +1+t_209);
	uint64_t t_226 = MAP_Explorer::max2(+t_218, +1+t_210);
	uint64_t t_227 = MAP_Explorer::max2(+t_219, +t_211);
	uint64_t t_228 = MAP_Explorer::max2(+t_220, +t_212);
	uint64_t t_229 = MAP_Explorer::max2(+t_221, +t_213);
	uint64_t t_230 = MAP_Explorer::max2(+t_222, +t_214);
	uint64_t t_231 = MAP_Explorer::max2(+t_223, +t_215);
	uint64_t t_232 = MAP_Explorer::max2(+t_224, +t_216);
	uint64_t t_233 = MAP_Explorer::max2(+t_225, +t_217);
	uint64_t t_234 = MAP_Explorer::max2(+t_226, +d_[39]+t_210);
	uint64_t t_235 = MAP_Explorer::max2(+1+t_227, +d_[39]+t_211);
	uint64_t t_236 = MAP_Explorer::max2(+1+t_228, +d_[39]+t_212);
	uint64_t t_237 = MAP_Explorer::max2(+1+t_229, +d_[39]+t_213);
	uint64_t t_238 = MAP_Explorer::max2(+1+t_230, +d_[39]+t_214);
	uint64_t t_239 = MAP_Explorer::max2(+1+t_231, +d_[39]+t_215);
	uint64_t t_240 = MAP_Explorer::max2(+1+t_232, +d_[39]+t_216);
	uint64_t t_241 = MAP_Explorer::max2(+1+t_233, +d_[39]+t_217);
	uint64_t t_242 = MAP_Explorer::max2(+d_[42]+t_218, +1+t_226);
	uint64_t t_243 = MAP_Explorer::max2(+d_[42]+t_219, +1+t_227);
	uint64_t t_244 = MAP_Explorer::max2(+d_[42]+t_220, +1+t_228);
	uint64_t t_245 = MAP_Explorer::max2(+d_[42]+t_221, +1+t_229);
	uint64_t t_246 = MAP_Explorer::max2(+d_[42]+t_222, +1+t_230);
	uint64_t t_247 = MAP_Explorer::max2(+d_[42]+t_223, +1+t_231);
	uint64_t t_248 = MAP_Explorer::max2(+d_[42]+t_224, +1+t_232);
	uint64_t t_249 = MAP_Explorer::max2(+d_[42]+t_225, +1+t_233);
	uint64_t t_250 = MAP_Explorer::max2(+t_242, +1+t_234);
	uint64_t t_251 = MAP_Explorer::max2(+t_243, +t_235);
	uint64_t t_252 = MAP_Explorer::max2(+t_244, +t_236);
	uint64_t t_253 = MAP_Explorer::max2(+t_245, +t_237);
	uint64_t t_254 = MAP_Explorer::max2(+t_246, +t_238);
	uint64_t t_255 = MAP_Explorer::max2(+t_247, +t_239);
	uint64_t t_256 = MAP_Explorer::max2(+t_248, +t_240);
	uint64_t t_257 = MAP_Explorer::max2(+t_249, +t_241);
	uint64_t t_258 = MAP_Explorer::max2(+t_250, +d_[41]+t_234);
	uint64_t t_259 = MAP_Explorer::max2(+1+t_251, +d_[41]+t_235);
	uint64_t t_260 = MAP_Explorer::max2(+1+t_252, +d_[41]+t_236);
	uint64_t t_261 = MAP_Explorer::max2(+1+t_253, +d_[41]+t_237);
	uint64_t t_262 = MAP_Explorer::max2(+1+t_254, +d_[41]+t_238);
	uint64_t t_263 = MAP_Explorer::max2(+1+t_255, +d_[41]+t_239);
	uint64_t t_264 = MAP_Explorer::max2(+1+t_256, +d_[41]+t_240);
	uint64_t t_265 = MAP_Explorer::max2(+1+t_257, +d_[41]+t_241);
	uint64_t t_266 = MAP_Explorer::max2(+d_[44]+t_242, +1+t_250);
	uint64_t t_267 = MAP_Explorer::max2(+d_[44]+t_243, +1+t_251);
	uint64_t t_268 = MAP_Explorer::max2(+d_[44]+t_244, +1+t_252);
	uint64_t t_269 = MAP_Explorer::max2(+d_[44]+t_245, +1+t_253);
	uint64_t t_270 = MAP_Explorer::max2(+d_[44]+t_246, +1+t_254);
	uint64_t t_271 = MAP_Explorer::max2(+d_[44]+t_247, +1+t_255);
	uint64_t t_272 = MAP_Explorer::max2(+d_[44]+t_248, +1+t_256);
	uint64_t t_273 = MAP_Explorer::max2(+d_[44]+t_249, +1+t_257);
	uint64_t t_274 = MAP_Explorer::max2(+t_266, +1+t_258);
	uint64_t t_275 = MAP_Explorer::max2(+t_267, +t_259);
	uint64_t t_276 = MAP_Explorer::max2(+t_268, +t_260);
	uint64_t t_277 = MAP_Explorer::max2(+t_269, +t_261);
	uint64_t t_278 = MAP_Explorer::max2(+t_270, +t_262);
	uint64_t t_279 = MAP_Explorer::max2(+t_271, +t_263);
	uint64_t t_280 = MAP_Explorer::max2(+t_272, +t_264);
	uint64_t t_281 = MAP_Explorer::max2(+t_273, +t_265);
	uint64_t t_282 = MAP_Explorer::max2(+d_[45]+t_266, +1+t_274);
	uint64_t t_283 = MAP_Explorer::max2(+d_[45]+t_267, +1+t_275);
	uint64_t t_284 = MAP_Explorer::max2(+d_[45]+t_268, +1+t_276);
	uint64_t t_285 = MAP_Explorer::max2(+d_[45]+t_269, +1+t_277);
	uint64_t t_286 = MAP_Explorer::max2(+d_[45]+t_270, +1+t_278);
	uint64_t t_287 = MAP_Explorer::max2(+d_[45]+t_271, +1+t_279);
	uint64_t t_288 = MAP_Explorer::max2(+d_[45]+t_272, +1+t_280);
	uint64_t t_289 = MAP_Explorer::max2(+d_[45]+t_273, +1+t_281);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+d_[2]);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3+d_[2]+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = out_20 +d_[5]+d_[6];
	uint64_t out_16 = out_20 +d_[5]+d_[6]+d_[7];
	uint64_t out_17 = out_20 +d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_18 = out_20 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_19 = out_20 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_3 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[43]+t_258, vec_[5] +1+d_[43]+t_259);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[43]+t_258);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[43]+t_260);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[43]+t_261);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[43]+t_262);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[43]+t_263);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[43]+t_264);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[43]+t_265);
	uint64_t out_6 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[6] +1);
	uint64_t out_24 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+t_282, vec_[4] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[5] +2+t_283);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_282);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +2+t_284);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +2+t_285);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2+t_286);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_287);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_288);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+t_289);
	uint64_t out_25 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+t_274, vec_[4] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+t_275);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+t_274);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+t_276);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+t_277);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+t_278);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+t_279);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+t_280);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+t_281);
	uint64_t out_14 = out_24 +d_[46];
	uint64_t out_37 = out_24 -1+d_[46];
	uint64_t out_38 = out_24 -1+d_[46]+d_[47];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[47];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[10] = out_10;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_264{
    264,
    7228,
    7352,
    block_264_fn
    };

static void block_556_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +d_[3]+d_[4];
	uint64_t out_24 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +1);
	uint64_t out_3 = out_25;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[9];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[9];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
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

extern const MAP_Explorer::Block block_556{
    556,
    7432,
    7468,
    block_556_fn
    };

static void block_557_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +d_[1]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+t_1);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[3] +1);
	uint64_t out_0 = out_38 -1;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_557{
    557,
    44144,
    44152,
    block_557_fn
    };

static void block_558_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14], +d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[10]+d_[11]+d_[12]+d_[13]+d_[14], +d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14], +d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16], +1+t_3);
	uint64_t t_7 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16], +t_4);
	uint64_t t_8 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16], +1+t_5);
	uint64_t t_9 = MAP_Explorer::max2(+d_[17]+t_6, +1+d_[8]+d_[9]+d_[10]+d_[11]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[17]+t_7, +1+d_[10]+d_[11]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[17]+t_8, +1+d_[9]+d_[10]+d_[11]);
	uint64_t t_12 = MAP_Explorer::max2(+d_[17]+d_[18]+t_6, +1+t_9);
	uint64_t t_13 = MAP_Explorer::max2(+d_[17]+d_[18]+t_7, +1+t_10);
	uint64_t t_14 = MAP_Explorer::max2(+d_[17]+d_[18]+t_8, +1+t_11);
	uint64_t t_15 = MAP_Explorer::max2(+t_12, +2+t_0);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_1);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_2);
	uint64_t t_18 = MAP_Explorer::max2(+d_[20]+t_12, +1+t_15);
	uint64_t t_19 = MAP_Explorer::max2(+d_[20]+t_13, +1+t_16);
	uint64_t t_20 = MAP_Explorer::max2(+d_[20]+t_14, +1+t_17);
	uint64_t t_21 = MAP_Explorer::max2(+t_18, +2+t_3);
	uint64_t t_22 = MAP_Explorer::max2(+t_19, +1+t_4);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +2+t_5);
	uint64_t t_24 = MAP_Explorer::max2(+t_18, +d_[19]+t_15);
	uint64_t t_25 = MAP_Explorer::max2(+t_24, +2+t_3);
	uint64_t t_26 = MAP_Explorer::max2(+t_19, +d_[19]+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+t_26, +1+t_4);
	uint64_t t_28 = MAP_Explorer::max2(+t_20, +d_[19]+t_17);
	uint64_t t_29 = MAP_Explorer::max2(+t_28, +2+t_5);
	uint64_t t_30 = MAP_Explorer::max2(+d_[22]+t_18, +1+t_21);
	uint64_t t_31 = MAP_Explorer::max2(+d_[22]+t_19, +1+t_22);
	uint64_t t_32 = MAP_Explorer::max2(+d_[22]+t_20, +1+t_23);
	uint64_t t_33 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_34 = MAP_Explorer::max2(+t_33, +1+d_[8]+d_[9]);
	uint64_t t_35 = MAP_Explorer::max2(+t_34, +2+t_6);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +1+t_27);
	uint64_t t_37 = MAP_Explorer::max2(+t_36, +2+t_7);
	uint64_t t_38 = MAP_Explorer::max2(+t_32, +1+t_29);
	uint64_t t_39 = MAP_Explorer::max2(+t_38, +1+d_[9]);
	uint64_t t_40 = MAP_Explorer::max2(+t_39, +2+t_8);
	uint64_t t_41 = MAP_Explorer::max2(+t_33, +d_[21]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+t_41, +1+d_[8]+d_[9]);
	uint64_t t_43 = MAP_Explorer::max2(+t_42, +2+t_6);
	uint64_t t_44 = MAP_Explorer::max2(+t_36, +d_[21]+t_27);
	uint64_t t_45 = MAP_Explorer::max2(+t_44, +2+t_7);
	uint64_t t_46 = MAP_Explorer::max2(+t_38, +d_[21]+t_29);
	uint64_t t_47 = MAP_Explorer::max2(+t_46, +1+d_[9]);
	uint64_t t_48 = MAP_Explorer::max2(+t_47, +2+t_8);
	uint64_t t_49 = MAP_Explorer::max2(+d_[24]+t_30, +1+t_35);
	uint64_t t_50 = MAP_Explorer::max2(+d_[24]+t_31, +1+t_37);
	uint64_t t_51 = MAP_Explorer::max2(+d_[24]+t_32, +1+t_40);
	uint64_t t_52 = MAP_Explorer::max2(+t_49, +1+t_43);
	uint64_t t_53 = MAP_Explorer::max2(+t_52, +2+t_9);
	uint64_t t_54 = MAP_Explorer::max2(+t_50, +1+t_45);
	uint64_t t_55 = MAP_Explorer::max2(+t_54, +2+t_10);
	uint64_t t_56 = MAP_Explorer::max2(+t_51, +1+t_48);
	uint64_t t_57 = MAP_Explorer::max2(+t_56, +2+t_11);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +d_[23]+t_43);
	uint64_t t_59 = MAP_Explorer::max2(+t_58, +2+t_9);
	uint64_t t_60 = MAP_Explorer::max2(+t_54, +d_[23]+t_45);
	uint64_t t_61 = MAP_Explorer::max2(+t_60, +2+t_10);
	uint64_t t_62 = MAP_Explorer::max2(+t_56, +d_[23]+t_48);
	uint64_t t_63 = MAP_Explorer::max2(+t_62, +2+t_11);
	uint64_t t_64 = MAP_Explorer::max2(+d_[26]+t_49, +1+t_53);
	uint64_t t_65 = MAP_Explorer::max2(+d_[26]+t_50, +1+t_55);
	uint64_t t_66 = MAP_Explorer::max2(+d_[26]+t_51, +1+t_57);
	uint64_t t_67 = MAP_Explorer::max2(+t_64, +1+t_59);
	uint64_t t_68 = MAP_Explorer::max2(+t_67, +1+d_[8]+d_[9]+d_[10]+d_[11]);
	uint64_t t_69 = MAP_Explorer::max2(+t_65, +1+t_61);
	uint64_t t_70 = MAP_Explorer::max2(+t_69, +1+d_[10]+d_[11]);
	uint64_t t_71 = MAP_Explorer::max2(+t_66, +1+t_63);
	uint64_t t_72 = MAP_Explorer::max2(+t_71, +1+d_[9]+d_[10]+d_[11]);
	uint64_t t_73 = MAP_Explorer::max2(+d_[27]+t_64, +1+t_68);
	uint64_t t_74 = MAP_Explorer::max2(+d_[27]+t_65, +1+t_70);
	uint64_t t_75 = MAP_Explorer::max2(+d_[27]+t_66, +1+t_72);
	uint64_t t_76 = MAP_Explorer::max2(+d_[28]+t_73, +1+t_68);
	uint64_t t_77 = MAP_Explorer::max2(+t_76, +1+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	uint64_t t_78 = MAP_Explorer::max2(+d_[28]+t_74, +1+t_70);
	uint64_t t_79 = MAP_Explorer::max2(+t_78, +1+d_[10]+d_[11]+d_[12]+d_[13]);
	uint64_t t_80 = MAP_Explorer::max2(+d_[28]+t_75, +1+t_72);
	uint64_t t_81 = MAP_Explorer::max2(+t_80, +1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[25]+t_59, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[25]+t_59);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[25]+t_59);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[25]+t_61);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +2+d_[25]+t_63);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[25]+t_59);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[25]+t_59);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[5] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_3, vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+t_4);
	out_14 = MAP_Explorer::max2(out_14, vec_[5] +3+t_5);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3+d_[4]+d_[5]+d_[6]+t_3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_3);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_6, vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +3+t_7);
	out_15 = MAP_Explorer::max2(out_15, vec_[5] +3+t_8);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +3+d_[4]+d_[5]+d_[6]+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_6);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_9, vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_9);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +3+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_9);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +3+t_10);
	out_16 = MAP_Explorer::max2(out_16, vec_[5] +3+t_11);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +3+d_[4]+d_[5]+d_[6]+t_9);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_9);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+d_[10]+d_[11]+d_[12]+d_[13]);
	out_17 = MAP_Explorer::max2(out_17, vec_[5] +2+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_68, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_68);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_68);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_70);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+t_72);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[4]+d_[5]+d_[6]+t_68);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_68);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_0, vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1+t_1);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2+t_2);
	out_20 = MAP_Explorer::max2(out_20, vec_[6] +3+d_[4]+d_[5]+d_[6]+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_73, vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_73);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_73);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_74);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_75);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]+d_[5]+d_[6]+t_73);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_73);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_77, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_77);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_77);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_81);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[4]+d_[5]+d_[6]+t_77);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+t_77);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_0 = out_19 -2+d_[28];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_558{
    558,
    15892,
    15984,
    block_558_fn
    };

static void block_560_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_19 = out_16 +d_[4];
	uint64_t out_15 = MAP_Explorer::max2(out_16 +d_[4]+d_[5], vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 -1+d_[4]+d_[5]+d_[6]+d_[7], vec_[6] +1+d_[7]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[8];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[8];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_560{
    560,
    15988,
    16020,
    block_560_fn
    };

static void block_561_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_561{
    561,
    47320,
    47324,
    block_561_fn
    };

static void block_562_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_562{
    562,
    47328,
    47336,
    block_562_fn
    };

static void block_563_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_563{
    563,
    47340,
    47344,
    block_563_fn
    };

static void block_566_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_566{
    566,
    47384,
    47388,
    block_566_fn
    };


} // namespace CV32E40P_DSE