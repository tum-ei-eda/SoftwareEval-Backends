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

static void block_468_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_468{
    468,
    17516,
    17516,
    block_468_fn
    };

static void block_469_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_469{
    469,
    17640,
    17648,
    block_469_fn
    };

static void block_470_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_470{
    470,
    17736,
    17744,
    block_470_fn
    };

static void block_471_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_471{
    471,
    17816,
    17816,
    block_471_fn
    };

static void block_472_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_22 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_22 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_472{
    472,
    17820,
    17828,
    block_472_fn
    };

static void block_473_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_473{
    473,
    17664,
    17668,
    block_473_fn
    };

static void block_474_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_474{
    474,
    17860,
    17864,
    block_474_fn
    };

static void block_475_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[19] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[19] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_475{
    475,
    17892,
    17900,
    block_475_fn
    };

static void block_476_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_12 = out_17 +1+d_[4];
	uint64_t out_18 = MAP_Explorer::max2(out_17 +d_[4]+d_[5]+d_[6], vec_[19] +2);
	uint64_t out_13 = out_18 +1+d_[7]+d_[8]+d_[9];
	uint64_t out_14 = out_18 +d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_19 = out_18 +d_[7]+d_[8];
	uint64_t out_22 = out_18 +1+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_37 = out_18 -1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_38 = out_18 -1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_13 -1+d_[10]+d_[11]+d_[12];
	uint64_t out_4 = out_6 +d_[13];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[17] = out_17;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_476{
    476,
    17916,
    17968,
    block_476_fn
    };

static void block_492_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_492{
    492,
    20948,
    20948,
    block_492_fn
    };

static void block_493_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_22 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_22 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_493{
    493,
    20952,
    20960,
    block_493_fn
    };

static void block_494_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_494{
    494,
    20796,
    20800,
    block_494_fn
    };

static void block_205_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_205{
    205,
    71024,
    71032,
    block_205_fn
    };

static void block_177_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+t_1, +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+d_[3]+d_[4]+t_1, +1+t_3);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +2+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[5]+t_4, vec_[1] +1+d_[5]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]+d_[5]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[3]+d_[4]+d_[5]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[5]+t_4);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[6], vec_[20] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_177{
    177,
    70532,
    70556,
    block_177_fn
    };

static void block_178_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[14] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_178{
    178,
    70520,
    70528,
    block_178_fn
    };

static void block_188_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_188{
    188,
    70976,
    70980,
    block_188_fn
    };

static void block_697_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2+d_[2]);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_0 = out_16 -2+d_[3]+d_[5];
	uint64_t out_3 = out_16 +d_[3]+d_[4];
	uint64_t out_37 = out_16 -1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_16 +d_[3]+d_[5], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_697{
    697,
    67504,
    67520,
    block_697_fn
    };

static void block_698_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_22 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_22;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_698{
    698,
    67524,
    67528,
    block_698_fn
    };

static void block_699_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[22] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_16;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[24] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_699{
    699,
    67532,
    67548,
    block_699_fn
    };

