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

static void block_337_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_337{
    337,
    19316,
    19320,
    block_337_fn
    };

static void block_338_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +2+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+d_[7]);
	uint64_t out_22 = MAP_Explorer::max2(out_13 +d_[3], vec_[22] +1);
	uint64_t out_24 = MAP_Explorer::max2(out_13 +d_[3]+d_[4], vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2);
	uint64_t out_12 = out_19 +d_[8];
	uint64_t out_25 = out_19 +d_[8]+d_[9];
	uint64_t out_37 = out_19 -1+d_[8]+d_[9];
	uint64_t out_38 = out_19 +d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[9]+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[12] = out_12;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_338{
    338,
    19324,
    19364,
    block_338_fn
    };

static void block_342_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[23] );
	out_0 = MAP_Explorer::max2(out_0, vec_[25] );
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_342{
    342,
    19420,
    19428,
    block_342_fn
    };

static void block_343_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_343{
    343,
    19432,
    19440,
    block_343_fn
    };

static void block_350_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[8]+d_[9]+d_[10]+d_[11], +d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[9]+d_[10]+d_[11]+d_[13], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[13], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[12]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[12]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[12]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[13], +d_[12]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[13]+d_[15], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10]+d_[11]+d_[13]+d_[15], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+t_12, +t_8);
	uint64_t t_16 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_9);
	uint64_t t_17 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_18 = MAP_Explorer::max2(+d_[16]+t_10, +1+t_13);
	uint64_t t_19 = MAP_Explorer::max2(+d_[16]+t_11, +t_14);
	uint64_t t_20 = MAP_Explorer::max2(+d_[16]+t_12, +1+t_15);
	uint64_t t_21 = MAP_Explorer::max2(+d_[13]+d_[15]+d_[16], +1+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+d_[15]+d_[16], +1+t_17);
	uint64_t t_23 = MAP_Explorer::max2(+t_18, +d_[14]+t_6);
	uint64_t t_24 = MAP_Explorer::max2(+2+t_19, +d_[14]+t_7);
	uint64_t t_25 = MAP_Explorer::max2(+1+d_[16], +d_[14]);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_20, +d_[14]+t_8);
	uint64_t t_27 = MAP_Explorer::max2(+t_21, +d_[14]+t_9);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_22, +d_[12]+d_[14]);
	uint64_t t_29 = MAP_Explorer::max2(+d_[18]+t_18, +1+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+1+d_[18]+t_19, +t_24);
	uint64_t t_31 = MAP_Explorer::max2(+d_[16]+d_[18], +t_25);
	uint64_t t_32 = MAP_Explorer::max2(+d_[18]+t_20, +t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[18]+t_21, +1+t_27);
	uint64_t t_34 = MAP_Explorer::max2(+d_[18]+t_22, +t_28);
	uint64_t t_35 = MAP_Explorer::max2(+d_[18]+d_[19]+t_18, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[18]+d_[19]+t_19, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[16]+d_[18]+d_[19], +1+t_31);
	uint64_t t_38 = MAP_Explorer::max2(+d_[18]+d_[19]+t_20, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[18]+d_[19]+t_21, +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[18]+d_[19]+t_22, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+d_[20]+d_[21]+t_35, +1+d_[7]+d_[8]+d_[9]+d_[10]);
	uint64_t t_42 = MAP_Explorer::max2(+d_[20]+d_[21]+t_36, +1+d_[9]+d_[10]);
	uint64_t t_43 = MAP_Explorer::max2(+d_[20]+d_[21]+t_38, +1+d_[8]+d_[9]+d_[10]);
	uint64_t t_44 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_35, +1+t_41);
	uint64_t t_45 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_36, +1+t_42);
	uint64_t t_46 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_38, +1+t_43);
	uint64_t t_47 = MAP_Explorer::max2(+t_44, +1+t_29);
	uint64_t t_48 = MAP_Explorer::max2(+t_45, +t_30);
	uint64_t t_49 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_37, +1+t_31);
	uint64_t t_50 = MAP_Explorer::max2(+t_46, +1+t_32);
	uint64_t t_51 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_39, +1+t_33);
	uint64_t t_52 = MAP_Explorer::max2(+d_[20]+d_[21]+d_[22]+t_40, +1+t_34);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_44, vec_[1] +d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_44);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+d_[3]+d_[4]+d_[5]+t_44);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_45);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[21]+d_[22]);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +d_[20]+d_[21]+d_[22]+t_37);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +d_[4]+d_[5]+t_44);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_46);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +d_[19]+d_[20]+d_[21]+d_[22]);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[5]+t_44);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +d_[11]+d_[20]+d_[21]+d_[22]+t_39);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +d_[20]+d_[21]+d_[22]+t_40);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_44);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[17]+t_23, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[17]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[17]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[17]+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[17]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[4]+d_[5]+d_[17]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[17]+t_26);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[17]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[5]+d_[17]+t_23);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[11]+d_[17]+t_27);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[17]+t_28);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[17]+t_23);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[4]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +2+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[8]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[8]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[4]+d_[5]+d_[7]+d_[8]);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[8]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[5]+d_[7]+d_[8]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[8]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[20]+t_35, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[20]+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[20]+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+d_[20]+t_36);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[5] +2+d_[20]+t_37);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[4]+d_[5]+d_[20]+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2+d_[20]+t_38);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +2+d_[19]+d_[20]);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2+d_[5]+d_[20]+t_35);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[11]+d_[20]+t_39);
	out_15 = MAP_Explorer::max2(out_15, vec_[22] +2+d_[20]+t_40);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[20]+t_35);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_29, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1+t_30);
	out_16 = MAP_Explorer::max2(out_16, vec_[5] +2+t_31);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[4]+d_[5]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+t_32);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +2+d_[5]+t_29);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2+d_[11]+t_33);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2+t_34);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_29);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_35, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_35);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+t_35);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_36);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+t_37);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[4]+d_[5]+t_35);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_38);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+d_[19]);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2+d_[5]+t_35);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[11]+t_39);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_40);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_35);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_41, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_42);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +2+d_[21]);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[20]+d_[21]+t_37);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[4]+d_[5]+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_43);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[19]+d_[20]+d_[21]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[5]+t_41);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[11]+d_[20]+d_[21]+t_39);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[20]+d_[21]+t_40);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_41);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_13, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_14);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[4]+d_[5]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_15);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +2+d_[5]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2+d_[11]+t_16);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_17);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_13);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_47, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_48);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[21]+d_[22]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_49);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[4]+d_[5]+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_50);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[19]+d_[20]+d_[21]+d_[22]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[5]+t_47);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[11]+t_51);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_52);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+t_47);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = out_15 -1+d_[21];
	uint64_t out_17 = MAP_Explorer::max2(out_14 +d_[9]+d_[10], vec_[15] +2);


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_350{
    350,
    20052,
    20124,
    block_350_fn
    };

