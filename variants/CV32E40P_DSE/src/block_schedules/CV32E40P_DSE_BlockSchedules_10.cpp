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
    32100,
    32104,
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
    32120,
    32120,
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
    32072,
    32072,
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
    32076,
    32096,
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
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	uint64_t out_1 = out_38;
	uint64_t out_2 = out_38 +1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[5] +2);
	uint64_t out_0 = out_2 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[4] = out_4;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_10{
    10,
    1760,
    1764,
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
	uint64_t out_38 = out_15 -1+d_[3]+d_[4]+d_[5]+d_[7];
	uint64_t out_3 = MAP_Explorer::max2(out_15 +d_[3]+d_[4]+d_[5]+d_[6], vec_[3] +d_[6]);
	uint64_t out_5 = MAP_Explorer::max2(out_15 +d_[3]+d_[4]+d_[5]+d_[7], vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_14 -2+d_[5]+d_[7];
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_12{
    12,
    29152,
    29176,
    block_12_fn
    };

static void block_13_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[7]+t_3, +t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[7]+d_[9]+t_2, +1+t_6);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7]+d_[9]+t_3, +t_7);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +d_[8]+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_9, +d_[8]+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+t_8, +1+t_10);
	uint64_t t_13 = MAP_Explorer::max2(+d_[11]+t_9, +t_11);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +d_[10]+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_13, +d_[10]+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+d_[13]+t_8, +1+t_12);
	uint64_t t_17 = MAP_Explorer::max2(+d_[11]+d_[13]+t_9, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+t_16, +1+t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +t_15);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +d_[12]+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_19, +d_[12]+t_15);
	uint64_t t_22 = MAP_Explorer::max2(+d_[15]+t_16, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+d_[15]+t_17, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+t_22, +1+t_20);
	uint64_t t_25 = MAP_Explorer::max2(+t_23, +t_21);
	uint64_t t_26 = MAP_Explorer::max2(+t_24, +d_[14]+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_25, +d_[14]+t_21);
	uint64_t t_28 = MAP_Explorer::max2(+d_[17]+t_22, +1+t_24);
	uint64_t t_29 = MAP_Explorer::max2(+d_[17]+t_23, +1+t_25);
	uint64_t t_30 = MAP_Explorer::max2(+t_28, +1+t_26);
	uint64_t t_31 = MAP_Explorer::max2(+t_30, +2+t_4);
	uint64_t t_32 = MAP_Explorer::max2(+t_29, +t_27);
	uint64_t t_33 = MAP_Explorer::max2(+t_32, +t_5);
	uint64_t t_34 = MAP_Explorer::max2(+t_30, +d_[16]+t_26);
	uint64_t t_35 = MAP_Explorer::max2(+t_34, +2+t_4);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_32, +d_[16]+t_27);
	uint64_t t_37 = MAP_Explorer::max2(+t_36, +1+t_5);
	uint64_t t_38 = MAP_Explorer::max2(+d_[18]+t_28, +1+t_31);
	uint64_t t_39 = MAP_Explorer::max2(+d_[18]+t_29, +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+t_38, +1+t_35);
	uint64_t t_41 = MAP_Explorer::max2(+t_39, +t_37);
	uint64_t t_42 = MAP_Explorer::max2(+d_[19]+t_38, +1+t_40);
	uint64_t t_43 = MAP_Explorer::max2(+d_[19]+t_39, +1+t_41);
	uint64_t t_44 = MAP_Explorer::max2(+d_[20]+t_42, +2+t_4);
	uint64_t t_45 = MAP_Explorer::max2(+d_[20]+t_43, +t_5);
	uint64_t t_46 = MAP_Explorer::max2(+d_[20]+d_[21]+t_42, +1+t_44);
	uint64_t t_47 = MAP_Explorer::max2(+d_[20]+d_[21]+t_43, +1+t_45);
	uint64_t t_48 = MAP_Explorer::max2(+t_46, +1+t_35);
	uint64_t t_49 = MAP_Explorer::max2(+t_47, +t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[23]+t_46, +1+t_48);
	uint64_t t_51 = MAP_Explorer::max2(+t_50, +1+t_40);
	uint64_t t_52 = MAP_Explorer::max2(+d_[23]+t_47, +1+t_49);
	uint64_t t_53 = MAP_Explorer::max2(+t_52, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+t_50, +d_[22]+t_48);
	uint64_t t_55 = MAP_Explorer::max2(+t_54, +1+t_40);
	uint64_t t_56 = MAP_Explorer::max2(+t_52, +d_[22]+t_49);
	uint64_t t_57 = MAP_Explorer::max2(+t_56, +1+t_41);
	uint64_t t_58 = MAP_Explorer::max2(+d_[23]+d_[25]+t_46, +1+t_51);
	uint64_t t_59 = MAP_Explorer::max2(+d_[23]+d_[25]+t_47, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+t_58, +1+t_55);
	uint64_t t_61 = MAP_Explorer::max2(+t_59, +1+t_57);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[24]+t_55, vec_[1] +2+d_[1]+d_[24]+t_55);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[24]+t_55);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[24]+t_57);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[24]+t_55);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[24]+t_55);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_60, vec_[1] +2+d_[1]+t_60);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_60);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2+t_61);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_60);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_60);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_4, vec_[1] +3+d_[1]+t_4);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+t_4);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1+t_5);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +3+t_4);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+t_4);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_44, vec_[1] +2+d_[1]+t_44);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+t_44);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+t_45);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+t_44);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+t_44);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_35, vec_[1] +3+d_[1]+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+t_37);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +3+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]+t_35);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_42, vec_[1] +2+d_[1]+t_42);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+t_42);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +2+t_43);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+t_42);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+t_42);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_40, vec_[1] +2+d_[1]+t_40);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+t_40);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_41);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+t_40);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+t_40);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[23]+t_46, vec_[1] +1+d_[1]+d_[23]+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[23]+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[23]+t_47);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[23]+t_46);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[23]+t_46);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_58, vec_[1] +1+d_[1]+t_58);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_58);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_59);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_58);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_58);
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
    30436,
    30500,
    block_13_fn
    };

