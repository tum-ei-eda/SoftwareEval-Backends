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

static void block_144_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_144{
    144,
    48348,
    48348,
    block_144_fn
    };

static void block_145_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_145{
    145,
    48352,
    48352,
    block_145_fn
    };

static void block_146_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[30] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	uint64_t out_5 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_146{
    146,
    52892,
    52900,
    block_146_fn
    };

static void block_147_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[2]+d_[3]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t out_3 = out_16;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[6];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[6];
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_147{
    147,
    61304,
    61328,
    block_147_fn
    };

static void block_148_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +d_[8]+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[11]+t_3, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[10]+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[8]+d_[10]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[13]+t_6, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+t_13, +d_[12]+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+1+t_14, +d_[12]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[14]+t_11, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[14]+t_12, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +1+t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[15]+t_17, +1+t_19);
	uint64_t t_22 = MAP_Explorer::max2(+d_[15]+t_18, +1+t_20);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+t_15, vec_[1] +3+d_[1]+d_[2]+d_[3]+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3+d_[2]+d_[3]+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +3+d_[3]+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +2+t_16);
	out_21 = MAP_Explorer::max2(out_21, vec_[6] +3+d_[2]+d_[3]+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +4+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+t_15);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_19, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_19);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[2]+d_[3]+t_19);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+d_[3]+t_19);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +2+t_20);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[2]+d_[3]+t_19);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +3+t_19);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_19);
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_21, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_21);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +2+d_[2]+d_[3]+t_21);
	out_31 = MAP_Explorer::max2(out_31, vec_[3] +2+d_[3]+t_21);
	out_31 = MAP_Explorer::max2(out_31, vec_[4] +2+t_22);
	out_31 = MAP_Explorer::max2(out_31, vec_[6] +2+d_[2]+d_[3]+t_21);
	out_31 = MAP_Explorer::max2(out_31, vec_[14] +3+t_21);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_21);
	uint64_t out_3 = out_21;
	uint64_t out_26 = out_31 +d_[16];
	uint64_t out_37 = out_31 -1+d_[16];
	uint64_t out_38 = out_31 +d_[16]+d_[17];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_26 -1+d_[17];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[31] = out_31;
	vec_[3] = out_3;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_148{
    148,
    52904,
    52952,
    block_148_fn
    };

static void block_149_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_149{
    149,
    52960,
    52960,
    block_149_fn
    };

static void block_150_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_150{
    150,
    46604,
    46608,
    block_150_fn
    };

static void block_151_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[29] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_3 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_151{
    151,
    46616,
    46624,
    block_151_fn
    };

static void block_152_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[27] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_152{
    152,
    46628,
    46632,
    block_152_fn
    };

static void block_153_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
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

extern const MAP_Explorer::Block block_153{
    153,
    46636,
    46640,
    block_153_fn
    };

static void block_154_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_154{
    154,
    46692,
    46692,
    block_154_fn
    };

static void block_155_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_155{
    155,
    46744,
    46748,
    block_155_fn
    };

static void block_156_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_156{
    156,
    46752,
    46756,
    block_156_fn
    };

static void block_157_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_157{
    157,
    46760,
    46764,
    block_157_fn
    };

static void block_158_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_6 = MAP_Explorer::max2(+t_4, +d_[8]+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_5, +d_[6]+d_[8]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[11]+t_3, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_12 = MAP_Explorer::max2(+t_9, +t_7);
	uint64_t t_13 = MAP_Explorer::max2(+d_[12]+t_8, +1+t_10);
	uint64_t t_14 = MAP_Explorer::max2(+d_[11]+d_[12], +1+t_11);
	uint64_t t_15 = MAP_Explorer::max2(+d_[12]+t_9, +1+t_12);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+t_13, vec_[1] +d_[1]+d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +1+t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_15);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +t_15);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[10]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[10]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_6);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +2+d_[1]+d_[2]+t_10);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_10);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_10);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+t_10);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +3+t_11);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_12);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+t_12);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_8, vec_[1] +1+d_[1]+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_8);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_158{
    158,
    46768,
    46800,
    block_158_fn
    };

static void block_159_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_159{
    159,
    46804,
    46812,
    block_159_fn
    };

static void block_160_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[27] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_160{
    160,
    46824,
    46828,
    block_160_fn
    };

static void block_161_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[31] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_0, vec_[1] +2+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[31] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_1, vec_[1] +1+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_1);
	uint64_t out_1 = out_37 +d_[5];
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = out_37 +1+d_[5];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[10] = out_10;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_161{
    161,
    46832,
    46848,
    block_161_fn
    };

static void block_162_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_5 = out_37 +1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_162{
    162,
    49768,
    49780,
    block_162_fn
    };

static void block_199_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_199{
    199,
    59132,
    59132,
    block_199_fn
    };


} // namespace CV32E40P_DSE