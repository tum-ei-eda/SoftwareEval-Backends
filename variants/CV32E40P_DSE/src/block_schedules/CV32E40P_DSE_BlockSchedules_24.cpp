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

static void block_706_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_706{
    706,
    17552,
    17552,
    block_706_fn
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
    48076,
    48116,
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
    48148,
    48172,
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
    48176,
    48192,
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
    48912,
    48916,
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
    48932,
    48932,
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
    48196,
    48196,
    block_7_fn
    };

static void block_8_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_6 = out_13 -1+d_[3]+d_[4];
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_37 = out_13 -2+d_[3]+d_[4];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4]+d_[5];
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_8{
    8,
    48200,
    48220,
    block_8_fn
    };

static void block_9_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_9{
    9,
    448,
    448,
    block_9_fn
    };

static void block_10_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_10{
    10,
    16632,
    16636,
    block_10_fn
    };

static void block_11_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_15 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 +d_[2];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_11{
    11,
    452,
    460,
    block_11_fn
    };

static void block_12_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_14 = out_15 +d_[3]+d_[4];
	uint64_t out_37 = out_15 -1+d_[3]+d_[4]+d_[5];
	uint64_t out_3 = MAP_Explorer::max2(out_15 +d_[3]+d_[4]+d_[5]+d_[6], vec_[3] +d_[6]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_15 -1+d_[3]+d_[4]+d_[5]+d_[7], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_12{
    12,
    44100,
    44124,
    block_12_fn
    };

static void block_13_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[4]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+2+t_4, +d_[2]+d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[2]+d_[4]);
	uint64_t t_9 = MAP_Explorer::max2(+1+d_[6], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+t_3, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[7]+t_4, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[7]+t_5, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[6]+d_[7], +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[7]+d_[9]+t_3, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[9]+t_4, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[7]+d_[9]+t_5, +1+t_12);
	uint64_t t_17 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[9], +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+t_14, +d_[8]+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_15, +d_[8]+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +d_[8]+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+t_17, +d_[8]+t_13);
	uint64_t t_22 = MAP_Explorer::max2(+d_[11]+t_14, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[11]+t_15, +t_19);
	uint64_t t_24 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_25 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_20);
	uint64_t t_26 = MAP_Explorer::max2(+d_[11]+t_17, +1+t_21);
	uint64_t t_27 = MAP_Explorer::max2(+t_22, +d_[10]+t_18);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[10]+t_19);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[8]+d_[10]);
	uint64_t t_30 = MAP_Explorer::max2(+t_25, +d_[10]+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+t_26, +d_[10]+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+d_[13]+t_14, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+d_[13]+t_15, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+d_[11]+d_[13]+t_16, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+d_[11]+d_[13]+t_17, +1+t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +1+t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+t_35, +1+t_30);
	uint64_t t_41 = MAP_Explorer::max2(+t_36, +1+t_31);
	uint64_t t_42 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_43 = MAP_Explorer::max2(+t_37, +d_[12]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[12]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[12]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+t_40, +d_[12]+t_30);
	uint64_t t_47 = MAP_Explorer::max2(+t_41, +d_[12]+t_31);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_42, +d_[10]+d_[12]);
	uint64_t t_49 = MAP_Explorer::max2(+d_[15]+t_32, +1+t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[15]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[15]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[15]+t_35, +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+d_[15]+t_36, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_42);
	uint64_t t_55 = MAP_Explorer::max2(+t_49, +1+t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +1+t_46);
	uint64_t t_59 = MAP_Explorer::max2(+t_53, +1+t_47);
	uint64_t t_60 = MAP_Explorer::max2(+t_54, +t_48);
	uint64_t t_61 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_62 = MAP_Explorer::max2(+t_55, +d_[14]+t_43);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_56, +d_[14]+t_44);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_57, +d_[14]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+t_58, +d_[14]+t_46);
	uint64_t t_66 = MAP_Explorer::max2(+t_59, +d_[14]+t_47);
	uint64_t t_67 = MAP_Explorer::max2(+1+t_60, +d_[14]+t_48);
	uint64_t t_68 = MAP_Explorer::max2(+1+t_61, +d_[12]+d_[14]);
	uint64_t t_69 = MAP_Explorer::max2(+d_[17]+t_49, +1+t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[17]+t_50, +1+t_56);
	uint64_t t_71 = MAP_Explorer::max2(+d_[17]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[17]+t_52, +1+t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[17]+t_53, +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+d_[17]+t_54, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_61);
	uint64_t t_76 = MAP_Explorer::max2(+t_69, +1+t_62);
	uint64_t t_77 = MAP_Explorer::max2(+t_76, +2+t_6);
	uint64_t t_78 = MAP_Explorer::max2(+t_70, +t_63);
	uint64_t t_79 = MAP_Explorer::max2(+t_78, +t_7);
	uint64_t t_80 = MAP_Explorer::max2(+t_71, +t_64);
	uint64_t t_81 = MAP_Explorer::max2(+t_72, +1+t_65);
	uint64_t t_82 = MAP_Explorer::max2(+t_81, +1+t_8);
	uint64_t t_83 = MAP_Explorer::max2(+t_73, +1+t_66);
	uint64_t t_84 = MAP_Explorer::max2(+t_83, +1+t_9);
	uint64_t t_85 = MAP_Explorer::max2(+t_74, +t_67);
	uint64_t t_86 = MAP_Explorer::max2(+t_75, +t_68);
	uint64_t t_87 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_88 = MAP_Explorer::max2(+t_76, +d_[16]+t_62);
	uint64_t t_89 = MAP_Explorer::max2(+t_88, +2+t_6);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_78, +d_[16]+t_63);
	uint64_t t_91 = MAP_Explorer::max2(+t_90, +1+t_7);
	uint64_t t_92 = MAP_Explorer::max2(+1+t_80, +d_[16]+t_64);
	uint64_t t_93 = MAP_Explorer::max2(+t_81, +d_[16]+t_65);
	uint64_t t_94 = MAP_Explorer::max2(+t_93, +1+t_8);
	uint64_t t_95 = MAP_Explorer::max2(+t_83, +d_[16]+t_66);
	uint64_t t_96 = MAP_Explorer::max2(+t_95, +1+t_9);
	uint64_t t_97 = MAP_Explorer::max2(+1+t_85, +d_[16]+t_67);
	uint64_t t_98 = MAP_Explorer::max2(+1+t_86, +d_[16]+t_68);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_87, +d_[14]+d_[16]);
	uint64_t t_100 = MAP_Explorer::max2(+d_[18]+t_69, +1+t_77);
	uint64_t t_101 = MAP_Explorer::max2(+d_[18]+t_70, +1+t_79);
	uint64_t t_102 = MAP_Explorer::max2(+d_[18]+t_71, +1+t_80);
	uint64_t t_103 = MAP_Explorer::max2(+d_[18]+t_72, +1+t_82);
	uint64_t t_104 = MAP_Explorer::max2(+d_[18]+t_73, +1+t_84);
	uint64_t t_105 = MAP_Explorer::max2(+d_[18]+t_74, +1+t_85);
	uint64_t t_106 = MAP_Explorer::max2(+d_[18]+t_75, +1+t_86);
	uint64_t t_107 = MAP_Explorer::max2(+d_[17]+d_[18], +1+t_87);
	uint64_t t_108 = MAP_Explorer::max2(+t_100, +1+t_89);
	uint64_t t_109 = MAP_Explorer::max2(+t_101, +t_91);
	uint64_t t_110 = MAP_Explorer::max2(+t_102, +t_92);
	uint64_t t_111 = MAP_Explorer::max2(+t_103, +1+t_94);
	uint64_t t_112 = MAP_Explorer::max2(+t_104, +1+t_96);
	uint64_t t_113 = MAP_Explorer::max2(+t_105, +t_97);
	uint64_t t_114 = MAP_Explorer::max2(+t_106, +t_98);
	uint64_t t_115 = MAP_Explorer::max2(+t_107, +t_99);
	uint64_t t_116 = MAP_Explorer::max2(+d_[18], +d_[16]);
	uint64_t t_117 = MAP_Explorer::max2(+d_[19]+t_100, +1+t_108);
	uint64_t t_118 = MAP_Explorer::max2(+d_[19]+t_101, +1+t_109);
	uint64_t t_119 = MAP_Explorer::max2(+d_[19]+t_102, +1+t_110);
	uint64_t t_120 = MAP_Explorer::max2(+d_[19]+t_103, +1+t_111);
	uint64_t t_121 = MAP_Explorer::max2(+d_[19]+t_104, +1+t_112);
	uint64_t t_122 = MAP_Explorer::max2(+d_[19]+t_105, +1+t_113);
	uint64_t t_123 = MAP_Explorer::max2(+d_[19]+t_106, +1+t_114);
	uint64_t t_124 = MAP_Explorer::max2(+d_[19]+t_107, +1+t_115);
	uint64_t t_125 = MAP_Explorer::max2(+d_[18]+d_[19], +1+t_116);
	uint64_t t_126 = MAP_Explorer::max2(+d_[20]+t_117, +2+t_6);
	uint64_t t_127 = MAP_Explorer::max2(+d_[20]+t_118, +t_7);
	uint64_t t_128 = MAP_Explorer::max2(+d_[20]+t_120, +1+t_8);
	uint64_t t_129 = MAP_Explorer::max2(+d_[20]+t_121, +1+t_9);
	uint64_t t_130 = MAP_Explorer::max2(+d_[20]+d_[21]+t_117, +1+t_126);
	uint64_t t_131 = MAP_Explorer::max2(+d_[20]+d_[21]+t_118, +1+t_127);
	uint64_t t_132 = MAP_Explorer::max2(+d_[20]+d_[21]+t_120, +1+t_128);
	uint64_t t_133 = MAP_Explorer::max2(+d_[20]+d_[21]+t_121, +1+t_129);
	uint64_t t_134 = MAP_Explorer::max2(+t_130, +1+t_89);
	uint64_t t_135 = MAP_Explorer::max2(+t_131, +t_91);
	uint64_t t_136 = MAP_Explorer::max2(+d_[20]+d_[21]+t_119, +t_92);
	uint64_t t_137 = MAP_Explorer::max2(+t_132, +1+t_94);
	uint64_t t_138 = MAP_Explorer::max2(+t_133, +1+t_96);
	uint64_t t_139 = MAP_Explorer::max2(+d_[20]+d_[21]+t_122, +t_97);
	uint64_t t_140 = MAP_Explorer::max2(+d_[20]+d_[21]+t_123, +t_98);
	uint64_t t_141 = MAP_Explorer::max2(+d_[20]+d_[21]+t_124, +t_99);
	uint64_t t_142 = MAP_Explorer::max2(+d_[20]+d_[21]+t_125, +d_[16]);
	uint64_t t_143 = MAP_Explorer::max2(+d_[23]+t_130, +1+t_134);
	uint64_t t_144 = MAP_Explorer::max2(+t_143, +1+t_108);
	uint64_t t_145 = MAP_Explorer::max2(+d_[23]+t_131, +1+t_135);
	uint64_t t_146 = MAP_Explorer::max2(+t_145, +1+t_109);
	uint64_t t_147 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+t_119, +1+t_136);
	uint64_t t_148 = MAP_Explorer::max2(+t_147, +1+t_110);
	uint64_t t_149 = MAP_Explorer::max2(+d_[23]+t_132, +1+t_137);
	uint64_t t_150 = MAP_Explorer::max2(+t_149, +1+t_111);
	uint64_t t_151 = MAP_Explorer::max2(+d_[23]+t_133, +1+t_138);
	uint64_t t_152 = MAP_Explorer::max2(+t_151, +1+t_112);
	uint64_t t_153 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+t_122, +1+t_139);
	uint64_t t_154 = MAP_Explorer::max2(+t_153, +1+t_113);
	uint64_t t_155 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+t_123, +1+t_140);
	uint64_t t_156 = MAP_Explorer::max2(+t_155, +1+t_114);
	uint64_t t_157 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+t_124, +1+t_141);
	uint64_t t_158 = MAP_Explorer::max2(+t_157, +1+t_115);
	uint64_t t_159 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+t_125, +1+t_142);
	uint64_t t_160 = MAP_Explorer::max2(+t_159, +1+t_116);
	uint64_t t_161 = MAP_Explorer::max2(+t_143, +d_[22]+t_134);
	uint64_t t_162 = MAP_Explorer::max2(+t_161, +1+t_108);
	uint64_t t_163 = MAP_Explorer::max2(+t_145, +d_[22]+t_135);
	uint64_t t_164 = MAP_Explorer::max2(+t_163, +1+t_109);
	uint64_t t_165 = MAP_Explorer::max2(+d_[23], +d_[22]);
	uint64_t t_166 = MAP_Explorer::max2(+t_147, +d_[22]+t_136);
	uint64_t t_167 = MAP_Explorer::max2(+t_166, +1+t_110);
	uint64_t t_168 = MAP_Explorer::max2(+t_149, +d_[22]+t_137);
	uint64_t t_169 = MAP_Explorer::max2(+t_168, +1+t_111);
	uint64_t t_170 = MAP_Explorer::max2(+t_151, +d_[22]+t_138);
	uint64_t t_171 = MAP_Explorer::max2(+t_170, +1+t_112);
	uint64_t t_172 = MAP_Explorer::max2(+t_153, +d_[22]+t_139);
	uint64_t t_173 = MAP_Explorer::max2(+t_172, +1+t_113);
	uint64_t t_174 = MAP_Explorer::max2(+t_155, +d_[22]+t_140);
	uint64_t t_175 = MAP_Explorer::max2(+t_174, +1+t_114);
	uint64_t t_176 = MAP_Explorer::max2(+t_157, +d_[22]+t_141);
	uint64_t t_177 = MAP_Explorer::max2(+t_176, +1+t_115);
	uint64_t t_178 = MAP_Explorer::max2(+t_159, +d_[22]+t_142);
	uint64_t t_179 = MAP_Explorer::max2(+t_178, +1+t_116);
	uint64_t t_180 = MAP_Explorer::max2(+d_[23]+d_[25]+t_130, +1+t_144);
	uint64_t t_181 = MAP_Explorer::max2(+d_[23]+d_[25]+t_131, +1+t_146);
	uint64_t t_182 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+d_[25]+t_119, +1+t_148);
	uint64_t t_183 = MAP_Explorer::max2(+d_[23]+d_[25]+t_132, +1+t_150);
	uint64_t t_184 = MAP_Explorer::max2(+d_[23]+d_[25]+t_133, +1+t_152);
	uint64_t t_185 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+d_[25]+t_122, +1+t_154);
	uint64_t t_186 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+d_[25]+t_123, +1+t_156);
	uint64_t t_187 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+d_[25]+t_124, +1+t_158);
	uint64_t t_188 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[23]+d_[25]+t_125, +1+t_160);
	uint64_t t_189 = MAP_Explorer::max2(+t_180, +1+t_162);
	uint64_t t_190 = MAP_Explorer::max2(+t_181, +1+t_164);
	uint64_t t_191 = MAP_Explorer::max2(+d_[25], +d_[22]);
	uint64_t t_192 = MAP_Explorer::max2(+d_[23]+d_[25], +1+t_165);
	uint64_t t_193 = MAP_Explorer::max2(+t_182, +1+t_167);
	uint64_t t_194 = MAP_Explorer::max2(+t_183, +1+t_169);
	uint64_t t_195 = MAP_Explorer::max2(+t_184, +1+t_171);
	uint64_t t_196 = MAP_Explorer::max2(+t_185, +1+t_173);
	uint64_t t_197 = MAP_Explorer::max2(+t_186, +1+t_175);
	uint64_t t_198 = MAP_Explorer::max2(+t_187, +1+t_177);
	uint64_t t_199 = MAP_Explorer::max2(+t_188, +1+t_179);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[24]+t_162, vec_[1] +2+d_[1]+d_[24]+t_162);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[24]+t_162);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[24]+t_164);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[22]+d_[24]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[24]+t_162);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[21]+d_[24]+t_165);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[24]+t_167);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[24]+t_169);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[24]+t_171);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[24]+t_173);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +2+d_[24]+t_175);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +2+d_[24]+t_177);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +2+d_[24]+t_179);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[24]+t_162);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_189, vec_[1] +2+d_[1]+t_189);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_189);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2+t_190);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_191);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_189);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[21]+t_192);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_193);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+t_194);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_195);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +2+t_196);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +2+t_197);
	out_5 = MAP_Explorer::max2(out_5, vec_[20] +2+t_198);
	out_5 = MAP_Explorer::max2(out_5, vec_[21] +2+t_199);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_189);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_6, vec_[1] +3+d_[1]+t_6);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+t_6);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1+t_7);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +3+t_6);
	out_10 = MAP_Explorer::max2(out_10, vec_[16] +2+t_8);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2+t_9);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+t_6);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_126, vec_[1] +2+d_[1]+t_126);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+t_126);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+t_127);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+t_126);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[20]+t_119);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+t_128);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +2+t_129);
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +2+d_[20]+t_122);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2+d_[20]+t_123);
	out_14 = MAP_Explorer::max2(out_14, vec_[20] +2+d_[20]+t_124);
	out_14 = MAP_Explorer::max2(out_14, vec_[21] +2+d_[20]+t_125);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+t_126);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_89, vec_[1] +3+d_[1]+t_89);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3+t_89);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+t_91);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +3+t_89);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+t_92);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +3+t_94);
	out_15 = MAP_Explorer::max2(out_15, vec_[17] +3+t_96);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2+t_97);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+t_98);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +2+t_99);
	out_15 = MAP_Explorer::max2(out_15, vec_[21] +2+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]+t_89);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_117, vec_[1] +2+d_[1]+t_117);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+t_117);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+t_118);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+t_117);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2+t_119);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +2+t_120);
	out_16 = MAP_Explorer::max2(out_16, vec_[17] +2+t_121);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +2+t_122);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2+t_123);
	out_16 = MAP_Explorer::max2(out_16, vec_[20] +2+t_124);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +2+t_125);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+t_117);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_108, vec_[1] +2+d_[1]+t_108);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+t_108);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_109);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+t_108);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+t_110);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +2+t_111);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2+t_112);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+t_113);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+t_114);
	out_17 = MAP_Explorer::max2(out_17, vec_[20] +2+t_115);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +2+t_116);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+t_108);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[23]+t_130, vec_[1] +1+d_[1]+d_[23]+t_130);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[23]+t_130);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[23]+t_131);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[23]+t_130);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[21]+d_[23]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[20]+d_[21]+d_[23]+t_119);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[23]+t_132);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[23]+t_133);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[20]+d_[21]+d_[23]+t_122);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[20]+d_[21]+d_[23]+t_123);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +1+d_[20]+d_[21]+d_[23]+t_124);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1+d_[20]+d_[21]+d_[23]+t_125);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[23]+t_130);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_180, vec_[1] +1+d_[1]+t_180);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_180);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_181);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_180);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1+d_[21]+d_[23]+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1+t_182);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1+t_183);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1+t_184);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1+t_185);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1+t_186);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1+t_187);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1+t_188);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_180);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_13{
    13,
    46436,
    46500,
    block_13_fn
    };

