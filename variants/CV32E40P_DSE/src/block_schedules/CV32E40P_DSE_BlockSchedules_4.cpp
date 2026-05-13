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

static void block_394_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_394{
    394,
    19056,
    19056,
    block_394_fn
    };

static void block_458_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[20] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[6] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[20] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = out_19 -2+d_[3]+d_[5];
	uint64_t out_3 = out_19 +d_[3]+d_[4];
	uint64_t out_37 = out_19 -1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_19 +d_[3]+d_[5], vec_[10] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_458{
    458,
    3308,
    3324,
    block_458_fn
    };

static void block_408_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_408{
    408,
    20648,
    20648,
    block_408_fn
    };

static void block_412_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
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

extern const MAP_Explorer::Block block_412{
    412,
    21720,
    21724,
    block_412_fn
    };

static void block_413_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_413{
    413,
    21776,
    21784,
    block_413_fn
    };

static void block_414_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[7]+d_[8], +1+t_0);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t out_37 = out_19 -1+d_[6]+d_[7];
	uint64_t out_0 = MAP_Explorer::max2(out_19 -2+d_[6]+t_1, vec_[3] +1);
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[6], vec_[3] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +d_[6]+t_0, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[6]+t_1, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_414{
    414,
    21740,
    21772,
    block_414_fn
    };

static void block_274_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
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

extern const MAP_Explorer::Block block_274{
    274,
    2808,
    2816,
    block_274_fn
    };

static void block_277_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_13;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_277{
    277,
    2848,
    2860,
    block_277_fn
    };

static void block_278_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_278{
    278,
    2864,
    2864,
    block_278_fn
    };

static void block_286_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_286{
    286,
    19180,
    19180,
    block_286_fn
    };

static void block_287_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_287{
    287,
    19164,
    19168,
    block_287_fn
    };

static void block_288_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_288{
    288,
    19172,
    19176,
    block_288_fn
    };

static void block_289_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_289{
    289,
    2884,
    2884,
    block_289_fn
    };

static void block_290_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[28] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[24] = out_24;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_290{
    290,
    2888,
    2900,
    block_290_fn
    };

static void block_299_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_18 -1+d_[2]+d_[3];
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[2]+d_[3], vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +1+d_[2], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_299{
    299,
    2996,
    3012,
    block_299_fn
    };

