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

static void block_37_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_18;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_37{
    37,
    56536,
    56548,
    block_37_fn
    };

static void block_38_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7], +d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[7]+d_[9]+d_[10], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[10], +d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_2);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_16 +d_[2];
	uint64_t out_0 = MAP_Explorer::max2(out_16 -2+d_[2]+d_[3]+d_[4]+d_[5]+t_3, vec_[3] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] +d_[5]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[18] +t_3);
	uint64_t out_3 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+d_[8]+t_0, vec_[3] +d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[5]+d_[8]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[8]+t_0);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_1, vec_[3] +1+d_[6]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2+d_[5]+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+t_1);
	uint64_t out_18 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4], vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[9], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[5]+d_[7]+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[7]+d_[9]);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_3, vec_[3] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[5]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_38{
    38,
    56552,
    56584,
    block_38_fn
    };

static void block_39_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_39{
    39,
    56592,
    56600,
    block_39_fn
    };

static void block_40_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3);
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

extern const MAP_Explorer::Block block_40{
    40,
    56604,
    56608,
    block_40_fn
    };

static void block_41_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_14;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_41{
    41,
    57364,
    57372,
    block_41_fn
    };

static void block_42_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_18 = MAP_Explorer::max2(+1+d_[8], +d_[6]);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_14, +d_[6]+t_4);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_15, +d_[4]+d_[6]);
	uint64_t t_21 = MAP_Explorer::max2(+d_[9]+t_12, +1+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+1+d_[9]+t_13, +t_17);
	uint64_t t_23 = MAP_Explorer::max2(+d_[8]+d_[9], +t_18);
	uint64_t t_24 = MAP_Explorer::max2(+d_[9]+t_14, +t_19);
	uint64_t t_25 = MAP_Explorer::max2(+d_[9]+t_15, +t_20);
	uint64_t t_26 = MAP_Explorer::max2(+d_[9]+d_[10]+t_12, +1+t_21);
	uint64_t t_27 = MAP_Explorer::max2(+d_[9]+d_[10]+t_13, +t_22);
	uint64_t t_28 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10], +1+t_23);
	uint64_t t_29 = MAP_Explorer::max2(+d_[9]+d_[10]+t_14, +1+t_24);
	uint64_t t_30 = MAP_Explorer::max2(+d_[9]+d_[10]+t_15, +1+t_25);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_26, +2+t_16);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_27, +t_17);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+t_28, +1+t_18);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_29, +1+t_19);
	uint64_t t_35 = MAP_Explorer::max2(+d_[11]+t_30, +1+t_20);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_21, vec_[1] +2+d_[1]+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_22);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_23);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_24);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_25);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_21);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_16, vec_[1] +3+d_[1]+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_19);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_20);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_16);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_26, vec_[1] +1+d_[1]+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_28);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_29);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_30);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_26);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_31, vec_[1] +2+d_[1]+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_32);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_33);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_35);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_31);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[11], vec_[15] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);


	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_42{
    42,
    70068,
    70100,
    block_42_fn
    };

static void block_43_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3);
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

extern const MAP_Explorer::Block block_43{
    43,
    70104,
    70108,
    block_43_fn
    };

static void block_44_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_19;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_44{
    44,
    70112,
    70120,
    block_44_fn
    };

static void block_45_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
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

extern const MAP_Explorer::Block block_45{
    45,
    70124,
    70128,
    block_45_fn
    };

static void block_46_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_46{
    46,
    70268,
    70276,
    block_46_fn
    };

static void block_47_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[13] +1);
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

extern const MAP_Explorer::Block block_47{
    47,
    70280,
    70288,
    block_47_fn
    };

static void block_48_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+t_3, +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8]+t_4, +1+t_2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +2+d_[1]+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +1+d_[1]+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_5, vec_[1] +2+d_[1]+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[7]+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;
	uint64_t out_0 = out_12 -2+d_[8];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_48{
    48,
    88272,
    88296,
    block_48_fn
    };

