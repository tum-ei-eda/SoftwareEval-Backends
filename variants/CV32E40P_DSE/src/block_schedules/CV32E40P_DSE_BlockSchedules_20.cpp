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

static void block_396_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_396{
    396,
    31032,
    31032,
    block_396_fn
    };

static void block_397_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_12;
	uint64_t out_6 = out_12 -1+d_[3];
	uint64_t out_37 = out_12 -2+d_[3];
	uint64_t out_38 = out_12 -2+d_[3]+d_[4];
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

extern const MAP_Explorer::Block block_397{
    397,
    31036,
    31052,
    block_397_fn
    };

static void block_398_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = out_15 +d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_37 = out_15 -1+d_[2]+d_[3]+d_[4];
	uint64_t out_38 = out_15 -1+d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_14 = MAP_Explorer::max2(out_15 +d_[2]+d_[3]+d_[4], vec_[6] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_15 +d_[2]+d_[3], vec_[13] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_15 +d_[2], vec_[22] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_398{
    398,
    2116,
    2136,
    block_398_fn
    };

static void block_399_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[7]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[5]+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[6]+d_[8]+d_[10], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[10], +d_[5]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[5]+d_[7]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[9]+t_3, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[9]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[9]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[9]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[3]+d_[4]+d_[9]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[9]+t_3);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+t_8, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+d_[3]+d_[4]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[2]+d_[3]+d_[4]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+t_8);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[6]+d_[8], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]+d_[6]+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]+d_[6]+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]+d_[3]+d_[4]+d_[6]+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[6]+d_[8]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+t_5, vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+d_[3]+d_[4]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+d_[2]+d_[3]+d_[4]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+t_5);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_399{
    399,
    30932,
    30960,
    block_399_fn
    };

static void block_402_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_402{
    402,
    30964,
    30964,
    block_402_fn
    };

static void block_403_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +2);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[2]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +1+d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+t_1, +1+t_3);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[4]+d_[5]+t_1, +1+t_5);
	uint64_t t_9 = MAP_Explorer::max2(+d_[4]+d_[5]+t_2, +1+t_6);
	uint64_t t_10 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_7);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[7]+t_8, +3+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+d_[6]+d_[7]+t_9, +3+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7]+t_10, +2+d_[2]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_3, vec_[1] +3+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +3+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+t_3);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_5, vec_[1] +3+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +4+t_7);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+t_5);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_8, vec_[1] +3+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+t_8);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_11, vec_[1] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+t_11);
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_6 = out_13 -1+d_[6];
	uint64_t out_37 = out_13 -2+d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_6 -2+d_[7];


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_403{
    403,
    30976,
    31000,
    block_403_fn
    };

static void block_404_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_404{
    404,
    2140,
    2140,
    block_404_fn
    };

static void block_405_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +1+d_[3], vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +d_[3]+d_[4], vec_[3] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 -1+d_[3]+d_[4]+d_[5], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[7], vec_[12] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[7];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[6];


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_405{
    405,
    2144,
    2168,
    block_405_fn
    };

static void block_407_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_6 = out_13 -1+d_[3]+d_[4];
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_37 = out_13 -2+d_[3]+d_[4];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4]+d_[5];
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_407{
    407,
    2172,
    2192,
    block_407_fn
    };

static void block_408_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_408{
    408,
    2248,
    2256,
    block_408_fn
    };