static void block_14_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +d_[6]+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]+d_[6]);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+t_3, +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[9]+t_4, +t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +1+t_7);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_10, +t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[10]+t_9, +1+t_11);
	uint64_t t_14 = MAP_Explorer::max2(+d_[10]+t_10, +t_12);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_13, +d_[8]+t_7);
	uint64_t t_16 = MAP_Explorer::max2(+2+d_[11]+t_14, +d_[8]+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[11]+d_[13]+t_13, +1+t_15);
	uint64_t t_18 = MAP_Explorer::max2(+1+d_[11]+d_[13]+t_14, +t_16);
	uint64_t t_19 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_13, +1+t_17);
	uint64_t t_20 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[14]+t_14, +t_18);
	uint64_t t_21 = MAP_Explorer::max2(+t_19, +d_[12]+t_15);
	uint64_t t_22 = MAP_Explorer::max2(+2+t_20, +d_[12]+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+d_[16]+t_19, +1+t_21);
	uint64_t t_24 = MAP_Explorer::max2(+1+d_[16]+t_20, +t_22);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[15]+t_21, vec_[1] +2+d_[1]+d_[15]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[15]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[15]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[15]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[15]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[15]+t_21);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_23, vec_[1] +2+d_[1]+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_24);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_23);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_23);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_17, vec_[1] +2+d_[1]+t_17);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_17);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+t_18);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_17);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_17);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_11, vec_[1] +2+d_[1]+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_12);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_11);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_13, vec_[1] +2+d_[1]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+t_14);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+t_13);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_19, vec_[1] +1+d_[1]+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_19);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_19);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[16], vec_[14] +1);
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_14{
    14,
    46060,
    46100,
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
	uint64_t out_3 = out_37 +1+d_[3];
	uint64_t out_5 = out_37 +1+d_[4];
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_16{
    16,
    46104,
    46116,
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
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +d_[5]+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[5]+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[1]+d_[3]+d_[5]);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8]+t_6, +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_7, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +t_13);
	uint64_t t_20 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_21 = MAP_Explorer::max2(+t_17, +d_[7]+t_11);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +d_[7]+t_12);
	uint64_t t_23 = MAP_Explorer::max2(+1+t_19, +d_[7]+t_13);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_20, +d_[5]+d_[7]);
	uint64_t t_25 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_17);
	uint64_t t_26 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_18);
	uint64_t t_27 = MAP_Explorer::max2(+d_[10]+t_16, +t_19);
	uint64_t t_28 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_20);
	uint64_t t_29 = MAP_Explorer::max2(+t_25, +1+t_21);
	uint64_t t_30 = MAP_Explorer::max2(+t_26, +t_22);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_27, +t_23);
	uint64_t t_32 = MAP_Explorer::max2(+t_28, +t_24);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_25, vec_[1] +t_25);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_26);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_27);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_28);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_26);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +t_26);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_25);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[9]+t_21, vec_[1] +2+d_[9]+t_21);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[9]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[9]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[9]+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[9]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[9]+t_22);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[9]+t_21);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_14, vec_[1] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_14);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_29, vec_[1] +2+t_29);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_30);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_32);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_30);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_30);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_29);
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
    46120,
    46140,
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
    46144,
    46148,
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
    46152,
    46152,
    block_24_fn
    };

