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

static void block_72_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_72{
    72,
    67040,
    67044,
    block_72_fn
    };

static void block_73_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[22] +1);
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

extern const MAP_Explorer::Block block_73{
    73,
    66068,
    66076,
    block_73_fn
    };

static void block_76_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -2+d_[2];


	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_76{
    76,
    117732,
    117740,
    block_76_fn
    };

static void block_87_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_4 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[4] = out_4;
	vec_[20] = out_20;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_87{
    87,
    7868,
    7876,
    block_87_fn
    };

static void block_90_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_90{
    90,
    117744,
    117752,
    block_90_fn
    };

static void block_91_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2]+d_[3], vec_[1] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]+d_[3]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_91{
    91,
    117756,
    117768,
    block_91_fn
    };

static void block_99_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[14] +2);
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

extern const MAP_Explorer::Block block_99{
    99,
    66080,
    66088,
    block_99_fn
    };

static void block_100_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_100{
    100,
    66092,
    66096,
    block_100_fn
    };

static void block_101_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6]+t_1, +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6]+d_[7]+t_1, +1+t_2);

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_28 -2+d_[2]+t_3, vec_[3] +1+d_[6]+d_[7]);
	out_0 = MAP_Explorer::max2(out_0, vec_[25] +d_[6]+d_[7]);
	uint64_t out_3 = MAP_Explorer::max2(out_28 +d_[2]+d_[5]+t_1, vec_[3] +3+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[5]);
	uint64_t out_15 = MAP_Explorer::max2(out_28 +d_[2]+t_0, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_28 +d_[2]+t_2, vec_[3] +3+d_[6]);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2+d_[6]);
	uint64_t out_37 = MAP_Explorer::max2(out_28 -1+d_[2]+d_[6]+t_1, vec_[3] +2+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_28 +d_[2]+t_3, vec_[3] +3+d_[6]+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+d_[6]+d_[7]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[28] = out_28;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_101{
    101,
    66100,
    66124,
    block_101_fn
    };

static void block_102_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[29] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_17;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_102{
    102,
    66828,
    66836,
    block_102_fn
    };

static void block_103_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_103{
    103,
    67232,
    67236,
    block_103_fn
    };

static void block_104_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[27] );
	uint64_t out_29 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[27] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[29] = out_29;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_104{
    104,
    66852,
    66856,
    block_104_fn
    };

static void block_105_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +2+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[2]+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[27] +2+d_[2]+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_15 = out_24 +d_[4];
	uint64_t out_37 = out_24 -1+d_[4]+d_[5];
	uint64_t out_14 = MAP_Explorer::max2(out_24 +d_[4]+d_[5], vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_24 -1+d_[4]+d_[5]+d_[6], vec_[22] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[24] = out_24;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_105{
    105,
    67072,
    67096,
    block_105_fn
    };

static void block_106_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_106{
    106,
    117760,
    117768,
    block_106_fn
    };

static void block_107_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_107{
    107,
    67100,
    67104,
    block_107_fn
    };

static void block_108_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[6]+d_[7], +d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[9], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[9], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[8]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[8]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[9]+d_[11], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[9]+d_[11], +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +t_5);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+d_[3]+t_6, vec_[1] +d_[1]+d_[2]+d_[3]+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+d_[3]+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[2]+d_[3]+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +d_[3]+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +d_[2]+d_[3]+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[28] +t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+d_[3]+t_6);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[10]+t_4, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[10]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[2]+d_[3]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+d_[3]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+d_[2]+d_[3]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +2+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[10]+t_4);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[27] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[27] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[28] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[2]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+d_[2]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[5]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[14] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_8, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+d_[3]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[2]+d_[3]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[3]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+d_[2]+d_[3]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_8);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = out_19 +d_[6];
	uint64_t out_37 = out_19 -1+d_[6]+d_[7]+d_[9];


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_108{
    108,
    66916,
    66948,
    block_108_fn
    };

static void block_109_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +2);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = out_18 -2+d_[2]+d_[3];
	uint64_t out_37 = out_18 -1+d_[2];
	uint64_t out_17 = MAP_Explorer::max2(out_18 +1+d_[2], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +d_[2]+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_109{
    109,
    66152,
    66164,
    block_109_fn
    };

static void block_110_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[3]+d_[4], +d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(+2+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4]+d_[5], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +2+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +t_1);
	uint64_t t_6 = MAP_Explorer::max2(+t_5, +1+t_1);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[4]+d_[5], +t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_7, +1+t_2);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2]+d_[3], vec_[1] +2+d_[2]+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[2]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_4, vec_[1] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_4);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[4]+d_[5];
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = out_18 -1+d_[4];


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_110{
    110,
    66168,
    66184,
    block_110_fn
    };

static void block_111_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2]+d_[3]+d_[4], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4], +d_[1]);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_3, vec_[1] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_5);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_3);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[15] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[18] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[5]+t_3, vec_[1] +1+d_[5]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[5]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[5]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[5]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[5]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[5]+t_3);
	uint64_t out_3 = out_28;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[13] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_111{
    111,
    66188,
    66208,
    block_111_fn
    };

static void block_112_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_112{
    112,
    66212,
    66216,
    block_112_fn
    };


} // namespace CV32E40P_DSE