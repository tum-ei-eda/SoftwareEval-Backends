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

static void block_624_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_624{
    624,
    41756,
    41764,
    block_624_fn
    };

static void block_627_fn(uint64_t* vec_, uint8_t* d_){
    
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
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_627{
    627,
    67896,
    67908,
    block_627_fn
    };

static void block_636_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_636{
    636,
    68324,
    68324,
    block_636_fn
    };

static void block_639_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_639{
    639,
    67912,
    67920,
    block_639_fn
    };

static void block_640_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_640{
    640,
    43164,
    43164,
    block_640_fn
    };

static void block_641_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+d_[7]+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[7]+t_5, +d_[2]+d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[6]+d_[7], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[9]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+d_[9]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+d_[9]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[9], +t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_6, vec_[1] +2+d_[1]+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[8]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[8]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[7]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_6);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_10, vec_[1] +2+d_[1]+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_11);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_10);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[7]+t_3, vec_[1] +1+d_[1]+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[7]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[7]+t_3);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[9], vec_[5] +1);
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_641{
    641,
    43168,
    43192,
    block_641_fn
    };

static void block_642_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_642{
    642,
    43196,
    43232,
    block_642_fn
    };

static void block_643_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[17] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_643{
    643,
    43652,
    43660,
    block_643_fn
    };

static void block_644_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_11 = MAP_Explorer::max2(+t_10, +2+t_6);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[7]+t_4, +t_7);
	uint64_t t_13 = MAP_Explorer::max2(+t_12, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[6]+d_[7], +t_8);
	uint64_t t_15 = MAP_Explorer::max2(+t_14, +1+t_8);
	uint64_t t_16 = MAP_Explorer::max2(+d_[7]+t_5, +t_9);
	uint64_t t_17 = MAP_Explorer::max2(+t_16, +1+t_9);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_6, vec_[1] +3+d_[1]+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_7);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+t_8);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_6);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_3, vec_[1] +1+d_[1]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_11, vec_[1] +2+d_[1]+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_11);
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

extern const MAP_Explorer::Block block_644{
    644,
    43692,
    43712,
    block_644_fn
    };

static void block_645_fn(uint64_t* vec_, uint8_t* d_){
    
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
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3);
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

extern const MAP_Explorer::Block block_645{
    645,
    43384,
    43404,
    block_645_fn
    };

static void block_646_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_646{
    646,
    67924,
    67924,
    block_646_fn
    };

static void block_647_fn(uint64_t* vec_, uint8_t* d_){
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
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_647{
    647,
    40696,
    40700,
    block_647_fn
    };

static void block_648_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_26 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_27 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[24] +1);
	uint64_t out_24 = MAP_Explorer::max2(out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[24] +3);
	uint64_t out_3 = out_24;
	uint64_t out_6 = out_24 -1+d_[10];
	uint64_t out_37 = out_24 -2+d_[10];
	uint64_t out_38 = out_24 -2+d_[10]+d_[11];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[11];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[14] = out_14;
	vec_[24] = out_24;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_648{
    648,
    40704,
    40748,
    block_648_fn
    };

static void block_649_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_649{
    649,
    39644,
    39648,
    block_649_fn
    };

static void block_650_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_650{
    650,
    95992,
    95996,
    block_650_fn
    };

static void block_651_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_651{
    651,
    9444,
    9448,
    block_651_fn
    };

static void block_652_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_652{
    652,
    9452,
    9456,
    block_652_fn
    };

