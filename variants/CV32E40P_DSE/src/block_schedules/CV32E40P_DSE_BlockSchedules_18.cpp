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

static void block_260_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_260{
    260,
    900,
    900,
    block_260_fn
    };

static void block_261_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_261{
    261,
    29192,
    29192,
    block_261_fn
    };

static void block_262_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_262{
    262,
    1160,
    1160,
    block_262_fn
    };

static void block_263_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[6], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[5]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[5]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6]+d_[8], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6]+d_[8], +t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +d_[7]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_9, +d_[7]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[10]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[10]+t_7, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_13, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+t_14, +d_[9]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_15, +d_[9]+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+d_[12]+t_12, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+d_[12]+t_13, +t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+t_20, +1+d_[3]);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +t_17);
	uint64_t t_23 = MAP_Explorer::max2(+d_[13]+t_18, +1+t_21);
	uint64_t t_24 = MAP_Explorer::max2(+d_[13]+t_19, +t_22);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[11]+t_16, vec_[1] +2+d_[1]+d_[11]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[11]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[11]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[11]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[11]+t_16);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[14]+t_23, vec_[1] +2+d_[1]+d_[14]+t_23);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[14]+t_23);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+d_[14]+t_24);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[14]+t_23);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[14]+t_23);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_21, vec_[1] +2+d_[1]+t_21);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_21);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1+t_22);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+t_21);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+t_21);
	uint64_t out_5 = out_22 +d_[15]+d_[16];
	uint64_t out_37 = out_22 -1+d_[15];
	uint64_t out_38 = out_22 -1+d_[15]+d_[16];
	uint64_t out_14 = MAP_Explorer::max2(out_22 +d_[15], vec_[4] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_263{
    263,
    904,
    948,
    block_263_fn
    };

static void block_271_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(out_12 +d_[3]+d_[4], vec_[12] +4);
	uint64_t out_6 = out_13 -1+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_14 = out_13 -1+d_[5]+d_[6]+d_[7];
	uint64_t out_22 = out_13 +d_[5];
	uint64_t out_23 = out_13 +d_[5]+d_[6];
	uint64_t out_37 = out_13 -2+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_38 = out_13 -2+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[9];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_271{
    271,
    1008,
    1044,
    block_271_fn
    };

static void block_272_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +d_[1]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+t_1);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[3] +1);
	uint64_t out_0 = out_38 -1;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_272{
    272,
    29196,
    29204,
    block_272_fn
    };

static void block_273_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_19 -1+d_[2]+d_[3];
	uint64_t out_14 = MAP_Explorer::max2(out_19 +d_[2]+d_[3], vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4], vec_[14] +2);
	uint64_t out_1 = out_38;
	uint64_t out_2 = out_38 +1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[5] +2);
	uint64_t out_0 = out_2 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[4] = out_4;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_273{
    273,
    1164,
    1180,
    block_273_fn
    };

static void block_274_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
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

extern const MAP_Explorer::Block block_274{
    274,
    29208,
    29220,
    block_274_fn
    };

static void block_275_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[2];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_275{
    275,
    464,
    472,
    block_275_fn
    };

static void block_276_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[7], +d_[3]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +2+d_[1]+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6], vec_[1] +1+d_[1]+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[4]+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_2, vec_[1] +1+d_[1]+d_[2]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_2);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_276{
    276,
    29224,
    29244,
    block_276_fn
    };

static void block_277_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[5], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[5]+d_[7], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[6]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[6]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7]+d_[8], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[8], +t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[10]+t_6, +1+t_8);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+t_7, +t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[9]+t_8, vec_[1] +2+d_[1]+d_[9]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[9]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[9]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[9]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[9]+t_8);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_4, vec_[1] +3+d_[1]+t_4);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+t_4);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_5);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+t_4);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+t_4);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[3]+d_[4]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_6, vec_[1] +1+d_[1]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_6);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_10, vec_[1] +2+d_[1]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_10);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_277{
    277,
    32124,
    32152,
    block_277_fn
    };

static void block_278_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_24;
	uint64_t out_6 = out_24 -1+d_[3];
	uint64_t out_37 = out_24 -2+d_[3];
	uint64_t out_38 = out_24 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[22] = out_22;
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

extern const MAP_Explorer::Block block_278{
    278,
    32328,
    32344,
    block_278_fn
    };

static void block_279_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
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

extern const MAP_Explorer::Block block_279{
    279,
    29248,
    29256,
    block_279_fn
    };

static void block_280_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_280{
    280,
    29260,
    29260,
    block_280_fn
    };

static void block_281_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_16 +d_[2]+d_[3];
	uint64_t out_37 = out_16 -1+d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_16 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_15 +d_[4]+d_[5];
	uint64_t out_4 = out_14 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_281{
    281,
    29280,
    29304,
    block_281_fn
    };

