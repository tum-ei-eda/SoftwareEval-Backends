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

static void block_93_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_93{
    93,
    9140,
    9144,
    block_93_fn
    };

static void block_94_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[20] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_94{
    94,
    9152,
    9160,
    block_94_fn
    };

static void block_95_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_95{
    95,
    96352,
    96360,
    block_95_fn
    };

static void block_96_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_96{
    96,
    96364,
    96380,
    block_96_fn
    };

static void block_97_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_97{
    97,
    70824,
    70828,
    block_97_fn
    };

static void block_98_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_98{
    98,
    70832,
    70844,
    block_98_fn
    };

static void block_114_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_114{
    114,
    45964,
    45964,
    block_114_fn
    };

static void block_135_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[30] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[4] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_135{
    135,
    56724,
    56732,
    block_135_fn
    };

static void block_139_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[5]+d_[6], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8], +d_[7]);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_3, +d_[7]+t_1);
	uint64_t t_7 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[8]+d_[10], +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +1+t_4);
	uint64_t t_10 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_5);
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +t_6);
	uint64_t t_12 = MAP_Explorer::max2(+t_9, +d_[9]+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +d_[9]+t_5);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +d_[9]+t_6);
	uint64_t t_15 = MAP_Explorer::max2(+d_[12]+t_7, +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+d_[10]+d_[12], +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[12]+t_8, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +1+t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +1+t_13);
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +t_14);
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
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[6]+d_[11]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[11]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +1+d_[11]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_12);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_18, vec_[1] +2+d_[1]+d_[2]+t_18);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+t_18);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_18);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]+t_18);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+d_[6]+t_19);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +2+t_20);
	out_17 = MAP_Explorer::max2(out_17, vec_[30] +2+t_20);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_18);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[30] +2+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_21, vec_[1] +1+d_[1]+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[6]+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_23);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+t_23);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_21);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_24, vec_[1] +2+d_[1]+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[6]+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_24);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_24 = out_37 +1;
	uint64_t out_0 = out_24 -2+d_[14];


	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[24] = out_24;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_139{
    139,
    56756,
    56796,
    block_139_fn
    };

static void block_140_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[3]);
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

extern const MAP_Explorer::Block block_140{
    140,
    56800,
    56816,
    block_140_fn
    };

static void block_164_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+t_3, vec_[1] +d_[1]+d_[2]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +d_[7]);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +d_[2]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[16] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +2+d_[1]+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6], vec_[1] +1+d_[1]+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_164{
    164,
    67356,
    67376,
    block_164_fn
    };

static void block_165_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_165{
    165,
    67404,
    67404,
    block_165_fn
    };

static void block_166_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +3);
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

extern const MAP_Explorer::Block block_166{
    166,
    68772,
    68776,
    block_166_fn
    };

static void block_167_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_13 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[10]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_20 = MAP_Explorer::max2(+d_[11]+t_13, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[11]+t_14, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[11]+t_15, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+d_[11], +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_20, +1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_21, +1+t_17);
	uint64_t t_26 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_22, +1+t_18);
	uint64_t t_27 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_23, +1+t_19);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[9]+t_10, vec_[1] +2+d_[1]+d_[2]+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[9]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[9]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[9]+t_10);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_16, vec_[1] +2+d_[1]+d_[2]+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[2]+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2+t_19);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_16);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_20, vec_[1] +2+d_[1]+d_[2]+d_[12]+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]+d_[12]+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+d_[12]+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[5] +2+d_[11]+d_[12]);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[12]+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +2+d_[12]+t_21);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[15] +2+d_[2]+d_[12]+t_20);
	out_24 = MAP_Explorer::max2(out_24, vec_[16] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[12]+t_22);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +2+d_[12]+t_23);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_20);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_20, vec_[1] +2+d_[1]+d_[2]+t_20);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+d_[2]+t_20);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+t_20);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+d_[11]);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2+t_20);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+t_21);
	out_26 = MAP_Explorer::max2(out_26, vec_[15] +2+d_[2]+t_20);
	out_26 = MAP_Explorer::max2(out_26, vec_[16] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+t_22);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+t_23);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_20);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[12]+d_[13]+t_20, vec_[1] +1+d_[1]+d_[2]+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[11]+d_[12]+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[12]+d_[13]+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[12]+d_[13]+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1+d_[12]+d_[13]+t_23);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[12]+d_[13]+t_20);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_24, vec_[1] +2+d_[1]+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[11]+d_[12]+d_[13]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_25);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[13]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_24);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;
	uint64_t out_0 = out_12 -2+d_[14];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_167{
    167,
    68780,
    68820,
    block_167_fn
    };

static void block_168_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
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

extern const MAP_Explorer::Block block_168{
    168,
    68824,
    68828,
    block_168_fn
    };

static void block_169_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_30 = MAP_Explorer::max2(+t_25, +d_[7]+t_12);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_26, +d_[7]+t_13);
	uint64_t t_32 = MAP_Explorer::max2(+2+t_27, +d_[7]+t_14);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_28, +d_[7]+t_15);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_29, +d_[5]+d_[7]);
	uint64_t t_35 = MAP_Explorer::max2(+1+d_[9], +d_[7]);
	uint64_t t_36 = MAP_Explorer::max2(+d_[10]+t_25, +1+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[10]+t_26, +t_31);
	uint64_t t_38 = MAP_Explorer::max2(+1+d_[10]+t_27, +t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[10]+t_28, +t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[10]+t_29, +t_34);
	uint64_t t_41 = MAP_Explorer::max2(+d_[9]+d_[10], +t_35);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_30, vec_[1] +3+t_30);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_31);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_32);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_31);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_31);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_33);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_34);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+t_35);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+t_30);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_20, vec_[1] +2+t_20);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_21);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_22);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_21);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_21);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_23);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+t_24);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_20);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_25, vec_[1] +1+t_25);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_28);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_29);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_25);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_36, vec_[1] +2+t_36);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_37);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_37);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_37);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_39);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_40);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+t_41);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_36);
	uint64_t out_3 = out_13;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[10], vec_[26] );


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_169{
    169,
    68832,
    68856,
    block_169_fn
    };

static void block_170_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2]+d_[4]+d_[5], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5], +d_[1]);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_3, vec_[1] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] );
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[28] +d_[5]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+t_0, vec_[1] +2+d_[3]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2]+d_[4], vec_[1] +1+d_[2]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]+d_[4]);
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

extern const MAP_Explorer::Block block_170{
    170,
    69024,
    69036,
    block_170_fn
    };

static void block_171_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]);
	uint64_t out_1 = out_14 -1+d_[2]+d_[3]+d_[4];
	uint64_t out_23 = out_14 +d_[2]+d_[3];
	uint64_t out_28 = out_14 +d_[2];
	uint64_t out_37 = out_14 -1+d_[2]+d_[3];
	uint64_t out_38 = out_14 +d_[2]+d_[3]+d_[4];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_171{
    171,
    69496,
    69512,
    block_171_fn
    };

static void block_175_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_175{
    175,
    70452,
    70460,
    block_175_fn
    };

static void block_176_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = out_18 +d_[4]+d_[5]+d_[6];
	uint64_t out_20 = out_18 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_21 = out_18 +d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_18 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_10 = MAP_Explorer::max2(out_18 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_176{
    176,
    70476,
    70516,
    block_176_fn
    };


} // namespace CV32E40P_DSE