static void block_351_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[16] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_351{
    351,
    20132,
    20140,
    block_351_fn
    };

static void block_357_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_357{
    357,
    20992,
    20996,
    block_357_fn
    };

static void block_358_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_358{
    358,
    21024,
    21032,
    block_358_fn
    };

static void block_359_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_359{
    359,
    21048,
    21100,
    block_359_fn
    };

static void block_356_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_356{
    356,
    20456,
    20460,
    block_356_fn
    };

static void block_272_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
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

extern const MAP_Explorer::Block block_272{
    272,
    19076,
    19080,
    block_272_fn
    };

static void block_326_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_326{
    326,
    18500,
    18508,
    block_326_fn
    };

static void block_327_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_327{
    327,
    18512,
    18520,
    block_327_fn
    };

static void block_361_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_361{
    361,
    19368,
    19372,
    block_361_fn
    };

static void block_362_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(out_12 +d_[3]+d_[4], vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +2+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_12 +d_[3]+d_[4]+d_[5], vec_[4] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[19] +2+d_[5]);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_16 = out_19 +d_[8];
	uint64_t out_17 = out_19 +d_[8]+d_[9];
	uint64_t out_37 = out_19 -1+d_[8]+d_[9];
	uint64_t out_38 = out_19 +d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_16 -1+d_[9]+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_362{
    362,
    19376,
    19416,
    block_362_fn
    };

static void block_363_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_14 +d_[2]+d_[3]+d_[4], vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[4]);
	uint64_t out_12 = out_13 +d_[5]+d_[6]+d_[7];
	uint64_t out_15 = out_13 +d_[5]+d_[6];
	uint64_t out_16 = out_13 +d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_18 = out_13 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_19 = out_13 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_37 = out_13 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_38 = out_13 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[20] = out_20;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_363{
    363,
    19444,
    19496,
    block_363_fn
    };

static void block_364_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+d_[2]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +d_[9]+d_[10]+d_[11], vec_[4] +2+d_[11]);
	uint64_t out_12 = out_18 +d_[12];
	uint64_t out_37 = out_18 -1+d_[12];
	uint64_t out_38 = out_18 +d_[12]+d_[13];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_364{
    364,
    19504,
    19556,
    block_364_fn
    };

static void block_365_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_365{
    365,
    19576,
    19580,
    block_365_fn
    };

static void block_366_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[17] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_366{
    366,
    19772,
    19776,
    block_366_fn
    };

static void block_367_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_367{
    367,
    19780,
    19784,
    block_367_fn
    };


} // namespace CV32E40P_DSE