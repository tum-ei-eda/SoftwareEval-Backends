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

static void block_640_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+1+d_[1], +d_[0]);
	uint64_t t_1 = MAP_Explorer::max2(+t_0, +d_[0]+d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+d_[0]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_4 = MAP_Explorer::max2(+2+d_[2], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +1+d_[0]+d_[2]);
	uint64_t t_6 = MAP_Explorer::max2(+t_5, +d_[0]+d_[1]+d_[2]);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +1+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+d_[2], +d_[1]);
	uint64_t t_9 = MAP_Explorer::max2(+t_8, +d_[1]+d_[2]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +1+t_2);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +1+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+2+d_[0]+d_[3], +t_7);
	uint64_t t_13 = MAP_Explorer::max2(+t_12, +1+d_[0]+d_[1]+d_[3]);
	uint64_t t_14 = MAP_Explorer::max2(+t_13, +d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t t_15 = MAP_Explorer::max2(+t_14, +1+t_10);
	uint64_t t_16 = MAP_Explorer::max2(+1+d_[3], +d_[2]);
	uint64_t t_17 = MAP_Explorer::max2(+t_16, +d_[2]+d_[3]);
	uint64_t t_18 = MAP_Explorer::max2(+2+d_[3], +t_9);
	uint64_t t_19 = MAP_Explorer::max2(+t_18, +1+d_[1]+d_[3]);
	uint64_t t_20 = MAP_Explorer::max2(+t_19, +d_[1]+d_[2]+d_[3]);
	uint64_t t_21 = MAP_Explorer::max2(+t_20, +1+t_9);
	uint64_t t_22 = MAP_Explorer::max2(+t_20, +1+t_11);
	uint64_t t_23 = MAP_Explorer::max2(+2+d_[0]+d_[1]+d_[4], +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+t_23, +1+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t t_25 = MAP_Explorer::max2(+t_24, +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t t_26 = MAP_Explorer::max2(+t_25, +1+t_15);
	uint64_t t_27 = MAP_Explorer::max2(+1+d_[4], +d_[3]);
	uint64_t t_28 = MAP_Explorer::max2(+t_27, +d_[3]+d_[4]);
	uint64_t t_29 = MAP_Explorer::max2(+2+d_[4], +t_17);
	uint64_t t_30 = MAP_Explorer::max2(+t_29, +1+d_[2]+d_[4]);
	uint64_t t_31 = MAP_Explorer::max2(+t_30, +d_[2]+d_[3]+d_[4]);
	uint64_t t_32 = MAP_Explorer::max2(+t_31, +1+t_17);
	uint64_t t_33 = MAP_Explorer::max2(+2+d_[1]+d_[4], +t_21);
	uint64_t t_34 = MAP_Explorer::max2(+t_33, +1+d_[1]+d_[2]+d_[4]);
	uint64_t t_35 = MAP_Explorer::max2(+t_34, +d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t t_36 = MAP_Explorer::max2(+t_35, +1+t_21);
	uint64_t t_37 = MAP_Explorer::max2(+2+d_[1]+d_[4], +t_22);
	uint64_t t_38 = MAP_Explorer::max2(+t_37, +1+d_[1]+d_[2]+d_[4]);
	uint64_t t_39 = MAP_Explorer::max2(+t_38, +d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t t_40 = MAP_Explorer::max2(+t_39, +1+t_22);

	uint64_t out_22 = vec_[17] ;
	uint64_t out_21 = vec_[16] ;
	uint64_t out_20 = vec_[15] ;
	uint64_t out_9 = vec_[4] ;
	uint64_t out_8 = vec_[3] ;
	uint64_t out_7 = vec_[2] ;
	uint64_t out_6 = vec_[1] ;
	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[5] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[7] +1+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[8] +1+d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[9] +1+d_[0]+d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +1+d_[0]+d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[11] +d_[0]+d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[98] +1+d_[0]+d_[1]+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[99] +d_[0]+d_[1]+d_[2]);
	uint64_t out_1 = MAP_Explorer::max2(vec_[0] +3+t_26, vec_[1] +5);
	out_1 = MAP_Explorer::max2(out_1, vec_[5] +2+d_[4]);
	out_1 = MAP_Explorer::max2(out_1, vec_[6] +2+t_28);
	out_1 = MAP_Explorer::max2(out_1, vec_[7] +2+t_32);
	out_1 = MAP_Explorer::max2(out_1, vec_[8] +2+t_36);
	out_1 = MAP_Explorer::max2(out_1, vec_[9] +2+t_26);
	out_1 = MAP_Explorer::max2(out_1, vec_[10] +2+t_26);
	out_1 = MAP_Explorer::max2(out_1, vec_[11] +1+t_26);
	out_1 = MAP_Explorer::max2(out_1, vec_[12] +1+t_40);
	out_1 = MAP_Explorer::max2(out_1, vec_[13] +5);
	out_1 = MAP_Explorer::max2(out_1, vec_[14] +4);
	out_1 = MAP_Explorer::max2(out_1, vec_[15] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[20] );
	out_1 = MAP_Explorer::max2(out_1, vec_[21] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[22] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[23] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[25] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[26] +3);
	out_1 = MAP_Explorer::max2(out_1, vec_[33] +2);
	out_1 = MAP_Explorer::max2(out_1, vec_[42] );
	out_1 = MAP_Explorer::max2(out_1, vec_[78] );
	out_1 = MAP_Explorer::max2(out_1, vec_[98] +2+t_26);
	out_1 = MAP_Explorer::max2(out_1, vec_[99] +1+t_26);
	uint64_t out_2 = MAP_Explorer::max2(vec_[0] +3+t_15, vec_[1] +4);
	out_2 = MAP_Explorer::max2(out_2, vec_[6] +2+d_[3]);
	out_2 = MAP_Explorer::max2(out_2, vec_[7] +2+t_17);
	out_2 = MAP_Explorer::max2(out_2, vec_[8] +2+t_21);
	out_2 = MAP_Explorer::max2(out_2, vec_[9] +2+t_15);
	out_2 = MAP_Explorer::max2(out_2, vec_[10] +2+t_15);
	out_2 = MAP_Explorer::max2(out_2, vec_[11] +1+t_15);
	out_2 = MAP_Explorer::max2(out_2, vec_[12] +1+t_22);
	out_2 = MAP_Explorer::max2(out_2, vec_[13] +4);
	out_2 = MAP_Explorer::max2(out_2, vec_[14] +3);
	out_2 = MAP_Explorer::max2(out_2, vec_[15] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[21] );
	out_2 = MAP_Explorer::max2(out_2, vec_[22] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[23] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[25] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[26] +2);
	out_2 = MAP_Explorer::max2(out_2, vec_[33] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[98] +2+t_15);
	out_2 = MAP_Explorer::max2(out_2, vec_[99] +1+t_15);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+t_7, vec_[1] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[7] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[8] +2+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[9] +2+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[10] +2+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[11] +1+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] );
	out_3 = MAP_Explorer::max2(out_3, vec_[23] );
	out_3 = MAP_Explorer::max2(out_3, vec_[25] );
	out_3 = MAP_Explorer::max2(out_3, vec_[26] );
	out_3 = MAP_Explorer::max2(out_3, vec_[98] +2+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[99] +1+t_7);
	uint64_t out_4 = MAP_Explorer::max2(vec_[0] +3+t_1, vec_[1] +1);
	out_4 = MAP_Explorer::max2(out_4, vec_[8] +2+d_[1]);
	out_4 = MAP_Explorer::max2(out_4, vec_[9] +2+t_1);
	out_4 = MAP_Explorer::max2(out_4, vec_[10] +2+t_1);
	out_4 = MAP_Explorer::max2(out_4, vec_[11] +1+t_1);
	out_4 = MAP_Explorer::max2(out_4, vec_[12] +1+d_[1]);
	out_4 = MAP_Explorer::max2(out_4, vec_[13] +1);
	out_4 = MAP_Explorer::max2(out_4, vec_[14] );
	out_4 = MAP_Explorer::max2(out_4, vec_[98] +2+t_1);
	out_4 = MAP_Explorer::max2(out_4, vec_[99] +1+t_1);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] );
	out_5 = MAP_Explorer::max2(out_5, vec_[9] +2+d_[0]);
	out_5 = MAP_Explorer::max2(out_5, vec_[10] +2+d_[0]);
	out_5 = MAP_Explorer::max2(out_5, vec_[11] +1+d_[0]);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] );
	out_5 = MAP_Explorer::max2(out_5, vec_[98] +2+d_[0]);
	out_5 = MAP_Explorer::max2(out_5, vec_[99] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[5] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +1+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[7] +1+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[8] +1+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[9] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[11] +d_[0]+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[98] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	out_10 = MAP_Explorer::max2(out_10, vec_[99] +d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +6+t_2, vec_[1] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[8] +5+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[9] +5+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[10] +5+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[11] +4+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +4+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[21] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[26] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[32] );
	out_18 = MAP_Explorer::max2(out_18, vec_[33] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[98] +5+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[99] +4+t_2);
	uint64_t out_46 = MAP_Explorer::max2(vec_[0] +6+t_10, vec_[1] +6);
	out_46 = MAP_Explorer::max2(out_46, vec_[7] +5+d_[2]);
	out_46 = MAP_Explorer::max2(out_46, vec_[8] +5+t_9);
	out_46 = MAP_Explorer::max2(out_46, vec_[9] +5+t_10);
	out_46 = MAP_Explorer::max2(out_46, vec_[10] +5+t_10);
	out_46 = MAP_Explorer::max2(out_46, vec_[11] +4+t_10);
	out_46 = MAP_Explorer::max2(out_46, vec_[12] +4+t_11);
	out_46 = MAP_Explorer::max2(out_46, vec_[13] +6);
	out_46 = MAP_Explorer::max2(out_46, vec_[14] +5);
	out_46 = MAP_Explorer::max2(out_46, vec_[15] +3);
	out_46 = MAP_Explorer::max2(out_46, vec_[20] +1);
	out_46 = MAP_Explorer::max2(out_46, vec_[21] +2);
	out_46 = MAP_Explorer::max2(out_46, vec_[22] +4);
	out_46 = MAP_Explorer::max2(out_46, vec_[23] +4);
	out_46 = MAP_Explorer::max2(out_46, vec_[25] +4);
	out_46 = MAP_Explorer::max2(out_46, vec_[26] +4);
	out_46 = MAP_Explorer::max2(out_46, vec_[33] +3);
	out_46 = MAP_Explorer::max2(out_46, vec_[42] +1);
	out_46 = MAP_Explorer::max2(out_46, vec_[98] +5+t_10);
	out_46 = MAP_Explorer::max2(out_46, vec_[99] +4+t_10);
	uint64_t out_11 = out_10 +d_[4];
	uint64_t out_101 = out_10 +1+d_[4];
	uint64_t out_13 = MAP_Explorer::max2(out_1 +1, vec_[19] );
	out_13 = MAP_Explorer::max2(out_13, vec_[32] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[49] );
	uint64_t out_19 = MAP_Explorer::max2(out_5 +3, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] );
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[33] );
	uint64_t out_35 = MAP_Explorer::max2(out_13 +2, vec_[18] +1);
	uint64_t out_67 = MAP_Explorer::max2(out_35 +1, vec_[67] +2);
	uint64_t out_77 = MAP_Explorer::max2(out_2 +4, vec_[19] +2);
	out_77 = MAP_Explorer::max2(out_77, vec_[20] +3);
	out_77 = MAP_Explorer::max2(out_77, vec_[32] +3);
	out_77 = MAP_Explorer::max2(out_77, vec_[42] +3);
	out_77 = MAP_Explorer::max2(out_77, vec_[49] +2);
	out_77 = MAP_Explorer::max2(out_77, vec_[78] +3);
	uint64_t out_78 = MAP_Explorer::max2(out_46 +1, vec_[32] +1);
	out_78 = MAP_Explorer::max2(out_78, vec_[78] +2);
	uint64_t out_33 = out_77;
	uint64_t out_32 = out_67;
	uint64_t out_12 = out_101;
	uint64_t out_17 = out_78 -1;
	uint64_t out_23 = out_67 -1;
	uint64_t out_45 = out_77 -1;
	uint64_t out_16 = out_45;
	uint64_t out_15 = out_23;
	uint64_t out_14 = out_23 -1;


	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[7] = out_7;
	vec_[6] = out_6;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[46] = out_46;
	vec_[11] = out_11;
	vec_[101] = out_101;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[35] = out_35;
	vec_[67] = out_67;
	vec_[77] = out_77;
	vec_[78] = out_78;
	vec_[33] = out_33;
	vec_[32] = out_32;
	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[23] = out_23;
	vec_[45] = out_45;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_640{
    640,
    2147505972,
    2147505988,
    block_640_fn
    };


} // namespace CVA6_DSE