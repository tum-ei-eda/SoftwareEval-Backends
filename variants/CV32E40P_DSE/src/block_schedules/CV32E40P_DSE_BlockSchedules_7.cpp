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

static void block_233_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3], +d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_2, vec_[1] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[3] );
	uint64_t out_22 = MAP_Explorer::max2(out_3 , vec_[15] +2);


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_233{
    233,
    57892,
    57900,
    block_233_fn
    };

static void block_234_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_5, +d_[1]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6]+t_3, +2+t_0);
	uint64_t t_8 = MAP_Explorer::max2(+d_[6]+t_4, +1+d_[1]);
	uint64_t t_9 = MAP_Explorer::max2(+d_[6]+t_5, +t_6);
	uint64_t t_10 = MAP_Explorer::max2(+d_[6]+d_[7]+t_3, +1+t_7);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[7]+t_4, +1+t_8);
	uint64_t t_12 = MAP_Explorer::max2(+d_[6]+d_[7]+t_5, +1+t_9);
	uint64_t t_13 = MAP_Explorer::max2(+d_[7], +2);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_10, +1+t_1);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+t_11, +1+t_2);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_12, +d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[5]+t_3, vec_[1] +2+d_[5]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[5]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[5]+t_3);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_7, vec_[1] +2+t_7);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+t_7);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_10, vec_[1] +1+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_10);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_14, vec_[1] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[8]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_14);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[8];
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_234{
    234,
    57904,
    57928,
    block_234_fn
    };

static void block_235_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_235{
    235,
    57936,
    57940,
    block_235_fn
    };

static void block_248_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_248{
    248,
    58028,
    58036,
    block_248_fn
    };

static void block_291_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[6], vec_[15] );
	out_0 = MAP_Explorer::max2(out_0, vec_[18] +1);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[15] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[15] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
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

extern const MAP_Explorer::Block block_291{
    291,
    57608,
    57628,
    block_291_fn
    };

static void block_292_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_292{
    292,
    58016,
    58020,
    block_292_fn
    };

static void block_293_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_293{
    293,
    58024,
    58024,
    block_293_fn
    };

static void block_316_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_2 = out_38 +1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[5] +2);
	uint64_t out_0 = out_2 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[4] = out_4;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_316{
    316,
    2456,
    2460,
    block_316_fn
    };

static void block_317_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

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
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_317{
    317,
    57416,
    57424,
    block_317_fn
    };

static void block_335_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[7]+t_3, +t_5);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_4, vec_[1] +3+d_[1]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_4);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_2, vec_[1] +1+d_[1]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_6, vec_[1] +2+d_[1]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_6);
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

extern const MAP_Explorer::Block block_335{
    335,
    30880,
    30900,
    block_335_fn
    };

static void block_336_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +d_[6]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]+d_[6]);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[4]+d_[6]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9]+t_3, +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[9]+t_4, +t_6);
	uint64_t t_13 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +d_[8]+t_8);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +d_[8]+t_9);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +d_[8]+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+d_[11]+t_11, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[11]+t_12, +t_15);
	uint64_t t_22 = MAP_Explorer::max2(+d_[11]+t_13, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+t_22, +t_19);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_20, vec_[1] +d_[1]+t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_21);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_22);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_20);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[10]+t_17, vec_[1] +2+d_[1]+d_[10]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[10]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[10]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[10]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[10]+t_19);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[10]+t_17);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_11, vec_[1] +1+d_[1]+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_11);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_23, vec_[1] +2+d_[1]+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_23);
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

extern const MAP_Explorer::Block block_336{
    336,
    30904,
    30928,
    block_336_fn
    };

