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

static void block_170_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_170{
    170,
    59116,
    59132,
    block_170_fn
    };

static void block_174_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_174{
    174,
    60072,
    60080,
    block_174_fn
    };

static void block_175_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = out_18 +d_[4]+d_[5]+d_[6];
	uint64_t out_20 = out_18 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_21 = out_18 +d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_18 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_18 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_10 = MAP_Explorer::max2(out_18 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_15 +d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[10] = out_10;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_175{
    175,
    60096,
    60136,
    block_175_fn
    };

static void block_179_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_179{
    179,
    60088,
    60092,
    block_179_fn
    };

static void block_181_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_25 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_25 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_181{
    181,
    59640,
    59648,
    block_181_fn
    };

static void block_182_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_182{
    182,
    59144,
    59148,
    block_182_fn
    };

static void block_189_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[2];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_189{
    189,
    60688,
    60696,
    block_189_fn
    };

static void block_190_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[11], +d_[10]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[11]+d_[12], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[11]+d_[12]+d_[14], +1+t_2);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +d_[13]+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[15]+t_3, +1+t_4);
	uint64_t t_6 = MAP_Explorer::max2(+t_5, +2+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+d_[15]+d_[17]+t_3, +1+t_6);
	uint64_t t_8 = MAP_Explorer::max2(+t_7, +d_[16]+t_6);
	uint64_t t_9 = MAP_Explorer::max2(+d_[18]+t_7, +1+t_8);
	uint64_t t_10 = MAP_Explorer::max2(+t_9, +2+t_8);
	uint64_t t_11 = MAP_Explorer::max2(+d_[18]+d_[20]+t_7, +1+t_10);

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +2+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +d_[3], vec_[14] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_21 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +3);
	uint64_t out_19 = MAP_Explorer::max2(out_21 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3+d_[8]);
	uint64_t out_1 = out_19 -1+d_[9]+t_11;
	uint64_t out_3 = out_19 +d_[9]+d_[19]+t_10;
	uint64_t out_20 = out_19 +1+d_[9]+t_8;
	uint64_t out_37 = out_19 -1+d_[9]+d_[18]+t_7;
	uint64_t out_38 = out_19 +d_[9]+t_11;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_190{
    190,
    60700,
    60764,
    block_190_fn
    };

static void block_191_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[21] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[15] = out_15;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_191{
    191,
    60768,
    60780,
    block_191_fn
    };

static void block_192_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +2+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_17 = MAP_Explorer::max2(out_20 +d_[3]+d_[4]+d_[5]+d_[6], vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_20 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +3+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[17] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_20 +d_[3], vec_[17] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_20 +1+d_[3]+d_[4]+d_[5], vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +3);
	uint64_t out_1 = out_18 -1+d_[8]+d_[10];
	uint64_t out_3 = out_18 +d_[8]+d_[9];
	uint64_t out_37 = out_18 -1+d_[8];
	uint64_t out_38 = out_18 +d_[8]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[20] = out_20;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_192{
    192,
    60784,
    60820,
    block_192_fn
    };

static void block_193_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_4 = out_37 +1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[4] = out_4;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_193{
    193,
    60824,
    60832,
    block_193_fn
    };

static void block_194_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
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

extern const MAP_Explorer::Block block_194{
    194,
    60648,
    60652,
    block_194_fn
    };

static void block_200_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_200{
    200,
    60180,
    60184,
    block_200_fn
    };

static void block_202_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_202{
    202,
    60188,
    60192,
    block_202_fn
    };

static void block_203_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
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

extern const MAP_Explorer::Block block_203{
    203,
    59176,
    59180,
    block_203_fn
    };

static void block_208_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_208{
    208,
    59252,
    59260,
    block_208_fn
    };

static void block_209_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_6 = out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +d_[3]+d_[4];
	uint64_t out_24 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_26 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_37 = out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +1);
	uint64_t out_3 = out_26;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_209{
    209,
    58984,
    59024,
    block_209_fn
    };

static void block_210_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[6], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+t_5, +1+t_7);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7]+t_6, +1+t_8);
	uint64_t t_12 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_9);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_7, vec_[1] +2+d_[1]+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +2+t_8);
	out_6 = MAP_Explorer::max2(out_6, vec_[4] +2+t_9);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +2+t_7);
	out_6 = MAP_Explorer::max2(out_6, vec_[12] +2+t_9);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+t_7);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_3, vec_[1] +3+d_[1]+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_5, vec_[1] +1+d_[1]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_10, vec_[1] +1+d_[1]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_10);
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

extern const MAP_Explorer::Block block_210{
    210,
    57028,
    57048,
    block_210_fn
    };

static void block_220_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_220{
    220,
    60060,
    60064,
    block_220_fn
    };

static void block_221_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[2];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_221{
    221,
    60040,
    60048,
    block_221_fn
    };


} // namespace CV32E40P_DSE