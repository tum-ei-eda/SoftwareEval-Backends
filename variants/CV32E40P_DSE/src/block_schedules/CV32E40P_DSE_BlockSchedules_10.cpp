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

static void block_243_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[4], vec_[18] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[18] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_243{
    243,
    8744,
    8756,
    block_243_fn
    };

static void block_136_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_136{
    136,
    56736,
    56744,
    block_136_fn
    };

static void block_727_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[4], vec_[17] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[17] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
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

extern const MAP_Explorer::Block block_727{
    727,
    8548,
    8560,
    block_727_fn
    };

static void block_137_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_137{
    137,
    56732,
    56732,
    block_137_fn
    };

static void block_478_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6]+d_[8]+d_[9], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[9], +d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+d_[9], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[7]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+t_4, +d_[5]+d_[7]);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[5]+d_[7]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[9], +d_[7]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[11]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[11]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+d_[11], +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[11]+d_[12]+t_3, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+d_[12]+t_4, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+d_[12]+t_5, +1+t_12);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9]+d_[11]+d_[12], +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[13]+d_[14]+t_14, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[13]+d_[14]+t_15, +t_11);
	uint64_t t_20 = MAP_Explorer::max2(+d_[13]+d_[14]+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+d_[14]+t_17, +1+t_13);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+d_[10]+t_6, vec_[3] +d_[10]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[4]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[10]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[10]+t_9);
	uint64_t out_6 = MAP_Explorer::max2(out_18 +d_[2], vec_[6] +1);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_14, vec_[3] +2+t_15);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[12]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[4]+t_14);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_16);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_17);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_10, vec_[3] +1+t_11);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[4]+t_10);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_12);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_13);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_18, vec_[3] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[12]+d_[13]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[4]+t_18);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_21);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_12 -2+d_[13]+d_[14];
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = out_12 +d_[13];
	uint64_t out_37 = out_12 -1+d_[13];


	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_478{
    478,
    21124,
    21168,
    block_478_fn
    };

static void block_483_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +2+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +2+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +2+d_[3]+d_[4]+d_[5]);
	out_32 = MAP_Explorer::max2(out_32, vec_[17] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t out_21 = out_32 +d_[6];
	uint64_t out_10 = MAP_Explorer::max2(out_32 +d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +2);
	uint64_t out_18 = MAP_Explorer::max2(out_32 +d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[4] +2+d_[10]+d_[11]);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_32 +d_[6]+d_[7]+d_[8], vec_[4] +1);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +2+d_[10]);
	out_33 = MAP_Explorer::max2(out_33, vec_[16] +1);
	uint64_t out_14 = out_21 +d_[7];
	uint64_t out_15 = out_18 +d_[12];
	uint64_t out_17 = out_18 +d_[12]+d_[13];
	uint64_t out_37 = out_18 -1+d_[12]+d_[13];
	uint64_t out_38 = out_18 +d_[12]+d_[13]+d_[14];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_15 -1+d_[13]+d_[14];
	uint64_t out_0 = out_1 -1;


	vec_[20] = out_20;
	vec_[32] = out_32;
	vec_[21] = out_21;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[33] = out_33;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_483{
    483,
    16716,
    16772,
    block_483_fn
    };

static void block_484_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_484{
    484,
    16784,
    16788,
    block_484_fn
    };

static void block_485_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_485{
    485,
    16800,
    16804,
    block_485_fn
    };

static void block_487_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_487{
    487,
    16908,
    16908,
    block_487_fn
    };

static void block_488_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_488{
    488,
    16832,
    16836,
    block_488_fn
    };

static void block_489_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_489{
    489,
    16840,
    16844,
    block_489_fn
    };

static void block_479_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_479{
    479,
    21236,
    21236,
    block_479_fn
    };

static void block_480_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_480{
    480,
    21240,
    21244,
    block_480_fn
    };