static void block_338_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[8]+t_3, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[8]+t_4, +t_6);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[6]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(+2+t_8, +d_[2]+d_[4]+d_[6]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+t_7, +1+t_9);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[10]+t_8, +t_10);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +d_[9]+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_12, +d_[9]+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[10], +d_[9]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[10]+d_[12]+t_7, +1+t_11);
	uint64_t t_17 = MAP_Explorer::max2(+d_[10]+d_[12]+t_8, +t_12);
	uint64_t t_18 = MAP_Explorer::max2(+t_16, +1+t_13);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_17, +t_14);
	uint64_t t_20 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_15);
	uint64_t t_21 = MAP_Explorer::max2(+t_18, +d_[11]+t_13);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +d_[11]+t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +d_[11]+t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[14]+t_16, +1+t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[14]+t_17, +t_19);
	uint64_t t_26 = MAP_Explorer::max2(+d_[10]+d_[12]+d_[14], +1+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+t_24, +1+t_21);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_25, +t_22);
	uint64_t t_29 = MAP_Explorer::max2(+t_26, +1+t_23);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[13]+t_21, vec_[1] +2+d_[1]+d_[13]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[13]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[13]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[13]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[13]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[13]+t_21);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_27, vec_[1] +2+d_[1]+t_27);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_27);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_28);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_27);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_29);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_27);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_5, vec_[1] +2+d_[1]+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_6);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_5);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_16, vec_[1] +1+d_[1]+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_17);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[10]+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_16);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_24, vec_[1] +1+d_[1]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_24);
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

extern const MAP_Explorer::Block block_338{
    338,
    35588,
    35620,
    block_338_fn
    };

static void block_339_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t out_3 = out_37 +1+d_[3];
	uint64_t out_5 = out_37 +1+d_[4];
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_339{
    339,
    35624,
    35636,
    block_339_fn
    };

static void block_340_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[6]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[6]+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[4]+d_[6]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+d_[10]+t_13, +1+t_16);
	uint64_t t_20 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_17);
	uint64_t t_21 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_18);
	uint64_t t_22 = MAP_Explorer::max2(+t_19, +d_[8]+t_10);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_20, +d_[8]+t_11);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +d_[8]+t_12);
	uint64_t t_25 = MAP_Explorer::max2(+d_[12]+t_19, +1+t_22);
	uint64_t t_26 = MAP_Explorer::max2(+d_[12]+t_20, +t_23);
	uint64_t t_27 = MAP_Explorer::max2(+d_[12]+t_21, +t_24);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +d_[11]+t_22);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_26, +d_[11]+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[11]+t_24);
	uint64_t t_31 = MAP_Explorer::max2(+d_[12]+d_[13]+t_19, +1+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+d_[12]+d_[13]+t_20, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[12]+d_[13]+t_21, +1+t_27);
	uint64_t t_34 = MAP_Explorer::max2(+t_31, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +t_29);
	uint64_t t_36 = MAP_Explorer::max2(+t_33, +t_30);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_31, vec_[1] +d_[1]+t_31);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_31);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_32);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_33);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_33);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_31);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_31);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_28, vec_[1] +3+d_[1]+t_28);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+t_28);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +2+t_29);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +2+t_30);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2+t_30);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +3+t_28);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+t_28);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_16, vec_[1] +2+d_[1]+t_16);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_16);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_17);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_18);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_16);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+t_16);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[12]+t_19, vec_[1] +1+d_[1]+d_[12]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[12]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[12]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[12]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[12]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[12]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[12]+t_19);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_34, vec_[1] +2+d_[1]+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_35);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_36);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_36);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_34);
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

extern const MAP_Explorer::Block block_340{
    340,
    35640,
    35672,
    block_340_fn
    };

