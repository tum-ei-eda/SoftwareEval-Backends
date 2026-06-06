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

static void block_113_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7]+d_[8], +d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[8], +d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[10], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[8]+d_[10], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[10]+d_[11], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+d_[10]+d_[11], +1+t_3);
	uint64_t t_6 = MAP_Explorer::max2(+d_[12]+t_4, +1+d_[7]);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+d_[12]+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+d_[12]+t_4, +d_[9]+t_0);
	uint64_t t_10 = MAP_Explorer::max2(+t_9, +1+d_[7]);
	uint64_t t_11 = MAP_Explorer::max2(+t_10, +1+t_2);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[12]+t_5, +d_[9]+t_1);
	uint64_t t_13 = MAP_Explorer::max2(+t_12, +2+t_3);
	uint64_t t_14 = MAP_Explorer::max2(+1+d_[11]+d_[12], +d_[9]);
	uint64_t t_15 = MAP_Explorer::max2(+d_[12]+d_[14]+t_4, +1+t_7);
	uint64_t t_16 = MAP_Explorer::max2(+d_[12]+d_[14]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_16, +t_13);
	uint64_t t_19 = MAP_Explorer::max2(+d_[11]+d_[12]+d_[14], +t_14);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +3+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +3);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +3+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_29 = out_27 +d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4]+d_[5]+d_[13]+t_11, vec_[12] +1+d_[13]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[13]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[12]+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[13]+t_14);
	uint64_t out_5 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4]+d_[5]+t_17, vec_[12] +2+t_18);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +2+d_[12]+d_[14]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[14]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_19);
	uint64_t out_13 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4]+d_[5]+d_[7], vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[7]);
	uint64_t out_14 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4]+d_[5]+t_4, vec_[12] +2+t_5);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+t_4);
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2+d_[11]);
	uint64_t out_18 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4]+d_[5]+t_2, vec_[12] +2+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_27 -1+d_[3]+d_[4], vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_27 -2+d_[3]+d_[4]+d_[5]+d_[12]+t_4, vec_[12] +1+d_[12]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[12]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[11]+d_[12]);
	uint64_t out_38 = MAP_Explorer::max2(out_27 -2+d_[3]+d_[4]+d_[5]+t_15, vec_[12] +1+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1+d_[12]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+d_[11]+d_[12]+d_[14]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[29] = out_29;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_113{
    113,
    66220,
    66264,
    block_113_fn
    };

static void block_115_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_6 = out_12 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_13 = out_12 +d_[3]+d_[4];
	uint64_t out_22 = out_12 +d_[3]+d_[4]+d_[5];
	uint64_t out_23 = out_12 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_26 = out_12 +d_[3];
	uint64_t out_37 = out_12 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_38 = out_12 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[8];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_115{
    115,
    66268,
    66300,
    block_115_fn
    };

static void block_116_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_116{
    116,
    109844,
    109848,
    block_116_fn
    };

static void block_117_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +d_[6]+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[2]+d_[4]+d_[6]);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[6]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[9]+t_6, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +t_13);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_14, vec_[1] +d_[1]+t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_15);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_16);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +t_16);
	out_0 = MAP_Explorer::max2(out_0, vec_[19] +t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] );
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_14);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_11, vec_[1] +2+d_[1]+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[8]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[8]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[8]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +2+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_11);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_5, vec_[1] +1+d_[1]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_17, vec_[1] +2+d_[1]+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_18);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_17);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_117{
    117,
    109852,
    109872,
    block_117_fn
    };

static void block_118_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_118{
    118,
    110032,
    110040,
    block_118_fn
    };

static void block_119_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[5]+d_[6], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[4]+d_[5]+d_[6], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[8], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[8], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[7]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[7]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[7]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[8], +d_[7]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8]+d_[10], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[9]+t_6, vec_[1] +2+d_[1]+d_[9]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[9]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[9]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[9]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[5]+d_[6]+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[6]+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[9]+t_6);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_13, vec_[1] +2+d_[1]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_16);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[5]+d_[6]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[6]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_13);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_10, vec_[1] +1+d_[1]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[5]+d_[6]+d_[8]+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+d_[6]+d_[8]+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_10);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[6]+d_[8], vec_[4] +1);


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_119{
    119,
    110672,
    110700,
    block_119_fn
    };

static void block_120_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_15 -1+d_[2];
	uint64_t out_3 = MAP_Explorer::max2(out_15 +d_[2]+d_[3], vec_[3] +d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_15 -1+d_[2]+d_[4], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_120{
    120,
    117468,
    117480,
    block_120_fn
    };

static void block_121_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_121{
    121,
    117484,
    117488,
    block_121_fn
    };

static void block_122_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_14 +d_[4];
	uint64_t out_37 = out_14 -1+d_[4];
	uint64_t out_38 = out_14 -1+d_[4]+d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_122{
    122,
    117492,
    117512,
    block_122_fn
    };

static void block_123_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_123{
    123,
    110704,
    110708,
    block_123_fn
    };

static void block_124_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_12;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_124{
    124,
    110712,
    110724,
    block_124_fn
    };

static void block_125_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_125{
    125,
    110044,
    110044,
    block_125_fn
    };

static void block_126_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[3]+d_[4]+t_1, vec_[1] +1+d_[3]+d_[4]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[3]+d_[4]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[3]+d_[4]+t_1);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_126{
    126,
    110076,
    110096,
    block_126_fn
    };

static void block_127_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +3+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +3+d_[1]+d_[2]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+d_[2]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3+t_4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_4);
	out_22 = MAP_Explorer::max2(out_22, vec_[19] +3+d_[2]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +3+d_[2]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_6 = out_22 -1+d_[7]+d_[8]+d_[9];
	uint64_t out_23 = out_22 +d_[7];
	uint64_t out_24 = out_22 +d_[7]+d_[8];
	uint64_t out_37 = out_22 -2+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_22 -2+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_3 = out_24;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_127{
    127,
    109876,
    109912,
    block_127_fn
    };

static void block_128_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_3 = out_18;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_128{
    128,
    91712,
    91720,
    block_128_fn
    };

static void block_129_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_129{
    129,
    91552,
    91556,
    block_129_fn
    };

static void block_130_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[4]+d_[5], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +t_1);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[6]+t_0, vec_[1] +2+d_[1]+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[6]+t_0);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -2+d_[4]+d_[5]+d_[7];
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_14 +d_[4];
	uint64_t out_37 = out_14 -1+d_[4]+d_[5];


	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_130{
    130,
    91560,
    91580,
    block_130_fn
    };

static void block_131_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_3 = out_13;
	uint64_t out_6 = out_13 -1+d_[3];
	uint64_t out_37 = out_13 -2+d_[3];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_131{
    131,
    91584,
    91600,
    block_131_fn
    };

static void block_132_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_132{
    132,
    78796,
    78796,
    block_132_fn
    };

static void block_133_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_133{
    133,
    78804,
    78816,
    block_133_fn
    };


} // namespace CV32E40P_DSE