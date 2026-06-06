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

static void block_220_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_220{
    220,
    79244,
    79248,
    block_220_fn
    };

static void block_221_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_221{
    221,
    79268,
    79272,
    block_221_fn
    };

static void block_222_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_222{
    222,
    79372,
    79376,
    block_222_fn
    };

static void block_224_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_224{
    224,
    79380,
    79384,
    block_224_fn
    };

static void block_225_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_225{
    225,
    79396,
    79396,
    block_225_fn
    };

static void block_226_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[28] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_226{
    226,
    78496,
    78504,
    block_226_fn
    };

static void block_227_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_227{
    227,
    78332,
    78340,
    block_227_fn
    };

static void block_228_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[24] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_228{
    228,
    78220,
    78228,
    block_228_fn
    };

static void block_229_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_3, vec_[1] +d_[1]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +d_[6]);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[4]+t_0, vec_[1] +2+d_[1]+d_[4]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[4]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[4]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[4]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[5], vec_[1] +1+d_[1]+d_[3]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_229{
    229,
    77352,
    77368,
    block_229_fn
    };

static void block_230_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
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

extern const MAP_Explorer::Block block_230{
    230,
    77372,
    77376,
    block_230_fn
    };

static void block_231_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_231{
    231,
    77380,
    77384,
    block_231_fn
    };

static void block_232_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +3+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
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

extern const MAP_Explorer::Block block_232{
    232,
    77408,
    77424,
    block_232_fn
    };

static void block_237_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_3 = out_15;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[5], vec_[23] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_237{
    237,
    77148,
    77168,
    block_237_fn
    };

static void block_238_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +d_[9]+t_10);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +d_[9]+t_11);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +d_[9]+t_12);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_19, +d_[7]+d_[9]);
	uint64_t t_24 = MAP_Explorer::max2(+d_[12]+t_13, +1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(+d_[12]+t_14, +1+t_17);
	uint64_t t_26 = MAP_Explorer::max2(+d_[12]+t_15, +1+t_18);
	uint64_t t_27 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_19);
	uint64_t t_28 = MAP_Explorer::max2(+t_24, +1+t_20);
	uint64_t t_29 = MAP_Explorer::max2(+t_25, +t_21);
	uint64_t t_30 = MAP_Explorer::max2(+t_26, +t_22);
	uint64_t t_31 = MAP_Explorer::max2(+t_27, +t_23);
	uint64_t t_32 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_33 = MAP_Explorer::max2(+d_[13]+t_24, +1+t_28);
	uint64_t t_34 = MAP_Explorer::max2(+d_[13]+t_25, +1+t_29);
	uint64_t t_35 = MAP_Explorer::max2(+d_[13]+t_26, +1+t_30);
	uint64_t t_36 = MAP_Explorer::max2(+d_[13]+t_27, +1+t_31);
	uint64_t t_37 = MAP_Explorer::max2(+d_[12]+d_[13], +1+t_32);
	uint64_t t_38 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_33, +1+t_28);
	uint64_t t_39 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_34, +1+t_29);
	uint64_t t_40 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_35, +1+t_30);
	uint64_t t_41 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_36, +1+t_31);
	uint64_t t_42 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_37, +1+t_32);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_20, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[11]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[11]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[11]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[11]+t_20);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[11]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_20);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_33, vec_[1] +2+d_[1]+d_[2]+t_33);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+t_33);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_33);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[13]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_33);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_34);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_35);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+d_[2]+t_33);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +2+t_36);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_37);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_33);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_28, vec_[1] +2+d_[1]+d_[2]+t_28);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_28);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_28);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_28);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_29);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_30);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+t_28);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_31);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_32);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_28);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_38, vec_[1] +2+d_[1]+d_[2]+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_39);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_40);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[16]+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_38);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_41);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_42);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_38);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = MAP_Explorer::max2(out_12 +d_[14], vec_[14] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_12 +d_[14]+d_[15], vec_[14] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_12 -1+d_[14]+d_[15]+d_[16], vec_[14] +1+d_[16]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[17], vec_[17] );
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_238{
    238,
    49808,
    49856,
    block_238_fn
    };

