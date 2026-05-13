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

static void block_344_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_344{
    344,
    19748,
    19752,
    block_344_fn
    };

static void block_345_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_345{
    345,
    19756,
    19760,
    block_345_fn
    };

static void block_346_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_346{
    346,
    19764,
    19768,
    block_346_fn
    };

static void block_347_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_18 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_347{
    347,
    20040,
    20048,
    block_347_fn
    };

static void block_348_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1+d_[5]+d_[6]+d_[7], vec_[23] +3+d_[7]);
	uint64_t out_6 = out_13 -1+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_14 = out_13 -1+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_22 = out_13 +d_[8];
	uint64_t out_23 = out_13 +d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_24 = out_13 +d_[8]+d_[9];
	uint64_t out_25 = out_13 +d_[8]+d_[9]+d_[10];
	uint64_t out_37 = out_13 -2+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_38 = out_13 -2+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[14];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_348{
    348,
    19840,
    19896,
    block_348_fn
    };

static void block_354_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_354{
    354,
    20152,
    20152,
    block_354_fn
    };

static void block_355_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_355{
    355,
    20184,
    20188,
    block_355_fn
    };

static void block_386_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[22] +1);
	uint64_t out_3 = out_14;
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_386{
    386,
    3700,
    3708,
    block_386_fn
    };

static void block_387_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[30] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[3] +d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[5], vec_[22] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_387{
    387,
    3712,
    3728,
    block_387_fn
    };

static void block_388_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_388{
    388,
    3732,
    3736,
    block_388_fn
    };

static void block_389_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[3] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +d_[2]+d_[3], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[5], vec_[27] +1);
	uint64_t out_3 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[27] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[27] = out_27;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_389{
    389,
    3560,
    3580,
    block_389_fn
    };

static void block_390_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[11], +d_[10]);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+t_1+t_3, +d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+t_2+t_3, +d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[12]+t_1, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[12]+t_2, +t_5);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_7, +d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+d_[13]+t_7, +t_8);
	uint64_t t_10 = MAP_Explorer::max2(+d_[13]+t_6, +d_[7]+d_[8]+d_[9]+d_[10]+t_1);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +d_[7]+d_[8]+d_[9]+d_[10]+t_2);
	uint64_t t_12 = MAP_Explorer::max2(+d_[13]+d_[14]+t_6, +1+t_10);
	uint64_t t_13 = MAP_Explorer::max2(+d_[14]+t_9, +1+t_11);
	uint64_t t_14 = MAP_Explorer::max2(+d_[15]+t_12, +1+t_6);
	uint64_t t_15 = MAP_Explorer::max2(+d_[15]+t_13, +t_8);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_4, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[3]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+d_[3]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+d_[2]+d_[3]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +1+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_4);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2+d_[3]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+d_[2]+d_[3]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +1+t_8);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_6);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[7]+t_1, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[7]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[7]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2+d_[3]+d_[7]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+d_[2]+d_[3]+d_[7]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2+d_[7]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[7]+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[7]+t_1);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +1+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +1+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_10, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[2]+d_[3]+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[4] +2+d_[3]+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2+d_[2]+d_[3]+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +2+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_11);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_10);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_12, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_12);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_14, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+d_[3]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[3]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[2]+d_[3]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_14);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_0 = out_19 -2+d_[15];


	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_390{
    390,
    18324,
    18376,
    block_390_fn
    };

static void block_391_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2]+d_[3], vec_[1] +2+d_[2]+d_[3]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+d_[3]);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[14] +2+d_[3]);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+d_[3]);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+d_[2]+d_[3]);
	uint64_t out_12 = MAP_Explorer::max2(out_25 +d_[4], vec_[12] +1);
	uint64_t out_29 = MAP_Explorer::max2(out_25 +d_[4]+d_[5], vec_[12] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_25 -1+d_[4]+d_[5]+d_[6], vec_[12] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[7], vec_[28] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[7], vec_[31] );
	uint64_t out_31 = MAP_Explorer::max2(out_37 +1, vec_[31] +1);


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[12] = out_12;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[31] = out_31;
}

extern const MAP_Explorer::Block block_391{
    391,
    3584,
    3608,
    block_391_fn
    };

static void block_392_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_392{
    392,
    3612,
    3616,
    block_392_fn
    };

static void block_393_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_13;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_393{
    393,
    2784,
    2796,
    block_393_fn
    };

static void block_398_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[29] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[29] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_14 -1+d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_14 +d_[3]+d_[4], vec_[6] +1+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_14 -1+d_[3]+d_[5], vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_398{
    398,
    3104,
    3120,
    block_398_fn
    };

static void block_401_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_401{
    401,
    3124,
    3128,
    block_401_fn
    };

static void block_415_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[13] );
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_415{
    415,
    20896,
    20904,
    block_415_fn
    };

static void block_416_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_416{
    416,
    20964,
    20980,
    block_416_fn
    };

