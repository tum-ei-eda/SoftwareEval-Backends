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

static void block_119_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[5]+d_[6], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[8], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[8], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[7]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8]+d_[10], +t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +t_5);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[9]+t_4, vec_[1] +2+d_[1]+d_[9]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[9]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[9]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[9]+t_4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_8, vec_[1] +2+d_[1]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_8);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[3]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_6, vec_[1] +1+d_[1]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_6);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_37 = out_19 -1+d_[6]+d_[8];


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
    78872,
    78900,
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
	uint64_t out_0 = out_15 -2+d_[2]+d_[4];
	uint64_t out_37 = out_15 -1+d_[2];
	uint64_t out_38 = out_15 -1+d_[2]+d_[4];
	uint64_t out_3 = MAP_Explorer::max2(out_15 +d_[2]+d_[3], vec_[3] +d_[3]);
	uint64_t out_5 = MAP_Explorer::max2(out_15 +d_[2]+d_[4], vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_120{
    120,
    85668,
    85680,
    block_120_fn
    };

static void block_121_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_121{
    121,
    85684,
    85688,
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
    85692,
    85712,
    block_122_fn
    };

static void block_123_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_123{
    123,
    78904,
    78908,
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
    78912,
    78924,
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
    78244,
    78244,
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
    78276,
    78296,
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
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +3+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+d_[2]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3);
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
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[6]);
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
    78076,
    78112,
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
    59912,
    59920,
    block_128_fn
    };