static void block_49_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[6]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[6]+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[4]+d_[6]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_20 = MAP_Explorer::max2(+d_[10]+t_13, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_19);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_20, vec_[1] +d_[1]+t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_21);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_21);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_21);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +t_20);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_22);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_23);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +d_[10]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_20);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_10, vec_[1] +2+d_[1]+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[8]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_10);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_16, vec_[1] +2+d_[1]+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_17);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_17);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_17);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_18);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_19);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_16);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_13, vec_[1] +1+d_[1]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_13);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_49{
    49,
    88336,
    88360,
    block_49_fn
    };

static void block_50_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_50{
    50,
    88364,
    88368,
    block_50_fn
    };

static void block_51_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[6]+d_[7]+d_[8], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[7]+d_[8], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[10], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[10], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[8]+d_[10], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[9]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[9]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[9]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[10], +d_[9]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[10]+d_[12], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[10]+d_[12], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[8]+d_[10]+d_[12], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[11]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[11]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[7]+d_[8]+d_[11]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[6]+d_[7]+d_[8]+d_[11]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_6);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_13, vec_[1] +2+d_[1]+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_15);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_16);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[7]+d_[8]+t_17);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+d_[6]+d_[7]+d_[8]+t_17);
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
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +1+d_[1]+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[7]+d_[8]+d_[10]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1+d_[6]+d_[7]+d_[8]+d_[10]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_19 = out_14 +d_[7];
	uint64_t out_37 = MAP_Explorer::max2(out_14 -1+d_[7]+d_[8]+d_[10], vec_[4] +1);


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_51{
    51,
    89156,
    89192,
    block_51_fn
    };

static void block_54_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_54{
    54,
    89196,
    89200,
    block_54_fn
    };

static void block_55_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_12;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_55{
    55,
    89204,
    89216,
    block_55_fn
    };

static void block_56_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_56{
    56,
    88372,
    88372,
    block_56_fn
    };

static void block_57_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[3]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_22 = out_19 +d_[5]+d_[6];
	uint64_t out_23 = MAP_Explorer::max2(out_19 +d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +2);
	uint64_t out_24 = MAP_Explorer::max2(out_19 +d_[5]+d_[6]+d_[7], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_23 -1+d_[9]+d_[10]+d_[11], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_15 = out_23 +d_[9];
	uint64_t out_37 = out_23 -1+d_[9]+d_[10];
	uint64_t out_14 = MAP_Explorer::max2(out_23 +d_[9]+d_[10], vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_57{
    57,
    88376,
    88420,
    block_57_fn
    };

static void block_58_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_10 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_11 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[6]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[2]+d_[4]+d_[6]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[4]+d_[6]);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[6]+t_4);
	uint64_t t_16 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_24 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[8]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[8]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[8]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[6]+d_[8]);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[8]+t_15);
	uint64_t t_30 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_17, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_18, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_19, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_41 = MAP_Explorer::max2(+d_[12]+t_30, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[12]+t_31, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[12]+t_32, +1+t_37);
	uint64_t t_44 = MAP_Explorer::max2(+d_[12]+t_33, +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+d_[11]+d_[12], +1+t_39);
	uint64_t t_46 = MAP_Explorer::max2(+d_[12]+t_34, +1+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+d_[14]+t_41, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[13]+d_[14]+t_42, +t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+d_[14]+t_43, +1+t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+d_[14]+t_44, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[13]+d_[14]+t_45, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[13]+d_[14]+t_46, +1+t_40);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[10]+t_25, vec_[1] +2+d_[1]+d_[10]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[10]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[10]+t_26);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[10]+t_27);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[10]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[10]+t_28);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[10]+t_29);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[10]+t_25);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_41, vec_[1] +2+d_[1]+t_41);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_41);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_42);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+t_43);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_41);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_44);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_45);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_46);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[12]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+t_41);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_35, vec_[1] +2+d_[1]+t_35);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_35);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_36);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_37);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_35);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_38);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_39);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_40);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_35);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[13]+t_41, vec_[1] +1+d_[1]+d_[13]+t_41);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[13]+t_41);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[13]+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[13]+t_43);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[13]+t_41);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[13]+t_44);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[13]+t_45);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[13]+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[12]+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[13]+t_41);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_47, vec_[1] +2+d_[1]+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_48);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_49);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_50);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_51);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[13]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_52);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[12]+d_[13]+d_[14]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_47);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[14], vec_[14] );
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_58{
    58,
    43944,
    43980,
    block_58_fn
    };


} // namespace CV32E40P_DSE