static void block_700_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[5]+t_1);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[5]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_9 = MAP_Explorer::max2(+t_5, +d_[5]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(+d_[8]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+d_[8]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_8);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_9);
	uint64_t t_15 = MAP_Explorer::max2(+t_10, +d_[7]+t_6);
	uint64_t t_16 = MAP_Explorer::max2(+1+t_11, +d_[7]+t_7);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_12, +d_[5]+d_[7]);
	uint64_t t_18 = MAP_Explorer::max2(+t_13, +d_[7]+t_8);
	uint64_t t_19 = MAP_Explorer::max2(+t_14, +d_[7]+t_9);
	uint64_t t_20 = MAP_Explorer::max2(+d_[8]+d_[10]+t_3, +1+t_10);
	uint64_t t_21 = MAP_Explorer::max2(+d_[8]+d_[10]+t_4, +1+t_11);
	uint64_t t_22 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_12);
	uint64_t t_23 = MAP_Explorer::max2(+d_[6]+d_[8]+d_[10], +1+t_13);
	uint64_t t_24 = MAP_Explorer::max2(+d_[8]+d_[10]+t_5, +1+t_14);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +1+t_15);
	uint64_t t_26 = MAP_Explorer::max2(+t_21, +t_16);
	uint64_t t_27 = MAP_Explorer::max2(+t_22, +t_17);
	uint64_t t_28 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_29 = MAP_Explorer::max2(+t_23, +1+t_18);
	uint64_t t_30 = MAP_Explorer::max2(+t_24, +1+t_19);
	uint64_t t_31 = MAP_Explorer::max2(+t_25, +d_[9]+t_15);
	uint64_t t_32 = MAP_Explorer::max2(+1+t_26, +d_[9]+t_16);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_27, +d_[9]+t_17);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_28, +d_[7]+d_[9]);
	uint64_t t_35 = MAP_Explorer::max2(+t_29, +d_[9]+t_18);
	uint64_t t_36 = MAP_Explorer::max2(+t_30, +d_[9]+t_19);
	uint64_t t_37 = MAP_Explorer::max2(+d_[12]+t_20, +1+t_25);
	uint64_t t_38 = MAP_Explorer::max2(+d_[12]+t_21, +1+t_26);
	uint64_t t_39 = MAP_Explorer::max2(+d_[12]+t_22, +1+t_27);
	uint64_t t_40 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_28);
	uint64_t t_41 = MAP_Explorer::max2(+d_[12]+t_23, +1+t_29);
	uint64_t t_42 = MAP_Explorer::max2(+d_[12]+t_24, +1+t_30);
	uint64_t t_43 = MAP_Explorer::max2(+t_37, +1+t_31);
	uint64_t t_44 = MAP_Explorer::max2(+t_38, +t_32);
	uint64_t t_45 = MAP_Explorer::max2(+t_39, +t_33);
	uint64_t t_46 = MAP_Explorer::max2(+t_40, +t_34);
	uint64_t t_47 = MAP_Explorer::max2(+t_41, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+t_42, +1+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_50 = MAP_Explorer::max2(+t_43, +d_[11]+t_31);
	uint64_t t_51 = MAP_Explorer::max2(+1+t_44, +d_[11]+t_32);
	uint64_t t_52 = MAP_Explorer::max2(+1+t_45, +d_[11]+t_33);
	uint64_t t_53 = MAP_Explorer::max2(+1+t_46, +d_[11]+t_34);
	uint64_t t_54 = MAP_Explorer::max2(+t_47, +d_[11]+t_35);
	uint64_t t_55 = MAP_Explorer::max2(+t_48, +d_[11]+t_36);
	uint64_t t_56 = MAP_Explorer::max2(+1+t_49, +d_[9]+d_[11]);
	uint64_t t_57 = MAP_Explorer::max2(+d_[13]+t_37, +1+t_43);
	uint64_t t_58 = MAP_Explorer::max2(+d_[13]+t_38, +1+t_44);
	uint64_t t_59 = MAP_Explorer::max2(+d_[13]+t_39, +1+t_45);
	uint64_t t_60 = MAP_Explorer::max2(+d_[13]+t_40, +1+t_46);
	uint64_t t_61 = MAP_Explorer::max2(+d_[13]+t_41, +1+t_47);
	uint64_t t_62 = MAP_Explorer::max2(+d_[13]+t_42, +1+t_48);
	uint64_t t_63 = MAP_Explorer::max2(+d_[12]+d_[13], +1+t_49);
	uint64_t t_64 = MAP_Explorer::max2(+t_57, +1+t_50);
	uint64_t t_65 = MAP_Explorer::max2(+t_58, +t_51);
	uint64_t t_66 = MAP_Explorer::max2(+d_[13], +d_[11]);
	uint64_t t_67 = MAP_Explorer::max2(+t_59, +t_52);
	uint64_t t_68 = MAP_Explorer::max2(+t_60, +t_53);
	uint64_t t_69 = MAP_Explorer::max2(+t_61, +1+t_54);
	uint64_t t_70 = MAP_Explorer::max2(+t_62, +1+t_55);
	uint64_t t_71 = MAP_Explorer::max2(+t_63, +t_56);
	uint64_t t_72 = MAP_Explorer::max2(+d_[14]+t_57, +1+t_64);
	uint64_t t_73 = MAP_Explorer::max2(+d_[14]+t_58, +1+t_65);
	uint64_t t_74 = MAP_Explorer::max2(+d_[13]+d_[14], +1+t_66);
	uint64_t t_75 = MAP_Explorer::max2(+d_[14]+t_59, +1+t_67);
	uint64_t t_76 = MAP_Explorer::max2(+d_[14]+t_60, +1+t_68);
	uint64_t t_77 = MAP_Explorer::max2(+d_[14]+t_61, +1+t_69);
	uint64_t t_78 = MAP_Explorer::max2(+d_[14]+t_62, +1+t_70);
	uint64_t t_79 = MAP_Explorer::max2(+d_[14]+t_63, +1+t_71);
	uint64_t t_80 = MAP_Explorer::max2(+d_[15]+d_[16]+t_72, +2+t_0);
	uint64_t t_81 = MAP_Explorer::max2(+d_[15]+d_[16]+t_73, +d_[2]);
	uint64_t t_82 = MAP_Explorer::max2(+d_[15]+d_[16]+t_78, +1+d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_64, vec_[1] +2+d_[1]+t_64);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_64);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_65);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_66);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_64);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_67);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_68);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+t_69);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +2+t_70);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_71);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_64);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_72, vec_[1] +2+d_[1]+t_72);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_72);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_73);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_74);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_72);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_75);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_76);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+t_77);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_78);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_79);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_72);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_50, vec_[1] +3+d_[1]+t_50);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_50);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_51);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+t_50);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_52);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_53);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3+t_54);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3+t_55);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+t_56);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_50);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[15]+t_72, vec_[1] +1+d_[1]+d_[15]+t_72);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[15]+t_72);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[15]+t_73);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[15]+t_74);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[15]+t_72);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[15]+t_75);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[15]+t_76);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[15]+t_77);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[15]+t_78);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[15]+t_79);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[15]+t_72);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_80, vec_[1] +2+d_[1]+t_80);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_80);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_81);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[15]+d_[16]+t_74);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_80);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[15]+d_[16]+t_75);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[15]+d_[16]+t_76);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[15]+d_[16]+t_77);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_82);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[15]+d_[16]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_80);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[16], vec_[16] );
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_700{
    700,
    87884,
    87928,
    block_700_fn
    };


} // namespace CV32E40P_DSE