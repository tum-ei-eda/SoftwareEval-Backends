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

static void block_563_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	uint64_t out_5 = MAP_Explorer::max2(out_18 +1+d_[8], vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[8]+d_[9]+d_[10], vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[10]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[8]+d_[9], vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_12 = out_14 +1+d_[11];
	uint64_t out_13 = out_14 +1+d_[11]+d_[12];
	uint64_t out_15 = out_14 +d_[11]+d_[12]+d_[13];
	uint64_t out_37 = out_14 -1+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_38 = out_14 -1+d_[11]+d_[12]+d_[13]+d_[14]+d_[15];
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_12 -1+d_[12]+d_[13]+d_[14];
	uint64_t out_4 = out_6 +d_[15];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_563{
    563,
    21172,
    21232,
    block_563_fn
    };

static void block_612_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_0 = out_37 -1+d_[6];
	uint64_t out_3 = out_37 +1+d_[5];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_612{
    612,
    67988,
    68008,
    block_612_fn
    };

static void block_613_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_613{
    613,
    68396,
    68400,
    block_613_fn
    };

static void block_614_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_614{
    614,
    68404,
    68404,
    block_614_fn
    };

static void block_637_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_637{
    637,
    8848,
    8852,
    block_637_fn
    };

static void block_638_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
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

extern const MAP_Explorer::Block block_638{
    638,
    67796,
    67804,
    block_638_fn
    };

static void block_656_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[6], +d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_5, +d_[2]+d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[6]+d_[7], +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[7]+t_5, +t_9);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_6, vec_[1] +3+d_[1]+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_7);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_8);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_6);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_3, vec_[1] +1+d_[1]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_10, vec_[1] +2+d_[1]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_10);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[7];
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_656{
    656,
    41260,
    41280,
    block_656_fn
    };

static void block_657_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +d_[8]+t_11);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_18, +d_[8]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +d_[8]+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+d_[11]+t_14, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[11]+t_15, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +1+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_24, +t_21);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +t_22);
	uint64_t t_29 = MAP_Explorer::max2(+d_[11], +d_[8]);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_23, vec_[1] +d_[1]+t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_24);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_25);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_25);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[11]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_23);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[10]+t_20, vec_[1] +2+d_[1]+d_[10]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[10]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[10]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[10]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[10]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[10]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[10]+t_20);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_14, vec_[1] +1+d_[1]+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_14);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_26, vec_[1] +2+d_[1]+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_28);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_28);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_29);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_26);
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

extern const MAP_Explorer::Block block_657{
    657,
    41284,
    41308,
    block_657_fn
    };

static void block_659_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_12 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[8]+t_6, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_7, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[8], +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +d_[6]+t_3);
	uint64_t t_17 = MAP_Explorer::max2(+2+t_13, +d_[2]+d_[4]+d_[6]);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_14, +d_[6]+t_4);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_15, +d_[4]+d_[6]);
	uint64_t t_20 = MAP_Explorer::max2(+1+d_[8], +d_[6]);
	uint64_t t_21 = MAP_Explorer::max2(+d_[10]+t_12, +1+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+1+d_[10]+t_13, +t_17);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+t_14, +t_18);
	uint64_t t_24 = MAP_Explorer::max2(+d_[10]+t_15, +t_19);
	uint64_t t_25 = MAP_Explorer::max2(+d_[8]+d_[10], +t_20);
	uint64_t t_26 = MAP_Explorer::max2(+t_21, +d_[9]+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[9]+t_17);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[9]+t_18);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[9]+t_19);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_25, +d_[9]+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[10]+d_[12]+t_12, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[10]+d_[12]+t_13, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10]+d_[12]+t_14, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[10]+d_[12]+t_15, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+d_[8]+d_[10]+d_[12], +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +1+t_26);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+t_35, +t_30);
	uint64_t t_41 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_42 = MAP_Explorer::max2(+t_36, +d_[11]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[11]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[11]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[11]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[11]+t_30);
	uint64_t t_47 = MAP_Explorer::max2(+1+t_41, +d_[9]+d_[11]);
	uint64_t t_48 = MAP_Explorer::max2(+d_[14]+t_31, +1+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[14]+t_32, +t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[14]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[14]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[14]+t_35, +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+d_[12]+d_[14], +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+t_48, +1+t_42);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+t_53, +t_47);
	uint64_t t_60 = MAP_Explorer::max2(+d_[14], +d_[11]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[13]+t_42, vec_[1] +2+d_[1]+d_[13]+t_42);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[13]+t_42);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[13]+t_43);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[13]+t_44);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[13]+t_42);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[13]+t_45);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[13]+t_46);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[13]+t_47);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[11]+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[13]+t_42);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_54, vec_[1] +2+d_[1]+t_54);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_54);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_55);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_56);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_54);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_57);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_58);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+t_59);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_60);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_54);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_8, vec_[1] +2+d_[1]+t_8);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_8);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_8);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_11);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_8);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_31, vec_[1] +1+d_[1]+t_31);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_31);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_32);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_33);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_31);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_34);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_35);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_31);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_48, vec_[1] +1+d_[1]+t_48);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_48);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_49);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+t_50);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_48);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_51);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_52);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1+t_53);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_48);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_659{
    659,
    45968,
    46000,
    block_659_fn
    };

static void block_660_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_1, vec_[1] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[6] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_660{
    660,
    46004,
    46016,
    block_660_fn
    };