static void block_302_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[8], +d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[8]+d_[9], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[11]+t_2, +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[11]+d_[13]+t_2, +1+t_3);
	uint64_t t_5 = MAP_Explorer::max2(+t_4, +d_[12]+t_3);
	uint64_t t_6 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+t_6, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[16]+t_6, +1+t_7);
	uint64_t t_9 = MAP_Explorer::max2(+d_[17]+t_8, +1+t_7);
	uint64_t t_10 = MAP_Explorer::max2(+d_[17]+d_[18]+t_8, +1+t_9);
	uint64_t t_11 = MAP_Explorer::max2(+t_10, +d_[14]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[19]+t_10, +1+t_11);
	uint64_t t_13 = MAP_Explorer::max2(+d_[19]+d_[20]+t_10, +1+t_12);
	uint64_t t_14 = MAP_Explorer::max2(+d_[21]+d_[23]+t_13, +2+t_11);
	uint64_t t_15 = MAP_Explorer::max2(+d_[23], +d_[22]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[21]+t_13+t_15, +2+t_11);
	uint64_t t_17 = MAP_Explorer::max2(+d_[21]+d_[23]+d_[25]+t_13, +1+t_14);
	uint64_t t_18 = MAP_Explorer::max2(+t_17, +1+t_16);
	uint64_t t_19 = MAP_Explorer::max2(+t_18, +2+t_12);
	uint64_t t_20 = MAP_Explorer::max2(+d_[23]+d_[25], +1+t_15);
	uint64_t t_21 = MAP_Explorer::max2(+t_18, +d_[24]+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+t_21, +2+t_12);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +d_[24]+t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[27]+t_17, +1+t_19);
	uint64_t t_25 = MAP_Explorer::max2(+d_[23]+d_[25]+d_[27], +1+t_20);
	uint64_t t_26 = MAP_Explorer::max2(+t_24, +1+t_22);
	uint64_t t_27 = MAP_Explorer::max2(+t_25, +1+t_23);
	uint64_t t_28 = MAP_Explorer::max2(+d_[28]+t_24, +1+t_26);
	uint64_t t_29 = MAP_Explorer::max2(+d_[28]+t_25, +1+t_27);
	uint64_t t_30 = MAP_Explorer::max2(+t_28, +d_[26]+t_22);
	uint64_t t_31 = MAP_Explorer::max2(+t_29, +d_[26]+t_23);
	uint64_t t_32 = MAP_Explorer::max2(+d_[30]+t_28, +1+t_30);
	uint64_t t_33 = MAP_Explorer::max2(+t_32, +1+t_9);
	uint64_t t_34 = MAP_Explorer::max2(+t_33, +2+t_13);
	uint64_t t_35 = MAP_Explorer::max2(+d_[30]+t_29, +1+t_31);
	uint64_t t_36 = MAP_Explorer::max2(+t_32, +d_[29]+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+t_36, +1+t_9);
	uint64_t t_38 = MAP_Explorer::max2(+t_37, +2+t_13);
	uint64_t t_39 = MAP_Explorer::max2(+t_35, +d_[29]+t_31);
	uint64_t t_40 = MAP_Explorer::max2(+d_[30], +d_[29]);
	uint64_t t_41 = MAP_Explorer::max2(+d_[30]+d_[32]+t_28, +1+t_34);
	uint64_t t_42 = MAP_Explorer::max2(+d_[30]+d_[32]+t_29, +1+t_35);
	uint64_t t_43 = MAP_Explorer::max2(+t_41, +1+t_38);
	uint64_t t_44 = MAP_Explorer::max2(+t_43, +2+t_1);
	uint64_t t_45 = MAP_Explorer::max2(+t_42, +1+t_39);
	uint64_t t_46 = MAP_Explorer::max2(+d_[30]+d_[32], +1+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+t_43, +d_[31]+t_38);
	uint64_t t_48 = MAP_Explorer::max2(+t_47, +2+t_1);
	uint64_t t_49 = MAP_Explorer::max2(+t_45, +d_[31]+t_39);
	uint64_t t_50 = MAP_Explorer::max2(+t_46, +d_[31]+t_40);
	uint64_t t_51 = MAP_Explorer::max2(+d_[34]+t_41, +1+t_44);
	uint64_t t_52 = MAP_Explorer::max2(+d_[34]+t_42, +1+t_45);
	uint64_t t_53 = MAP_Explorer::max2(+d_[30]+d_[32]+d_[34], +1+t_46);
	uint64_t t_54 = MAP_Explorer::max2(+t_51, +1+t_48);
	uint64_t t_55 = MAP_Explorer::max2(+t_52, +1+t_49);
	uint64_t t_56 = MAP_Explorer::max2(+t_53, +1+t_50);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5], vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]+d_[3]+d_[4]+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +3+d_[4]+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[24] +3+d_[2]+d_[3]+d_[4]+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[26] +3+d_[2]+d_[3]+d_[4]+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_14 +d_[6]+t_1;
	uint64_t out_3 = MAP_Explorer::max2(out_14 -1+d_[6]+d_[33]+t_48, vec_[6] +2+d_[18]+d_[19]+d_[20]+d_[21]+d_[33]+t_49);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[33]+t_50);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +2+d_[33]+t_50);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +2+d_[33]+t_49);
	uint64_t out_4 = MAP_Explorer::max2(out_14 -1+d_[6]+t_54, vec_[6] +2+d_[18]+d_[19]+d_[20]+d_[21]+t_55);
	out_4 = MAP_Explorer::max2(out_4, vec_[13] +2+t_56);
	out_4 = MAP_Explorer::max2(out_4, vec_[30] +2+t_56);
	out_4 = MAP_Explorer::max2(out_4, vec_[31] +2+t_55);
	uint64_t out_15 = MAP_Explorer::max2(out_14 +d_[6]+t_12, vec_[6] +3+d_[18]+d_[19]);
	uint64_t out_16 = MAP_Explorer::max2(out_14 -1+d_[6]+t_26, vec_[6] +2+d_[18]+d_[19]+d_[20]+d_[21]+t_27);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[30] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +2+t_27);
	uint64_t out_17 = MAP_Explorer::max2(out_14 +d_[6]+t_13, vec_[6] +3+d_[18]+d_[19]+d_[20]);
	out_17 = MAP_Explorer::max2(out_17, vec_[31] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_14 -1+d_[6]+t_9, vec_[6] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_14 -2+d_[6]+t_41, vec_[6] +1+d_[18]+d_[19]+d_[20]+d_[21]+t_42);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[30]+d_[32]);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+d_[30]+d_[32]);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_42);
	uint64_t out_38 = MAP_Explorer::max2(out_14 -2+d_[6]+t_51, vec_[6] +1+d_[18]+d_[19]+d_[20]+d_[21]+t_52);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_53);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +1+t_53);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +1+t_52);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_4 -1;


	vec_[14] = out_14;
	vec_[24] = out_24;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_302{
    302,
    3404,
    3504,
    block_302_fn
    };

static void block_303_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_14;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
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

extern const MAP_Explorer::Block block_303{
    303,
    3040,
    3048,
    block_303_fn
    };

static void block_339_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_339{
    339,
    19648,
    19648,
    block_339_fn
    };

static void block_340_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_18 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_340{
    340,
    19700,
    19708,
    block_340_fn
    };

static void block_341_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +2+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[19] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[2]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_17 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[5];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_17 -1+d_[5];
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_341{
    341,
    19396,
    19416,
    block_341_fn
    };


} // namespace CV32E40P_DSE