static void block_653_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_14 -1+d_[4];
	uint64_t out_3 = MAP_Explorer::max2(out_14 +d_[4]+d_[5], vec_[3] +d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_14 -1+d_[4]+d_[6], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_653{
    653,
    8804,
    8824,
    block_653_fn
    };

static void block_654_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[5], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[7], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[7], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[6]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[6]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[6]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[9], +1+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[9], +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+t_9, +1+t_6);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_15 = MAP_Explorer::max2(+t_11, +t_8);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +d_[8]+t_6);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_13, +d_[8]+t_7);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_14, +d_[6]+d_[8]);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_15, +d_[8]+t_8);
	uint64_t t_20 = MAP_Explorer::max2(+d_[11]+t_9, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+d_[11]+t_10, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_14);
	uint64_t t_23 = MAP_Explorer::max2(+d_[11]+t_11, +1+t_15);
	uint64_t t_24 = MAP_Explorer::max2(+t_20, +1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(+1+t_21, +t_17);
	uint64_t t_26 = MAP_Explorer::max2(+t_22, +t_18);
	uint64_t t_27 = MAP_Explorer::max2(+t_23, +t_19);
	uint64_t t_28 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_29 = MAP_Explorer::max2(+t_24, +d_[10]+t_16);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_25, +d_[10]+t_17);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_26, +d_[10]+t_18);
	uint64_t t_32 = MAP_Explorer::max2(+1+t_27, +d_[10]+t_19);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_28, +d_[8]+d_[10]);
	uint64_t t_34 = MAP_Explorer::max2(+d_[13]+t_20, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+d_[13]+t_21, +t_25);
	uint64_t t_36 = MAP_Explorer::max2(+d_[13]+t_22, +1+t_26);
	uint64_t t_37 = MAP_Explorer::max2(+d_[13]+t_23, +1+t_27);
	uint64_t t_38 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +1+t_29);
	uint64_t t_40 = MAP_Explorer::max2(+1+t_35, +t_30);
	uint64_t t_41 = MAP_Explorer::max2(+t_36, +t_31);
	uint64_t t_42 = MAP_Explorer::max2(+t_37, +t_32);
	uint64_t t_43 = MAP_Explorer::max2(+t_38, +t_33);
	uint64_t t_44 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_45 = MAP_Explorer::max2(+t_39, +d_[12]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[12]+t_30);
	uint64_t t_47 = MAP_Explorer::max2(+1+t_41, +d_[12]+t_31);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_42, +d_[12]+t_32);
	uint64_t t_49 = MAP_Explorer::max2(+1+t_43, +d_[12]+t_33);
	uint64_t t_50 = MAP_Explorer::max2(+1+t_44, +d_[10]+d_[12]);
	uint64_t t_51 = MAP_Explorer::max2(+d_[15]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[15]+t_35, +t_40);
	uint64_t t_53 = MAP_Explorer::max2(+d_[15]+t_36, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+d_[15]+t_37, +1+t_42);
	uint64_t t_55 = MAP_Explorer::max2(+d_[15]+t_38, +1+t_43);
	uint64_t t_56 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +1+t_45);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+t_53, +t_47);
	uint64_t t_60 = MAP_Explorer::max2(+t_54, +t_48);
	uint64_t t_61 = MAP_Explorer::max2(+t_55, +t_49);
	uint64_t t_62 = MAP_Explorer::max2(+t_56, +t_50);
	uint64_t t_63 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_64 = MAP_Explorer::max2(+t_57, +d_[14]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+1+t_58, +d_[14]+t_46);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_59, +d_[14]+t_47);
	uint64_t t_67 = MAP_Explorer::max2(+1+t_60, +d_[14]+t_48);
	uint64_t t_68 = MAP_Explorer::max2(+1+t_61, +d_[14]+t_49);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_62, +d_[14]+t_50);
	uint64_t t_70 = MAP_Explorer::max2(+1+t_63, +d_[12]+d_[14]);
	uint64_t t_71 = MAP_Explorer::max2(+d_[17]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[17]+t_52, +t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[17]+t_53, +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+d_[17]+t_54, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+d_[17]+t_55, +1+t_61);
	uint64_t t_76 = MAP_Explorer::max2(+d_[17]+t_56, +1+t_62);
	uint64_t t_77 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_63);
	uint64_t t_78 = MAP_Explorer::max2(+t_71, +1+t_64);
	uint64_t t_79 = MAP_Explorer::max2(+1+t_72, +t_65);
	uint64_t t_80 = MAP_Explorer::max2(+t_73, +t_66);
	uint64_t t_81 = MAP_Explorer::max2(+t_74, +t_67);
	uint64_t t_82 = MAP_Explorer::max2(+t_75, +t_68);
	uint64_t t_83 = MAP_Explorer::max2(+t_76, +t_69);
	uint64_t t_84 = MAP_Explorer::max2(+t_77, +t_70);
	uint64_t t_85 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_86 = MAP_Explorer::max2(+t_78, +d_[16]+t_64);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_79, +d_[16]+t_65);
	uint64_t t_88 = MAP_Explorer::max2(+1+t_80, +d_[16]+t_66);
	uint64_t t_89 = MAP_Explorer::max2(+1+t_81, +d_[16]+t_67);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_82, +d_[16]+t_68);
	uint64_t t_91 = MAP_Explorer::max2(+1+t_83, +d_[16]+t_69);
	uint64_t t_92 = MAP_Explorer::max2(+1+t_84, +d_[16]+t_70);
	uint64_t t_93 = MAP_Explorer::max2(+1+t_85, +d_[14]+d_[16]);
	uint64_t t_94 = MAP_Explorer::max2(+d_[19]+t_71, +1+t_78);
	uint64_t t_95 = MAP_Explorer::max2(+d_[19]+t_72, +t_79);
	uint64_t t_96 = MAP_Explorer::max2(+d_[19]+t_73, +1+t_80);
	uint64_t t_97 = MAP_Explorer::max2(+d_[19]+t_74, +1+t_81);
	uint64_t t_98 = MAP_Explorer::max2(+d_[19]+t_75, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+d_[19]+t_76, +1+t_83);
	uint64_t t_100 = MAP_Explorer::max2(+d_[19]+t_77, +1+t_84);
	uint64_t t_101 = MAP_Explorer::max2(+d_[17]+d_[19], +1+t_85);
	uint64_t t_102 = MAP_Explorer::max2(+t_94, +1+t_86);
	uint64_t t_103 = MAP_Explorer::max2(+1+t_95, +t_87);
	uint64_t t_104 = MAP_Explorer::max2(+t_96, +t_88);
	uint64_t t_105 = MAP_Explorer::max2(+t_97, +t_89);
	uint64_t t_106 = MAP_Explorer::max2(+t_98, +t_90);
	uint64_t t_107 = MAP_Explorer::max2(+t_99, +t_91);
	uint64_t t_108 = MAP_Explorer::max2(+t_100, +t_92);
	uint64_t t_109 = MAP_Explorer::max2(+t_101, +t_93);
	uint64_t t_110 = MAP_Explorer::max2(+d_[19], +d_[16]);
	uint64_t t_111 = MAP_Explorer::max2(+t_102, +d_[18]+t_86);
	uint64_t t_112 = MAP_Explorer::max2(+1+t_103, +d_[18]+t_87);
	uint64_t t_113 = MAP_Explorer::max2(+1+t_104, +d_[18]+t_88);
	uint64_t t_114 = MAP_Explorer::max2(+1+t_105, +d_[18]+t_89);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_106, +d_[18]+t_90);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_107, +d_[18]+t_91);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_108, +d_[18]+t_92);
	uint64_t t_118 = MAP_Explorer::max2(+1+t_109, +d_[18]+t_93);
	uint64_t t_119 = MAP_Explorer::max2(+1+t_110, +d_[16]+d_[18]);
	uint64_t t_120 = MAP_Explorer::max2(+d_[21]+t_94, +1+t_102);
	uint64_t t_121 = MAP_Explorer::max2(+d_[21]+t_95, +t_103);
	uint64_t t_122 = MAP_Explorer::max2(+d_[21]+t_96, +1+t_104);
	uint64_t t_123 = MAP_Explorer::max2(+d_[21]+t_97, +1+t_105);
	uint64_t t_124 = MAP_Explorer::max2(+d_[21]+t_98, +1+t_106);
	uint64_t t_125 = MAP_Explorer::max2(+d_[21]+t_99, +1+t_107);
	uint64_t t_126 = MAP_Explorer::max2(+d_[21]+t_100, +1+t_108);
	uint64_t t_127 = MAP_Explorer::max2(+d_[21]+t_101, +1+t_109);
	uint64_t t_128 = MAP_Explorer::max2(+d_[19]+d_[21], +1+t_110);
	uint64_t t_129 = MAP_Explorer::max2(+t_120, +1+t_111);
	uint64_t t_130 = MAP_Explorer::max2(+1+t_121, +t_112);
	uint64_t t_131 = MAP_Explorer::max2(+t_122, +t_113);
	uint64_t t_132 = MAP_Explorer::max2(+t_123, +t_114);
	uint64_t t_133 = MAP_Explorer::max2(+t_124, +t_115);
	uint64_t t_134 = MAP_Explorer::max2(+t_125, +t_116);
	uint64_t t_135 = MAP_Explorer::max2(+t_126, +t_117);
	uint64_t t_136 = MAP_Explorer::max2(+t_127, +t_118);
	uint64_t t_137 = MAP_Explorer::max2(+t_128, +t_119);
	uint64_t t_138 = MAP_Explorer::max2(+d_[21], +d_[18]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_10 +d_[2]+d_[20]+t_111, vec_[3] +d_[20]+t_112);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[20]+t_113);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[20]+t_114);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[20]+t_115);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[20]+t_116);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[20]+t_117);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[20]+t_118);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[20]+t_119);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[18]+d_[20]);
	uint64_t out_5 = MAP_Explorer::max2(out_10 +d_[2]+t_129, vec_[3] +1+t_130);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_131);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_132);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+t_133);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_134);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +2+t_135);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +2+t_136);
	out_5 = MAP_Explorer::max2(out_5, vec_[20] +2+t_137);
	out_5 = MAP_Explorer::max2(out_5, vec_[21] +2+t_138);
	uint64_t out_15 = MAP_Explorer::max2(out_10 +d_[2]+d_[4], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_10 -1+d_[2]+t_94, vec_[3] +1+t_95);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_96);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_97);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+t_98);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+t_99);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+t_100);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+t_101);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +1+d_[19]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_10 -1+d_[2]+t_120, vec_[3] +1+t_121);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+t_122);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1+t_124);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1+t_125);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1+t_126);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1+t_127);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1+t_128);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1+d_[21]);
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

