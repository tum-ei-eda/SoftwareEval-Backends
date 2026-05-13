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

static void block_250_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3+d_[2]+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[4] +3+d_[2]+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +3+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_23;
	uint64_t out_6 = out_23 -1+d_[4];
	uint64_t out_37 = out_23 -2+d_[4];
	uint64_t out_38 = out_23 -2+d_[4]+d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_250{
    250,
    68248,
    68268,
    block_250_fn
    };

static void block_663_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[29] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_663{
    663,
    46180,
    46188,
    block_663_fn
    };

static void block_667_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[5]+d_[6], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[7]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8], +d_[7]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8]+d_[10], +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +1+t_4);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +t_5);
	uint64_t t_11 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_6);
	uint64_t t_12 = MAP_Explorer::max2(+t_9, +d_[9]+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[9]+t_5);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +d_[9]+t_6);
	uint64_t t_15 = MAP_Explorer::max2(+d_[12]+t_7, +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[12]+t_8, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8]+d_[10]+d_[12], +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +1+t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +t_13);
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+t_15, +1+t_18);
	uint64_t t_22 = MAP_Explorer::max2(+d_[13]+t_16, +1+t_19);
	uint64_t t_23 = MAP_Explorer::max2(+d_[13]+t_17, +1+t_20);
	uint64_t t_24 = MAP_Explorer::max2(+d_[14]+t_21, +1+t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[14]+t_22, +1+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+d_[14]+t_23, +1+t_20);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_12, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[11]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[11]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+d_[6]+d_[11]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[11]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_12);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_18, vec_[1] +2+d_[1]+d_[2]+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+d_[6]+t_20);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_18);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_21, vec_[1] +1+d_[1]+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[6]+t_23);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_21);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_24, vec_[1] +2+d_[1]+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[6]+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_24);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = out_37 +1;
	uint64_t out_0 = out_13 -2+d_[14];


	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_667{
    667,
    46212,
    46252,
    block_667_fn
    };

static void block_668_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_0 = out_37 -1+d_[5];
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_668{
    668,
    46256,
    46272,
    block_668_fn
    };

static void block_695_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[3]+d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[7]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[7]+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[5]+d_[7]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+d_[9], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9], +d_[7]);
	uint64_t t_18 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_19 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_20 = MAP_Explorer::max2(+d_[10]+t_13, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_19);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+t_20, vec_[1] +d_[1]+d_[2]+t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +t_21);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_22);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +d_[2]+t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+t_20);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[16] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +3+d_[1]+d_[2]+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +3+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_11);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_12);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +3+d_[2]+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_16, vec_[1] +2+d_[1]+d_[2]+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_17);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_18);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_19);
	out_13 = MAP_Explorer::max2(out_13, vec_[16] +2+d_[2]+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_16);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_13, vec_[1] +1+d_[1]+d_[2]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[2]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_3 = out_12;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_695{
    695,
    67432,
    67460,
    block_695_fn
    };

static void block_696_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[3]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[1]+d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[2]+d_[4]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6], +d_[1]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[1]+d_[3]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[5]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[5]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[1]+d_[3]+d_[5]);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[3]+d_[5]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8]+t_6, +1+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[8]+t_7, +t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_25 = MAP_Explorer::max2(+d_[9]+t_16, +1+t_20);
	uint64_t t_26 = MAP_Explorer::max2(+d_[9]+t_17, +1+t_21);
	uint64_t t_27 = MAP_Explorer::max2(+d_[9]+t_18, +t_22);
	uint64_t t_28 = MAP_Explorer::max2(+d_[9]+t_19, +1+t_23);
	uint64_t t_29 = MAP_Explorer::max2(+d_[8]+d_[9], +1+t_24);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[7]+t_12, vec_[1] +2+d_[7]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[7]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[7]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[7]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[7]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[7]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[7]+t_12);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_25, vec_[1] +2+t_25);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_26);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2+t_27);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+t_26);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[15] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +2+d_[9]);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_26);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+t_28);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+t_29);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+t_25);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_20, vec_[1] +2+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_21);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1+t_22);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_21);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_21);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_23);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+t_24);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+t_20);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[10]+t_25, vec_[1] +1+d_[10]+t_25);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[10]+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[10]+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[10]+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[10]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[9]+d_[10]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[10]+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[10]+t_28);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[10]+t_29);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[10]+t_25);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[11], vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_696{
    696,
    67464,
    67492,
    block_696_fn
    };