static void block_25_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_3 = out_14;
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_25{
    25,
    52572,
    52576,
    block_25_fn
    };

static void block_26_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_26{
    26,
    30096,
    30100,
    block_26_fn
    };

static void block_27_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+t_2, +2+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[6], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +1+t_1);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +1+d_[1]+d_[2]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +2+d_[1]+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[6];
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_27{
    27,
    30108,
    30128,
    block_27_fn
    };

static void block_28_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_28{
    28,
    30132,
    30132,
    block_28_fn
    };

static void block_29_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[9], +d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[4]+d_[6]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[10]+t_3, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[10]+t_4, +t_6);
	uint64_t t_9 = MAP_Explorer::max2(+d_[11]+t_7, +d_[8]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(+2+d_[11]+t_8, +d_[4]+d_[6]+d_[8]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[11]+d_[13]+t_7, +1+t_9);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[11]+d_[13]+t_8, +t_10);
	uint64_t t_13 = MAP_Explorer::max2(+t_11, +d_[12]+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_12, +d_[12]+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_7, +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_8, +t_12);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +1+t_13);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_16, +t_14);
	uint64_t t_19 = MAP_Explorer::max2(+t_17, +d_[14]+t_13);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_18, +d_[14]+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[17]+t_15, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+d_[17]+t_16, +t_18);
	uint64_t t_23 = MAP_Explorer::max2(+t_21, +1+t_19);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_22, +t_20);
	uint64_t t_25 = MAP_Explorer::max2(+d_[18]+t_21, +1+t_23);
	uint64_t t_26 = MAP_Explorer::max2(+d_[18]+t_22, +t_24);
	uint64_t t_27 = MAP_Explorer::max2(+t_25, +d_[16]+t_19);
	uint64_t t_28 = MAP_Explorer::max2(+2+t_26, +d_[16]+t_20);
	uint64_t t_29 = MAP_Explorer::max2(+d_[20]+t_25, +1+t_27);
	uint64_t t_30 = MAP_Explorer::max2(+1+d_[20]+t_26, +t_28);
	uint64_t t_31 = MAP_Explorer::max2(+d_[20]+d_[21]+t_25, +1+t_29);
	uint64_t t_32 = MAP_Explorer::max2(+d_[20]+d_[21]+t_26, +t_30);
	uint64_t t_33 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_31, +1+t_7);
	uint64_t t_34 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_32, +1+t_8);
	uint64_t t_35 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_31, +d_[19]+t_27);
	uint64_t t_36 = MAP_Explorer::max2(+t_35, +1+t_7);
	uint64_t t_37 = MAP_Explorer::max2(+2+d_[22]+d_[23]+d_[24]+d_[25]+t_32, +d_[19]+t_28);
	uint64_t t_38 = MAP_Explorer::max2(+t_37, +3+t_8);
	uint64_t t_39 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_31, +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_32, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+t_39, +1+t_36);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_40, +t_38);
	uint64_t t_43 = MAP_Explorer::max2(+t_41, +d_[26]+t_36);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_42, +d_[26]+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+d_[27], +d_[26]);
	uint64_t t_46 = MAP_Explorer::max2(+d_[29]+t_39, +1+t_41);
	uint64_t t_47 = MAP_Explorer::max2(+d_[29]+t_40, +t_42);
	uint64_t t_48 = MAP_Explorer::max2(+t_46, +1+t_43);
	uint64_t t_49 = MAP_Explorer::max2(+1+t_47, +t_44);
	uint64_t t_50 = MAP_Explorer::max2(+d_[27]+d_[29], +1+t_45);
	uint64_t t_51 = MAP_Explorer::max2(+t_48, +d_[28]+t_43);
	uint64_t t_52 = MAP_Explorer::max2(+t_51, +1+t_7);
	uint64_t t_53 = MAP_Explorer::max2(+1+t_49, +d_[28]+t_44);
	uint64_t t_54 = MAP_Explorer::max2(+t_53, +3+t_8);
	uint64_t t_55 = MAP_Explorer::max2(+t_50, +d_[28]+t_45);
	uint64_t t_56 = MAP_Explorer::max2(+d_[31]+t_46, +1+t_48);
	uint64_t t_57 = MAP_Explorer::max2(+d_[31]+t_47, +t_49);
	uint64_t t_58 = MAP_Explorer::max2(+d_[27]+d_[29]+d_[31], +1+t_50);
	uint64_t t_59 = MAP_Explorer::max2(+t_56, +1+t_52);
	uint64_t t_60 = MAP_Explorer::max2(+t_59, +1+t_7);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_57, +t_54);
	uint64_t t_62 = MAP_Explorer::max2(+t_61, +2+t_8);
	uint64_t t_63 = MAP_Explorer::max2(+t_58, +1+t_55);
	uint64_t t_64 = MAP_Explorer::max2(+t_59, +d_[30]+t_52);
	uint64_t t_65 = MAP_Explorer::max2(+t_64, +1+t_7);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_61, +d_[30]+t_54);
	uint64_t t_67 = MAP_Explorer::max2(+t_66, +3+t_8);
	uint64_t t_68 = MAP_Explorer::max2(+t_63, +d_[30]+t_55);
	uint64_t t_69 = MAP_Explorer::max2(+d_[33]+t_56, +1+t_60);
	uint64_t t_70 = MAP_Explorer::max2(+d_[33]+t_57, +t_62);
	uint64_t t_71 = MAP_Explorer::max2(+d_[33]+t_58, +1+t_63);
	uint64_t t_72 = MAP_Explorer::max2(+t_69, +1+t_65);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_70, +t_67);
	uint64_t t_74 = MAP_Explorer::max2(+t_71, +1+t_68);
	uint64_t t_75 = MAP_Explorer::max2(+t_72, +d_[32]+t_65);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_73, +d_[32]+t_67);
	uint64_t t_77 = MAP_Explorer::max2(+t_74, +d_[32]+t_68);
	uint64_t t_78 = MAP_Explorer::max2(+d_[35]+t_69, +1+t_72);
	uint64_t t_79 = MAP_Explorer::max2(+d_[35]+t_70, +t_73);
	uint64_t t_80 = MAP_Explorer::max2(+d_[35]+t_71, +1+t_74);
	uint64_t t_81 = MAP_Explorer::max2(+t_78, +1+t_75);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_79, +t_76);
	uint64_t t_83 = MAP_Explorer::max2(+t_80, +1+t_77);
	uint64_t t_84 = MAP_Explorer::max2(+t_81, +d_[34]+t_75);
	uint64_t t_85 = MAP_Explorer::max2(+t_84, +1+t_7);
	uint64_t t_86 = MAP_Explorer::max2(+1+t_82, +d_[34]+t_76);
	uint64_t t_87 = MAP_Explorer::max2(+t_86, +3+t_8);
	uint64_t t_88 = MAP_Explorer::max2(+t_83, +d_[34]+t_77);
	uint64_t t_89 = MAP_Explorer::max2(+d_[37]+t_78, +1+t_81);
	uint64_t t_90 = MAP_Explorer::max2(+d_[37]+t_79, +t_82);
	uint64_t t_91 = MAP_Explorer::max2(+d_[37]+t_80, +1+t_83);
	uint64_t t_92 = MAP_Explorer::max2(+t_89, +1+t_85);
	uint64_t t_93 = MAP_Explorer::max2(+t_92, +1+t_7);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_90, +t_87);
	uint64_t t_95 = MAP_Explorer::max2(+t_94, +2+t_8);
	uint64_t t_96 = MAP_Explorer::max2(+t_91, +1+t_88);
	uint64_t t_97 = MAP_Explorer::max2(+t_92, +d_[36]+t_85);
	uint64_t t_98 = MAP_Explorer::max2(+t_97, +1+t_7);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_94, +d_[36]+t_87);
	uint64_t t_100 = MAP_Explorer::max2(+t_99, +3+t_8);
	uint64_t t_101 = MAP_Explorer::max2(+t_96, +d_[36]+t_88);
	uint64_t t_102 = MAP_Explorer::max2(+d_[39]+t_89, +1+t_93);
	uint64_t t_103 = MAP_Explorer::max2(+d_[39]+t_90, +t_95);
	uint64_t t_104 = MAP_Explorer::max2(+d_[39]+t_91, +1+t_96);
	uint64_t t_105 = MAP_Explorer::max2(+t_102, +1+t_98);
	uint64_t t_106 = MAP_Explorer::max2(+1+t_103, +t_100);
	uint64_t t_107 = MAP_Explorer::max2(+t_104, +1+t_101);
	uint64_t t_108 = MAP_Explorer::max2(+t_105, +d_[38]+t_98);
	uint64_t t_109 = MAP_Explorer::max2(+1+t_106, +d_[38]+t_100);
	uint64_t t_110 = MAP_Explorer::max2(+t_107, +d_[38]+t_101);
	uint64_t t_111 = MAP_Explorer::max2(+d_[41]+t_102, +1+t_105);
	uint64_t t_112 = MAP_Explorer::max2(+d_[41]+t_103, +t_106);
	uint64_t t_113 = MAP_Explorer::max2(+d_[41]+t_104, +1+t_107);
	uint64_t t_114 = MAP_Explorer::max2(+t_111, +1+t_108);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_112, +t_109);
	uint64_t t_116 = MAP_Explorer::max2(+t_113, +1+t_110);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[40]+t_108, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[40]+t_108);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[40]+t_108);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[40]+t_109);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[23]+d_[24]+d_[25]+d_[40]+t_110);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[3]+d_[40]+t_108);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[40]+t_108);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_114, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_114);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+d_[3]+t_114);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_115);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[23]+d_[24]+d_[25]+t_116);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+d_[3]+t_114);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_114);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_7, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_7);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[3]+t_7);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_8);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+d_[3]+t_7);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_7);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[22]+t_31, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[22]+t_31);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[3]+d_[22]+t_31);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+d_[22]+t_32);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]+d_[3]+d_[22]+t_31);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[22]+t_31);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_29, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1+t_30);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[2]+d_[3]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_29);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_23, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_23);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+t_23);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_24);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+d_[3]+t_23);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_23);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_31, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_32);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[3]+t_31);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_31);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_102, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_102);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+t_102);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_103);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[23]+d_[24]+d_[25]+t_104);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]+t_102);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_102);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_111, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_111);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+d_[3]+t_111);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_112);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[23]+d_[24]+d_[25]+t_113);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+d_[3]+t_111);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_111);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_15 +d_[23]+d_[24];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_29{
    29,
    29428,
    29532,
    block_29_fn
    };