static void block_409_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[3]+d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8], +d_[3]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[3]+d_[5]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +d_[7]+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[3]+d_[5]+d_[7]);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[7]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[10]+t_6, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[10]+t_7, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +t_13);
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +d_[9]+t_11);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_18, +d_[9]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +d_[9]+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+d_[12]+t_14, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[12]+t_15, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[12]+t_16, +1+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +1+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_24, +t_21);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +t_22);
	uint64_t t_29 = MAP_Explorer::max2(+t_26, +d_[11]+t_20);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[11]+t_21);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_28, +d_[11]+t_22);
	uint64_t t_32 = MAP_Explorer::max2(+d_[14]+t_23, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[14]+t_24, +t_27);
	uint64_t t_34 = MAP_Explorer::max2(+d_[14]+t_25, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_33, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+t_34, +t_31);
	uint64_t t_38 = MAP_Explorer::max2(+t_35, +d_[13]+t_29);
	uint64_t t_39 = MAP_Explorer::max2(+1+t_36, +d_[13]+t_30);
	uint64_t t_40 = MAP_Explorer::max2(+1+t_37, +d_[13]+t_31);
	uint64_t t_41 = MAP_Explorer::max2(+d_[16]+t_32, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[16]+t_33, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[16]+t_34, +1+t_37);
	uint64_t t_44 = MAP_Explorer::max2(+t_41, +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_42, +t_39);
	uint64_t t_46 = MAP_Explorer::max2(+t_43, +t_40);
	uint64_t t_47 = MAP_Explorer::max2(+t_44, +d_[15]+t_38);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_45, +d_[15]+t_39);
	uint64_t t_49 = MAP_Explorer::max2(+1+t_46, +d_[15]+t_40);
	uint64_t t_50 = MAP_Explorer::max2(+d_[18]+t_41, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+d_[18]+t_42, +t_45);
	uint64_t t_52 = MAP_Explorer::max2(+d_[18]+t_43, +1+t_46);
	uint64_t t_53 = MAP_Explorer::max2(+t_50, +1+t_47);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_51, +t_48);
	uint64_t t_55 = MAP_Explorer::max2(+t_52, +t_49);
	uint64_t t_56 = MAP_Explorer::max2(+t_53, +d_[17]+t_47);
	uint64_t t_57 = MAP_Explorer::max2(+1+t_54, +d_[17]+t_48);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_55, +d_[17]+t_49);
	uint64_t t_59 = MAP_Explorer::max2(+d_[20]+t_50, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+d_[20]+t_51, +t_54);
	uint64_t t_61 = MAP_Explorer::max2(+d_[20]+t_52, +1+t_55);
	uint64_t t_62 = MAP_Explorer::max2(+t_59, +1+t_56);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_60, +t_57);
	uint64_t t_64 = MAP_Explorer::max2(+t_61, +t_58);
	uint64_t t_65 = MAP_Explorer::max2(+t_62, +d_[19]+t_56);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_63, +d_[19]+t_57);
	uint64_t t_67 = MAP_Explorer::max2(+1+t_64, +d_[19]+t_58);
	uint64_t t_68 = MAP_Explorer::max2(+d_[22]+t_59, +1+t_62);
	uint64_t t_69 = MAP_Explorer::max2(+d_[22]+t_60, +t_63);
	uint64_t t_70 = MAP_Explorer::max2(+d_[22]+t_61, +1+t_64);
	uint64_t t_71 = MAP_Explorer::max2(+t_68, +1+t_65);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_69, +t_66);
	uint64_t t_73 = MAP_Explorer::max2(+t_70, +t_67);
	uint64_t t_74 = MAP_Explorer::max2(+t_71, +d_[21]+t_65);
	uint64_t t_75 = MAP_Explorer::max2(+1+t_72, +d_[21]+t_66);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_73, +d_[21]+t_67);
	uint64_t t_77 = MAP_Explorer::max2(+d_[24]+t_68, +1+t_71);
	uint64_t t_78 = MAP_Explorer::max2(+d_[24]+t_69, +t_72);
	uint64_t t_79 = MAP_Explorer::max2(+d_[24]+t_70, +1+t_73);
	uint64_t t_80 = MAP_Explorer::max2(+t_77, +1+t_74);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_78, +t_75);
	uint64_t t_82 = MAP_Explorer::max2(+t_79, +t_76);
	uint64_t t_83 = MAP_Explorer::max2(+t_80, +d_[23]+t_74);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_81, +d_[23]+t_75);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_82, +d_[23]+t_76);
	uint64_t t_86 = MAP_Explorer::max2(+d_[26]+t_77, +1+t_80);
	uint64_t t_87 = MAP_Explorer::max2(+d_[26]+t_78, +t_81);
	uint64_t t_88 = MAP_Explorer::max2(+d_[26]+t_79, +1+t_82);
	uint64_t t_89 = MAP_Explorer::max2(+t_86, +1+t_83);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_87, +t_84);
	uint64_t t_91 = MAP_Explorer::max2(+t_88, +t_85);
	uint64_t t_92 = MAP_Explorer::max2(+t_89, +d_[25]+t_83);
	uint64_t t_93 = MAP_Explorer::max2(+1+t_90, +d_[25]+t_84);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_91, +d_[25]+t_85);
	uint64_t t_95 = MAP_Explorer::max2(+d_[28]+t_86, +1+t_89);
	uint64_t t_96 = MAP_Explorer::max2(+d_[28]+t_87, +t_90);
	uint64_t t_97 = MAP_Explorer::max2(+d_[28]+t_88, +1+t_91);
	uint64_t t_98 = MAP_Explorer::max2(+t_95, +1+t_92);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_96, +t_93);
	uint64_t t_100 = MAP_Explorer::max2(+t_97, +t_94);
	uint64_t t_101 = MAP_Explorer::max2(+t_98, +d_[27]+t_92);
	uint64_t t_102 = MAP_Explorer::max2(+1+t_99, +d_[27]+t_93);
	uint64_t t_103 = MAP_Explorer::max2(+1+t_100, +d_[27]+t_94);
	uint64_t t_104 = MAP_Explorer::max2(+d_[30]+t_95, +1+t_98);
	uint64_t t_105 = MAP_Explorer::max2(+d_[30]+t_96, +t_99);
	uint64_t t_106 = MAP_Explorer::max2(+d_[30]+t_97, +1+t_100);
	uint64_t t_107 = MAP_Explorer::max2(+t_104, +1+t_101);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_105, +t_102);
	uint64_t t_109 = MAP_Explorer::max2(+t_106, +t_103);
	uint64_t t_110 = MAP_Explorer::max2(+t_107, +d_[29]+t_101);
	uint64_t t_111 = MAP_Explorer::max2(+1+t_108, +d_[29]+t_102);
	uint64_t t_112 = MAP_Explorer::max2(+1+t_109, +d_[29]+t_103);
	uint64_t t_113 = MAP_Explorer::max2(+d_[32]+t_104, +1+t_107);
	uint64_t t_114 = MAP_Explorer::max2(+d_[32]+t_105, +t_108);
	uint64_t t_115 = MAP_Explorer::max2(+d_[32]+t_106, +1+t_109);
	uint64_t t_116 = MAP_Explorer::max2(+t_113, +1+t_110);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_114, +t_111);
	uint64_t t_118 = MAP_Explorer::max2(+t_115, +t_112);
	uint64_t t_119 = MAP_Explorer::max2(+t_116, +d_[31]+t_110);
	uint64_t t_120 = MAP_Explorer::max2(+1+t_117, +d_[31]+t_111);
	uint64_t t_121 = MAP_Explorer::max2(+1+t_118, +d_[31]+t_112);
	uint64_t t_122 = MAP_Explorer::max2(+d_[34]+t_113, +1+t_116);
	uint64_t t_123 = MAP_Explorer::max2(+d_[34]+t_114, +t_117);
	uint64_t t_124 = MAP_Explorer::max2(+d_[34]+t_115, +1+t_118);
	uint64_t t_125 = MAP_Explorer::max2(+t_122, +1+t_119);
	uint64_t t_126 = MAP_Explorer::max2(+1+t_123, +t_120);
	uint64_t t_127 = MAP_Explorer::max2(+t_124, +t_121);
	uint64_t t_128 = MAP_Explorer::max2(+t_125, +d_[33]+t_119);
	uint64_t t_129 = MAP_Explorer::max2(+1+t_126, +d_[33]+t_120);
	uint64_t t_130 = MAP_Explorer::max2(+1+t_127, +d_[33]+t_121);
	uint64_t t_131 = MAP_Explorer::max2(+d_[36]+t_122, +1+t_125);
	uint64_t t_132 = MAP_Explorer::max2(+d_[36]+t_123, +t_126);
	uint64_t t_133 = MAP_Explorer::max2(+d_[36]+t_124, +1+t_127);
	uint64_t t_134 = MAP_Explorer::max2(+t_131, +1+t_128);
	uint64_t t_135 = MAP_Explorer::max2(+1+t_132, +t_129);
	uint64_t t_136 = MAP_Explorer::max2(+t_133, +t_130);
	uint64_t t_137 = MAP_Explorer::max2(+t_134, +d_[35]+t_128);
	uint64_t t_138 = MAP_Explorer::max2(+1+t_135, +d_[35]+t_129);
	uint64_t t_139 = MAP_Explorer::max2(+1+t_136, +d_[35]+t_130);
	uint64_t t_140 = MAP_Explorer::max2(+d_[38]+t_131, +1+t_134);
	uint64_t t_141 = MAP_Explorer::max2(+d_[38]+t_132, +t_135);
	uint64_t t_142 = MAP_Explorer::max2(+d_[38]+t_133, +1+t_136);
	uint64_t t_143 = MAP_Explorer::max2(+t_140, +1+t_137);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_141, +t_138);
	uint64_t t_145 = MAP_Explorer::max2(+t_142, +t_139);
	uint64_t t_146 = MAP_Explorer::max2(+d_[39]+t_140, +1+t_143);
	uint64_t t_147 = MAP_Explorer::max2(+d_[39]+t_141, +t_144);
	uint64_t t_148 = MAP_Explorer::max2(+d_[39]+t_142, +1+t_145);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[37]+t_137, vec_[1] +2+d_[2]+d_[37]+t_137);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[37]+t_137);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[37]+t_138);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[37]+t_139);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[37]+t_137);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_143, vec_[1] +2+d_[2]+t_143);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +2+t_143);
	out_9 = MAP_Explorer::max2(out_9, vec_[3] +1+t_144);
	out_9 = MAP_Explorer::max2(out_9, vec_[4] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[6] +3+t_145);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_143);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_146, vec_[1] +1+d_[2]+t_146);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_146);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_147);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_148);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_146);
	uint64_t out_11 = MAP_Explorer::max2(out_37 +1, vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[40], vec_[4] +3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[9] = out_9;
	vec_[37] = out_37;
	vec_[11] = out_11;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_409{
    409,
    2436,
    596,
    block_409_fn
    };

static void block_410_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_410{
    410,
    632,
    632,
    block_410_fn
    };


} // namespace CV32E40P_DSE