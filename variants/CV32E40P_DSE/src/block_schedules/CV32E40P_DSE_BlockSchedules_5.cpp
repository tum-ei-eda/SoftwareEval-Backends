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

static void block_74_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_74{
    74,
    60412,
    60440,
    block_74_fn
    };

static void block_75_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_17 +d_[2]+d_[3]+d_[4]+d_[5], vec_[3] +2+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]);
	uint64_t out_6 = MAP_Explorer::max2(out_17 +d_[2]+d_[3], vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +1+d_[2], vec_[3] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 -1+d_[2]+d_[3]+d_[4]+d_[6], vec_[3] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	uint64_t out_1 = out_37 +d_[7];
	uint64_t out_38 = out_37 +1+d_[7];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_75{
    75,
    85904,
    85928,
    block_75_fn
    };

static void block_92_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_92{
    92,
    2744,
    2744,
    block_92_fn
    };

static void block_93_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_93{
    93,
    2748,
    2752,
    block_93_fn
    };

static void block_94_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	uint64_t out_4 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_94{
    94,
    2760,
    2768,
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
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[19] +2);
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
    85972,
    85980,
    block_95_fn
    };

static void block_96_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]);
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
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]+d_[4]);
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
    85984,
    86000,
    block_96_fn
    };

static void block_97_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_97{
    97,
    60444,
    60448,
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
    60452,
    60464,
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
    35584,
    35584,
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
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
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
    46344,
    46352,
    block_135_fn
    };

static void block_139_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[7]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[8]+d_[10], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_6 = MAP_Explorer::max2(+t_4, +d_[9]+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_5, +d_[7]+d_[9]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[12]+t_3, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[13]+t_8, +1+t_10);
	uint64_t t_13 = MAP_Explorer::max2(+d_[13]+t_9, +1+t_11);
	uint64_t t_14 = MAP_Explorer::max2(+d_[14]+t_12, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[14]+t_13, +1+t_11);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[11]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[11]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_6);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +2+d_[1]+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +2+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_12, vec_[1] +1+d_[1]+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_12);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_14, vec_[1] +2+d_[1]+d_[2]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_14);
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
    46376,
    46416,
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
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[5], vec_[22] +1);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[22] +2+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[22] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3);
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
    46420,
    46436,
    block_140_fn
    };

static void block_163_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[3]+d_[5]);
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
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_2);
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
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +2+d_[1]+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_163{
    163,
    56976,
    56996,
    block_163_fn
    };

static void block_164_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_164{
    164,
    57024,
    57024,
    block_164_fn
    };

static void block_165_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_165{
    165,
    58392,
    58396,
    block_165_fn
    };

static void block_166_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[3]+d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[7]+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[7]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[10]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_11, +1+t_13);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+t_12, +1+t_14);
	uint64_t t_17 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_15, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[14]+t_16, +1+t_14);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[9]+t_9, vec_[1] +2+d_[1]+d_[2]+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[9]+t_9);
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
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_13, vec_[1] +2+d_[1]+d_[2]+t_13);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+t_13);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_13);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+t_14);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[2]+t_13);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_15, vec_[1] +2+d_[1]+d_[2]+d_[12]+t_15);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]+d_[12]+t_15);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+d_[12]+t_15);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3+d_[12]+t_16);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[15] +2+d_[2]+d_[12]+t_15);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_15);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_15, vec_[1] +2+d_[1]+d_[2]+t_15);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+d_[2]+t_15);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+t_15);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +3+t_16);
	out_26 = MAP_Explorer::max2(out_26, vec_[15] +2+d_[2]+t_15);
	out_26 = MAP_Explorer::max2(out_26, vec_[16] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_15);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[12]+d_[13]+t_15, vec_[1] +1+d_[1]+d_[2]+d_[12]+d_[13]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[12]+d_[13]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[12]+d_[13]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[12]+d_[13]+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]+d_[12]+d_[13]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[12]+d_[13]+t_15);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_17, vec_[1] +2+d_[1]+d_[2]+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_18);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_17);
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

extern const MAP_Explorer::Block block_166{
    166,
    58400,
    58440,
    block_166_fn
    };

static void block_167_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_167{
    167,
    58444,
    58448,
    block_167_fn
    };

static void block_168_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_20 = MAP_Explorer::max2(+d_[9]+t_14, +1+t_17);
	uint64_t t_21 = MAP_Explorer::max2(+d_[9]+t_15, +1+t_18);
	uint64_t t_22 = MAP_Explorer::max2(+d_[9]+t_16, +t_19);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +d_[7]+t_11);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +d_[7]+t_12);
	uint64_t t_25 = MAP_Explorer::max2(+2+t_22, +d_[7]+t_13);
	uint64_t t_26 = MAP_Explorer::max2(+d_[10]+t_20, +1+t_23);
	uint64_t t_27 = MAP_Explorer::max2(+d_[10]+t_21, +t_24);
	uint64_t t_28 = MAP_Explorer::max2(+1+d_[10]+t_22, +t_25);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_23, vec_[1] +3+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+t_23);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_17, vec_[1] +2+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_19);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_17);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_20, vec_[1] +1+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_20);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_26, vec_[1] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_28);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_26);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[10];
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = MAP_Explorer::max2(out_3 , vec_[26] +2);


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_168{
    168,
    58452,
    58476,
    block_168_fn
    };

static void block_169_fn(uint64_t* vec_, uint8_t* d_){
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
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+t_0, vec_[1] +2+d_[3]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2]+d_[4], vec_[1] +1+d_[2]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[17] +2);
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

extern const MAP_Explorer::Block block_169{
    169,
    58644,
    58656,
    block_169_fn
    };


} // namespace CV32E40P_DSE