static void block_457_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[12]+d_[13], +d_[11]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[15], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[14]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[12]+d_[13]+d_[15]+d_[16], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[17]+t_3, +1+t_4);
	uint64_t t_6 = MAP_Explorer::max2(+d_[19]+d_[20]+t_5, +2+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[19]+d_[20], +d_[18]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5+t_7, +2+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[22]+t_5, +1+t_6);
	uint64_t t_10 = MAP_Explorer::max2(+t_9, +1+t_8);
	uint64_t t_11 = MAP_Explorer::max2(+t_10, +1+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[23]+t_9, +1+t_11);
	uint64_t t_13 = MAP_Explorer::max2(+t_12, +d_[21]+t_8);
	uint64_t t_14 = MAP_Explorer::max2(+d_[22]+d_[23], +d_[21]);
	uint64_t t_15 = MAP_Explorer::max2(+d_[24]+t_12, +1+t_13);
	uint64_t t_16 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24], +1+t_14);
	uint64_t t_17 = MAP_Explorer::max2(+d_[24]+d_[25]+t_12, +1+t_15);
	uint64_t t_18 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25], +1+t_16);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +2+t_2);
	uint64_t t_20 = MAP_Explorer::max2(+d_[27]+t_17, +1+t_19);
	uint64_t t_21 = MAP_Explorer::max2(+t_20, +d_[26]+t_19);
	uint64_t t_22 = MAP_Explorer::max2(+d_[27], +d_[26]);
	uint64_t t_23 = MAP_Explorer::max2(+d_[28]+t_20, +1+t_21);
	uint64_t t_24 = MAP_Explorer::max2(+t_23, +1+t_11);
	uint64_t t_25 = MAP_Explorer::max2(+d_[27]+d_[28], +1+t_22);
	uint64_t t_26 = MAP_Explorer::max2(+t_18+t_25, +1+d_[22]);
	uint64_t t_27 = MAP_Explorer::max2(+d_[28]+d_[30]+t_20, +1+t_24);
	uint64_t t_28 = MAP_Explorer::max2(+d_[27]+d_[28]+d_[30]+t_18, +1+t_26);
	uint64_t t_29 = MAP_Explorer::max2(+t_27, +2+t_13);
	uint64_t t_30 = MAP_Explorer::max2(+t_28, +2+t_14);
	uint64_t t_31 = MAP_Explorer::max2(+t_27, +d_[29]+t_24);
	uint64_t t_32 = MAP_Explorer::max2(+t_31, +2+t_13);
	uint64_t t_33 = MAP_Explorer::max2(+t_28, +d_[29]+t_26);
	uint64_t t_34 = MAP_Explorer::max2(+t_33, +2+t_14);
	uint64_t t_35 = MAP_Explorer::max2(+d_[32]+t_27, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[32]+t_28, +1+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+t_35, +1+t_32);
	uint64_t t_38 = MAP_Explorer::max2(+t_37, +2+t_21);
	uint64_t t_39 = MAP_Explorer::max2(+t_38, +2+t_15);
	uint64_t t_40 = MAP_Explorer::max2(+t_36, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+t_40, +2+t_18+t_22);
	uint64_t t_42 = MAP_Explorer::max2(+t_41, +2+t_16);
	uint64_t t_43 = MAP_Explorer::max2(+t_37, +d_[31]+t_32);
	uint64_t t_44 = MAP_Explorer::max2(+t_43, +2+t_21);
	uint64_t t_45 = MAP_Explorer::max2(+t_44, +2+t_15);
	uint64_t t_46 = MAP_Explorer::max2(+t_40, +d_[31]+t_34);
	uint64_t t_47 = MAP_Explorer::max2(+t_46, +2+t_18+t_22);
	uint64_t t_48 = MAP_Explorer::max2(+t_47, +2+t_16);
	uint64_t t_49 = MAP_Explorer::max2(+d_[34]+t_35, +1+t_39);
	uint64_t t_50 = MAP_Explorer::max2(+d_[34]+t_36, +1+t_42);
	uint64_t t_51 = MAP_Explorer::max2(+t_49, +1+t_45);
	uint64_t t_52 = MAP_Explorer::max2(+t_50, +1+t_48);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[20] +2+d_[5]+d_[6]+d_[7]+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+d_[6]+d_[7]+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+d_[3]+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[20] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_14 = out_17 +1+d_[9]+d_[10]+t_2;
	uint64_t out_0 = MAP_Explorer::max2(out_17 -2+d_[9]+d_[10]+t_49, vec_[6] +t_50);
	uint64_t out_3 = MAP_Explorer::max2(out_17 +d_[9]+d_[10]+d_[33]+t_45, vec_[6] +2+d_[33]+t_48);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +1+d_[9]+d_[10]+t_15, vec_[6] +3+t_16);
	uint64_t out_16 = MAP_Explorer::max2(out_17 +d_[9]+d_[10]+t_11, vec_[6] +2+d_[22]);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +1+d_[9]+d_[10]+t_21, vec_[6] +3+t_18+t_22);
	uint64_t out_21 = MAP_Explorer::max2(out_17 +1+d_[9]+d_[10]+t_13, vec_[6] +3+t_14);
	uint64_t out_37 = MAP_Explorer::max2(out_17 -1+d_[9]+d_[10]+t_35, vec_[6] +1+t_36);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +d_[9]+d_[10]+t_51, vec_[6] +2+t_52);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_457{
    457,
    3200,
    3304,
    block_457_fn
    };


} // namespace CV32E40P_DSE