static void block_661_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[6]+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[6]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[10]+t_11, +1+t_13);
	uint64_t t_16 = MAP_Explorer::max2(+d_[10]+t_12, +1+t_14);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +d_[8]+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_16, +d_[8]+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[12]+t_15, +1+t_17);
	uint64_t t_20 = MAP_Explorer::max2(+d_[12]+t_16, +t_18);
	uint64_t t_21 = MAP_Explorer::max2(+t_19, +d_[11]+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_20, +d_[11]+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[12]+d_[13]+t_15, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+d_[12]+d_[13]+t_16, +1+t_20);
	uint64_t t_25 = MAP_Explorer::max2(+t_23, +1+t_21);
	uint64_t t_26 = MAP_Explorer::max2(+t_24, +t_22);
	uint64_t t_27 = MAP_Explorer::max2(+d_[13], +d_[11]);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_23, vec_[1] +d_[1]+t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_24);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_24);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_24);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[13]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_23);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_21, vec_[1] +3+d_[1]+t_21);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+t_21);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +2+t_22);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +2+t_22);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2+t_22);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +3+t_21);
	out_10 = MAP_Explorer::max2(out_10, vec_[14] +2+d_[11]);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+t_21);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_13, vec_[1] +2+d_[1]+t_13);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_13);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_14);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2+t_14);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_14);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_13);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+t_13);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[12]+t_15, vec_[1] +1+d_[1]+d_[12]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[12]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[12]+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[12]+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[12]+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[12]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[12]+t_15);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_25, vec_[1] +2+d_[1]+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_25);
	uint64_t out_3 = out_10;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_661{
    661,
    46020,
    46052,
    block_661_fn
    };