static void block_14_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[6]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[2]+d_[4]+d_[6]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[6]+t_4);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[4]+d_[6]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_25 = MAP_Explorer::max2(+d_[10]+t_16, +1+t_20);
	uint64_t t_26 = MAP_Explorer::max2(+d_[10]+t_17, +t_21);
	uint64_t t_27 = MAP_Explorer::max2(+d_[10]+t_18, +1+t_22);
	uint64_t t_28 = MAP_Explorer::max2(+d_[10]+t_19, +1+t_23);
	uint64_t t_29 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_24);
	uint64_t t_30 = MAP_Explorer::max2(+d_[11]+t_25, +d_[8]+t_12);
	uint64_t t_31 = MAP_Explorer::max2(+2+d_[11]+t_26, +d_[8]+t_13);
	uint64_t t_32 = MAP_Explorer::max2(+1+d_[11]+t_27, +d_[8]+t_14);
	uint64_t t_33 = MAP_Explorer::max2(+1+d_[11]+t_28, +d_[8]+t_15);
	uint64_t t_34 = MAP_Explorer::max2(+1+d_[11]+t_29, +d_[6]+d_[8]);
	uint64_t t_35 = MAP_Explorer::max2(+1+d_[10]+d_[11], +d_[8]);
	uint64_t t_36 = MAP_Explorer::max2(+d_[11]+d_[13]+t_25, +1+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+1+d_[11]+d_[13]+t_26, +t_31);
	uint64_t t_38 = MAP_Explorer::max2(+d_[11]+d_[13]+t_27, +t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[11]+d_[13]+t_28, +t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[11]+d_[13]+t_29, +t_34);
	uint64_t t_41 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[13], +t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_25, +1+t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_26, +t_37);
	uint64_t t_44 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_27, +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_28, +1+t_39);
	uint64_t t_46 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_29, +1+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[13]+d_[14], +1+t_41);
	uint64_t t_48 = MAP_Explorer::max2(+t_42, +d_[12]+t_30);
	uint64_t t_49 = MAP_Explorer::max2(+2+t_43, +d_[12]+t_31);
	uint64_t t_50 = MAP_Explorer::max2(+1+t_44, +d_[12]+t_32);
	uint64_t t_51 = MAP_Explorer::max2(+1+t_45, +d_[12]+t_33);
	uint64_t t_52 = MAP_Explorer::max2(+1+t_46, +d_[12]+t_34);
	uint64_t t_53 = MAP_Explorer::max2(+d_[13]+d_[14], +d_[12]);
	uint64_t t_54 = MAP_Explorer::max2(+1+d_[14], +d_[12]);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_47, +d_[12]+t_35);
	uint64_t t_56 = MAP_Explorer::max2(+d_[16]+t_42, +1+t_48);
	uint64_t t_57 = MAP_Explorer::max2(+1+d_[16]+t_43, +t_49);
	uint64_t t_58 = MAP_Explorer::max2(+d_[16]+t_44, +t_50);
	uint64_t t_59 = MAP_Explorer::max2(+d_[16]+t_45, +t_51);
	uint64_t t_60 = MAP_Explorer::max2(+d_[16]+t_46, +t_52);
	uint64_t t_61 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[16], +1+t_53);
	uint64_t t_62 = MAP_Explorer::max2(+d_[14]+d_[16], +t_54);
	uint64_t t_63 = MAP_Explorer::max2(+d_[16]+t_47, +t_55);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[15]+t_48, vec_[1] +2+d_[1]+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[15]+t_49);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[15]+t_50);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[15]+t_48);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[15]+t_51);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[15]+t_52);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[15]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[11]+d_[15]+t_53);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[15]+t_53);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[15]+t_54);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[15]+t_55);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[15]+t_48);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_56, vec_[1] +2+d_[1]+t_56);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_56);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_57);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_58);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_56);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_59);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_60);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[16]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[11]+t_61);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+t_61);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_62);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_63);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_56);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_36, vec_[1] +2+d_[1]+t_36);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_36);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_37);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_38);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_36);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_39);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+t_40);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+d_[11]+d_[13]);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2+d_[13]);
	out_12 = MAP_Explorer::max2(out_12, vec_[17] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +2+t_41);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_36);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_20, vec_[1] +2+d_[1]+t_20);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_20);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_22);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_20);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_23);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_24);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_20);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_25, vec_[1] +2+d_[1]+t_25);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_25);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+t_26);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+t_27);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_25);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_28);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+t_29);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[10]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+t_25);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_42, vec_[1] +1+d_[1]+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_43);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_44);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_45);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[11]+d_[13]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+d_[13]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_47);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_42);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_37 -1+d_[16];
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = out_37 +d_[16];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[38] = out_38;
}