static void block_701_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_701{
    701,
    87932,
    87940,
    block_701_fn
    };

static void block_702_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = out_16 -1+d_[3];
	uint64_t out_15 = MAP_Explorer::max2(out_16 +d_[3], vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_16 -1+d_[3]+d_[4], vec_[23] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_702{
    702,
    87944,
    87960,
    block_702_fn
    };

static void block_706_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[8], +d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[8]+d_[10]+d_[11], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[10]+d_[11], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +d_[9]+t_0);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[7]+d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[12]+t_3, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[12]+t_4, +t_6);
	uint64_t t_9 = MAP_Explorer::max2(+d_[12]+d_[13]+t_3, +1+t_7);
	uint64_t t_10 = MAP_Explorer::max2(+d_[12]+d_[13]+t_4, +1+t_8);

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_5 = out_24 +d_[3]+d_[4];
	uint64_t out_12 = out_24 +d_[3]+d_[4]+d_[5];
	uint64_t out_25 = out_24 +d_[3];
	uint64_t out_6 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+t_7, vec_[4] +2+t_8);
	out_6 = MAP_Explorer::max2(out_6, vec_[13] +2+t_8);
	uint64_t out_13 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+t_5, vec_[4] +2+t_6);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_6);
	uint64_t out_14 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+t_1, vec_[4] +2+t_2);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+t_2);
	uint64_t out_37 = MAP_Explorer::max2(out_24 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[12]+t_3, vec_[4] +1+d_[12]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[12]+t_4);
	uint64_t out_38 = MAP_Explorer::max2(out_24 -2+d_[3]+d_[4]+d_[5]+d_[6]+t_9, vec_[4] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_10);
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[25] = out_25;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_706{
    706,
    67580,
    67624,
    block_706_fn
    };

static void block_15_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -2+d_[2];
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_15{
    15,
    70768,
    70776,
    block_15_fn
    };

static void block_21_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_21{
    21,
    71784,
    71788,
    block_21_fn
    };

static void block_30_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_30{
    30,
    21796,
    21804,
    block_30_fn
    };

static void block_31_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +2);

	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +2+d_[2]);
	out_9 = MAP_Explorer::max2(out_9, vec_[10] +2+d_[2]);
	out_9 = MAP_Explorer::max2(out_9, vec_[16] +2+d_[2]);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = out_9 -2+d_[3]+d_[4];
	uint64_t out_4 = out_9 +d_[3]+t_0;
	uint64_t out_17 = out_9 +d_[3];
	uint64_t out_37 = out_9 -1+d_[3];
	uint64_t out_38 = out_9 -1+d_[3]+t_0;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;


	vec_[9] = out_9;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_31{
    31,
    21864,
    21880,
    block_31_fn
    };

