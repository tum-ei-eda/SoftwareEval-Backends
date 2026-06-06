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
    76064,
    76072,
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
    75796,
    75836,
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
    73840,
    73860,
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
    76872,
    76876,
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
    76852,
    76860,
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
    77008,
    77012,
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
    74704,
    74712,
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
    74716,
    74740,
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
    74748,
    74752,
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
    74840,
    74848,
    block_249_fn
    };

static void block_586_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_586{
    586,
    74420,
    74440,
    block_586_fn
    };

static void block_587_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_587{
    587,
    74828,
    74832,
    block_587_fn
    };

static void block_588_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_588{
    588,
    74836,
    74836,
    block_588_fn
    };

static void block_611_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_611{
    611,
    17328,
    17332,
    block_611_fn
    };

static void block_612_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_612{
    612,
    74228,
    74236,
    block_612_fn
    };

static void block_630_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_630{
    630,
    46880,
    46900,
    block_630_fn
    };

static void block_631_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_631{
    631,
    46904,
    46928,
    block_631_fn
    };

static void block_633_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_633{
    633,
    52400,
    52432,
    block_633_fn
    };

static void block_634_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_634{
    634,
    52436,
    52448,
    block_634_fn
    };

static void block_635_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_635{
    635,
    52452,
    52484,
    block_635_fn
    };


} // namespace CV32E40P_DSE