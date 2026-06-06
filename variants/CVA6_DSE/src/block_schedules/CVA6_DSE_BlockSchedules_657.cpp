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

static void block_129_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_33 = vec_[32] ;
	uint64_t out_22 = vec_[21] ;
	uint64_t out_21 = vec_[20] ;
	uint64_t out_20 = vec_[19] ;
	uint64_t out_19 = vec_[18] ;
	uint64_t out_18 = vec_[17] ;
	uint64_t out_17 = vec_[16] ;
	uint64_t out_16 = vec_[15] ;
	uint64_t out_9 = vec_[8] ;
	uint64_t out_8 = vec_[7] ;
	uint64_t out_7 = vec_[6] ;
	uint64_t out_6 = vec_[5] ;
	uint64_t out_5 = vec_[4] ;
	uint64_t out_4 = vec_[3] ;
	uint64_t out_3 = vec_[2] ;
	uint64_t out_2 = vec_[1] ;
	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +1, vec_[9] );
	out_0 = MAP_Explorer::max2(out_0, vec_[10] );
	out_0 = MAP_Explorer::max2(out_0, vec_[98] );
	uint64_t out_10 = MAP_Explorer::max2(out_0 +1, vec_[11] );
	out_10 = MAP_Explorer::max2(out_10, vec_[99] );
	uint64_t out_100 = MAP_Explorer::max2(out_10 +1+d_[0], vec_[12] +1);
	uint64_t out_103 = MAP_Explorer::max2(out_100 +3, vec_[1] +3);
	out_103 = MAP_Explorer::max2(out_103, vec_[13] +3);
	out_103 = MAP_Explorer::max2(out_103, vec_[14] +2);
	out_103 = MAP_Explorer::max2(out_103, vec_[22] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[23] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[25] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[26] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[34] +1);
	out_103 = MAP_Explorer::max2(out_103, vec_[44] +1);
	uint64_t out_23 = out_103;
	uint64_t out_12 = out_100;
	uint64_t out_11 = out_100 -1;
	uint64_t out_14 = out_103 -1;
	uint64_t out_1 = MAP_Explorer::max2(out_100 , vec_[1] );
	out_1 = MAP_Explorer::max2(out_1, vec_[13] );
	uint64_t out_13 = MAP_Explorer::max2(out_100 +1, vec_[1] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] );
	uint64_t out_15 = MAP_Explorer::max2(out_103 , vec_[15] );
	out_15 = MAP_Explorer::max2(out_15, vec_[33] );
	uint64_t out_32 = MAP_Explorer::max2(out_103 +1, vec_[15] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] );
	out_32 = MAP_Explorer::max2(out_32, vec_[33] +1);


	vec_[33] = out_33;
	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[7] = out_7;
	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[10] = out_10;
	vec_[100] = out_100;
	vec_[103] = out_103;
	vec_[23] = out_23;
	vec_[12] = out_12;
	vec_[11] = out_11;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[32] = out_32;
}

extern const MAP_Explorer::Block block_129{
    129,
    2147538000,
    2147538000,
    block_129_fn
    };


} // namespace CVA6_DSE