extern const MAP_Explorer::Block block_14{
    14,
    62872,
    62912,
    block_14_fn
    };

static void block_16_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_1, vec_[1] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[6] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_16{
    16,
    62916,
    62928,
    block_16_fn
    };

static void block_22_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[3]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[1]+d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[2]+d_[4]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6], +d_[1]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[1]+d_[3]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[5]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[5]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[1]+d_[3]+d_[5]);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[3]+d_[5]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8]+t_6, +1+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[8]+t_7, +t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+t_20, +d_[7]+t_12);
	uint64_t t_25 = MAP_Explorer::max2(+1+t_21, +d_[7]+t_13);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_22, +d_[7]+t_14);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_23, +d_[7]+t_15);
	uint64_t t_28 = MAP_Explorer::max2(+d_[10]+t_16, +1+t_20);
	uint64_t t_29 = MAP_Explorer::max2(+d_[10]+t_17, +1+t_21);
	uint64_t t_30 = MAP_Explorer::max2(+d_[10]+t_18, +t_22);
	uint64_t t_31 = MAP_Explorer::max2(+d_[10]+t_19, +1+t_23);
	uint64_t t_32 = MAP_Explorer::max2(+t_28, +1+t_24);
	uint64_t t_33 = MAP_Explorer::max2(+t_29, +t_25);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_30, +t_26);
	uint64_t t_35 = MAP_Explorer::max2(+t_31, +t_27);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_28, vec_[1] +t_28);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_29);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_30);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_31);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_29);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +t_29);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_28);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[9]+t_24, vec_[1] +2+d_[9]+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[9]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[9]+t_26);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[9]+t_27);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[9]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[9]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[9]+t_24);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_16, vec_[1] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_17);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_17);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_17);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_16);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_32, vec_[1] +2+t_32);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_33);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_35);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_33);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_33);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_32);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_22{
    22,
    62932,
    62952,
    block_22_fn
    };

static void block_23_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_23{
    23,
    62956,
    62960,
    block_23_fn
    };

static void block_24_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_24{
    24,
    62964,
    62964,
    block_24_fn
    };


} // namespace CV32E40P_DSE