static void block_129_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_129{
    129,
    59752,
    59756,
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
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[5]+d_[6]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[6]+t_0);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[3]+d_[4]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+d_[4]);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+d_[3]+d_[4]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[5]+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -2+d_[5]+d_[7];
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = out_17 -1+d_[5];


	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_130{
    130,
    59760,
    59780,
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
    59784,
    59800,
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
    46996,
    46996,
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
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_133{
    133,
    47004,
    47016,
    block_133_fn
    };

static void block_134_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_56 = MAP_Explorer::max2(+t_53, +d_[15]+t_47);
	uint64_t t_57 = MAP_Explorer::max2(+1+t_54, +d_[15]+t_48);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_55, +d_[15]+t_49);
	uint64_t t_59 = MAP_Explorer::max2(+d_[18]+t_50, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+d_[18]+t_51, +1+t_54);
	uint64_t t_61 = MAP_Explorer::max2(+d_[18]+t_52, +t_55);
	uint64_t t_62 = MAP_Explorer::max2(+t_59, +1+t_56);
	uint64_t t_63 = MAP_Explorer::max2(+t_60, +t_57);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_61, +t_58);
	uint64_t t_65 = MAP_Explorer::max2(+d_[19]+t_59, +1+t_62);
	uint64_t t_66 = MAP_Explorer::max2(+d_[19]+t_60, +1+t_63);
	uint64_t t_67 = MAP_Explorer::max2(+d_[19]+t_61, +t_64);
	uint64_t t_68 = MAP_Explorer::max2(+t_65, +d_[17]+t_56);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_66, +d_[17]+t_57);
	uint64_t t_70 = MAP_Explorer::max2(+2+t_67, +d_[17]+t_58);
	uint64_t t_71 = MAP_Explorer::max2(+d_[20]+t_65, +1+t_68);
	uint64_t t_72 = MAP_Explorer::max2(+d_[20]+t_66, +t_69);
	uint64_t t_73 = MAP_Explorer::max2(+1+d_[20]+t_67, +t_70);
	uint64_t t_74 = MAP_Explorer::max2(+d_[20]+d_[21]+t_65, +1+t_71);
	uint64_t t_75 = MAP_Explorer::max2(+d_[20]+d_[21]+t_66, +1+t_72);
	uint64_t t_76 = MAP_Explorer::max2(+d_[20]+d_[21]+t_67, +t_73);
	uint64_t t_77 = MAP_Explorer::max2(+1+t_76, +t_70);
	uint64_t t_78 = MAP_Explorer::max2(+d_[23]+t_76, +t_77);
	uint64_t t_79 = MAP_Explorer::max2(+d_[23], +d_[22]);
	uint64_t t_80 = MAP_Explorer::max2(+1+t_78, +d_[22]+t_77);
	uint64_t t_81 = MAP_Explorer::max2(+d_[23]+d_[25]+t_76, +1+t_78);
	uint64_t t_82 = MAP_Explorer::max2(+d_[23]+d_[25], +1+t_79);
	uint64_t t_83 = MAP_Explorer::max2(+t_81, +t_80);
	uint64_t t_84 = MAP_Explorer::max2(+t_82, +d_[24]+t_79);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_83, +d_[24]+t_80);
	uint64_t t_86 = MAP_Explorer::max2(+d_[23]+d_[25]+d_[27], +1+t_82);
	uint64_t t_87 = MAP_Explorer::max2(+d_[27]+t_81, +1+t_83);
	uint64_t t_88 = MAP_Explorer::max2(+t_86, +1+t_84);
	uint64_t t_89 = MAP_Explorer::max2(+t_87, +t_85);
	uint64_t t_90 = MAP_Explorer::max2(+t_88, +d_[26]+t_84);
	uint64_t t_91 = MAP_Explorer::max2(+1+t_89, +d_[26]+t_85);
	uint64_t t_92 = MAP_Explorer::max2(+d_[29]+t_86, +1+t_88);
	uint64_t t_93 = MAP_Explorer::max2(+d_[29]+t_87, +1+t_89);
	uint64_t t_94 = MAP_Explorer::max2(+t_92, +1+t_90);
	uint64_t t_95 = MAP_Explorer::max2(+t_93, +t_91);
	uint64_t t_96 = MAP_Explorer::max2(+d_[29], +d_[26]);
	uint64_t t_97 = MAP_Explorer::max2(+t_94, +d_[28]+t_90);
	uint64_t t_98 = MAP_Explorer::max2(+1+t_95, +d_[28]+t_91);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_96, +d_[26]+d_[28]);
	uint64_t t_100 = MAP_Explorer::max2(+d_[31]+t_92, +1+t_94);
	uint64_t t_101 = MAP_Explorer::max2(+d_[31]+t_93, +1+t_95);
	uint64_t t_102 = MAP_Explorer::max2(+d_[29]+d_[31], +1+t_96);
	uint64_t t_103 = MAP_Explorer::max2(+t_100, +1+t_97);
	uint64_t t_104 = MAP_Explorer::max2(+t_101, +t_98);
	uint64_t t_105 = MAP_Explorer::max2(+t_102, +t_99);
	uint64_t t_106 = MAP_Explorer::max2(+t_103, +d_[30]+t_97);
	uint64_t t_107 = MAP_Explorer::max2(+1+t_104, +d_[30]+t_98);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_105, +d_[30]+t_99);
	uint64_t t_109 = MAP_Explorer::max2(+d_[33]+t_100, +1+t_103);
	uint64_t t_110 = MAP_Explorer::max2(+d_[33]+t_101, +1+t_104);
	uint64_t t_111 = MAP_Explorer::max2(+d_[33]+t_102, +1+t_105);
	uint64_t t_112 = MAP_Explorer::max2(+t_109, +1+t_106);
	uint64_t t_113 = MAP_Explorer::max2(+t_110, +t_107);
	uint64_t t_114 = MAP_Explorer::max2(+t_111, +t_108);
	uint64_t t_115 = MAP_Explorer::max2(+t_112, +d_[32]+t_106);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_113, +d_[32]+t_107);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_114, +d_[32]+t_108);
	uint64_t t_118 = MAP_Explorer::max2(+d_[35]+t_109, +1+t_112);
	uint64_t t_119 = MAP_Explorer::max2(+d_[35]+t_110, +1+t_113);
	uint64_t t_120 = MAP_Explorer::max2(+d_[35]+t_111, +1+t_114);
	uint64_t t_121 = MAP_Explorer::max2(+t_118, +1+t_115);
	uint64_t t_122 = MAP_Explorer::max2(+t_119, +t_116);
	uint64_t t_123 = MAP_Explorer::max2(+t_120, +t_117);
	uint64_t t_124 = MAP_Explorer::max2(+t_121, +d_[34]+t_115);
	uint64_t t_125 = MAP_Explorer::max2(+1+t_122, +d_[34]+t_116);
	uint64_t t_126 = MAP_Explorer::max2(+1+t_123, +d_[34]+t_117);
	uint64_t t_127 = MAP_Explorer::max2(+d_[37]+t_118, +1+t_121);
	uint64_t t_128 = MAP_Explorer::max2(+d_[37]+t_119, +1+t_122);
	uint64_t t_129 = MAP_Explorer::max2(+d_[37]+t_120, +1+t_123);
	uint64_t t_130 = MAP_Explorer::max2(+t_127, +1+t_124);
	uint64_t t_131 = MAP_Explorer::max2(+t_128, +t_125);
	uint64_t t_132 = MAP_Explorer::max2(+t_129, +t_126);
	uint64_t t_133 = MAP_Explorer::max2(+t_130, +d_[36]+t_124);
	uint64_t t_134 = MAP_Explorer::max2(+1+t_131, +d_[36]+t_125);
	uint64_t t_135 = MAP_Explorer::max2(+1+t_132, +d_[36]+t_126);
	uint64_t t_136 = MAP_Explorer::max2(+d_[39]+t_127, +1+t_130);
	uint64_t t_137 = MAP_Explorer::max2(+d_[39]+t_128, +1+t_131);
	uint64_t t_138 = MAP_Explorer::max2(+d_[39]+t_129, +1+t_132);
	uint64_t t_139 = MAP_Explorer::max2(+t_136, +1+t_133);
	uint64_t t_140 = MAP_Explorer::max2(+t_137, +t_134);
	uint64_t t_141 = MAP_Explorer::max2(+t_138, +t_135);
	uint64_t t_142 = MAP_Explorer::max2(+t_139, +d_[38]+t_133);
	uint64_t t_143 = MAP_Explorer::max2(+1+t_140, +d_[38]+t_134);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_141, +d_[38]+t_135);
	uint64_t t_145 = MAP_Explorer::max2(+d_[41]+t_136, +1+t_139);
	uint64_t t_146 = MAP_Explorer::max2(+d_[41]+t_137, +1+t_140);
	uint64_t t_147 = MAP_Explorer::max2(+d_[41]+t_138, +1+t_141);
	uint64_t t_148 = MAP_Explorer::max2(+t_145, +1+t_142);
	uint64_t t_149 = MAP_Explorer::max2(+t_146, +t_143);
	uint64_t t_150 = MAP_Explorer::max2(+t_147, +t_144);
	uint64_t t_151 = MAP_Explorer::max2(+d_[42]+t_145, +1+t_148);
	uint64_t t_152 = MAP_Explorer::max2(+d_[42]+t_146, +1+t_149);
	uint64_t t_153 = MAP_Explorer::max2(+d_[42]+t_147, +1+t_150);
	uint64_t t_154 = MAP_Explorer::max2(+t_74+t_151, +1+t_71);
	uint64_t t_155 = MAP_Explorer::max2(+t_75+t_151, +1+t_72);
	uint64_t t_156 = MAP_Explorer::max2(+t_152, +t_73);
	uint64_t t_157 = MAP_Explorer::max2(+d_[43]+t_74+t_151, +1+t_154);
	uint64_t t_158 = MAP_Explorer::max2(+d_[43]+t_75+t_151, +1+t_155);
	uint64_t t_159 = MAP_Explorer::max2(+d_[43]+t_152, +1+t_156);
	uint64_t t_160 = MAP_Explorer::max2(+t_159, +t_70);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_157, vec_[1] +t_157);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_158);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_159);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[43]+t_153);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_158);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +1+d_[21]+d_[43]+t_151);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_158);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_157);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[40]+t_74+t_142, vec_[1] +2+d_[40]+t_74+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[40]+t_75+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[40]+t_143);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[40]+t_144);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[40]+t_75+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +3+d_[21]+d_[40]+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +2+d_[40]+t_75+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[40]+t_74+t_142);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_74+t_148, vec_[1] +2+t_74+t_148);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_75+t_148);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_149);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_150);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_75+t_148);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+d_[21]+t_148);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_75+t_148);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+t_74+t_148);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_68, vec_[1] +3+t_68);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_69);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_70);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_69);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_69);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_68);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_71, vec_[1] +2+t_71);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_72);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1+t_73);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+t_72);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_72);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+t_71);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_154, vec_[1] +2+t_154);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_155);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+t_156);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +2+t_153);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_155);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +3+d_[21]+t_151);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_155);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+t_154);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_62, vec_[1] +2+t_62);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+t_63);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+t_64);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+t_63);
	out_30 = MAP_Explorer::max2(out_30, vec_[22] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[23] +2+t_63);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]+t_62);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_74+t_151, vec_[1] +1+t_74+t_151);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_75+t_151);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_152);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_153);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_75+t_151);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[21]+t_151);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_75+t_151);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_74+t_151);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_157, vec_[1] +2+t_157);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_158);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_160);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[43]+t_153);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_158);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[21]+d_[43]+t_151);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_158);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_157);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_134{
    134,
    46244,
    46340,
    block_134_fn
    };

