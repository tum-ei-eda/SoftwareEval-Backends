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

static void block_312_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+1+d_[1], +d_[0]);
	uint64_t t_1 = MAP_Explorer::max2(+t_0, +d_[0]+d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(+2+d_[2], +t_1);
	uint64_t t_3 = MAP_Explorer::max2(+t_2, +1+d_[0]+d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +d_[0]+d_[1]+d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+1+d_[2], +d_[1]);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +d_[1]+d_[2]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +2+t_1);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +2+d_[1]);
	uint64_t t_10 = MAP_Explorer::max2(+2+d_[0]+d_[3], +t_5);
	uint64_t t_11 = MAP_Explorer::max2(+t_10, +1+d_[0]+d_[1]+d_[3]);
	uint64_t t_12 = MAP_Explorer::max2(+t_11, +d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t t_13 = MAP_Explorer::max2(+t_12, +1+t_5);
	uint64_t t_14 = MAP_Explorer::max2(+1+d_[3], +d_[2]);
	uint64_t t_15 = MAP_Explorer::max2(+t_14, +d_[2]+d_[3]);
	uint64_t t_16 = MAP_Explorer::max2(+2+d_[3], +t_7);
	uint64_t t_17 = MAP_Explorer::max2(+t_16, +1+d_[1]+d_[3]);
	uint64_t t_18 = MAP_Explorer::max2(+t_17, +d_[1]+d_[2]+d_[3]);
	uint64_t t_19 = MAP_Explorer::max2(+t_18, +1+t_7);
	uint64_t t_20 = MAP_Explorer::max2(+t_13, +1+t_8);
	uint64_t t_21 = MAP_Explorer::max2(+t_19, +1+t_9);
	uint64_t t_22 = MAP_Explorer::max2(+2+d_[0]+d_[1]+d_[4], +t_13);
	uint64_t t_23 = MAP_Explorer::max2(+t_22, +1+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t t_24 = MAP_Explorer::max2(+t_23, +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t t_25 = MAP_Explorer::max2(+t_24, +1+t_20);
	uint64_t t_26 = MAP_Explorer::max2(+1+d_[4], +d_[3]);
	uint64_t t_27 = MAP_Explorer::max2(+t_26, +d_[3]+d_[4]);
	uint64_t t_28 = MAP_Explorer::max2(+2+d_[4], +t_15);
	uint64_t t_29 = MAP_Explorer::max2(+t_28, +1+d_[2]+d_[4]);
	uint64_t t_30 = MAP_Explorer::max2(+t_29, +d_[2]+d_[3]+d_[4]);
	uint64_t t_31 = MAP_Explorer::max2(+t_30, +1+t_15);
	uint64_t t_32 = MAP_Explorer::max2(+2+d_[1]+d_[4], +t_19);
	uint64_t t_33 = MAP_Explorer::max2(+t_32, +1+d_[1]+d_[2]+d_[4]);
	uint64_t t_34 = MAP_Explorer::max2(+t_33, +d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t t_35 = MAP_Explorer::max2(+t_34, +1+t_21);
	uint64_t t_36 = MAP_Explorer::max2(+2+d_[0]+d_[1]+d_[2]+d_[5], +t_25);
	uint64_t t_37 = MAP_Explorer::max2(+t_36, +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[5]);
	uint64_t t_38 = MAP_Explorer::max2(+t_37, +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t t_39 = MAP_Explorer::max2(+t_38, +1+t_25);
	uint64_t t_40 = MAP_Explorer::max2(+1+d_[5], +d_[4]);
	uint64_t t_41 = MAP_Explorer::max2(+t_40, +d_[4]+d_[5]);
	uint64_t t_42 = MAP_Explorer::max2(+2+d_[5], +t_27);
	uint64_t t_43 = MAP_Explorer::max2(+t_42, +1+d_[3]+d_[5]);
	uint64_t t_44 = MAP_Explorer::max2(+t_43, +d_[3]+d_[4]+d_[5]);
	uint64_t t_45 = MAP_Explorer::max2(+t_44, +1+t_27);
	uint64_t t_46 = MAP_Explorer::max2(+2+d_[2]+d_[5], +t_31);
	uint64_t t_47 = MAP_Explorer::max2(+t_46, +1+d_[2]+d_[3]+d_[5]);
	uint64_t t_48 = MAP_Explorer::max2(+t_47, +d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t t_49 = MAP_Explorer::max2(+t_48, +1+t_31);
	uint64_t t_50 = MAP_Explorer::max2(+2+d_[1]+d_[2]+d_[5], +t_35);
	uint64_t t_51 = MAP_Explorer::max2(+t_50, +1+d_[1]+d_[2]+d_[3]+d_[5]);
	uint64_t t_52 = MAP_Explorer::max2(+t_51, +d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t t_53 = MAP_Explorer::max2(+t_52, +1+t_35);

	uint64_t out_22 = vec_[16] ;
	uint64_t out_21 = vec_[15] ;
	uint64_t out_9 = vec_[3] ;
	uint64_t out_8 = vec_[2] ;
	uint64_t out_7 = vec_[1] ;
	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[4] );
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[7] +1+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[8] +1+d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[9] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[11] +d_[0]+d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[98] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_0 = MAP_Explorer::max2(out_0, vec_[99] +d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_1 = MAP_Explorer::max2(vec_[0] +3+t_39, vec_[1] +6);
	out_1 = MAP_Explorer::max2(out_1, vec_[4] +2+d_[5]);
	out_1 = MAP_Explorer::max2(out_1, vec_[5] +2+t_41);
	out_1 = MAP_Explorer::max2(out_1, vec_[6] +2+t_45);
	out_1 = MAP_Explorer::max2(out_1, vec_[7] +2+t_49);
	out_1 = MAP_Explorer::max2(out_1, vec_[8] +2+t_53);
	out_1 = MAP_Explorer::max2(out_1, vec_[9] +2+t_39);
	out_1 = MAP_Explorer::max2(out_1, vec_[10] +2+t_39);
	out_1 = MAP_Explorer::max2(out_1, vec_[11] +1+t_39);
	out_1 = MAP_Explorer::max2(out_1, vec_[12] +1+t_53);
	out_1 = MAP_Explorer::max2(out_1, vec_[13] +6);
	out_1 = MAP_Explorer::max2(out_1, vec_[14] +5);
	out_1 = MAP_Explorer::max2(out_1, vec_[15] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[19] );
	out_1 = MAP_Explorer::max2(out_1, vec_[20] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[21] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[22] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[23] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[25] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[26] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[32] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[33] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[44] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[49] );
	out_1 = MAP_Explorer::max2(out_1, vec_[76] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[79] );
	out_1 = MAP_Explorer::max2(out_1, vec_[80] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[98] +2+t_39);
	out_1 = MAP_Explorer::max2(out_1, vec_[99] +1+t_39);
	uint64_t out_2 = MAP_Explorer::max2(vec_[0] +3+t_25, vec_[1] +5);
	out_2 = MAP_Explorer::max2(out_2, vec_[5] +2+d_[4]);
	out_2 = MAP_Explorer::max2(out_2, vec_[6] +2+t_27);
	out_2 = MAP_Explorer::max2(out_2, vec_[7] +2+t_31);
	out_2 = MAP_Explorer::max2(out_2, vec_[8] +2+t_35);
	out_2 = MAP_Explorer::max2(out_2, vec_[9] +2+t_25);
	out_2 = MAP_Explorer::max2(out_2, vec_[10] +2+t_25);
	out_2 = MAP_Explorer::max2(out_2, vec_[11] +1+t_25);
	out_2 = MAP_Explorer::max2(out_2, vec_[12] +1+t_35);
	out_2 = MAP_Explorer::max2(out_2, vec_[13] +5);
	out_2 = MAP_Explorer::max2(out_2, vec_[14] +4);
	out_2 = MAP_Explorer::max2(out_2, vec_[15] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[20] );
	out_2 = MAP_Explorer::max2(out_2, vec_[21] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[22] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[23] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[25] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[26] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[32] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[33] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[44] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[76] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[80] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[98] +2+t_25);
	out_2 = MAP_Explorer::max2(out_2, vec_[99] +1+t_25);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+t_13, vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[7] +2+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[8] +2+t_19);
	out_3 = MAP_Explorer::max2(out_3, vec_[9] +2+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[10] +2+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[11] +1+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+t_19);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] );
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[44] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[76] );
	out_3 = MAP_Explorer::max2(out_3, vec_[80] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[98] +2+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[99] +1+t_13);
	uint64_t out_4 = MAP_Explorer::max2(vec_[0] +3+t_5, vec_[1] +2);
	out_4 = MAP_Explorer::max2(out_4, vec_[7] +2+d_[2]);
	out_4 = MAP_Explorer::max2(out_4, vec_[8] +2+t_7);
	out_4 = MAP_Explorer::max2(out_4, vec_[9] +2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[10] +2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[11] +1+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[12] +1+t_7);
	out_4 = MAP_Explorer::max2(out_4, vec_[13] +2);
	out_4 = MAP_Explorer::max2(out_4, vec_[14] +1);
	out_4 = MAP_Explorer::max2(out_4, vec_[22] );
	out_4 = MAP_Explorer::max2(out_4, vec_[23] );
	out_4 = MAP_Explorer::max2(out_4, vec_[25] );
	out_4 = MAP_Explorer::max2(out_4, vec_[26] );
	out_4 = MAP_Explorer::max2(out_4, vec_[44] );
	out_4 = MAP_Explorer::max2(out_4, vec_[80] );
	out_4 = MAP_Explorer::max2(out_4, vec_[98] +2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[99] +1+t_5);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+t_1, vec_[1] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[8] +2+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[9] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[10] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[11] +1+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +1+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] );
	out_5 = MAP_Explorer::max2(out_5, vec_[98] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[99] +1+t_1);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] );
	out_6 = MAP_Explorer::max2(out_6, vec_[9] +2+d_[0]);
	out_6 = MAP_Explorer::max2(out_6, vec_[10] +2+d_[0]);
	out_6 = MAP_Explorer::max2(out_6, vec_[11] +1+d_[0]);
	out_6 = MAP_Explorer::max2(out_6, vec_[12] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[13] );
	out_6 = MAP_Explorer::max2(out_6, vec_[98] +2+d_[0]);
	out_6 = MAP_Explorer::max2(out_6, vec_[99] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[4] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[5] +1+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +1+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[7] +1+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[8] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[9] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[11] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[98] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	out_10 = MAP_Explorer::max2(out_10, vec_[99] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +6+t_8, vec_[1] +6);
	out_18 = MAP_Explorer::max2(out_18, vec_[7] +5+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[8] +5+t_9);
	out_18 = MAP_Explorer::max2(out_18, vec_[9] +5+t_8);
	out_18 = MAP_Explorer::max2(out_18, vec_[10] +5+t_8);
	out_18 = MAP_Explorer::max2(out_18, vec_[11] +4+t_8);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +4+t_9);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +6);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[20] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[21] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[26] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[32] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[33] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[44] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[76] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[80] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[98] +5+t_8);
	out_18 = MAP_Explorer::max2(out_18, vec_[99] +4+t_8);
	uint64_t out_47 = MAP_Explorer::max2(vec_[0] +6+t_20, vec_[1] +7);
	out_47 = MAP_Explorer::max2(out_47, vec_[6] +5+d_[3]);
	out_47 = MAP_Explorer::max2(out_47, vec_[7] +5+t_15);
	out_47 = MAP_Explorer::max2(out_47, vec_[8] +5+t_21);
	out_47 = MAP_Explorer::max2(out_47, vec_[9] +5+t_20);
	out_47 = MAP_Explorer::max2(out_47, vec_[10] +5+t_20);
	out_47 = MAP_Explorer::max2(out_47, vec_[11] +4+t_20);
	out_47 = MAP_Explorer::max2(out_47, vec_[12] +4+t_21);
	out_47 = MAP_Explorer::max2(out_47, vec_[13] +7);
	out_47 = MAP_Explorer::max2(out_47, vec_[14] +6);
	out_47 = MAP_Explorer::max2(out_47, vec_[15] +3);
	out_47 = MAP_Explorer::max2(out_47, vec_[19] +1);
	out_47 = MAP_Explorer::max2(out_47, vec_[20] +2);
	out_47 = MAP_Explorer::max2(out_47, vec_[21] +4);
	out_47 = MAP_Explorer::max2(out_47, vec_[22] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[23] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[25] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[26] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[32] +3);
	out_47 = MAP_Explorer::max2(out_47, vec_[33] +3);
	out_47 = MAP_Explorer::max2(out_47, vec_[44] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[49] +1);
	out_47 = MAP_Explorer::max2(out_47, vec_[76] +4);
	out_47 = MAP_Explorer::max2(out_47, vec_[80] +5);
	out_47 = MAP_Explorer::max2(out_47, vec_[98] +5+t_20);
	out_47 = MAP_Explorer::max2(out_47, vec_[99] +4+t_20);
	uint64_t out_11 = out_10 +d_[5];
	uint64_t out_100 = out_10 +1+d_[5];
	uint64_t out_13 = MAP_Explorer::max2(out_1 +1, vec_[18] );
	uint64_t out_19 = MAP_Explorer::max2(out_5 +3, vec_[15] );
	out_19 = MAP_Explorer::max2(out_19, vec_[21] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[32] );
	out_19 = MAP_Explorer::max2(out_19, vec_[33] );
	out_19 = MAP_Explorer::max2(out_19, vec_[44] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[76] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[80] +2);
	uint64_t out_48 = MAP_Explorer::max2(out_6 +3, vec_[14] +2);
	out_48 = MAP_Explorer::max2(out_48, vec_[22] +1);
	out_48 = MAP_Explorer::max2(out_48, vec_[23] +1);
	out_48 = MAP_Explorer::max2(out_48, vec_[25] +1);
	out_48 = MAP_Explorer::max2(out_48, vec_[26] +1);
	out_48 = MAP_Explorer::max2(out_48, vec_[44] +1);
	out_48 = MAP_Explorer::max2(out_48, vec_[80] +1);
	uint64_t out_76 = MAP_Explorer::max2(out_2 +4, vec_[18] +2);
	out_76 = MAP_Explorer::max2(out_76, vec_[19] +3);
	out_76 = MAP_Explorer::max2(out_76, vec_[49] +3);
	out_76 = MAP_Explorer::max2(out_76, vec_[79] +3);
	uint64_t out_79 = MAP_Explorer::max2(out_47 +1, vec_[79] +2);
	uint64_t out_80 = MAP_Explorer::max2(out_48 +1, vec_[15] +1);
	out_80 = MAP_Explorer::max2(out_80, vec_[33] +1);
	uint64_t out_103 = MAP_Explorer::max2(out_13 +2, vec_[17] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[53] +1);
	uint64_t out_33 = out_76;
	uint64_t out_23 = out_103;
	uint64_t out_15 = out_103;
	uint64_t out_12 = out_100;
	uint64_t out_17 = out_79 -1;
	uint64_t out_20 = out_80 -1;
	uint64_t out_32 = out_103 +1;
	uint64_t out_44 = out_76 -1;
	uint64_t out_16 = out_44;
	uint64_t out_14 = out_32 -2;


	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[7] = out_7;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[47] = out_47;
	vec_[11] = out_11;
	vec_[100] = out_100;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[48] = out_48;
	vec_[76] = out_76;
	vec_[79] = out_79;
	vec_[80] = out_80;
	vec_[103] = out_103;
	vec_[33] = out_33;
	vec_[23] = out_23;
	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[20] = out_20;
	vec_[32] = out_32;
	vec_[44] = out_44;
	vec_[16] = out_16;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_312{
    312,
    2147491060,
    2147491080,
    block_312_fn
    };


} // namespace CVA6_DSE