static void block_282_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +d_[6]+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]+d_[6]);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+t_3, +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[9]+t_4, +t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_10, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +d_[8]+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_12, +d_[8]+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_9, +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+t_10, +t_12);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_16, +t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +d_[10]+t_13);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_18, +d_[10]+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+t_15, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[13]+t_16, +t_18);
	uint64_t t_23 = MAP_Explorer::max2(+t_21, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_22, +t_20);
	uint64_t t_25 = MAP_Explorer::max2(+t_23, +d_[12]+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_24, +d_[12]+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+d_[15]+t_21, +1+t_23);
	uint64_t t_28 = MAP_Explorer::max2(+d_[15]+t_22, +t_24);
	uint64_t t_29 = MAP_Explorer::max2(+t_27, +1+t_25);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_28, +t_26);
	uint64_t t_31 = MAP_Explorer::max2(+t_29, +d_[14]+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+1+t_30, +d_[14]+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[17]+t_27, +1+t_29);
	uint64_t t_34 = MAP_Explorer::max2(+d_[17]+t_28, +t_30);
	uint64_t t_35 = MAP_Explorer::max2(+t_33, +1+t_31);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_34, +t_32);
	uint64_t t_37 = MAP_Explorer::max2(+t_35, +d_[16]+t_31);
	uint64_t t_38 = MAP_Explorer::max2(+1+t_36, +d_[16]+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[19]+t_33, +1+t_35);
	uint64_t t_40 = MAP_Explorer::max2(+d_[19]+t_34, +t_36);
	uint64_t t_41 = MAP_Explorer::max2(+t_39, +1+t_37);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_40, +t_38);
	uint64_t t_43 = MAP_Explorer::max2(+d_[20]+t_39, +1+t_41);
	uint64_t t_44 = MAP_Explorer::max2(+d_[20]+t_40, +t_42);
	uint64_t t_45 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_43, +d_[18]+t_37);
	uint64_t t_46 = MAP_Explorer::max2(+2+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+t_44, +d_[18]+t_38);
	uint64_t t_47 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_43, +1+t_45);
	uint64_t t_48 = MAP_Explorer::max2(+1+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+t_44, +t_46);
	uint64_t t_49 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_43, +1+t_47);
	uint64_t t_50 = MAP_Explorer::max2(+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+t_44, +t_48);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_47, vec_[1] +3+d_[1]+t_47);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_47);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_48);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +3+d_[25]+d_[26]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_47);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_47);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+d_[24]+t_43, vec_[1] +2+d_[1]+d_[21]+d_[22]+d_[23]+d_[24]+t_43);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[21]+d_[22]+d_[23]+d_[24]+t_43);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+d_[21]+d_[22]+d_[23]+d_[24]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[21]+d_[22]+d_[23]+d_[24]+t_43);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+d_[24]+t_43);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+t_43, vec_[1] +2+d_[1]+d_[21]+d_[22]+d_[23]+t_43);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[21]+d_[22]+d_[23]+t_43);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2+d_[21]+d_[22]+d_[23]+t_44);
	out_23 = MAP_Explorer::max2(out_23, vec_[4] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+d_[21]+d_[22]+d_[23]+t_43);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+d_[21]+d_[22]+d_[23]+t_43);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+d_[22]+t_43, vec_[1] +2+d_[1]+d_[21]+d_[22]+t_43);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[21]+d_[22]+t_43);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+d_[21]+d_[22]+t_44);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[21]+d_[22]+t_43);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[21]+d_[22]+t_43);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[21]+t_43, vec_[1] +2+d_[1]+d_[21]+t_43);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+d_[21]+t_43);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+d_[21]+t_44);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+d_[21]+t_43);
	out_25 = MAP_Explorer::max2(out_25, vec_[16] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+d_[1]+d_[21]+t_43);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_41, vec_[1] +2+d_[1]+t_41);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+t_41);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1+t_42);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2+t_41);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+t_41);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_43, vec_[1] +2+d_[1]+t_43);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +2+t_43);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +2+t_44);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +2+t_43);
	out_27 = MAP_Explorer::max2(out_27, vec_[15] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +2+d_[0]+d_[1]+t_43);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_49, vec_[1] +1+d_[1]+t_49);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_49);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_50);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[25]+d_[26]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_49);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_49);
	uint64_t out_3 = out_12;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[28];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_13 -1+d_[28];
	uint64_t out_0 = out_1 -1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_282{
    282,
    30192,
    30268,
    block_282_fn
    };

static void block_299_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	uint64_t out_5 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_299{
    299,
    2464,
    2472,
    block_299_fn
    };

static void block_300_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_2 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_4 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	out_4 = MAP_Explorer::max2(out_4, vec_[5] +2);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_14;
	uint64_t out_1 = out_2 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_300{
    300,
    31940,
    31948,
    block_300_fn
    };

static void block_301_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_6 = out_14 +d_[5];
	uint64_t out_37 = out_14 -1+d_[5];
	uint64_t out_38 = out_14 -1+d_[5]+d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_301{
    301,
    2476,
    2496,
    block_301_fn
    };

static void block_303_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
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

extern const MAP_Explorer::Block block_303{
    303,
    31376,
    31384,
    block_303_fn
    };


} // namespace CV32E40P_DSE