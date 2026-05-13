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

static void block_708_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_708{
    708,
    46688,
    46696,
    block_708_fn
    };

static void block_709_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +2);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[22] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[23] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_709{
    709,
    46712,
    46724,
    block_709_fn
    };

static void block_710_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_710{
    710,
    46204,
    46208,
    block_710_fn
    };

static void block_711_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
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

extern const MAP_Explorer::Block block_711{
    711,
    46728,
    46732,
    block_711_fn
    };

static void block_712_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_712{
    712,
    46736,
    46736,
    block_712_fn
    };

static void block_713_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_16 +d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_713{
    713,
    53860,
    53872,
    block_713_fn
    };

static void block_714_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_714{
    714,
    53876,
    53876,
    block_714_fn
    };

static void block_715_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_22 -1+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_23 = out_22 +d_[3]+d_[4];
	uint64_t out_24 = out_22 +d_[3]+d_[4]+d_[5];
	uint64_t out_25 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_26 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_27 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_28 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_29 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_30 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_31 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_37 = out_22 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_38 = MAP_Explorer::max2(out_22 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14], vec_[4] +1);
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_715{
    715,
    46740,
    46796,
    block_715_fn
    };

static void block_716_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_6 = out_14 -1+d_[3];
	uint64_t out_37 = out_14 -2+d_[3];
	uint64_t out_38 = out_14 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_716{
    716,
    46804,
    46820,
    block_716_fn
    };

static void block_721_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_721{
    721,
    88152,
    88156,
    block_721_fn
    };

static void block_722_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[23] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_722{
    722,
    87948,
    87960,
    block_722_fn
    };

static void block_732_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_732{
    732,
    9072,
    9072,
    block_732_fn
    };

static void block_0_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]);
	uint64_t out_7 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[2] +2+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[4] +2+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_4 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36];
	uint64_t out_6 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38];
	uint64_t out_8 = out_7 +d_[3];
	uint64_t out_9 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35];
	uint64_t out_10 = out_7 +d_[3]+d_[4]+d_[5];
	uint64_t out_11 = out_7 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_12 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_13 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_14 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_15 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_16 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_17 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_18 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_19 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_20 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15];
	uint64_t out_21 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16];
	uint64_t out_22 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17];
	uint64_t out_23 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18];
	uint64_t out_24 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19];
	uint64_t out_25 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20];
	uint64_t out_26 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21];
	uint64_t out_27 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22];
	uint64_t out_28 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23];
	uint64_t out_29 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24];
	uint64_t out_30 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40];
	uint64_t out_31 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42];
	uint64_t out_32 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27];
	uint64_t out_33 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28];
	uint64_t out_34 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29];
	uint64_t out_35 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30];
	uint64_t out_37 = out_7 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42];
	uint64_t out_38 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42]+d_[43];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_4 -1+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42]+d_[43];
	uint64_t out_0 = out_1 -1;


	vec_[5] = out_5;
	vec_[7] = out_7;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[8] = out_8;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[11] = out_11;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_0{
    0,
    256,
    428,
    block_0_fn
    };

static void block_1_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1{
    1,
    444,
    444,
    block_1_fn
    };

static void block_2_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+d_[7]+d_[8]+d_[9]+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+t_5, +d_[2]+d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[9], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+d_[11]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_10, +d_[10]+t_6);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[10]+t_7);
	uint64_t t_16 = MAP_Explorer::max2(+1+t_12, +d_[10]+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+1+t_13, +d_[10]+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]+t_3, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]+t_4, +t_11);
	uint64_t t_20 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]+t_5, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +1+t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +1+t_14);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +t_16);
	uint64_t t_26 = MAP_Explorer::max2(+t_21, +t_17);
	uint64_t t_27 = MAP_Explorer::max2(+d_[14]+t_18, +1+t_22);
	uint64_t t_28 = MAP_Explorer::max2(+d_[14]+t_19, +t_23);
	uint64_t t_29 = MAP_Explorer::max2(+d_[13]+d_[14], +1+t_24);
	uint64_t t_30 = MAP_Explorer::max2(+d_[14]+t_20, +1+t_25);
	uint64_t t_31 = MAP_Explorer::max2(+d_[14]+t_21, +1+t_26);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[12]+t_14, vec_[1] +2+d_[1]+d_[12]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[12]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[12]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[12]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[12]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[12]+t_17);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[12]+t_14);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_5);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_22, vec_[1] +2+d_[1]+t_22);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_22);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_23);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+t_24);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_22);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_25);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_26);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+t_22);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_18, vec_[1] +1+d_[1]+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_18);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_27, vec_[1] +2+d_[1]+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_28);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_29);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_30);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_27);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_19 +d_[7]+d_[8];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_2{
    2,
    42332,
    42372,
    block_2_fn
    };

static void block_3_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = out_19 +d_[2]+d_[3];
	uint64_t out_22 = out_19 +d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_37 = out_19 -1+d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[4]+d_[5]+d_[6];
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_3{
    3,
    42404,
    42428,
    block_3_fn
    };

static void block_4_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_3 = out_19;
	uint64_t out_12 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_4{
    4,
    42432,
    42448,
    block_4_fn
    };

static void block_5_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_5{
    5,
    42480,
    42484,
    block_5_fn
    };

static void block_6_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_6{
    6,
    42500,
    42500,
    block_6_fn
    };

static void block_7_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_7{
    7,
    42452,
    42452,
    block_7_fn
    };


} // namespace CV32E40P_DSE