static void block_341_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_65 = MAP_Explorer::max2(+t_62, +d_[17]+t_56);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_63, +d_[17]+t_57);
	uint64_t t_67 = MAP_Explorer::max2(+1+t_64, +d_[17]+t_58);
	uint64_t t_68 = MAP_Explorer::max2(+d_[20]+t_59, +1+t_62);
	uint64_t t_69 = MAP_Explorer::max2(+d_[20]+t_60, +1+t_63);
	uint64_t t_70 = MAP_Explorer::max2(+d_[20]+t_61, +t_64);
	uint64_t t_71 = MAP_Explorer::max2(+t_68, +1+t_65);
	uint64_t t_72 = MAP_Explorer::max2(+t_69, +t_66);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_70, +t_67);
	uint64_t t_74 = MAP_Explorer::max2(+t_71, +d_[19]+t_65);
	uint64_t t_75 = MAP_Explorer::max2(+1+t_72, +d_[19]+t_66);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_73, +d_[19]+t_67);
	uint64_t t_77 = MAP_Explorer::max2(+d_[22]+t_68, +1+t_71);
	uint64_t t_78 = MAP_Explorer::max2(+d_[22]+t_69, +1+t_72);
	uint64_t t_79 = MAP_Explorer::max2(+d_[22]+t_70, +t_73);
	uint64_t t_80 = MAP_Explorer::max2(+t_77, +1+t_74);
	uint64_t t_81 = MAP_Explorer::max2(+t_78, +t_75);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_79, +t_76);
	uint64_t t_83 = MAP_Explorer::max2(+d_[23]+t_77, +1+t_80);
	uint64_t t_84 = MAP_Explorer::max2(+d_[23]+t_78, +1+t_81);
	uint64_t t_85 = MAP_Explorer::max2(+d_[23]+t_79, +t_82);
	uint64_t t_86 = MAP_Explorer::max2(+t_83, +d_[21]+t_74);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_84, +d_[21]+t_75);
	uint64_t t_88 = MAP_Explorer::max2(+2+t_85, +d_[21]+t_76);
	uint64_t t_89 = MAP_Explorer::max2(+d_[24]+t_83, +1+t_86);
	uint64_t t_90 = MAP_Explorer::max2(+d_[24]+t_84, +t_87);
	uint64_t t_91 = MAP_Explorer::max2(+1+d_[24]+t_85, +t_88);
	uint64_t t_92 = MAP_Explorer::max2(+d_[24]+d_[25]+t_83, +1+t_89);
	uint64_t t_93 = MAP_Explorer::max2(+d_[24]+d_[25]+t_84, +1+t_90);
	uint64_t t_94 = MAP_Explorer::max2(+d_[24]+d_[25]+t_85, +t_91);
	uint64_t t_95 = MAP_Explorer::max2(+1+t_94, +t_88);
	uint64_t t_96 = MAP_Explorer::max2(+d_[27]+t_94, +t_95);
	uint64_t t_97 = MAP_Explorer::max2(+d_[27], +d_[26]);
	uint64_t t_98 = MAP_Explorer::max2(+1+t_96, +d_[26]+t_95);
	uint64_t t_99 = MAP_Explorer::max2(+d_[27]+d_[29]+t_94, +1+t_96);
	uint64_t t_100 = MAP_Explorer::max2(+d_[27]+d_[29], +1+t_97);
	uint64_t t_101 = MAP_Explorer::max2(+t_99, +t_98);
	uint64_t t_102 = MAP_Explorer::max2(+t_100, +d_[28]+t_97);
	uint64_t t_103 = MAP_Explorer::max2(+1+t_101, +d_[28]+t_98);
	uint64_t t_104 = MAP_Explorer::max2(+d_[27]+d_[29]+d_[31], +1+t_100);
	uint64_t t_105 = MAP_Explorer::max2(+d_[31]+t_99, +1+t_101);
	uint64_t t_106 = MAP_Explorer::max2(+t_104, +1+t_102);
	uint64_t t_107 = MAP_Explorer::max2(+t_105, +t_103);
	uint64_t t_108 = MAP_Explorer::max2(+t_106, +d_[30]+t_102);
	uint64_t t_109 = MAP_Explorer::max2(+1+t_107, +d_[30]+t_103);
	uint64_t t_110 = MAP_Explorer::max2(+d_[33]+t_104, +1+t_106);
	uint64_t t_111 = MAP_Explorer::max2(+d_[33]+t_105, +1+t_107);
	uint64_t t_112 = MAP_Explorer::max2(+t_110, +1+t_108);
	uint64_t t_113 = MAP_Explorer::max2(+t_111, +t_109);
	uint64_t t_114 = MAP_Explorer::max2(+d_[33], +d_[30]);
	uint64_t t_115 = MAP_Explorer::max2(+t_112, +d_[32]+t_108);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_113, +d_[32]+t_109);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_114, +d_[30]+d_[32]);
	uint64_t t_118 = MAP_Explorer::max2(+d_[35]+t_110, +1+t_112);
	uint64_t t_119 = MAP_Explorer::max2(+d_[35]+t_111, +1+t_113);
	uint64_t t_120 = MAP_Explorer::max2(+d_[33]+d_[35], +1+t_114);
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
	uint64_t t_151 = MAP_Explorer::max2(+t_148, +d_[40]+t_142);
	uint64_t t_152 = MAP_Explorer::max2(+1+t_149, +d_[40]+t_143);
	uint64_t t_153 = MAP_Explorer::max2(+1+t_150, +d_[40]+t_144);
	uint64_t t_154 = MAP_Explorer::max2(+d_[43]+t_145, +1+t_148);
	uint64_t t_155 = MAP_Explorer::max2(+d_[43]+t_146, +1+t_149);
	uint64_t t_156 = MAP_Explorer::max2(+d_[43]+t_147, +1+t_150);
	uint64_t t_157 = MAP_Explorer::max2(+t_154, +1+t_151);
	uint64_t t_158 = MAP_Explorer::max2(+t_155, +t_152);
	uint64_t t_159 = MAP_Explorer::max2(+t_156, +t_153);
	uint64_t t_160 = MAP_Explorer::max2(+t_157, +d_[42]+t_151);
	uint64_t t_161 = MAP_Explorer::max2(+1+t_158, +d_[42]+t_152);
	uint64_t t_162 = MAP_Explorer::max2(+1+t_159, +d_[42]+t_153);
	uint64_t t_163 = MAP_Explorer::max2(+d_[45]+t_154, +1+t_157);
	uint64_t t_164 = MAP_Explorer::max2(+d_[45]+t_155, +1+t_158);
	uint64_t t_165 = MAP_Explorer::max2(+d_[45]+t_156, +1+t_159);
	uint64_t t_166 = MAP_Explorer::max2(+t_163, +1+t_160);
	uint64_t t_167 = MAP_Explorer::max2(+t_164, +t_161);
	uint64_t t_168 = MAP_Explorer::max2(+t_165, +t_162);
	uint64_t t_169 = MAP_Explorer::max2(+t_166, +d_[44]+t_160);
	uint64_t t_170 = MAP_Explorer::max2(+1+t_167, +d_[44]+t_161);
	uint64_t t_171 = MAP_Explorer::max2(+1+t_168, +d_[44]+t_162);
	uint64_t t_172 = MAP_Explorer::max2(+d_[46]+t_163, +1+t_166);
	uint64_t t_173 = MAP_Explorer::max2(+d_[46]+t_164, +1+t_167);
	uint64_t t_174 = MAP_Explorer::max2(+d_[46]+t_165, +1+t_168);
	uint64_t t_175 = MAP_Explorer::max2(+t_172, +1+t_169);
	uint64_t t_176 = MAP_Explorer::max2(+t_173, +t_170);
	uint64_t t_177 = MAP_Explorer::max2(+t_174, +t_171);
	uint64_t t_178 = MAP_Explorer::max2(+d_[47]+t_172, +1+t_175);
	uint64_t t_179 = MAP_Explorer::max2(+d_[47]+t_173, +1+t_176);
	uint64_t t_180 = MAP_Explorer::max2(+d_[47]+t_174, +1+t_177);
	uint64_t t_181 = MAP_Explorer::max2(+t_92+t_178, +1+t_89);
	uint64_t t_182 = MAP_Explorer::max2(+t_93+t_178, +1+t_90);
	uint64_t t_183 = MAP_Explorer::max2(+t_179, +t_91);
	uint64_t t_184 = MAP_Explorer::max2(+d_[48]+t_92+t_178, +1+t_181);
	uint64_t t_185 = MAP_Explorer::max2(+d_[48]+t_93+t_178, +1+t_182);
	uint64_t t_186 = MAP_Explorer::max2(+d_[48]+t_179, +1+t_183);
	uint64_t t_187 = MAP_Explorer::max2(+t_186, +t_88);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_184, vec_[1] +t_184);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_185);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_186);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[48]+t_180);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_185);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +1+d_[25]+d_[48]+t_178);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_185);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_184);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_92+t_175, vec_[1] +2+t_92+t_175);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_93+t_175);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_176);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_177);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_93+t_175);
	out_12 = MAP_Explorer::max2(out_12, vec_[10] +3+d_[25]+t_175);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_93+t_175);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+t_92+t_175);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_181, vec_[1] +2+t_181);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_182);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_183);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +2+t_180);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_182);
	out_13 = MAP_Explorer::max2(out_13, vec_[10] +3+d_[25]+t_178);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_182);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+t_181);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_86, vec_[1] +3+t_86);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_87);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_88);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_87);
	out_19 = MAP_Explorer::max2(out_19, vec_[10] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_87);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+t_86);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_89, vec_[1] +2+t_89);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_90);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_91);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_90);
	out_22 = MAP_Explorer::max2(out_22, vec_[10] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+t_90);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+t_89);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_92+t_169, vec_[1] +3+t_92+t_169);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3+t_93+t_169);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+t_170);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +2+t_171);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3+t_93+t_169);
	out_25 = MAP_Explorer::max2(out_25, vec_[10] +4+d_[25]+t_169);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +3+t_93+t_169);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +3+d_[0]+t_92+t_169);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_80, vec_[1] +2+t_80);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+t_81);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+t_82);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+t_81);
	out_29 = MAP_Explorer::max2(out_29, vec_[10] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +2+t_81);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+t_80);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_92+t_178, vec_[1] +1+t_92+t_178);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_93+t_178);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_179);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_180);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_93+t_178);
	out_37 = MAP_Explorer::max2(out_37, vec_[10] +2+d_[25]+t_178);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_93+t_178);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_92+t_178);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_184, vec_[1] +2+t_184);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_185);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_187);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[48]+t_180);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_185);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +3+d_[25]+d_[48]+t_178);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_185);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_184);
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

