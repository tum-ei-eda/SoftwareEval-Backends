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

static void block_695_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+1+d_[2], +d_[0]);
	uint64_t t_1 = MAP_Explorer::max2(+t_0, +d_[0]+d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+d_[0]+d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[2], +2+d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(+t_1, +1+d_[0]+d_[1]);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +2+d_[0]+d_[1]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[2], +1+d_[1]);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +2+d_[1]);

	uint64_t out_22 = vec_[20] ;
	uint64_t out_21 = vec_[19] ;
	uint64_t out_20 = vec_[18] ;
	uint64_t out_19 = vec_[17] ;
	uint64_t out_18 = vec_[16] ;
	uint64_t out_17 = vec_[15] ;
	uint64_t out_9 = vec_[7] ;
	uint64_t out_8 = vec_[6] ;
	uint64_t out_7 = vec_[5] ;
	uint64_t out_6 = vec_[4] ;
	uint64_t out_5 = vec_[3] ;
	uint64_t out_4 = vec_[2] ;
	uint64_t out_3 = vec_[1] ;
	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2, vec_[8] );
	out_0 = MAP_Explorer::max2(out_0, vec_[9] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[10] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[11] );
	out_0 = MAP_Explorer::max2(out_0, vec_[98] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[99] );
	uint64_t out_1 = MAP_Explorer::max2(vec_[0] +3+t_1, vec_[1] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[8] +2+d_[2]);
	out_1 = MAP_Explorer::max2(out_1, vec_[9] +2+t_1);
	out_1 = MAP_Explorer::max2(out_1, vec_[10] +2+t_1);
	out_1 = MAP_Explorer::max2(out_1, vec_[11] +1+t_1);
	out_1 = MAP_Explorer::max2(out_1, vec_[12] +1+d_[2]);
	out_1 = MAP_Explorer::max2(out_1, vec_[13] +1);
	out_1 = MAP_Explorer::max2(out_1, vec_[14] );
	out_1 = MAP_Explorer::max2(out_1, vec_[98] +2+t_1);
	out_1 = MAP_Explorer::max2(out_1, vec_[99] +1+t_1);
	uint64_t out_2 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] );
	out_2 = MAP_Explorer::max2(out_2, vec_[9] +2+d_[0]);
	out_2 = MAP_Explorer::max2(out_2, vec_[10] +2+d_[0]);
	out_2 = MAP_Explorer::max2(out_2, vec_[11] +1+d_[0]);
	out_2 = MAP_Explorer::max2(out_2, vec_[12] +1);
	out_2 = MAP_Explorer::max2(out_2, vec_[13] );
	out_2 = MAP_Explorer::max2(out_2, vec_[98] +2+d_[0]);
	out_2 = MAP_Explorer::max2(out_2, vec_[99] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[8] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[9] +1+d_[0]);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1+d_[0]);
	out_10 = MAP_Explorer::max2(out_10, vec_[11] +d_[0]);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] );
	out_10 = MAP_Explorer::max2(out_10, vec_[98] +1+d_[0]);
	out_10 = MAP_Explorer::max2(out_10, vec_[99] +d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +7+t_5, vec_[1] +6+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[8] +6+d_[2]);
	out_32 = MAP_Explorer::max2(out_32, vec_[9] +6+t_5);
	out_32 = MAP_Explorer::max2(out_32, vec_[10] +6+t_5);
	out_32 = MAP_Explorer::max2(out_32, vec_[11] +5+t_5);
	out_32 = MAP_Explorer::max2(out_32, vec_[12] +5+t_7);
	out_32 = MAP_Explorer::max2(out_32, vec_[13] +6+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +5+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[21] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[22] +4+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[23] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[25] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[26] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[27] +4+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[28] +3+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[29] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[33] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[34] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[42] +4+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[77] +4+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[98] +6+t_5);
	out_32 = MAP_Explorer::max2(out_32, vec_[99] +5+t_5);
	uint64_t out_103 = MAP_Explorer::max2(vec_[0] +6+t_2, vec_[1] +5+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[8] +5+d_[2]);
	out_103 = MAP_Explorer::max2(out_103, vec_[9] +5+t_2);
	out_103 = MAP_Explorer::max2(out_103, vec_[10] +5+t_2);
	out_103 = MAP_Explorer::max2(out_103, vec_[11] +4+t_2);
	out_103 = MAP_Explorer::max2(out_103, vec_[12] +4+t_3);
	out_103 = MAP_Explorer::max2(out_103, vec_[13] +5+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[14] +4+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[21] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[22] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[23] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[25] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[26] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[27] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[28] +2+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[29] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[34] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[42] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[77] +3+d_[1]);
	out_103 = MAP_Explorer::max2(out_103, vec_[98] +5+t_2);
	out_103 = MAP_Explorer::max2(out_103, vec_[99] +4+t_2);
	uint64_t out_23 = out_103;
	uint64_t out_11 = out_10 +d_[2];
	uint64_t out_14 = out_103 -1;
	uint64_t out_15 = out_32 -1;
	uint64_t out_100 = out_10 +1+d_[2];
	uint64_t out_13 = MAP_Explorer::max2(out_1 +1, vec_[22] );
	out_13 = MAP_Explorer::max2(out_13, vec_[27] );
	out_13 = MAP_Explorer::max2(out_13, vec_[42] );
	out_13 = MAP_Explorer::max2(out_13, vec_[77] );
	uint64_t out_27 = MAP_Explorer::max2(out_2 +3, vec_[14] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[22] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[28] );
	out_27 = MAP_Explorer::max2(out_27, vec_[42] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[77] +1);
	uint64_t out_45 = MAP_Explorer::max2(out_27 +1+d_[1], vec_[29] +1);
	uint64_t out_77 = MAP_Explorer::max2(out_45 +1, vec_[15] +1);
	out_77 = MAP_Explorer::max2(out_77, vec_[33] +1);
	uint64_t out_29 = out_45;
	uint64_t out_12 = out_100;
	uint64_t out_16 = out_77 -1;
	uint64_t out_28 = out_45 -1;
	uint64_t out_33 = MAP_Explorer::max2(out_77 , vec_[32] );


	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[7] = out_7;
	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[2] = out_2;
	vec_[10] = out_10;
	vec_[32] = out_32;
	vec_[103] = out_103;
	vec_[23] = out_23;
	vec_[11] = out_11;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[100] = out_100;
	vec_[13] = out_13;
	vec_[27] = out_27;
	vec_[45] = out_45;
	vec_[77] = out_77;
	vec_[29] = out_29;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[28] = out_28;
	vec_[33] = out_33;
}

extern const MAP_Explorer::Block block_695{
    695,
    2147562288,
    2147562292,
    block_695_fn
    };


} // namespace CVA6_DSE