static void block_481_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_5 = MAP_Explorer::max2(out_18 +1+d_[5], vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +1+d_[5]+d_[6]+d_[7]+d_[8], vec_[3] +3+d_[8]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[7]+d_[8]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[5]+d_[6]+d_[7], vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[5]+d_[6], vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_6 = out_12 -1+d_[9]+d_[10]+d_[11];
	uint64_t out_13 = out_12 +d_[9];
	uint64_t out_15 = out_12 -1+d_[9]+d_[10];
	uint64_t out_37 = out_12 -2+d_[9]+d_[10]+d_[11];
	uint64_t out_38 = out_12 -2+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[12];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_481{
    481,
    21184,
    21232,
    block_481_fn
    };

static void block_486_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[10] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[20] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[10] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_486{
    486,
    16808,
    16816,
    block_486_fn
    };

static void block_207_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = out_15 -2+d_[3]+d_[5];
	uint64_t out_3 = out_15 +d_[3]+d_[4];
	uint64_t out_37 = out_15 -1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_15 +d_[3]+d_[5], vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_207{
    207,
    71044,
    71060,
    block_207_fn
    };

static void block_187_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_187{
    187,
    70972,
    70972,
    block_187_fn
    };

static void block_189_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_189{
    189,
    71016,
    71020,
    block_189_fn
    };

static void block_466_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[8]+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[9]+d_[10]+d_[11]+d_[13], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[13], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[14], +1+t_3);
	uint64_t t_7 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[13]+d_[14], +t_4);
	uint64_t t_8 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[14], +1+t_5);
	uint64_t t_9 = MAP_Explorer::max2(+d_[15]+t_6, +d_[12]+t_0);
	uint64_t t_10 = MAP_Explorer::max2(+2+d_[15]+t_7, +d_[12]+t_1);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[15]+t_8, +d_[12]+t_2);
	uint64_t t_12 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15], +d_[12]);
	uint64_t t_13 = MAP_Explorer::max2(+1+d_[14]+d_[15], +d_[12]);
	uint64_t t_14 = MAP_Explorer::max2(+d_[15]+d_[17]+t_6, +1+t_9);
	uint64_t t_15 = MAP_Explorer::max2(+1+d_[15]+d_[17]+t_7, +t_10);
	uint64_t t_16 = MAP_Explorer::max2(+d_[15]+d_[17]+t_8, +t_11);
	uint64_t t_17 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15]+d_[17], +1+t_12);
	uint64_t t_18 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[17], +t_13);
	uint64_t t_19 = MAP_Explorer::max2(+t_14, +d_[16]+t_9);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_15, +d_[16]+t_10);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_16, +d_[16]+t_11);
	uint64_t t_22 = MAP_Explorer::max2(+t_17, +d_[16]+t_12);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_18, +d_[16]+t_13);
	uint64_t t_24 = MAP_Explorer::max2(+d_[15]+d_[17]+d_[19]+t_6, +1+t_14);
	uint64_t t_25 = MAP_Explorer::max2(+d_[15]+d_[17]+d_[19]+t_7, +t_15);
	uint64_t t_26 = MAP_Explorer::max2(+d_[15]+d_[17]+d_[19]+t_8, +1+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15]+d_[17]+d_[19], +1+t_17);
	uint64_t t_28 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[17]+d_[19], +1+t_18);
	uint64_t t_29 = MAP_Explorer::max2(+t_24, +1+t_19);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_25, +t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[19], +d_[16]);
	uint64_t t_32 = MAP_Explorer::max2(+t_26, +t_21);
	uint64_t t_33 = MAP_Explorer::max2(+t_27, +1+t_22);
	uint64_t t_34 = MAP_Explorer::max2(+t_28, +t_23);
	uint64_t t_35 = MAP_Explorer::max2(+d_[20]+t_24, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[20]+t_25, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[19]+d_[20], +1+t_31);
	uint64_t t_38 = MAP_Explorer::max2(+d_[20]+t_26, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[20]+t_27, +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[20]+t_28, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +1+d_[7]+d_[8]+d_[9]+d_[10]);
	uint64_t t_42 = MAP_Explorer::max2(+t_36, +1+d_[9]+d_[10]);
	uint64_t t_43 = MAP_Explorer::max2(+t_38, +1+d_[8]+d_[9]+d_[10]);
	uint64_t t_44 = MAP_Explorer::max2(+d_[21]+t_35, +1+t_41);
	uint64_t t_45 = MAP_Explorer::max2(+d_[21]+t_36, +1+t_42);
	uint64_t t_46 = MAP_Explorer::max2(+d_[21]+t_38, +1+t_43);
	uint64_t t_47 = MAP_Explorer::max2(+t_44, +1+t_3);
	uint64_t t_48 = MAP_Explorer::max2(+t_45, +t_4);
	uint64_t t_49 = MAP_Explorer::max2(+t_46, +1+t_5);
	uint64_t t_50 = MAP_Explorer::max2(+d_[21]+t_39, +1+d_[13]+d_[14]);
	uint64_t t_51 = MAP_Explorer::max2(+d_[21]+t_40, +1+d_[14]);
	uint64_t t_52 = MAP_Explorer::max2(+d_[22]+t_44, +1+t_47);
	uint64_t t_53 = MAP_Explorer::max2(+d_[22]+t_45, +1+t_48);
	uint64_t t_54 = MAP_Explorer::max2(+d_[22]+t_46, +1+t_49);
	uint64_t t_55 = MAP_Explorer::max2(+d_[21]+d_[22]+t_39, +1+t_50);
	uint64_t t_56 = MAP_Explorer::max2(+d_[21]+d_[22]+t_40, +1+t_51);
	uint64_t t_57 = MAP_Explorer::max2(+d_[21]+d_[22]+t_37, +1+t_31);
	uint64_t t_58 = MAP_Explorer::max2(+t_55, +1+t_33);
	uint64_t t_59 = MAP_Explorer::max2(+t_56, +1+t_34);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -2+d_[5]+t_52, vec_[3] +t_53);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +d_[21]+d_[22]+t_37);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_54);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +d_[20]+d_[21]+d_[22]);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +d_[11]+t_55);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_56);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +d_[5]+d_[18]+t_19, vec_[3] +d_[18]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[16]+d_[18]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[18]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[18]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[11]+d_[18]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[18]+t_23);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +d_[5]+d_[7], vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[5]+d_[7]+d_[8], vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[8]);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +d_[5]+t_29, vec_[3] +1+t_30);
	out_15 = MAP_Explorer::max2(out_15, vec_[5] +2+t_31);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2+t_32);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[11]+t_33);
	out_15 = MAP_Explorer::max2(out_15, vec_[22] +2+t_34);
	uint64_t out_16 = MAP_Explorer::max2(out_18 +d_[5]+t_3, vec_[3] +1+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+t_5);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2+d_[11]+d_[13]);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +d_[5]+t_47, vec_[3] +2+t_48);
	out_17 = MAP_Explorer::max2(out_17, vec_[5] +2+d_[21]+t_37);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+t_49);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+d_[20]+d_[21]);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+d_[11]+t_50);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+t_51);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[5]+t_41, vec_[3] +2+t_42);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_37);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_43);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[20]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[11]+t_39);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_40);
	uint64_t out_22 = MAP_Explorer::max2(out_18 +d_[5]+t_6, vec_[3] +2+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2+d_[11]+d_[13]+d_[14]);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[14]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[5]+t_44, vec_[3] +1+t_45);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[21]+t_37);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[20]+d_[21]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[11]+d_[21]+t_39);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[21]+t_40);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +d_[5]+t_52, vec_[3] +2+t_53);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_57);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_54);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[20]+d_[21]+d_[22]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[11]+t_58);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_59);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_466{
    466,
    16936,
    17008,
    block_466_fn
    };

static void block_467_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_467{
    467,
    17392,
    17392,
    block_467_fn
    };


} // namespace CV32E40P_DSE