extern const MAP_Explorer::Block block_341{
    341,
    35688,
    35796,
    block_341_fn
    };

static void block_345_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_345{
    345,
    36784,
    36788,
    block_345_fn
    };

static void block_348_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
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
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[3]+d_[4]+d_[5]);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+d_[3]+d_[4]+d_[5]);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +2+d_[4]+d_[5]);
	out_28 = MAP_Explorer::max2(out_28, vec_[4] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[23] +2+d_[3]+d_[4]+d_[5]);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]);
	uint64_t out_26 = out_28 +d_[6];
	uint64_t out_30 = out_28 +d_[6]+d_[7];
	uint64_t out_37 = out_28 -1+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_28 +d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_23 = out_26 +d_[7]+d_[8];
	uint64_t out_19 = out_23 +d_[9];
	uint64_t out_1 = out_19 -1+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[24] = out_24;
	vec_[28] = out_28;
	vec_[26] = out_26;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[23] = out_23;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_348{
    348,
    35896,
    35932,
    block_348_fn
    };

static void block_349_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_349{
    349,
    35936,
    35960,
    block_349_fn
    };

static void block_350_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
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

extern const MAP_Explorer::Block block_350{
    350,
    36524,
    36528,
    block_350_fn
    };

static void block_351_fn(uint64_t* vec_, uint8_t* d_){
    
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
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_30 -1+d_[3];
	uint64_t out_37 = out_30 -2+d_[3]+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_30 -1+d_[3]+d_[4]+d_[6], vec_[26] +2);
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

extern const MAP_Explorer::Block block_351{
    351,
    37496,
    37516,
    block_351_fn
    };


} // namespace CV32E40P_DSE