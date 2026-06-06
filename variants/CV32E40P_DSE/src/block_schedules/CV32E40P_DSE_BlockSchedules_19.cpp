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

static void block_306_fn(uint64_t* vec_, uint8_t* d_){
    
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
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_306{
    306,
    57516,
    57528,
    block_306_fn
    };

static void block_315_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_315{
    315,
    57944,
    57944,
    block_315_fn
    };

static void block_318_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_318{
    318,
    57532,
    57540,
    block_318_fn
    };

static void block_319_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_319{
    319,
    32784,
    32784,
    block_319_fn
    };

static void block_320_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+d_[7]+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[9]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[7]+d_[9]+t_3, +t_5);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_4, vec_[1] +2+d_[1]+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[8]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_6, vec_[1] +2+d_[1]+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_6);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[7]+t_2, vec_[1] +1+d_[1]+d_[7]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[7]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[7]+t_2);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_37 -1+d_[9];
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = out_37 +d_[9];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[38] = out_38;
}

extern const MAP_Explorer::Block block_320{
    320,
    32788,
    32812,
    block_320_fn
    };

static void block_321_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_1 = out_14 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_16 = out_14 +d_[4]+d_[5];
	uint64_t out_17 = out_14 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_19 = out_14 +d_[4];
	uint64_t out_20 = out_14 +1+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_14 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_38 = out_14 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_321{
    321,
    32816,
    32852,
    block_321_fn
    };

static void block_322_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_1 = out_37 +d_[2];
	uint64_t out_38 = out_37 +1+d_[2];
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_322{
    322,
    33272,
    33280,
    block_322_fn
    };

static void block_323_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+1+d_[6], +d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7]+t_2, +1+t_4);
	uint64_t t_8 = MAP_Explorer::max2(+t_7, +2+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[7]+t_3, +t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_9, +1+t_5);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[7], +t_6);
	uint64_t t_12 = MAP_Explorer::max2(+t_11, +1+t_6);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_4, vec_[1] +3+d_[1]+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_5);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_4);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_2, vec_[1] +1+d_[1]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_8, vec_[1] +2+d_[1]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_8);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[7];
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_323{
    323,
    33312,
    33332,
    block_323_fn
    };

static void block_324_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+d_[3]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3+d_[3]);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[2]+d_[3]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_13;
	uint64_t out_6 = out_13 -1+d_[4];
	uint64_t out_37 = out_13 -2+d_[4];
	uint64_t out_38 = out_13 -2+d_[4]+d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
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

extern const MAP_Explorer::Block block_324{
    324,
    33004,
    33024,
    block_324_fn
    };

static void block_325_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_325{
    325,
    57544,
    57544,
    block_325_fn
    };

static void block_326_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[25] );
	uint64_t out_25 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3);
	uint64_t out_3 = out_25;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_326{
    326,
    30316,
    30320,
    block_326_fn
    };

static void block_327_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_6 = out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +d_[3]+d_[4];
	uint64_t out_24 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_26 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_27 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[24] +1);
	uint64_t out_3 = out_24;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[11];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_327{
    327,
    30324,
    30368,
    block_327_fn
    };

static void block_328_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
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

extern const MAP_Explorer::Block block_328{
    328,
    29264,
    29268,
    block_328_fn
    };

static void block_329_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_21 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_21;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_329{
    329,
    85612,
    85616,
    block_329_fn
    };

static void block_330_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_330{
    330,
    3052,
    3056,
    block_330_fn
    };

static void block_331_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_331{
    331,
    3060,
    3064,
    block_331_fn
    };