static void block_662_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[7]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[7]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[7]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[7]+t_15);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[5]+d_[7]);
	uint64_t t_30 = MAP_Explorer::max2(+d_[10]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[10]+t_17, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[10]+t_18, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10]+t_19, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +d_[9]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[9]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[9]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[9]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[9]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[7]+d_[9]);
	uint64_t t_47 = MAP_Explorer::max2(+d_[12]+t_30, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[12]+t_31, +1+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[12]+t_32, +t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[12]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[12]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+t_47, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+t_48, +t_42);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_60 = MAP_Explorer::max2(+t_53, +d_[11]+t_41);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_54, +d_[11]+t_42);
	uint64_t t_62 = MAP_Explorer::max2(+1+t_55, +d_[11]+t_43);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_56, +d_[11]+t_44);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_57, +d_[11]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+1+t_58, +d_[11]+t_46);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_59, +d_[9]+d_[11]);
	uint64_t t_67 = MAP_Explorer::max2(+d_[14]+t_47, +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+d_[14]+t_48, +1+t_54);
	uint64_t t_69 = MAP_Explorer::max2(+d_[14]+t_49, +t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[14]+t_50, +1+t_56);
	uint64_t t_71 = MAP_Explorer::max2(+d_[14]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[14]+t_52, +1+t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[12]+d_[14], +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+t_67, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+t_68, +t_61);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_69, +t_62);
	uint64_t t_77 = MAP_Explorer::max2(+t_70, +t_63);
	uint64_t t_78 = MAP_Explorer::max2(+t_71, +t_64);
	uint64_t t_79 = MAP_Explorer::max2(+t_72, +t_65);
	uint64_t t_80 = MAP_Explorer::max2(+t_73, +t_66);
	uint64_t t_81 = MAP_Explorer::max2(+d_[14], +d_[11]);
	uint64_t t_82 = MAP_Explorer::max2(+t_74, +d_[13]+t_60);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[13]+t_61);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_76, +d_[13]+t_62);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_77, +d_[13]+t_63);
	uint64_t t_86 = MAP_Explorer::max2(+1+t_78, +d_[13]+t_64);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_79, +d_[13]+t_65);
	uint64_t t_88 = MAP_Explorer::max2(+1+t_80, +d_[13]+t_66);
	uint64_t t_89 = MAP_Explorer::max2(+1+t_81, +d_[11]+d_[13]);
	uint64_t t_90 = MAP_Explorer::max2(+d_[16]+t_67, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[16]+t_68, +1+t_75);
	uint64_t t_92 = MAP_Explorer::max2(+d_[16]+t_69, +t_76);
	uint64_t t_93 = MAP_Explorer::max2(+d_[16]+t_70, +1+t_77);
	uint64_t t_94 = MAP_Explorer::max2(+d_[16]+t_71, +1+t_78);
	uint64_t t_95 = MAP_Explorer::max2(+d_[16]+t_72, +1+t_79);
	uint64_t t_96 = MAP_Explorer::max2(+d_[16]+t_73, +1+t_80);
	uint64_t t_97 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_81);
	uint64_t t_98 = MAP_Explorer::max2(+t_90, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+t_91, +t_83);
	uint64_t t_100 = MAP_Explorer::max2(+1+t_92, +t_84);
	uint64_t t_101 = MAP_Explorer::max2(+t_93, +t_85);
	uint64_t t_102 = MAP_Explorer::max2(+t_94, +t_86);
	uint64_t t_103 = MAP_Explorer::max2(+t_95, +t_87);
	uint64_t t_104 = MAP_Explorer::max2(+t_96, +t_88);
	uint64_t t_105 = MAP_Explorer::max2(+t_97, +t_89);
	uint64_t t_106 = MAP_Explorer::max2(+d_[16], +d_[13]);
	uint64_t t_107 = MAP_Explorer::max2(+t_98, +d_[15]+t_82);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_99, +d_[15]+t_83);
	uint64_t t_109 = MAP_Explorer::max2(+1+t_100, +d_[15]+t_84);
	uint64_t t_110 = MAP_Explorer::max2(+1+t_101, +d_[15]+t_85);
	uint64_t t_111 = MAP_Explorer::max2(+1+t_102, +d_[15]+t_86);
	uint64_t t_112 = MAP_Explorer::max2(+1+t_103, +d_[15]+t_87);
	uint64_t t_113 = MAP_Explorer::max2(+1+t_104, +d_[15]+t_88);
	uint64_t t_114 = MAP_Explorer::max2(+1+t_105, +d_[15]+t_89);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_106, +d_[13]+d_[15]);
	uint64_t t_116 = MAP_Explorer::max2(+d_[18]+t_90, +1+t_98);
	uint64_t t_117 = MAP_Explorer::max2(+d_[18]+t_91, +1+t_99);
	uint64_t t_118 = MAP_Explorer::max2(+d_[18]+t_92, +t_100);
	uint64_t t_119 = MAP_Explorer::max2(+d_[18]+t_93, +1+t_101);
	uint64_t t_120 = MAP_Explorer::max2(+d_[18]+t_94, +1+t_102);
	uint64_t t_121 = MAP_Explorer::max2(+d_[18]+t_95, +1+t_103);
	uint64_t t_122 = MAP_Explorer::max2(+d_[18]+t_96, +1+t_104);
	uint64_t t_123 = MAP_Explorer::max2(+d_[18]+t_97, +1+t_105);
	uint64_t t_124 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_106);
	uint64_t t_125 = MAP_Explorer::max2(+t_116, +1+t_107);
	uint64_t t_126 = MAP_Explorer::max2(+t_117, +t_108);
	uint64_t t_127 = MAP_Explorer::max2(+1+t_118, +t_109);
	uint64_t t_128 = MAP_Explorer::max2(+t_119, +t_110);
	uint64_t t_129 = MAP_Explorer::max2(+t_120, +t_111);
	uint64_t t_130 = MAP_Explorer::max2(+t_121, +t_112);
	uint64_t t_131 = MAP_Explorer::max2(+t_122, +t_113);
	uint64_t t_132 = MAP_Explorer::max2(+t_123, +t_114);
	uint64_t t_133 = MAP_Explorer::max2(+t_124, +t_115);
	uint64_t t_134 = MAP_Explorer::max2(+d_[18], +d_[15]);
	uint64_t t_135 = MAP_Explorer::max2(+t_125, +d_[17]+t_107);
	uint64_t t_136 = MAP_Explorer::max2(+1+t_126, +d_[17]+t_108);
	uint64_t t_137 = MAP_Explorer::max2(+1+t_127, +d_[17]+t_109);
	uint64_t t_138 = MAP_Explorer::max2(+1+t_128, +d_[17]+t_110);
	uint64_t t_139 = MAP_Explorer::max2(+1+t_129, +d_[17]+t_111);
	uint64_t t_140 = MAP_Explorer::max2(+1+t_130, +d_[17]+t_112);
	uint64_t t_141 = MAP_Explorer::max2(+1+t_131, +d_[17]+t_113);
	uint64_t t_142 = MAP_Explorer::max2(+1+t_132, +d_[17]+t_114);
	uint64_t t_143 = MAP_Explorer::max2(+1+t_133, +d_[17]+t_115);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_134, +d_[15]+d_[17]);
	uint64_t t_145 = MAP_Explorer::max2(+d_[20]+t_116, +1+t_125);
	uint64_t t_146 = MAP_Explorer::max2(+d_[20]+t_117, +1+t_126);
	uint64_t t_147 = MAP_Explorer::max2(+d_[20]+t_118, +t_127);
	uint64_t t_148 = MAP_Explorer::max2(+d_[20]+t_119, +1+t_128);
	uint64_t t_149 = MAP_Explorer::max2(+d_[20]+t_120, +1+t_129);
	uint64_t t_150 = MAP_Explorer::max2(+d_[20]+t_121, +1+t_130);
	uint64_t t_151 = MAP_Explorer::max2(+d_[20]+t_122, +1+t_131);
	uint64_t t_152 = MAP_Explorer::max2(+d_[20]+t_123, +1+t_132);
	uint64_t t_153 = MAP_Explorer::max2(+d_[20]+t_124, +1+t_133);
	uint64_t t_154 = MAP_Explorer::max2(+d_[18]+d_[20], +1+t_134);
	uint64_t t_155 = MAP_Explorer::max2(+t_145, +1+t_135);
	uint64_t t_156 = MAP_Explorer::max2(+t_146, +t_136);
	uint64_t t_157 = MAP_Explorer::max2(+1+t_147, +t_137);
	uint64_t t_158 = MAP_Explorer::max2(+t_148, +t_138);
	uint64_t t_159 = MAP_Explorer::max2(+t_149, +t_139);
	uint64_t t_160 = MAP_Explorer::max2(+t_150, +t_140);
	uint64_t t_161 = MAP_Explorer::max2(+t_151, +t_141);
	uint64_t t_162 = MAP_Explorer::max2(+t_152, +t_142);
	uint64_t t_163 = MAP_Explorer::max2(+t_153, +t_143);
	uint64_t t_164 = MAP_Explorer::max2(+t_154, +t_144);
	uint64_t t_165 = MAP_Explorer::max2(+d_[20], +d_[17]);
	uint64_t t_166 = MAP_Explorer::max2(+t_155, +d_[19]+t_135);
	uint64_t t_167 = MAP_Explorer::max2(+1+t_156, +d_[19]+t_136);
	uint64_t t_168 = MAP_Explorer::max2(+1+t_157, +d_[19]+t_137);
	uint64_t t_169 = MAP_Explorer::max2(+1+t_158, +d_[19]+t_138);
	uint64_t t_170 = MAP_Explorer::max2(+1+t_159, +d_[19]+t_139);
	uint64_t t_171 = MAP_Explorer::max2(+1+t_160, +d_[19]+t_140);
	uint64_t t_172 = MAP_Explorer::max2(+1+t_161, +d_[19]+t_141);
	uint64_t t_173 = MAP_Explorer::max2(+1+t_162, +d_[19]+t_142);
	uint64_t t_174 = MAP_Explorer::max2(+1+t_163, +d_[19]+t_143);
	uint64_t t_175 = MAP_Explorer::max2(+1+t_164, +d_[19]+t_144);
	uint64_t t_176 = MAP_Explorer::max2(+1+t_165, +d_[17]+d_[19]);
	uint64_t t_177 = MAP_Explorer::max2(+d_[22]+t_145, +1+t_155);
	uint64_t t_178 = MAP_Explorer::max2(+d_[22]+t_146, +1+t_156);
	uint64_t t_179 = MAP_Explorer::max2(+d_[22]+t_147, +t_157);
	uint64_t t_180 = MAP_Explorer::max2(+d_[22]+t_148, +1+t_158);
	uint64_t t_181 = MAP_Explorer::max2(+d_[22]+t_149, +1+t_159);
	uint64_t t_182 = MAP_Explorer::max2(+d_[22]+t_150, +1+t_160);
	uint64_t t_183 = MAP_Explorer::max2(+d_[22]+t_151, +1+t_161);
	uint64_t t_184 = MAP_Explorer::max2(+d_[22]+t_152, +1+t_162);
	uint64_t t_185 = MAP_Explorer::max2(+d_[22]+t_153, +1+t_163);
	uint64_t t_186 = MAP_Explorer::max2(+d_[22]+t_154, +1+t_164);
	uint64_t t_187 = MAP_Explorer::max2(+d_[20]+d_[22], +1+t_165);
	uint64_t t_188 = MAP_Explorer::max2(+t_177, +1+t_166);
	uint64_t t_189 = MAP_Explorer::max2(+t_178, +t_167);
	uint64_t t_190 = MAP_Explorer::max2(+1+t_179, +t_168);
	uint64_t t_191 = MAP_Explorer::max2(+t_180, +t_169);
	uint64_t t_192 = MAP_Explorer::max2(+t_181, +t_170);
	uint64_t t_193 = MAP_Explorer::max2(+t_182, +t_171);
	uint64_t t_194 = MAP_Explorer::max2(+t_183, +t_172);
	uint64_t t_195 = MAP_Explorer::max2(+t_184, +t_173);
	uint64_t t_196 = MAP_Explorer::max2(+t_185, +t_174);
	uint64_t t_197 = MAP_Explorer::max2(+t_186, +t_175);
	uint64_t t_198 = MAP_Explorer::max2(+t_187, +t_176);
	uint64_t t_199 = MAP_Explorer::max2(+d_[22], +d_[19]);
	uint64_t t_200 = MAP_Explorer::max2(+d_[23]+t_177, +1+t_188);
	uint64_t t_201 = MAP_Explorer::max2(+d_[23]+t_178, +1+t_189);
	uint64_t t_202 = MAP_Explorer::max2(+d_[23]+t_179, +t_190);
	uint64_t t_203 = MAP_Explorer::max2(+d_[23]+t_180, +1+t_191);
	uint64_t t_204 = MAP_Explorer::max2(+d_[23]+t_181, +1+t_192);
	uint64_t t_205 = MAP_Explorer::max2(+d_[23]+t_182, +1+t_193);
	uint64_t t_206 = MAP_Explorer::max2(+d_[23]+t_183, +1+t_194);
	uint64_t t_207 = MAP_Explorer::max2(+d_[23]+t_184, +1+t_195);
	uint64_t t_208 = MAP_Explorer::max2(+d_[23]+t_185, +1+t_196);
	uint64_t t_209 = MAP_Explorer::max2(+d_[23]+t_186, +1+t_197);
	uint64_t t_210 = MAP_Explorer::max2(+d_[23]+t_187, +1+t_198);
	uint64_t t_211 = MAP_Explorer::max2(+d_[22]+d_[23], +1+t_199);
	uint64_t t_212 = MAP_Explorer::max2(+t_200, +d_[21]+t_166);
	uint64_t t_213 = MAP_Explorer::max2(+1+t_201, +d_[21]+t_167);
	uint64_t t_214 = MAP_Explorer::max2(+2+t_202, +d_[21]+t_168);
	uint64_t t_215 = MAP_Explorer::max2(+1+t_203, +d_[21]+t_169);
	uint64_t t_216 = MAP_Explorer::max2(+1+t_204, +d_[21]+t_170);
	uint64_t t_217 = MAP_Explorer::max2(+1+t_205, +d_[21]+t_171);
	uint64_t t_218 = MAP_Explorer::max2(+1+t_206, +d_[21]+t_172);
	uint64_t t_219 = MAP_Explorer::max2(+1+t_207, +d_[21]+t_173);
	uint64_t t_220 = MAP_Explorer::max2(+1+t_208, +d_[21]+t_174);
	uint64_t t_221 = MAP_Explorer::max2(+1+t_209, +d_[21]+t_175);
	uint64_t t_222 = MAP_Explorer::max2(+1+t_210, +d_[21]+t_176);
	uint64_t t_223 = MAP_Explorer::max2(+1+t_211, +d_[19]+d_[21]);
	uint64_t t_224 = MAP_Explorer::max2(+1+d_[23], +d_[21]);
	uint64_t t_225 = MAP_Explorer::max2(+d_[24]+t_200, +1+t_212);
	uint64_t t_226 = MAP_Explorer::max2(+d_[24]+t_201, +t_213);
	uint64_t t_227 = MAP_Explorer::max2(+1+d_[24]+t_202, +t_214);
	uint64_t t_228 = MAP_Explorer::max2(+d_[24]+t_203, +t_215);
	uint64_t t_229 = MAP_Explorer::max2(+d_[24]+t_204, +t_216);
	uint64_t t_230 = MAP_Explorer::max2(+d_[24]+t_205, +t_217);
	uint64_t t_231 = MAP_Explorer::max2(+d_[24]+t_206, +t_218);
	uint64_t t_232 = MAP_Explorer::max2(+d_[24]+t_207, +t_219);
	uint64_t t_233 = MAP_Explorer::max2(+d_[24]+t_208, +t_220);
	uint64_t t_234 = MAP_Explorer::max2(+d_[24]+t_209, +t_221);
	uint64_t t_235 = MAP_Explorer::max2(+d_[24]+t_210, +t_222);
	uint64_t t_236 = MAP_Explorer::max2(+d_[24]+t_211, +t_223);
	uint64_t t_237 = MAP_Explorer::max2(+d_[23]+d_[24], +t_224);
	uint64_t t_238 = MAP_Explorer::max2(+d_[24]+d_[25]+t_200, +1+t_225);
	uint64_t t_239 = MAP_Explorer::max2(+d_[24]+d_[25]+t_201, +1+t_226);
	uint64_t t_240 = MAP_Explorer::max2(+d_[24]+d_[25]+t_202, +t_227);
	uint64_t t_241 = MAP_Explorer::max2(+d_[24]+d_[25]+t_203, +1+t_228);
	uint64_t t_242 = MAP_Explorer::max2(+d_[24]+d_[25]+t_204, +1+t_229);
	uint64_t t_243 = MAP_Explorer::max2(+d_[24]+d_[25]+t_205, +1+t_230);
	uint64_t t_244 = MAP_Explorer::max2(+d_[24]+d_[25]+t_206, +1+t_231);
	uint64_t t_245 = MAP_Explorer::max2(+d_[24]+d_[25]+t_207, +1+t_232);
	uint64_t t_246 = MAP_Explorer::max2(+d_[24]+d_[25]+t_208, +1+t_233);
	uint64_t t_247 = MAP_Explorer::max2(+d_[24]+d_[25]+t_209, +1+t_234);
	uint64_t t_248 = MAP_Explorer::max2(+d_[24]+d_[25]+t_210, +1+t_235);
	uint64_t t_249 = MAP_Explorer::max2(+d_[24]+d_[25]+t_211, +1+t_236);
	uint64_t t_250 = MAP_Explorer::max2(+d_[23]+d_[24]+d_[25], +1+t_237);
	uint64_t t_251 = MAP_Explorer::max2(+1+t_240, +t_214);
	uint64_t t_252 = MAP_Explorer::max2(+d_[27]+t_240, +t_251);
	uint64_t t_253 = MAP_Explorer::max2(+d_[27], +d_[26]);
	uint64_t t_254 = MAP_Explorer::max2(+1+t_252, +d_[26]+t_251);
	uint64_t t_255 = MAP_Explorer::max2(+d_[27]+d_[29]+t_240, +1+t_252);
	uint64_t t_256 = MAP_Explorer::max2(+d_[27]+d_[29], +1+t_253);
	uint64_t t_257 = MAP_Explorer::max2(+t_255, +t_254);
	uint64_t t_258 = MAP_Explorer::max2(+t_256, +d_[28]+t_253);
	uint64_t t_259 = MAP_Explorer::max2(+1+t_257, +d_[28]+t_254);
	uint64_t t_260 = MAP_Explorer::max2(+d_[27]+d_[29]+d_[31], +1+t_256);
	uint64_t t_261 = MAP_Explorer::max2(+d_[31]+t_255, +1+t_257);
	uint64_t t_262 = MAP_Explorer::max2(+t_260, +1+t_258);
	uint64_t t_263 = MAP_Explorer::max2(+t_261, +t_259);
	uint64_t t_264 = MAP_Explorer::max2(+d_[31], +d_[28]);
	uint64_t t_265 = MAP_Explorer::max2(+t_262, +d_[30]+t_258);
	uint64_t t_266 = MAP_Explorer::max2(+1+t_263, +d_[30]+t_259);
	uint64_t t_267 = MAP_Explorer::max2(+1+t_264, +d_[28]+d_[30]);
	uint64_t t_268 = MAP_Explorer::max2(+d_[33]+t_260, +1+t_262);
	uint64_t t_269 = MAP_Explorer::max2(+d_[33]+t_261, +1+t_263);
	uint64_t t_270 = MAP_Explorer::max2(+d_[31]+d_[33], +1+t_264);
	uint64_t t_271 = MAP_Explorer::max2(+t_268, +1+t_265);
	uint64_t t_272 = MAP_Explorer::max2(+t_269, +t_266);
	uint64_t t_273 = MAP_Explorer::max2(+t_270, +t_267);
	uint64_t t_274 = MAP_Explorer::max2(+t_271, +d_[32]+t_265);
	uint64_t t_275 = MAP_Explorer::max2(+1+t_272, +d_[32]+t_266);
	uint64_t t_276 = MAP_Explorer::max2(+1+t_273, +d_[32]+t_267);
	uint64_t t_277 = MAP_Explorer::max2(+d_[35]+t_268, +1+t_271);
	uint64_t t_278 = MAP_Explorer::max2(+d_[35]+t_269, +1+t_272);
	uint64_t t_279 = MAP_Explorer::max2(+d_[35]+t_270, +1+t_273);
	uint64_t t_280 = MAP_Explorer::max2(+t_277, +1+t_274);
	uint64_t t_281 = MAP_Explorer::max2(+t_278, +t_275);
	uint64_t t_282 = MAP_Explorer::max2(+t_279, +t_276);
	uint64_t t_283 = MAP_Explorer::max2(+t_280, +d_[34]+t_274);
	uint64_t t_284 = MAP_Explorer::max2(+1+t_281, +d_[34]+t_275);
	uint64_t t_285 = MAP_Explorer::max2(+1+t_282, +d_[34]+t_276);
	uint64_t t_286 = MAP_Explorer::max2(+d_[37]+t_277, +1+t_280);
	uint64_t t_287 = MAP_Explorer::max2(+d_[37]+t_278, +1+t_281);
	uint64_t t_288 = MAP_Explorer::max2(+d_[37]+t_279, +1+t_282);
	uint64_t t_289 = MAP_Explorer::max2(+t_286, +1+t_283);
	uint64_t t_290 = MAP_Explorer::max2(+t_287, +t_284);
	uint64_t t_291 = MAP_Explorer::max2(+t_288, +t_285);
	uint64_t t_292 = MAP_Explorer::max2(+t_289, +d_[36]+t_283);
	uint64_t t_293 = MAP_Explorer::max2(+1+t_290, +d_[36]+t_284);
	uint64_t t_294 = MAP_Explorer::max2(+1+t_291, +d_[36]+t_285);
	uint64_t t_295 = MAP_Explorer::max2(+d_[39]+t_286, +1+t_289);
	uint64_t t_296 = MAP_Explorer::max2(+d_[39]+t_287, +1+t_290);
	uint64_t t_297 = MAP_Explorer::max2(+d_[39]+t_288, +1+t_291);
	uint64_t t_298 = MAP_Explorer::max2(+t_295, +1+t_292);
	uint64_t t_299 = MAP_Explorer::max2(+t_296, +t_293);
	uint64_t t_300 = MAP_Explorer::max2(+t_297, +t_294);
	uint64_t t_301 = MAP_Explorer::max2(+t_298, +d_[38]+t_292);
	uint64_t t_302 = MAP_Explorer::max2(+1+t_299, +d_[38]+t_293);
	uint64_t t_303 = MAP_Explorer::max2(+1+t_300, +d_[38]+t_294);
	uint64_t t_304 = MAP_Explorer::max2(+d_[41]+t_295, +1+t_298);
	uint64_t t_305 = MAP_Explorer::max2(+d_[41]+t_296, +1+t_299);
	uint64_t t_306 = MAP_Explorer::max2(+d_[41]+t_297, +1+t_300);
	uint64_t t_307 = MAP_Explorer::max2(+t_304, +1+t_301);
	uint64_t t_308 = MAP_Explorer::max2(+t_305, +t_302);
	uint64_t t_309 = MAP_Explorer::max2(+t_306, +t_303);
	uint64_t t_310 = MAP_Explorer::max2(+t_307, +d_[40]+t_301);
	uint64_t t_311 = MAP_Explorer::max2(+1+t_308, +d_[40]+t_302);
	uint64_t t_312 = MAP_Explorer::max2(+1+t_309, +d_[40]+t_303);
	uint64_t t_313 = MAP_Explorer::max2(+d_[43]+t_304, +1+t_307);
	uint64_t t_314 = MAP_Explorer::max2(+d_[43]+t_305, +1+t_308);
	uint64_t t_315 = MAP_Explorer::max2(+d_[43]+t_306, +1+t_309);
	uint64_t t_316 = MAP_Explorer::max2(+t_313, +1+t_310);
	uint64_t t_317 = MAP_Explorer::max2(+t_314, +t_311);
	uint64_t t_318 = MAP_Explorer::max2(+t_315, +t_312);
	uint64_t t_319 = MAP_Explorer::max2(+t_316, +d_[42]+t_310);
	uint64_t t_320 = MAP_Explorer::max2(+1+t_317, +d_[42]+t_311);
	uint64_t t_321 = MAP_Explorer::max2(+1+t_318, +d_[42]+t_312);
	uint64_t t_322 = MAP_Explorer::max2(+d_[45]+t_313, +1+t_316);
	uint64_t t_323 = MAP_Explorer::max2(+d_[45]+t_314, +1+t_317);
	uint64_t t_324 = MAP_Explorer::max2(+d_[45]+t_315, +1+t_318);
	uint64_t t_325 = MAP_Explorer::max2(+t_322, +1+t_319);
	uint64_t t_326 = MAP_Explorer::max2(+t_323, +t_320);
	uint64_t t_327 = MAP_Explorer::max2(+t_324, +t_321);
	uint64_t t_328 = MAP_Explorer::max2(+t_325, +d_[44]+t_319);
	uint64_t t_329 = MAP_Explorer::max2(+1+t_326, +d_[44]+t_320);
	uint64_t t_330 = MAP_Explorer::max2(+1+t_327, +d_[44]+t_321);
	uint64_t t_331 = MAP_Explorer::max2(+d_[46]+t_322, +1+t_325);
	uint64_t t_332 = MAP_Explorer::max2(+d_[46]+t_323, +1+t_326);
	uint64_t t_333 = MAP_Explorer::max2(+d_[46]+t_324, +1+t_327);
	uint64_t t_334 = MAP_Explorer::max2(+t_331, +1+t_328);
	uint64_t t_335 = MAP_Explorer::max2(+t_332, +t_329);
	uint64_t t_336 = MAP_Explorer::max2(+t_333, +t_330);
	uint64_t t_337 = MAP_Explorer::max2(+d_[47]+t_331, +1+t_334);
	uint64_t t_338 = MAP_Explorer::max2(+d_[47]+t_332, +1+t_335);
	uint64_t t_339 = MAP_Explorer::max2(+d_[47]+t_333, +1+t_336);
	uint64_t t_340 = MAP_Explorer::max2(+t_238+t_337, +1+t_225);
	uint64_t t_341 = MAP_Explorer::max2(+t_239+t_337, +1+t_226);
	uint64_t t_342 = MAP_Explorer::max2(+t_338, +t_227);
	uint64_t t_343 = MAP_Explorer::max2(+t_241+t_337, +1+t_228);
	uint64_t t_344 = MAP_Explorer::max2(+t_242+t_337, +1+t_229);
	uint64_t t_345 = MAP_Explorer::max2(+t_243+t_337, +1+t_230);
	uint64_t t_346 = MAP_Explorer::max2(+t_244+t_337, +1+t_231);
	uint64_t t_347 = MAP_Explorer::max2(+t_245+t_337, +1+t_232);
	uint64_t t_348 = MAP_Explorer::max2(+t_246+t_337, +1+t_233);
	uint64_t t_349 = MAP_Explorer::max2(+t_247+t_337, +1+t_234);
	uint64_t t_350 = MAP_Explorer::max2(+t_248+t_337, +1+t_235);
	uint64_t t_351 = MAP_Explorer::max2(+t_249+t_337, +1+t_236);
	uint64_t t_352 = MAP_Explorer::max2(+t_250+t_337, +1+t_237);
	uint64_t t_353 = MAP_Explorer::max2(+d_[48]+t_238+t_337, +1+t_340);
	uint64_t t_354 = MAP_Explorer::max2(+d_[48]+t_239+t_337, +1+t_341);
	uint64_t t_355 = MAP_Explorer::max2(+d_[48]+t_338, +1+t_342);
	uint64_t t_356 = MAP_Explorer::max2(+d_[48]+t_241+t_337, +1+t_343);
	uint64_t t_357 = MAP_Explorer::max2(+d_[48]+t_242+t_337, +1+t_344);
	uint64_t t_358 = MAP_Explorer::max2(+d_[48]+t_243+t_337, +1+t_345);
	uint64_t t_359 = MAP_Explorer::max2(+d_[48]+t_244+t_337, +1+t_346);
	uint64_t t_360 = MAP_Explorer::max2(+d_[48]+t_245+t_337, +1+t_347);
	uint64_t t_361 = MAP_Explorer::max2(+d_[48]+t_246+t_337, +1+t_348);
	uint64_t t_362 = MAP_Explorer::max2(+d_[48]+t_247+t_337, +1+t_349);
	uint64_t t_363 = MAP_Explorer::max2(+d_[48]+t_248+t_337, +1+t_350);
	uint64_t t_364 = MAP_Explorer::max2(+d_[48]+t_249+t_337, +1+t_351);
	uint64_t t_365 = MAP_Explorer::max2(+d_[48]+t_250+t_337, +1+t_352);
	uint64_t t_366 = MAP_Explorer::max2(+t_355, +t_214);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_353, vec_[1] +t_353);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_354);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_355);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[48]+t_339);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_354);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +d_[24]+d_[25]+d_[48]+t_337);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_354);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_356);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_357);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +t_358);
	out_0 = MAP_Explorer::max2(out_0, vec_[25] +t_359);
	out_0 = MAP_Explorer::max2(out_0, vec_[26] +t_360);
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +t_361);
	out_0 = MAP_Explorer::max2(out_0, vec_[28] +t_362);
	out_0 = MAP_Explorer::max2(out_0, vec_[29] +t_363);
	out_0 = MAP_Explorer::max2(out_0, vec_[30] +t_364);
	out_0 = MAP_Explorer::max2(out_0, vec_[31] +t_365);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_353);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_238+t_334, vec_[1] +2+t_238+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_239+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_335);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_336);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_239+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[10] +2+d_[24]+d_[25]+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_239+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +2+t_241+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_242+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +2+t_243+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[25] +2+t_244+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +2+t_245+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +2+t_246+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[28] +2+t_247+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[29] +2+t_248+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[30] +2+t_249+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[31] +2+t_250+t_334);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+t_238+t_334);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_340, vec_[1] +2+t_340);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_341);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_342);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +2+t_339);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_341);
	out_13 = MAP_Explorer::max2(out_13, vec_[10] +2+d_[24]+d_[25]+t_337);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_341);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_343);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_344);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2+t_345);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+t_346);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2+t_347);
	out_13 = MAP_Explorer::max2(out_13, vec_[27] +2+t_348);
	out_13 = MAP_Explorer::max2(out_13, vec_[28] +2+t_349);
	out_13 = MAP_Explorer::max2(out_13, vec_[29] +2+t_350);
	out_13 = MAP_Explorer::max2(out_13, vec_[30] +2+t_351);
	out_13 = MAP_Explorer::max2(out_13, vec_[31] +2+t_352);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+t_340);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_212, vec_[1] +3+t_212);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_213);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_214);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_213);
	out_19 = MAP_Explorer::max2(out_19, vec_[10] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_213);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_215);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+t_216);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_217);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+t_218);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2+t_219);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_220);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +2+t_221);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2+t_222);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +2+t_223);
	out_19 = MAP_Explorer::max2(out_19, vec_[31] +2+t_224);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+t_212);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_225, vec_[1] +2+t_225);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_226);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_227);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_226);
	out_22 = MAP_Explorer::max2(out_22, vec_[10] +2+d_[24]);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+t_226);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_228);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2+t_229);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+t_230);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +2+t_231);
	out_22 = MAP_Explorer::max2(out_22, vec_[26] +2+t_232);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +2+t_233);
	out_22 = MAP_Explorer::max2(out_22, vec_[28] +2+t_234);
	out_22 = MAP_Explorer::max2(out_22, vec_[29] +2+t_235);
	out_22 = MAP_Explorer::max2(out_22, vec_[30] +2+t_236);
	out_22 = MAP_Explorer::max2(out_22, vec_[31] +2+t_237);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+t_225);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_238+t_328, vec_[1] +3+t_238+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3+t_239+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+t_329);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +2+t_330);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3+t_239+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[10] +3+d_[24]+d_[25]+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +3+t_239+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +3+t_241+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +3+t_242+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +3+t_243+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +3+t_244+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +3+t_245+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +3+t_246+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[28] +3+t_247+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[29] +3+t_248+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[30] +3+t_249+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[31] +3+t_250+t_328);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +3+d_[0]+t_238+t_328);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_188, vec_[1] +2+t_188);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+t_189);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+t_190);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+t_189);
	out_29 = MAP_Explorer::max2(out_29, vec_[10] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +2+t_189);
	out_29 = MAP_Explorer::max2(out_29, vec_[22] +2+t_191);
	out_29 = MAP_Explorer::max2(out_29, vec_[23] +2+t_192);
	out_29 = MAP_Explorer::max2(out_29, vec_[24] +2+t_193);
	out_29 = MAP_Explorer::max2(out_29, vec_[25] +2+t_194);
	out_29 = MAP_Explorer::max2(out_29, vec_[26] +2+t_195);
	out_29 = MAP_Explorer::max2(out_29, vec_[27] +2+t_196);
	out_29 = MAP_Explorer::max2(out_29, vec_[28] +2+t_197);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+t_198);
	out_29 = MAP_Explorer::max2(out_29, vec_[30] +2+t_199);
	out_29 = MAP_Explorer::max2(out_29, vec_[31] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+t_188);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_238+t_337, vec_[1] +1+t_238+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_239+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_338);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_339);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_239+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[10] +1+d_[24]+d_[25]+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_239+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_241+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_242+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_243+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+t_244+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1+t_245+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+t_246+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1+t_247+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+t_248+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+t_249+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_250+t_337);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_238+t_337);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_353, vec_[1] +2+t_353);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_354);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_366);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[48]+t_339);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_354);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +2+d_[24]+d_[25]+d_[48]+t_337);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_354);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_356);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_357);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_358);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+t_359);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+t_360);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+t_361);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2+t_362);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_363);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2+t_364);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2+t_365);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_353);
	uint64_t out_3 = out_25;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_662{
    662,
    46068,
    46176,
    block_662_fn
    };

