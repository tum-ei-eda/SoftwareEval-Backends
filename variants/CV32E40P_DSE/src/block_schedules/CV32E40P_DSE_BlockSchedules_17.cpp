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

static void block_237_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[3]+d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[7]+t_3);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[7]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[10]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+t_13, +d_[9]+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+1+t_14, +d_[9]+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+d_[12]+t_11, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+d_[12]+t_12, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +1+t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+t_17, +1+t_19);
	uint64_t t_22 = MAP_Explorer::max2(+d_[13]+t_18, +1+t_20);
	uint64_t t_23 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_21, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+d_[14]+d_[15]+d_[16]+d_[17]+t_22, +1+t_20);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_15, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[11]+t_16);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[11]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_15);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_21, vec_[1] +2+d_[1]+d_[2]+t_21);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+t_21);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_21);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_22);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+d_[2]+t_21);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_21);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_19, vec_[1] +2+d_[1]+d_[2]+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+t_20);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+t_19);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_19);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_23, vec_[1] +2+d_[1]+d_[2]+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_23);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_12 -2+d_[14]+d_[15]+d_[16]+d_[17];
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = out_12 -1+d_[14]+d_[15]+d_[16];
	uint64_t out_13 = MAP_Explorer::max2(out_12 +d_[14], vec_[14] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_12 +d_[14]+d_[15], vec_[16] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_12 +d_[14]+d_[15]+d_[16], vec_[17] +1);


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_237{
    237,
    30616,
    30664,
    block_237_fn
    };

static void block_238_fn(uint64_t* vec_, uint8_t* d_){
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
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +3+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +4+t_2);
	uint64_t out_6 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_13, vec_[3] +2+t_14);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +2+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	out_6 = MAP_Explorer::max2(out_6, vec_[12] +2+t_14);
	out_6 = MAP_Explorer::max2(out_6, vec_[19] +3+t_14);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_0, vec_[3] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +3+d_[5]);
	uint64_t out_13 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_11, vec_[3] +3+t_12);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+t_12);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +4+t_12);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_9, vec_[3] +2+t_10);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[9]+d_[10]+d_[11]+d_[12]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+t_10);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +3+t_10);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	uint64_t out_16 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+d_[9]+t_3, vec_[3] +2+d_[9]+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[9]);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+d_[9]+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +3+d_[9]+t_4);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_3, vec_[3] +2+t_4);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+t_4);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +3+t_4);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2], vec_[19] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_7, vec_[3] +3+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[9]+d_[10]+d_[11]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[19] +4+t_8);
	uint64_t out_23 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4]+t_5, vec_[3] +3+t_6);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +3+d_[9]+d_[10]);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +3+t_6);
	out_23 = MAP_Explorer::max2(out_23, vec_[19] +4+t_6);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+d_[13]+d_[14]+t_9, vec_[3] +1+d_[13]+d_[14]+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[13]+d_[14]+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2+d_[13]+d_[14]+t_10);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+t_15, vec_[3] +1+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+t_16);
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

extern const MAP_Explorer::Block block_238{
    238,
    30668,
    30724,
    block_238_fn
    };

static void block_239_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[6]+d_[7]+d_[8]+d_[9], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[9]+d_[11], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[10]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[10]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[11], +d_[10]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[9]+d_[11]+d_[13], +t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +1+t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +t_5);
	uint64_t t_11 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_6);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_4, vec_[1] +2+d_[1]+d_[2]+d_[12]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[12]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[12]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[12]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[9]+d_[12]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[12]+t_4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_9, vec_[1] +2+d_[1]+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[9]+t_11);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_9);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_16 = MAP_Explorer::max2(out_16, vec_[17] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_7, vec_[1] +1+d_[1]+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[9]+d_[11]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_7);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_37 = out_19 -1+d_[9]+d_[11];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_239{
    239,
    31840,
    31880,
    block_239_fn
    };

static void block_240_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_240{
    240,
    2328,
    2336,
    block_240_fn
    };

static void block_241_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_38 = out_37 +1+d_[2];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_241{
    241,
    2340,
    2348,
    block_241_fn
    };

static void block_243_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_243{
    243,
    2368,
    2372,
    block_243_fn
    };

static void block_244_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_244{
    244,
    31884,
    31888,
    block_244_fn
    };

static void block_245_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_245{
    245,
    31892,
    31904,
    block_245_fn
    };

static void block_246_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_246{
    246,
    57980,
    57984,
    block_246_fn
    };

static void block_247_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
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

extern const MAP_Explorer::Block block_247{
    247,
    57948,
    57952,
    block_247_fn
    };

static void block_250_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_250{
    250,
    59040,
    59040,
    block_250_fn
    };

static void block_251_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_251{
    251,
    53992,
    53992,
    block_251_fn
    };

static void block_252_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_1 = out_19 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_25 = out_19 +1+d_[4];
	uint64_t out_26 = out_19 +1+d_[4]+d_[5];
	uint64_t out_27 = out_19 +1+d_[4]+d_[5]+d_[6];
	uint64_t out_28 = out_19 +1+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_29 = out_19 +1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_30 = out_19 +1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_31 = out_19 +1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_37 = out_19 -1+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_38 = out_19 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[1] = out_1;
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
}

extern const MAP_Explorer::Block block_252{
    252,
    46904,
    46948,
    block_252_fn
    };

static void block_253_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_13 = out_14 +d_[3];
	uint64_t out_22 = out_14 +d_[3]+d_[4];
	uint64_t out_37 = out_14 -2+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_14 -2+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_13 -1+d_[4]+d_[5];
	uint64_t out_4 = out_6 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[13] = out_13;
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

extern const MAP_Explorer::Block block_253{
    253,
    46956,
    46980,
    block_253_fn
    };

static void block_254_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1]+d_[2], +3);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_0, vec_[1] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+t_0);
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_6 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_254{
    254,
    30504,
    30512,
    block_254_fn
    };

static void block_255_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_255{
    255,
    29180,
    29180,
    block_255_fn
    };

static void block_256_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_256{
    256,
    1152,
    1152,
    block_256_fn
    };

static void block_257_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_257{
    257,
    29184,
    29188,
    block_257_fn
    };

static void block_258_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_258{
    258,
    1156,
    1156,
    block_258_fn
    };

static void block_259_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_259{
    259,
    812,
    812,
    block_259_fn
    };


} // namespace CV32E40P_DSE