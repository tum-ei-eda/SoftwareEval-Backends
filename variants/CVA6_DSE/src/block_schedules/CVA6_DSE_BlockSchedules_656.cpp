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

namespace CVA6_DSE{

static void block_128_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+1+d_[2], +d_[0]);
	uint64_t t_1 = MAP_Explorer::max2(+t_0, +d_[0]+d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+t_1, +d_[0]+d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+t_2, +1+d_[0]+d_[3]);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +d_[0]+d_[1]+d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+1+d_[3], +d_[1]);
	uint64_t t_6 = MAP_Explorer::max2(+t_5, +d_[1]+d_[3]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[2]+d_[3], +d_[1]);
	uint64_t t_8 = MAP_Explorer::max2(+t_7, +d_[1]+d_[3]);
	uint64_t t_9 = MAP_Explorer::max2(+t_1, +d_[0]+d_[1]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[3]+t_9, +1+d_[0]+d_[1]);
	uint64_t t_12 = MAP_Explorer::max2(+d_[3]+t_10, +1+d_[1]);
	uint64_t t_13 = MAP_Explorer::max2(+2+d_[4], +t_1);
	uint64_t t_14 = MAP_Explorer::max2(+t_13, +1+d_[0]+d_[4]);
	uint64_t t_15 = MAP_Explorer::max2(+t_14, +d_[0]+d_[2]+d_[4]);
	uint64_t t_16 = MAP_Explorer::max2(+t_15, +1+t_1);
	uint64_t t_17 = MAP_Explorer::max2(+1+d_[4], +d_[2]);
	uint64_t t_18 = MAP_Explorer::max2(+t_17, +d_[2]+d_[4]);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +1+t_4);
	uint64_t t_20 = MAP_Explorer::max2(+t_18, +1+d_[2]+d_[3]);
	uint64_t t_21 = MAP_Explorer::max2(+t_18, +1+t_8);
	uint64_t t_22 = MAP_Explorer::max2(+2+d_[0]+d_[5], +t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_22, +1+d_[0]+d_[2]+d_[5]);
	uint64_t t_24 = MAP_Explorer::max2(+t_23, +d_[0]+d_[2]+d_[4]+d_[5]);
	uint64_t t_25 = MAP_Explorer::max2(+t_24, +1+t_16);
	uint64_t t_26 = MAP_Explorer::max2(+1+d_[5], +d_[4]);
	uint64_t t_27 = MAP_Explorer::max2(+t_26, +d_[4]+d_[5]);
	uint64_t t_28 = MAP_Explorer::max2(+2+d_[5], +t_18);
	uint64_t t_29 = MAP_Explorer::max2(+t_28, +1+d_[2]+d_[5]);
	uint64_t t_30 = MAP_Explorer::max2(+t_29, +d_[2]+d_[4]+d_[5]);
	uint64_t t_31 = MAP_Explorer::max2(+t_30, +1+t_18);
	uint64_t t_32 = MAP_Explorer::max2(+t_25, +2+d_[0]+d_[1]);
	uint64_t t_33 = MAP_Explorer::max2(+t_31, +2+d_[1]);
	uint64_t t_34 = MAP_Explorer::max2(+t_25, +t_19);
	uint64_t t_35 = MAP_Explorer::max2(+t_34, +2+t_4);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +t_20);
	uint64_t t_37 = MAP_Explorer::max2(+t_36, +2+d_[2]+d_[3]);
	uint64_t t_38 = MAP_Explorer::max2(+t_31, +t_21);
	uint64_t t_39 = MAP_Explorer::max2(+t_38, +2+t_8);

	uint64_t out_22 = vec_[18] ;
	uint64_t out_21 = vec_[17] ;
	uint64_t out_20 = vec_[16] ;
	uint64_t out_19 = vec_[15] ;
	uint64_t out_9 = vec_[5] ;
	uint64_t out_8 = vec_[4] ;
	uint64_t out_7 = vec_[3] ;
	uint64_t out_6 = vec_[2] ;
	uint64_t out_5 = vec_[1] ;
	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[6] );
	out_0 = MAP_Explorer::max2(out_0, vec_[7] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[8] +1+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[9] +1+d_[0]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +1+d_[0]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[11] +d_[0]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[98] +1+d_[0]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[99] +d_[0]+d_[2]);
	uint64_t out_1 = MAP_Explorer::max2(vec_[0] +3+t_25, vec_[1] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[6] +2+d_[5]);
	out_1 = MAP_Explorer::max2(out_1, vec_[7] +2+t_27);
	out_1 = MAP_Explorer::max2(out_1, vec_[8] +2+t_31);
	out_1 = MAP_Explorer::max2(out_1, vec_[9] +2+t_25);
	out_1 = MAP_Explorer::max2(out_1, vec_[10] +2+t_25);
	out_1 = MAP_Explorer::max2(out_1, vec_[11] +1+t_25);
	out_1 = MAP_Explorer::max2(out_1, vec_[12] +1+t_31);
	out_1 = MAP_Explorer::max2(out_1, vec_[13] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[14] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[21] );
	out_1 = MAP_Explorer::max2(out_1, vec_[22] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[27] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[28] );
	out_1 = MAP_Explorer::max2(out_1, vec_[36] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[67] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[74] );
	out_1 = MAP_Explorer::max2(out_1, vec_[98] +2+t_25);
	out_1 = MAP_Explorer::max2(out_1, vec_[99] +1+t_25);
	uint64_t out_2 = MAP_Explorer::max2(vec_[0] +3+t_16, vec_[1] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[7] +2+d_[4]);
	out_2 = MAP_Explorer::max2(out_2, vec_[8] +2+t_18);
	out_2 = MAP_Explorer::max2(out_2, vec_[9] +2+t_16);
	out_2 = MAP_Explorer::max2(out_2, vec_[10] +2+t_16);
	out_2 = MAP_Explorer::max2(out_2, vec_[11] +1+t_16);
	out_2 = MAP_Explorer::max2(out_2, vec_[12] +1+t_18);
	out_2 = MAP_Explorer::max2(out_2, vec_[13] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[14] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[22] );
	out_2 = MAP_Explorer::max2(out_2, vec_[27] );
	out_2 = MAP_Explorer::max2(out_2, vec_[36] );
	out_2 = MAP_Explorer::max2(out_2, vec_[67] );
	out_2 = MAP_Explorer::max2(out_2, vec_[98] +2+t_16);
	out_2 = MAP_Explorer::max2(out_2, vec_[99] +1+t_16);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+t_1, vec_[1] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[8] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[9] +2+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[10] +2+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[11] +1+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] );
	out_3 = MAP_Explorer::max2(out_3, vec_[98] +2+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[99] +1+t_1);
	uint64_t out_4 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] );
	out_4 = MAP_Explorer::max2(out_4, vec_[9] +2+d_[0]);
	out_4 = MAP_Explorer::max2(out_4, vec_[10] +2+d_[0]);
	out_4 = MAP_Explorer::max2(out_4, vec_[11] +1+d_[0]);
	out_4 = MAP_Explorer::max2(out_4, vec_[12] +1);
	out_4 = MAP_Explorer::max2(out_4, vec_[13] );
	out_4 = MAP_Explorer::max2(out_4, vec_[98] +2+d_[0]);
	out_4 = MAP_Explorer::max2(out_4, vec_[99] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2]+d_[4], vec_[6] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[7] +1+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[8] +1+d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[9] +1+d_[0]+d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1+d_[0]+d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[11] +d_[0]+d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[98] +1+d_[0]+d_[2]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[99] +d_[0]+d_[2]+d_[4]);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +6+t_9, vec_[1] +3+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[8] +5+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[9] +5+t_9);
	out_27 = MAP_Explorer::max2(out_27, vec_[10] +5+t_9);
	out_27 = MAP_Explorer::max2(out_27, vec_[11] +4+t_9);
	out_27 = MAP_Explorer::max2(out_27, vec_[12] +4+t_10);
	out_27 = MAP_Explorer::max2(out_27, vec_[13] +3+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[14] +2+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[21] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[22] +1+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +1+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[28] +d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[29] );
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +1+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[67] +1+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[74] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[98] +5+t_9);
	out_27 = MAP_Explorer::max2(out_27, vec_[99] +4+t_9);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +7+t_35, vec_[1] +6+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[6] +6+d_[5]);
	out_32 = MAP_Explorer::max2(out_32, vec_[7] +6+t_27);
	out_32 = MAP_Explorer::max2(out_32, vec_[8] +6+t_37);
	out_32 = MAP_Explorer::max2(out_32, vec_[9] +6+t_35);
	out_32 = MAP_Explorer::max2(out_32, vec_[10] +6+t_35);
	out_32 = MAP_Explorer::max2(out_32, vec_[11] +5+t_35);
	out_32 = MAP_Explorer::max2(out_32, vec_[12] +5+t_39);
	out_32 = MAP_Explorer::max2(out_32, vec_[13] +6+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +5+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[19] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[20] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[21] +4+d_[3]);
	out_32 = MAP_Explorer::max2(out_32, vec_[22] +4+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[23] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[25] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[26] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[27] +4+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[28] +3+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[29] +3+d_[3]);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[33] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +4+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[67] +4+t_6);
	out_32 = MAP_Explorer::max2(out_32, vec_[68] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[74] +4+d_[3]);
	out_32 = MAP_Explorer::max2(out_32, vec_[98] +6+t_35);
	out_32 = MAP_Explorer::max2(out_32, vec_[99] +5+t_35);
	uint64_t out_42 = MAP_Explorer::max2(vec_[0] +7+t_11, vec_[1] +4+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[8] +6+d_[2]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[9] +6+t_11);
	out_42 = MAP_Explorer::max2(out_42, vec_[10] +6+t_11);
	out_42 = MAP_Explorer::max2(out_42, vec_[11] +5+t_11);
	out_42 = MAP_Explorer::max2(out_42, vec_[12] +5+t_12);
	out_42 = MAP_Explorer::max2(out_42, vec_[13] +4+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[14] +3+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[21] +2+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[22] +2+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[27] +2+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[28] +1+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[29] +1+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[36] +2+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[67] +2+d_[1]+d_[3]);
	out_42 = MAP_Explorer::max2(out_42, vec_[98] +6+t_11);
	out_42 = MAP_Explorer::max2(out_42, vec_[99] +5+t_11);
	uint64_t out_68 = MAP_Explorer::max2(vec_[0] +7+t_19, vec_[1] +5+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[7] +6+d_[4]);
	out_68 = MAP_Explorer::max2(out_68, vec_[8] +6+t_20);
	out_68 = MAP_Explorer::max2(out_68, vec_[9] +6+t_19);
	out_68 = MAP_Explorer::max2(out_68, vec_[10] +6+t_19);
	out_68 = MAP_Explorer::max2(out_68, vec_[11] +5+t_19);
	out_68 = MAP_Explorer::max2(out_68, vec_[12] +5+t_21);
	out_68 = MAP_Explorer::max2(out_68, vec_[13] +5+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[14] +4+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[15] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[20] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[21] +3+d_[3]);
	out_68 = MAP_Explorer::max2(out_68, vec_[22] +3+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[23] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[25] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[26] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[27] +3+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[28] +2+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[29] +2+d_[3]);
	out_68 = MAP_Explorer::max2(out_68, vec_[32] +1);
	out_68 = MAP_Explorer::max2(out_68, vec_[33] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[36] +3+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[67] +3+t_6);
	out_68 = MAP_Explorer::max2(out_68, vec_[68] +2);
	out_68 = MAP_Explorer::max2(out_68, vec_[74] +3+d_[3]);
	out_68 = MAP_Explorer::max2(out_68, vec_[98] +6+t_19);
	out_68 = MAP_Explorer::max2(out_68, vec_[99] +5+t_19);
	uint64_t out_74 = MAP_Explorer::max2(vec_[0] +8+t_4, vec_[1] +5+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[8] +7+d_[2]+d_[3]);
	out_74 = MAP_Explorer::max2(out_74, vec_[9] +7+t_4);
	out_74 = MAP_Explorer::max2(out_74, vec_[10] +7+t_4);
	out_74 = MAP_Explorer::max2(out_74, vec_[11] +6+t_4);
	out_74 = MAP_Explorer::max2(out_74, vec_[12] +6+t_8);
	out_74 = MAP_Explorer::max2(out_74, vec_[13] +5+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[14] +4+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[15] +1);
	out_74 = MAP_Explorer::max2(out_74, vec_[21] +3+d_[3]);
	out_74 = MAP_Explorer::max2(out_74, vec_[22] +3+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[27] +3+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[28] +2+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[29] +2+d_[3]);
	out_74 = MAP_Explorer::max2(out_74, vec_[32] +1);
	out_74 = MAP_Explorer::max2(out_74, vec_[33] +1);
	out_74 = MAP_Explorer::max2(out_74, vec_[36] +3+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[67] +3+t_6);
	out_74 = MAP_Explorer::max2(out_74, vec_[74] +3+d_[3]);
	out_74 = MAP_Explorer::max2(out_74, vec_[98] +7+t_4);
	out_74 = MAP_Explorer::max2(out_74, vec_[99] +6+t_4);
	uint64_t out_103 = MAP_Explorer::max2(vec_[0] +6+t_32, vec_[1] +5+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[6] +5+d_[5]);
	out_103 = MAP_Explorer::max2(out_103, vec_[7] +5+t_27);
	out_103 = MAP_Explorer::max2(out_103, vec_[8] +5+t_31);
	out_103 = MAP_Explorer::max2(out_103, vec_[9] +5+t_32);
	out_103 = MAP_Explorer::max2(out_103, vec_[10] +5+t_32);
	out_103 = MAP_Explorer::max2(out_103, vec_[11] +4+t_32);
	out_103 = MAP_Explorer::max2(out_103, vec_[12] +4+t_33);
	out_103 = MAP_Explorer::max2(out_103, vec_[13] +5+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[14] +4+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[19] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[20] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[21] +3);
	out_103 = MAP_Explorer::max2(out_103, vec_[22] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[23] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[25] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[26] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[27] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[28] +2+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[29] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[36] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[67] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[68] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[74] +3);
	out_103 = MAP_Explorer::max2(out_103, vec_[98] +5+t_32);
	out_103 = MAP_Explorer::max2(out_103, vec_[99] +4+t_32);
	uint64_t out_34 = out_103;
	uint64_t out_33 = out_68;
	uint64_t out_23 = out_103;
	uint64_t out_11 = out_10 +d_[5];
	uint64_t out_14 = out_103 -1;
	uint64_t out_15 = out_32 -1;
	uint64_t out_16 = out_68 -1;
	uint64_t out_17 = out_74 -1;
	uint64_t out_102 = out_10 +1+d_[5];
	uint64_t out_13 = MAP_Explorer::max2(out_1 +1, vec_[20] );
	out_13 = MAP_Explorer::max2(out_13, vec_[23] );
	out_13 = MAP_Explorer::max2(out_13, vec_[25] );
	out_13 = MAP_Explorer::max2(out_13, vec_[26] );
	out_13 = MAP_Explorer::max2(out_13, vec_[68] );
	uint64_t out_29 = MAP_Explorer::max2(out_42 , vec_[74] +2+d_[3]);
	uint64_t out_35 = MAP_Explorer::max2(out_4 +4+d_[1], vec_[14] +3+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[22] +2+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[27] +2+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[28] +1+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[29] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +2+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[67] +2+d_[1]);
	uint64_t out_36 = MAP_Explorer::max2(out_2 +3, vec_[20] +1);
	out_36 = MAP_Explorer::max2(out_36, vec_[21] +2);
	out_36 = MAP_Explorer::max2(out_36, vec_[23] +1);
	out_36 = MAP_Explorer::max2(out_36, vec_[25] +1);
	out_36 = MAP_Explorer::max2(out_36, vec_[26] +1);
	out_36 = MAP_Explorer::max2(out_36, vec_[28] +2);
	out_36 = MAP_Explorer::max2(out_36, vec_[74] +2);
	uint64_t out_67 = MAP_Explorer::max2(out_35 +1, vec_[15] +1);
	out_67 = MAP_Explorer::max2(out_67, vec_[33] +1);
	uint64_t out_12 = out_102;
	uint64_t out_18 = out_67 -1;
	uint64_t out_28 = out_29 -1;


	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[7] = out_7;
	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[10] = out_10;
	vec_[27] = out_27;
	vec_[32] = out_32;
	vec_[42] = out_42;
	vec_[68] = out_68;
	vec_[74] = out_74;
	vec_[103] = out_103;
	vec_[34] = out_34;
	vec_[33] = out_33;
	vec_[23] = out_23;
	vec_[11] = out_11;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[102] = out_102;
	vec_[13] = out_13;
	vec_[29] = out_29;
	vec_[35] = out_35;
	vec_[36] = out_36;
	vec_[67] = out_67;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[28] = out_28;
}

extern const MAP_Explorer::Block block_128{
    128,
    2147564268,
    2147564280,
    block_128_fn
    };


} // namespace CVA6_DSE