static void block_666_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_666{
    666,
    47164,
    47168,
    block_666_fn
    };

static void block_669_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +2+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_23 = out_24 +d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_26 = out_24 +d_[5]+d_[6];
	uint64_t out_28 = out_24 +d_[5];
	uint64_t out_30 = out_24 +d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_24 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_24 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_23 +d_[9];
	uint64_t out_1 = out_19 -1+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[26] = out_26;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_669{
    669,
    46276,
    46312,
    block_669_fn
    };

static void block_670_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -2+d_[2]+d_[3]+d_[4]+t_1, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[19] +d_[4]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +3+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_0, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[4]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+d_[5], vec_[19] +1+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+t_2, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1+d_[4]+t_2);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_670{
    670,
    46316,
    46340,
    block_670_fn
    };

static void block_671_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_671{
    671,
    46904,
    46908,
    block_671_fn
    };

static void block_672_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +3+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +3+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_30 -1+d_[3];
	uint64_t out_37 = out_30 -2+d_[3]+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_30 -1+d_[3]+d_[4]+d_[6], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[4]+d_[6];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_18 +d_[4]+d_[5];


	vec_[19] = out_19;
	vec_[30] = out_30;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_672{
    672,
    47876,
    47896,
    block_672_fn
    };

static void block_673_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_673{
    673,
    47900,
    47904,
    block_673_fn
    };

static void block_674_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_674{
    674,
    50804,
    50808,
    block_674_fn
    };

static void block_675_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[30] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_675{
    675,
    50812,
    50820,
    block_675_fn
    };


} // namespace CV32E40P_DSE