static void block_33_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[16], +d_[15]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[17]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[16]+d_[18]+d_[20], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[20], +d_[15]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[15]+d_[17]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[20], +d_[17]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +d_[19]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[15]+d_[17]+d_[19]);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[17]+d_[19]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[22]+t_3, +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[22]+t_4, +t_6);
	uint64_t t_13 = MAP_Explorer::max2(+d_[20]+d_[22], +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +d_[21]+t_8);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +d_[21]+t_9);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +d_[21]+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+d_[24]+t_11, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[24]+t_12, +t_15);
	uint64_t t_22 = MAP_Explorer::max2(+d_[24]+t_13, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+t_22, +t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +d_[23]+t_17);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_24, +d_[23]+t_18);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_25, +d_[23]+t_19);
	uint64_t t_29 = MAP_Explorer::max2(+d_[26]+t_20, +1+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+d_[26]+t_21, +t_24);
	uint64_t t_31 = MAP_Explorer::max2(+d_[26]+t_22, +1+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+t_29, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_30, +t_27);
	uint64_t t_34 = MAP_Explorer::max2(+t_31, +t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +d_[25]+t_26);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_33, +d_[25]+t_27);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_34, +d_[25]+t_28);
	uint64_t t_38 = MAP_Explorer::max2(+d_[28]+t_29, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[28]+t_30, +t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[28]+t_31, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+t_38, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_39, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+t_40, +t_37);
	uint64_t t_44 = MAP_Explorer::max2(+t_41, +d_[27]+t_35);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_42, +d_[27]+t_36);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_43, +d_[27]+t_37);
	uint64_t t_47 = MAP_Explorer::max2(+d_[30]+t_38, +1+t_41);
	uint64_t t_48 = MAP_Explorer::max2(+d_[30]+t_39, +t_42);
	uint64_t t_49 = MAP_Explorer::max2(+d_[30]+t_40, +1+t_43);
	uint64_t t_50 = MAP_Explorer::max2(+t_47, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+1+t_48, +t_45);
	uint64_t t_52 = MAP_Explorer::max2(+t_49, +t_46);
	uint64_t t_53 = MAP_Explorer::max2(+t_50, +d_[29]+t_44);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_51, +d_[29]+t_45);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_52, +d_[29]+t_46);
	uint64_t t_56 = MAP_Explorer::max2(+d_[32]+t_47, +1+t_50);
	uint64_t t_57 = MAP_Explorer::max2(+d_[32]+t_48, +t_51);
	uint64_t t_58 = MAP_Explorer::max2(+d_[32]+t_49, +1+t_52);
	uint64_t t_59 = MAP_Explorer::max2(+t_56, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+1+t_57, +t_54);
	uint64_t t_61 = MAP_Explorer::max2(+t_58, +t_55);
	uint64_t t_62 = MAP_Explorer::max2(+t_59, +d_[31]+t_53);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_60, +d_[31]+t_54);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_61, +d_[31]+t_55);
	uint64_t t_65 = MAP_Explorer::max2(+d_[34]+t_56, +1+t_59);
	uint64_t t_66 = MAP_Explorer::max2(+d_[34]+t_57, +t_60);
	uint64_t t_67 = MAP_Explorer::max2(+d_[34]+t_58, +1+t_61);
	uint64_t t_68 = MAP_Explorer::max2(+t_65, +1+t_62);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_66, +t_63);
	uint64_t t_70 = MAP_Explorer::max2(+t_67, +t_64);
	uint64_t t_71 = MAP_Explorer::max2(+t_68, +d_[33]+t_62);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_69, +d_[33]+t_63);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_70, +d_[33]+t_64);
	uint64_t t_74 = MAP_Explorer::max2(+d_[36]+t_65, +1+t_68);
	uint64_t t_75 = MAP_Explorer::max2(+d_[36]+t_66, +t_69);
	uint64_t t_76 = MAP_Explorer::max2(+d_[36]+t_67, +1+t_70);
	uint64_t t_77 = MAP_Explorer::max2(+t_74, +1+t_71);
	uint64_t t_78 = MAP_Explorer::max2(+1+t_75, +t_72);
	uint64_t t_79 = MAP_Explorer::max2(+t_76, +t_73);
	uint64_t t_80 = MAP_Explorer::max2(+t_77, +d_[35]+t_71);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_78, +d_[35]+t_72);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_79, +d_[35]+t_73);
	uint64_t t_83 = MAP_Explorer::max2(+d_[38]+t_74, +1+t_77);
	uint64_t t_84 = MAP_Explorer::max2(+d_[38]+t_75, +t_78);
	uint64_t t_85 = MAP_Explorer::max2(+d_[38]+t_76, +1+t_79);
	uint64_t t_86 = MAP_Explorer::max2(+t_83, +1+t_80);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_84, +t_81);
	uint64_t t_88 = MAP_Explorer::max2(+t_85, +t_82);
	uint64_t t_89 = MAP_Explorer::max2(+t_86, +d_[37]+t_80);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_87, +d_[37]+t_81);
	uint64_t t_91 = MAP_Explorer::max2(+1+t_88, +d_[37]+t_82);
	uint64_t t_92 = MAP_Explorer::max2(+d_[40]+t_83, +1+t_86);
	uint64_t t_93 = MAP_Explorer::max2(+d_[40]+t_84, +t_87);
	uint64_t t_94 = MAP_Explorer::max2(+d_[40]+t_85, +1+t_88);
	uint64_t t_95 = MAP_Explorer::max2(+t_92, +1+t_89);
	uint64_t t_96 = MAP_Explorer::max2(+1+t_93, +t_90);
	uint64_t t_97 = MAP_Explorer::max2(+t_94, +t_91);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_23 = out_24 +d_[3]+d_[4];
	uint64_t out_3 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[39]+t_89, vec_[3] +d_[39]+t_90);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[13]+d_[14]+d_[39]+t_89);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[39]+t_91);
	uint64_t out_5 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_95, vec_[3] +1+t_96);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[13]+d_[14]+t_95);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_97);
	uint64_t out_14 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13], vec_[4] +2+d_[13]);
	uint64_t out_15 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[4] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_83, vec_[3] +1+t_84);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[13]+d_[14]+t_83);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_85);
	uint64_t out_38 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_92, vec_[3] +1+t_93);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[13]+d_[14]+t_92);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_94);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_22 = out_23 +d_[5]+d_[6];
	uint64_t out_13 = out_22 +d_[7]+d_[8];
	uint64_t out_19 = out_22 +d_[7]+d_[8]+d_[9];


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_33{
    33,
    29536,
    29644,
    block_33_fn
    };


} // namespace CV32E40P_DSE