static void block_239_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[7], +d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+d_[8], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9]+d_[10]+t_3, +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[9]+d_[10]+t_4, +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+t_3, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+t_4, +1+t_6);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+t_3, +1+t_7);
	uint64_t t_10 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+t_4, +1+t_8);
	uint64_t t_11 = MAP_Explorer::max2(+d_[13]+t_9, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[13]+t_10, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[13]+d_[14]+t_9, +1+t_11);
	uint64_t t_14 = MAP_Explorer::max2(+d_[13]+d_[14]+t_10, +1+t_12);
	uint64_t t_15 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15]+t_9, +1+t_13);
	uint64_t t_16 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15]+t_10, +1+t_14);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_1, vec_[3] +3+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +3+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +3+d_[4]+t_1);
	uint64_t out_6 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_13, vec_[3] +2+t_14);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +2+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	out_6 = MAP_Explorer::max2(out_6, vec_[12] +2+t_13);
	out_6 = MAP_Explorer::max2(out_6, vec_[13] +2+d_[14]);
	out_6 = MAP_Explorer::max2(out_6, vec_[19] +2+d_[4]+t_13);
	out_6 = MAP_Explorer::max2(out_6, vec_[22] +2+d_[11]+d_[12]+d_[13]+d_[14]);
	out_6 = MAP_Explorer::max2(out_6, vec_[23] +2+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_0, vec_[3] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +3+d_[4]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_11, vec_[3] +3+t_12);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +3+d_[4]+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +3+d_[11]+d_[12]+d_[13]);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +3+d_[10]+d_[11]+d_[12]+d_[13]);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_9, vec_[3] +2+t_10);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+t_9);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2+d_[4]+t_9);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +2+d_[11]+d_[12]);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2+d_[10]+d_[11]+d_[12]);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +3);
	uint64_t out_16 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+d_[9]+t_3, vec_[3] +2+d_[9]+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[8]+d_[9]);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+d_[9]+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2+d_[4]+d_[9]+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +2);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_3, vec_[3] +2+t_4);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+d_[4]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2], vec_[19] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_7, vec_[3] +3+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[8]+d_[9]+d_[10]+d_[11]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[19] +3+d_[4]+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +3+d_[11]);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +3+d_[10]+d_[11]);
	uint64_t out_23 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_5, vec_[3] +3+t_6);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +3+d_[8]+d_[9]+d_[10]);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +3+t_5);
	out_23 = MAP_Explorer::max2(out_23, vec_[19] +3+d_[4]+t_5);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +3+d_[10]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+d_[13]+d_[14]+t_9, vec_[3] +1+d_[13]+d_[14]+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[13]+d_[14]+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[4]+d_[13]+d_[14]+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[11]+d_[12]+d_[13]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+t_15, vec_[3] +1+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+d_[14]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1+d_[4]+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]);
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
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

extern const MAP_Explorer::Block block_239{
    239,
    49860,
    49916,
    block_239_fn
    };

static void block_240_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[6]+d_[7]+d_[8]+d_[9], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[10]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[10]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[10]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[11], +d_[10]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[12]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[12]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[12]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[12]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[12]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[7]+d_[8]+d_[9]+d_[12]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[12]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[6]+d_[7]+d_[8]+d_[9]+d_[12]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[8]+d_[9]+d_[12]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_6);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_13, vec_[1] +2+d_[1]+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_16);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[7]+d_[8]+d_[9]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+d_[6]+d_[7]+d_[8]+d_[9]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+d_[8]+d_[9]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +2+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[17] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +1+d_[1]+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1+d_[8]+d_[9]+d_[11]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_19 = out_14 +d_[8];
	uint64_t out_37 = MAP_Explorer::max2(out_14 -1+d_[8]+d_[9]+d_[11], vec_[4] +1);


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_240{
    240,
    51032,
    51072,
    block_240_fn
    };

static void block_241_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_241{
    241,
    21520,
    21528,
    block_241_fn
    };

static void block_242_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_242{
    242,
    21532,
    21540,
    block_242_fn
    };

static void block_244_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_244{
    244,
    21560,
    21564,
    block_244_fn
    };

static void block_245_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_245{
    245,
    51076,
    51080,
    block_245_fn
    };


} // namespace CV32E40P_DSE