static void block_332_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = out_14 -2+d_[4]+d_[6];
	uint64_t out_37 = out_14 -1+d_[4];
	uint64_t out_38 = out_14 -1+d_[4]+d_[6];
	uint64_t out_3 = MAP_Explorer::max2(out_14 +d_[4]+d_[5], vec_[3] +d_[5]);
	uint64_t out_5 = MAP_Explorer::max2(out_14 +d_[4]+d_[6], vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_332{
    332,
    2412,
    2432,
    block_332_fn
    };

static void block_333_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[7], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[6]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[6]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[9], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7]+d_[9], +t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +d_[8]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_9, +d_[8]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[11]+t_7, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_13, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+t_14, +d_[10]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_15, +d_[10]+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+d_[13]+t_12, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+d_[13]+t_13, +t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_19, +t_17);
	uint64_t t_22 = MAP_Explorer::max2(+t_20, +d_[12]+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_21, +d_[12]+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[15]+t_18, +1+t_20);
	uint64_t t_25 = MAP_Explorer::max2(+d_[15]+t_19, +t_21);
	uint64_t t_26 = MAP_Explorer::max2(+t_24, +1+t_22);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_25, +t_23);
	uint64_t t_28 = MAP_Explorer::max2(+t_26, +d_[14]+t_22);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_27, +d_[14]+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+d_[17]+t_24, +1+t_26);
	uint64_t t_31 = MAP_Explorer::max2(+d_[17]+t_25, +t_27);
	uint64_t t_32 = MAP_Explorer::max2(+t_30, +1+t_28);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_31, +t_29);
	uint64_t t_34 = MAP_Explorer::max2(+t_32, +d_[16]+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+1+t_33, +d_[16]+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[19]+t_30, +1+t_32);
	uint64_t t_37 = MAP_Explorer::max2(+d_[19]+t_31, +t_33);
	uint64_t t_38 = MAP_Explorer::max2(+t_36, +1+t_34);
	uint64_t t_39 = MAP_Explorer::max2(+1+t_37, +t_35);
	uint64_t t_40 = MAP_Explorer::max2(+t_38, +d_[18]+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+1+t_39, +d_[18]+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[21]+t_36, +1+t_38);
	uint64_t t_43 = MAP_Explorer::max2(+d_[21]+t_37, +t_39);
	uint64_t t_44 = MAP_Explorer::max2(+t_42, +1+t_40);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_43, +t_41);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_10 +d_[2]+d_[20]+t_40, vec_[3] +d_[20]+t_41);
	uint64_t out_5 = MAP_Explorer::max2(out_10 +d_[2]+t_44, vec_[3] +1+t_45);
	uint64_t out_15 = MAP_Explorer::max2(out_10 +d_[2]+d_[4], vec_[3] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_10 -1+d_[2]+t_36, vec_[3] +1+t_37);
	uint64_t out_38 = MAP_Explorer::max2(out_10 -1+d_[2]+t_42, vec_[3] +1+t_43);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_333{
    333,
    2196,
    2244,
    block_333_fn
    };

static void block_334_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_3, +t_5);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +d_[12]+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +d_[12]+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[13], +d_[12]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]+t_2, +1+t_6);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]+t_3, +t_7);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_15 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_10);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[14]+t_8, vec_[1] +2+d_[1]+d_[14]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[14]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[14]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[14]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[14]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[9]+d_[10]+d_[11]+d_[14]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[10]+d_[11]+d_[14]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[14]+t_8);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_13, vec_[1] +2+d_[1]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[9]+d_[10]+d_[11]+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[10]+d_[11]+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_13);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[7]+t_2, vec_[1] +2+d_[1]+d_[7]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[7]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+d_[7]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[7]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[7]+t_2);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+t_2, vec_[1] +2+d_[1]+d_[7]+d_[8]+d_[9]+t_2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[7]+d_[8]+d_[9]+t_2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[7]+d_[8]+d_[9]+t_3);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[7]+d_[8]+d_[9]+t_2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[9]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+t_2);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+t_2, vec_[1] +2+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+t_2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[7]+d_[8]+d_[9]+d_[10]+t_2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+d_[7]+d_[8]+d_[9]+d_[10]+t_3);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[7]+d_[8]+d_[9]+d_[10]+t_2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2+d_[9]+d_[10]);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[10]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+t_2);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[7]+d_[8]+t_2, vec_[1] +2+d_[1]+d_[7]+d_[8]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[7]+d_[8]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+d_[7]+d_[8]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[7]+d_[8]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[7]+d_[8]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2, vec_[1] +1+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[9]+d_[10]+d_[11]+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[10]+d_[11]+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_11, vec_[1] +1+d_[1]+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+d_[10]+d_[11]+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_11);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_334{
    334,
    2068,
    2112,
    block_334_fn
    };

static void block_337_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[9], +d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[4]+d_[6]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[8]+t_3, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[8]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[8]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[2]+d_[3]+d_[8]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[8]+t_3);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_8, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+d_[3]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[2]+d_[3]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_8);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[5]+d_[7], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[5]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[5]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[2]+d_[3]+d_[5]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[5]+d_[7]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_5, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+d_[3]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[2]+d_[3]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_5);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_337{
    337,
    31004,
    31028,
    block_337_fn
    };


} // namespace CV32E40P_DSE