static void block_32_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[3]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[1]+d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[2]+d_[4]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6], +d_[1]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[1]+d_[3]);
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +d_[5]+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[5]+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[1]+d_[3]+d_[5]);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+t_6, +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_7, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +t_13);
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +d_[7]+t_11);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_18, +d_[7]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +d_[7]+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[10]+t_16, +t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +1+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+t_24, +t_21);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_25, +t_22);
	uint64_t t_29 = MAP_Explorer::max2(+t_26, +d_[9]+t_20);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[9]+t_21);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_28, +d_[9]+t_22);
	uint64_t t_32 = MAP_Explorer::max2(+d_[12]+t_23, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[12]+t_24, +1+t_27);
	uint64_t t_34 = MAP_Explorer::max2(+d_[12]+t_25, +t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+t_33, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_34, +t_31);
	uint64_t t_38 = MAP_Explorer::max2(+t_35, +d_[11]+t_29);
	uint64_t t_39 = MAP_Explorer::max2(+1+t_36, +d_[11]+t_30);
	uint64_t t_40 = MAP_Explorer::max2(+1+t_37, +d_[11]+t_31);
	uint64_t t_41 = MAP_Explorer::max2(+d_[14]+t_32, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[14]+t_33, +1+t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[14]+t_34, +t_37);
	uint64_t t_44 = MAP_Explorer::max2(+t_41, +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+t_42, +t_39);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_43, +t_40);
	uint64_t t_47 = MAP_Explorer::max2(+t_44, +d_[13]+t_38);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_45, +d_[13]+t_39);
	uint64_t t_49 = MAP_Explorer::max2(+1+t_46, +d_[13]+t_40);
	uint64_t t_50 = MAP_Explorer::max2(+d_[16]+t_41, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+d_[16]+t_42, +1+t_45);
	uint64_t t_52 = MAP_Explorer::max2(+d_[16]+t_43, +t_46);
	uint64_t t_53 = MAP_Explorer::max2(+t_50, +1+t_47);
	uint64_t t_54 = MAP_Explorer::max2(+t_51, +t_48);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_52, +t_49);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_50, vec_[1] +t_50);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_51);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_52);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +t_51);
	out_0 = MAP_Explorer::max2(out_0, vec_[18] +t_51);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_50);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[15]+t_47, vec_[1] +2+d_[15]+t_47);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[15]+t_49);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[15]+t_47);
	uint64_t out_4 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_53, vec_[1] +2+t_53);
	out_4 = MAP_Explorer::max2(out_4, vec_[2] +2+t_54);
	out_4 = MAP_Explorer::max2(out_4, vec_[3] +1+t_55);
	out_4 = MAP_Explorer::max2(out_4, vec_[5] +2);
	out_4 = MAP_Explorer::max2(out_4, vec_[15] +2+t_54);
	out_4 = MAP_Explorer::max2(out_4, vec_[18] +2+t_54);
	out_4 = MAP_Explorer::max2(out_4, vec_[36] +2+d_[0]+t_53);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_41, vec_[1] +1+t_41);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_43);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_41);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +1, vec_[5] +1);


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
}

extern const MAP_Explorer::Block block_32{
    32,
    21912,
    21944,
    block_32_fn
    };

static void block_85_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_1 = out_18 -1+d_[2]+d_[3]+d_[4];
	uint64_t out_19 = out_18 +d_[2]+d_[3];
	uint64_t out_37 = out_18 -1+d_[2]+d_[3];
	uint64_t out_38 = out_18 +d_[2]+d_[3]+d_[4];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_85{
    85,
    9112,
    9128,
    block_85_fn
    };

static void block_86_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_86{
    86,
    9132,
    9132,
    block_86_fn
    };

static void block_88_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]+d_[3]);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +3+d_[2]+d_[3]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+d_[3]+d_[4]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[4]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3+d_[2]+d_[3]+d_[4]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_3 = out_13;
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[5], vec_[20] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 -2+d_[5]+d_[6], vec_[20] +1);
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[7];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[7];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_88{
    88,
    9224,
    9252,
    block_88_fn
    };

static void block_89_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_7 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_7 = MAP_Explorer::max2(out_7, vec_[2] +3);
	out_7 = MAP_Explorer::max2(out_7, vec_[3] +2);
	out_7 = MAP_Explorer::max2(out_7, vec_[6] +3);
	out_7 = MAP_Explorer::max2(out_7, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_8 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_8 = MAP_Explorer::max2(out_8, vec_[2] +3+d_[2]);
	out_8 = MAP_Explorer::max2(out_8, vec_[3] +3);
	out_8 = MAP_Explorer::max2(out_8, vec_[6] +3+d_[2]);
	out_8 = MAP_Explorer::max2(out_8, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_6 = out_8 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17];
	uint64_t out_9 = out_8 +d_[3];
	uint64_t out_10 = out_8 +d_[3]+d_[4];
	uint64_t out_11 = out_8 +d_[3]+d_[4]+d_[5];
	uint64_t out_15 = out_8 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_16 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_17 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_18 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_19 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_20 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_21 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_32 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_33 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_34 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15];
	uint64_t out_35 = out_8 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16];
	uint64_t out_37 = out_8 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17];
	uint64_t out_38 = out_8 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18];
	uint64_t out_3 = out_35;
	uint64_t out_2 = out_6;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_6 -2+d_[18];


	vec_[5] = out_5;
	vec_[7] = out_7;
	vec_[8] = out_8;
	vec_[6] = out_6;
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
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_89{
    89,
    640,
    712,
    block_89_fn
    };

static void block_172_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_23;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_172{
    172,
    69644,
    69656,
    block_172_fn
    };

static void block_173_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[19] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_28;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_173{
    173,
    69660,
    69676,
    block_173_fn
    };


} // namespace CV32E40P_DSE