static void block_138_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[30] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_138{
    138,
    47372,
    47376,
    block_138_fn
    };

static void block_141_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[25] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[4] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[3]+d_[4]+d_[5]);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +2+d_[3]+d_[4]+d_[5]);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +2+d_[4]+d_[5]);
	out_27 = MAP_Explorer::max2(out_27, vec_[4] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[25] +2+d_[3]+d_[4]+d_[5]);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]);
	uint64_t out_22 = out_27 +d_[6]+d_[7];
	uint64_t out_25 = out_27 +d_[6]+d_[7]+d_[8];
	uint64_t out_29 = out_27 +d_[6];
	uint64_t out_37 = out_27 -1+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_27 +d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_22 +d_[8]+d_[9];
	uint64_t out_1 = out_19 -1+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_141{
    141,
    46440,
    46476,
    block_141_fn
    };

static void block_142_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -2+d_[2]+d_[3]+d_[4]+t_1, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[19] +1+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +4);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_0, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +3+t_0);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+d_[5], vec_[19] +2+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+t_2, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+t_2);
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

extern const MAP_Explorer::Block block_142{
    142,
    46480,
    46504,
    block_142_fn
    };

static void block_143_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_3, vec_[1] +d_[1]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_3);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +2+t_2);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +3+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +2+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +3+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_3 = out_30;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_143{
    143,
    48328,
    48344,
    block_143_fn
    };


} // namespace CV32E40P_DSE