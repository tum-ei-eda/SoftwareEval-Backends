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

static void block_194_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_194{
    194,
    80016,
    80024,
    block_194_fn
    };

static void block_195_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_195{
    195,
    79840,
    79844,
    block_195_fn
    };

static void block_201_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[17] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_201{
    201,
    78368,
    78372,
    block_201_fn
    };

static void block_206_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_28 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_3 = out_28;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[28] = out_28;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_206{
    206,
    78444,
    78452,
    block_206_fn
    };

static void block_207_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_24 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_26 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +1);
	uint64_t out_3 = out_26;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[10];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_207{
    207,
    78176,
    78216,
    block_207_fn
    };

static void block_208_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7]+t_5, +1+t_7);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+t_6, +1+t_8);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_7, vec_[1] +2+d_[1]+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +2+t_8);
	out_6 = MAP_Explorer::max2(out_6, vec_[4] +2+t_8);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +2+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[12] +2+t_8);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+t_7);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_3, vec_[1] +3+d_[1]+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_5, vec_[1] +1+d_[1]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_9, vec_[1] +1+d_[1]+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_9);
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_208{
    208,
    76220,
    76240,
    block_208_fn
    };

static void block_218_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_218{
    218,
    79252,
    79256,
    block_218_fn
    };

static void block_219_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_219{
    219,
    79232,
    79240,
    block_219_fn
    };

static void block_223_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_223{
    223,
    79388,
    79392,
    block_223_fn
    };

static void block_234_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3], +d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+d_[1]);

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_2, vec_[1] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_2);
	uint64_t out_3 = out_22;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );


	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_234{
    234,
    77084,
    77092,
    block_234_fn
    };

static void block_235_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_13 = MAP_Explorer::max2(+d_[8]+t_10, +1+t_1);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_11, +1+t_2);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+t_12, +d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[5]+t_3, vec_[1] +2+d_[5]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[5]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[5]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[4]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[5]+t_3);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_7, vec_[1] +2+t_7);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_8);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[18] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+t_7);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_10, vec_[1] +1+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[4]+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_10);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_13, vec_[1] +2+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[4]+d_[6]+d_[7]+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+d_[6]+d_[7]+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[7]+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_13);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[8], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_235{
    235,
    77096,
    77120,
    block_235_fn
    };

static void block_236_fn(uint64_t* vec_, uint8_t* d_){
    
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
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
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

extern const MAP_Explorer::Block block_236{
    236,
    77128,
    77132,
    block_236_fn
    };

static void block_249_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_249{
    249,
    77220,
    77228,
    block_249_fn
    };

static void block_260_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_260{
    260,
    812,
    812,
    block_260_fn
    };

static void block_261_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_261{
    261,
    4804,
    4808,
    block_261_fn
    };

static void block_1117_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1117{
    1117,
    76800,
    76820,
    block_1117_fn
    };

static void block_1118_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_1118{
    1118,
    77208,
    77212,
    block_1118_fn
    };

static void block_1119_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1119{
    1119,
    77216,
    77216,
    block_1119_fn
    };

static void block_1142_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1142{
    1142,
    21648,
    21652,
    block_1142_fn
    };

static void block_1143_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_1143{
    1143,
    76608,
    76616,
    block_1143_fn
    };


} // namespace CV32E40P_DSE