extern const MAP_Explorer::Block block_654{
    654,
    8588,
    8636,
    block_654_fn
    };

static void block_655_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_5, +d_[2]+d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13], +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_10, +d_[12]+t_6);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[12]+t_7);
	uint64_t t_16 = MAP_Explorer::max2(+d_[13], +d_[12]);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_12, +d_[12]+t_8);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_13, +d_[12]+t_9);
	uint64_t t_19 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]+t_3, +1+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]+t_4, +t_11);
	uint64_t t_21 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]+t_5, +1+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15], +1+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +1+t_14);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_20, +t_15);
	uint64_t t_25 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_16);
	uint64_t t_26 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_27 = MAP_Explorer::max2(+t_21, +t_17);
	uint64_t t_28 = MAP_Explorer::max2(+t_22, +t_18);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[14]+t_14, vec_[1] +2+d_[1]+d_[14]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[14]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[14]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[11]+d_[14]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[14]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[14]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[12]+d_[14]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[14]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[8]+d_[9]+d_[10]+d_[11]+d_[14]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[14]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[14]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[14]+t_14);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_23, vec_[1] +2+d_[1]+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_24);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[11]+t_25);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_26);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_27);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[8]+d_[9]+d_[10]+d_[11]+t_25);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+t_25);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_28);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_23);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[7]+t_3, vec_[1] +2+d_[1]+d_[7]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[7]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+d_[7]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[7]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[7]+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+d_[7]);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[6]+d_[7]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[7]+t_3);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2+t_5);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_19, vec_[1] +1+d_[1]+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[11]+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+t_22);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_19);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_22 = out_13 +d_[8];
	uint64_t out_14 = MAP_Explorer::max2(out_13 +d_[8]+d_[9], vec_[4] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_13 +d_[8]+d_[9]+d_[10], vec_[4] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_15 -1+d_[11]+d_[13], vec_[12] +1);


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_655{
    655,
    8460,
    8504,
    block_655_fn
    };


} // namespace CV32E40P_DSE