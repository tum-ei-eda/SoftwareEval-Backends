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



static void block_277_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_3 = out_10;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_21 = MAP_Explorer::max2(out_10 , vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_277{
    277,
    3256,
    3268,
    true,
    block_277_fn
    };



static void block_426_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[4], d_[2]);

	uint64_t out_33 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[2] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[3] +1);
	out_33 = MAP_Explorer::max2(out_33, vec_[17] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_33 +1, vec_[10] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_33 +1+t_0, vec_[10] +2+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_17 -1+d_[5]+t_0;
	uint64_t out_37 = out_17 -1+d_[4];
	uint64_t out_0 = out_37;


	vec_[33] = out_33;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_426{
    426,
    3236,
    3252,
    true,
    block_426_fn
    };



static void block_269_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+t_0, vec_[1] +2+d_[3]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_0);
	uint64_t out_12 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = out_37 +1+d_[7];
	uint64_t out_2 = out_38;
	uint64_t out_13 = out_19 +2;
	uint64_t out_1 = out_13 -1+d_[7];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_269{
    269,
    7372,
    7392,
    true,
    block_269_fn
    };



static void block_270_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_270{
    270,
    7360,
    7368,
    true,
    block_270_fn
    };



static void block_279_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_32 = out_37;
	uint64_t out_17 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_20 = out_37 -1;
	uint64_t out_21 = MAP_Explorer::max2(out_37 +1, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[19] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[32] = out_32;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_279{
    279,
    3216,
    3232,
    true,
    block_279_fn
    };



static void block_417_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 , vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_3 = out_19;
	uint64_t out_1 = out_14;
	uint64_t out_0 = out_14 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_417{
    417,
    2080,
    2092,
    true,
    block_417_fn
    };



static void block_278_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[32] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[32] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+t_0);
	uint64_t out_19 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_278{
    278,
    3272,
    3288,
    true,
    block_278_fn
    };



static void block_285_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_285{
    285,
    31796,
    31800,
    true,
    block_285_fn
    };



static void block_283_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_6 +1+t_0, vec_[3] +t_0);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +1+t_0);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[7]);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[4]+d_[6], vec_[3] +d_[2]+d_[4]+d_[6]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]+d_[6]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[4]+d_[6]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[6]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_283{
    283,
    30832,
    30848,
    true,
    block_283_fn
    };



static void block_289_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +4+d_[3]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +5+d_[7], vec_[3] +5);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +5+d_[7]);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +4);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_13 = out_15;
	uint64_t out_5 = out_19;
	uint64_t out_3 = out_15;
	uint64_t out_14 = out_15 -3;
	uint64_t out_37 = out_15 -1+d_[11];
	uint64_t out_38 = out_15 +d_[11];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_14 +2;
	uint64_t out_4 = out_12 +2+d_[11];
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_289{
    289,
    30916,
    30964,
    true,
    block_289_fn
    };



static void block_284_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_12 = out_19 +2;
	uint64_t out_37 = out_19 +2+d_[3];
	uint64_t out_38 = out_19 +3+d_[3];
	uint64_t out_14 = out_38;
	uint64_t out_13 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 +2+d_[3];
	uint64_t out_2 = out_5;


	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_284{
    284,
    30852,
    30872,
    true,
    block_284_fn
    };



static void block_286_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_19 = out_18 +3+d_[5];
	uint64_t out_37 = out_18 +3+d_[5]+d_[9];
	uint64_t out_14 = MAP_Explorer::max2(out_18 +5+d_[5]+d_[9], vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +5+d_[5]+d_[9], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_3 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_3;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_286{
    286,
    31804,
    31848,
    true,
    block_286_fn
    };



static void block_287_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_287{
    287,
    30876,
    30888,
    true,
    block_287_fn
    };



static void block_288_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_288{
    288,
    30968,
    30984,
    true,
    block_288_fn
    };



static void block_425_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +5+d_[5], vec_[3] +4+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[9]+d_[14], vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = out_19 +4+d_[9];
	uint64_t out_37 = out_19 +3+d_[9];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_14 -2+d_[14];
	uint64_t out_3 = out_14 -1+d_[12];


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_425{
    425,
    16028,
    16080,
    true,
    block_425_fn
    };



static void block_416_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[1], 1+t_0);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[5]+t_2, vec_[1] +3+d_[5]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[5]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[5]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[5]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[4]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +2+d_[5]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[5]+t_2);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+t_0);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_2, vec_[1] +4+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3+d_[4]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_2);
	uint64_t out_17 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_416{
    416,
    2420,
    2436,
    true,
    block_416_fn
    };



static void block_418_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37 -1+d_[6];
	uint64_t out_3 = out_37 +1+d_[5];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_418{
    418,
    2096,
    2112,
    true,
    block_418_fn
    };



static void block_439_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[13], d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_2, d_[9]+d_[11]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[13], d_[11]);
	uint64_t t_5 = MAP_Explorer::max2(d_[21], d_[16]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[16]+d_[18]);
	uint64_t t_7 = MAP_Explorer::max2(d_[21], d_[18]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[14]+d_[25]+t_3+t_6, d_[9]);
	uint64_t t_9 = MAP_Explorer::max2(2+t_8, d_[14]+t_3+t_6);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +2+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_1+t_3, vec_[3] +d_[3]+d_[5]+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[14]+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_1+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_1+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[5]+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[7]+d_[14]+d_[16]+d_[18]+d_[20]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[14]+d_[16]+d_[18]+d_[20]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[14]+d_[16]+d_[18]+d_[20]+t_4);
	uint64_t out_20 = MAP_Explorer::max2(out_6 +3+d_[7]+d_[14]+t_1+t_3+t_6, vec_[3] +1+d_[3]+d_[5]+d_[7]+d_[14]+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2+d_[14]+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[12] +2+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +2+d_[7]+d_[14]+t_1+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +3+d_[7]+d_[14]+t_1+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +2+d_[5]+d_[7]+d_[14]+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +2+d_[7]+d_[14]+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[24] +2+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[25] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[26] +2+d_[14]+t_3+t_6);
	out_20 = MAP_Explorer::max2(out_20, vec_[27] +2+d_[14]+t_4+t_6);
	uint64_t out_26 = MAP_Explorer::max2(out_20 +1, vec_[14] +1);
	uint64_t out_27 = MAP_Explorer::max2(out_26 +1, vec_[16] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +4+d_[7]+t_1+t_8, vec_[3] +2+d_[3]+d_[5]+d_[7]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +5+d_[14]+d_[25]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5+d_[25]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[7]+t_1+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3+d_[25]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +4+d_[7]+t_1+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[25]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3+d_[5]+d_[7]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+d_[7]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +5+d_[25]+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +5+d_[25]);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +3+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +5+d_[14]+d_[25]+t_4+t_6);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +4+d_[7]+t_1+t_9, vec_[3] +2+d_[3]+d_[5]+d_[7]+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +7+d_[14]+d_[25]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +7+d_[25]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[7]+t_1+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[7]+t_1+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[5]+d_[7]+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[7]+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +7+d_[25]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +7+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +3+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +7+d_[14]+d_[25]+t_4+t_6);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_37 +1;
	uint64_t out_22 = MAP_Explorer::max2(out_27 +1, vec_[17] +1);


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_439{
    439,
    25168,
    25240,
    true,
    block_439_fn
    };



static void block_440_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_440{
    440,
    25244,
    25248,
    true,
    block_440_fn
    };



static void block_441_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +4+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +3+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +4+d_[3]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_19 = out_24 -1;
	uint64_t out_25 = MAP_Explorer::max2(out_24 +2, vec_[20] +1);
	uint64_t out_26 = MAP_Explorer::max2(out_24 +2+d_[7], vec_[4] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[20] +2);
	uint64_t out_12 = out_19 +2;
	uint64_t out_18 = MAP_Explorer::max2(out_26 +3, vec_[22] +3);
	uint64_t out_22 = out_18 +1+d_[11];
	uint64_t out_37 = out_18 +d_[11];
	uint64_t out_38 = out_18 +2+d_[11];
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_37;


	vec_[24] = out_24;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_441{
    441,
    25252,
    25304,
    true,
    block_441_fn
    };



static void block_442_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_442{
    442,
    25308,
    25312,
    true,
    block_442_fn
    };



static void block_443_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[3], vec_[1] +6+d_[3]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +5+d_[3]);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +5+d_[3]);
	out_34 = MAP_Explorer::max2(out_34, vec_[27] +4+d_[3]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +6+d_[0]+d_[3]);
	uint64_t out_13 = out_34 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_34 +1+d_[7], vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_20 = MAP_Explorer::max2(out_34 +2+d_[7], vec_[4] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[25] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +5+d_[7]+d_[11], vec_[4] +5+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +6+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +4+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +3+d_[11]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_38 -1;
	uint64_t out_18 = out_37 -1;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[34] = out_34;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_443{
    443,
    25316,
    25372,
    true,
    block_443_fn
    };



static void block_444_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_444{
    444,
    25736,
    25736,
    true,
    block_444_fn
    };



static void block_445_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_445{
    445,
    25740,
    25740,
    true,
    block_445_fn
    };



static void block_446_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_20 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_18 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_446{
    446,
    26596,
    26604,
    true,
    block_446_fn
    };



static void block_447_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(d_[12], d_[11]);
	uint64_t t_2 = MAP_Explorer::max2(4+t_0+t_1, d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(4+d_[12]+t_0, t_2);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(t_4, 3+d_[11]+t_0);
	uint64_t t_6 = MAP_Explorer::max2(2+t_1, d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(1+d_[16]+t_5, t_4);
	uint64_t t_8 = MAP_Explorer::max2(d_[16]+t_6, 1+t_1);

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +3+d_[2]);
	out_21 = MAP_Explorer::max2(out_21, vec_[34] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_15 = out_21 -1;
	uint64_t out_10 = MAP_Explorer::max2(out_21 +2+t_0, vec_[24] +2+t_0);
	uint64_t out_14 = MAP_Explorer::max2(out_21 +4+t_0, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[24] +4+t_0);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +1+t_2, vec_[12] +3+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +1+t_2);
	uint64_t out_32 = MAP_Explorer::max2(out_21 +1+t_4, vec_[12] +4+t_1);
	out_32 = MAP_Explorer::max2(out_32, vec_[24] +1+t_4);
	uint64_t out_33 = MAP_Explorer::max2(out_21 +d_[5], vec_[24] +d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(out_21 +2+t_5, vec_[12] +3+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+t_5);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +2+t_7, vec_[12] +4+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_7);
	uint64_t out_24 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_0 = out_19 -2+d_[16];


	vec_[21] = out_21;
	vec_[15] = out_15;
	vec_[10] = out_10;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_447{
    447,
    25768,
    25824,
    true,
    block_447_fn
    };



static void block_448_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[11]+t_1, 1+t_0);

	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[21] +d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[32] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_12 = MAP_Explorer::max2(out_34 +2, vec_[12] +2);
	uint64_t out_33 = MAP_Explorer::max2(out_34 +4+t_0, vec_[10] +1);
	out_33 = MAP_Explorer::max2(out_33, vec_[12] +4+t_0);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +3+t_1, vec_[10] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_34 +4+t_2, vec_[10] +3+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_32 = out_12 +1+t_0;
	uint64_t out_0 = out_19 -2+d_[11];


	vec_[34] = out_34;
	vec_[12] = out_12;
	vec_[33] = out_33;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[32] = out_32;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_448{
    448,
    25852,
    25888,
    true,
    block_448_fn
    };



static void block_449_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[17] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_9 = MAP_Explorer::max2(out_12 +1, vec_[32] +1);
	uint64_t out_32 = MAP_Explorer::max2(out_12 +4+d_[5], vec_[14] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +4+d_[5]);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +2, vec_[19] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[33] +2);
	uint64_t out_19 = out_33 -1;
	uint64_t out_34 = out_33 +3+d_[9];
	uint64_t out_35 = out_33 +5+d_[9]+d_[13];
	uint64_t out_37 = out_33 +4+d_[9]+d_[13];
	uint64_t out_38 = out_33 +6+d_[9]+d_[13];
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_35;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_19 +2+d_[9];
	uint64_t out_11 = out_13 -1;


	vec_[12] = out_12;
	vec_[9] = out_9;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[19] = out_19;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[11] = out_11;
}

extern const MAP_Explorer::Block block_449{
    449,
    25916,
    25980,
    true,
    block_449_fn
    };



static void block_450_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[17] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[35] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +3+d_[0]);
	uint64_t out_35 = out_34 +1+d_[3];
	uint64_t out_11 = MAP_Explorer::max2(out_34 +4+d_[3], vec_[11] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +3+d_[3]+d_[7], vec_[11] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_37 +1;


	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[11] = out_11;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_450{
    450,
    25988,
    26020,
    true,
    block_450_fn
    };



static void block_451_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[9] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_451{
    451,
    26024,
    26028,
    true,
    block_451_fn
    };



static void block_452_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[5], vec_[4] );
	uint64_t out_34 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[34] = out_34;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_452{
    452,
    26108,
    26128,
    true,
    block_452_fn
    };



static void block_453_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[9]+t_1, t_0);

	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[19] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[21] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_34 = MAP_Explorer::max2(out_35 +2+t_0, vec_[10] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[17] +2+t_0);
	uint64_t out_37 = MAP_Explorer::max2(out_35 +3+t_1, vec_[10] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_35 +3+t_2, vec_[10] +4+d_[9]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3+t_2);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_0 = out_18 -2+d_[9];


	vec_[35] = out_35;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_453{
    453,
    26132,
    26160,
    true,
    block_453_fn
    };



static void block_454_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[11]+t_1, 1+t_0);

	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[21] +d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_10 = MAP_Explorer::max2(out_34 +4+t_0, vec_[10] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +4+t_0);
	uint64_t out_17 = MAP_Explorer::max2(out_34 +2, vec_[17] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +3+t_1, vec_[10] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_34 +4+t_2, vec_[10] +3+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_21 = out_17 +1+t_0;
	uint64_t out_0 = out_19 -2+d_[11];


	vec_[34] = out_34;
	vec_[10] = out_10;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_454{
    454,
    26188,
    26224,
    true,
    block_454_fn
    };



static void block_455_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +3, vec_[10] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_34 = MAP_Explorer::max2(out_17 +4+d_[5], vec_[10] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[32] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +4+d_[9], vec_[33] +4);
	uint64_t out_33 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_32 = out_34 +1;
	uint64_t out_38 = out_37 +1+d_[13];
	uint64_t out_10 = MAP_Explorer::max2(out_34 +2, vec_[33] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[33] = out_33;
	vec_[18] = out_18;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[10] = out_10;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_455{
    455,
    26252,
    26304,
    true,
    block_455_fn
    };



static void block_456_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[10] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[18] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_10 = out_21 +2;
	uint64_t out_37 = MAP_Explorer::max2(out_21 +4+d_[5], vec_[34] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[19] +1);
	uint64_t out_34 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;


	vec_[21] = out_21;
	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[34] = out_34;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_456{
    456,
    26316,
    26348,
    true,
    block_456_fn
    };



static void block_457_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_457{
    457,
    26352,
    26352,
    true,
    block_457_fn
    };



static void block_458_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_34 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[34] = out_34;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_458{
    458,
    26920,
    26924,
    true,
    block_458_fn
    };



static void block_459_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_34 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[20] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[34] = out_34;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_459{
    459,
    26424,
    26432,
    true,
    block_459_fn
    };



static void block_460_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[34] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_460{
    460,
    26436,
    26440,
    true,
    block_460_fn
    };



static void block_461_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[34] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_38 -1;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_461{
    461,
    26444,
    26452,
    true,
    block_461_fn
    };



static void block_462_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[34] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1+d_[2], vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_34 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_13 = out_19 -2;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[34] = out_34;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_462{
    462,
    26456,
    26476,
    true,
    block_462_fn
    };



static void block_463_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_463{
    463,
    26496,
    26500,
    true,
    block_463_fn
    };



static void block_464_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +2+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +2+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_5 = MAP_Explorer::max2(out_34 +4, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_12 = MAP_Explorer::max2(out_34 +4+d_[6], vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_34 +6+d_[6], vec_[3] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_34 +10+d_[6]+d_[10], vec_[3] +8+d_[10]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +9+d_[10]);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[18] +6+d_[10]);
	uint64_t out_19 = out_22 -3;
	uint64_t out_23 = out_22 +d_[14];
	uint64_t out_24 = out_22 +1+d_[14];
	uint64_t out_25 = out_22 +2+d_[14];
	uint64_t out_26 = out_22 +3+d_[14];
	uint64_t out_27 = out_22 +3+d_[14]+d_[18];
	uint64_t out_37 = out_22 +4+d_[14]+d_[18];
	uint64_t out_38 = out_22 +4+d_[14]+d_[18]+d_[22];
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_27;
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_16 = out_19 -1;
	uint64_t out_13 = out_16 +3;
	uint64_t out_6 = out_13 +6+d_[14]+d_[18];
	uint64_t out_4 = out_6 +d_[22];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[34] = out_34;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_464{
    464,
    26504,
    26592,
    true,
    block_464_fn
    };



static void block_301_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_301{
    301,
    44564,
    44568,
    true,
    block_301_fn
    };



static void block_406_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[17], d_[12]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[12]+d_[14]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[12]+d_[14]+d_[16]);
	uint64_t t_3 = MAP_Explorer::max2(d_[25], d_[20]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[20]+d_[22]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_4, d_[20]+d_[22]+d_[24]);

	uint64_t out_11 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_11 = MAP_Explorer::max2(out_11, vec_[2] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[3] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[15] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[36] +3+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +3+d_[2]);
	out_35 = MAP_Explorer::max2(out_35, vec_[3] +3);
	out_35 = MAP_Explorer::max2(out_35, vec_[15] +3+d_[2]);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_9 = out_11 +1;
	uint64_t out_34 = out_35 +1;
	uint64_t out_18 = MAP_Explorer::max2(out_35 +5+d_[6], vec_[18] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_35 +5+d_[6]+d_[10], vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_35 +8+d_[6]+d_[10]+d_[18]+d_[26]+t_2+t_5, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[18]+d_[26]+t_2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +5+d_[18]+d_[26]+t_2+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = out_19 +2+d_[18]+d_[26]+t_2+t_5;
	uint64_t out_33 = out_34 +1;
	uint64_t out_37 = out_19 +2+d_[18]+t_2+t_5;
	uint64_t out_0 = out_15 -1;
	uint64_t out_3 = out_15 -1+d_[28];
	uint64_t out_32 = out_33 +1;
	uint64_t out_20 = out_32 +1+d_[6];
	uint64_t out_17 = out_20 +1;
	uint64_t out_10 = out_17 -2;


	vec_[11] = out_11;
	vec_[35] = out_35;
	vec_[9] = out_9;
	vec_[34] = out_34;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[33] = out_33;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[17] = out_17;
	vec_[10] = out_10;
}

extern const MAP_Explorer::Block block_406{
    406,
    48680,
    48764,
    true,
    block_406_fn
    };



static void block_302_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_302{
    302,
    44528,
    44532,
    true,
    block_302_fn
    };



static void block_303_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_18 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[6], vec_[16] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_19 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_303{
    303,
    44536,
    44560,
    true,
    block_303_fn
    };



static void block_323_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]);
	uint64_t out_17 = out_18 -2;
	uint64_t out_38 = MAP_Explorer::max2(out_18 +3+d_[4], vec_[4] +4);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_37 -1;
	uint64_t out_15 = out_16 +2;
	uint64_t out_1 = out_15;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_323{
    323,
    30704,
    30732,
    true,
    block_323_fn
    };



static void block_324_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_324{
    324,
    30736,
    30740,
    true,
    block_324_fn
    };



static void block_325_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[2], vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_37 +1;
	uint64_t out_1 = out_16;


	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_325{
    325,
    30760,
    30776,
    true,
    block_325_fn
    };



static void block_326_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +1, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +d_[2], vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[19] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_326{
    326,
    30808,
    30820,
    true,
    block_326_fn
    };



static void block_327_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_327{
    327,
    30796,
    30796,
    true,
    block_327_fn
    };



static void block_328_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_328{
    328,
    30828,
    30828,
    true,
    block_328_fn
    };



static void block_342_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[10], d_[8]);
	uint64_t t_1 = MAP_Explorer::max2(4, d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[10]+d_[15], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[15], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(t_2, t_0);
	uint64_t t_5 = MAP_Explorer::max2(t_3, t_1);
	uint64_t t_6 = MAP_Explorer::max2(5+t_4, d_[13]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(5+t_5, d_[13]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(4+d_[15], d_[13]);
	uint64_t t_9 = MAP_Explorer::max2(4+d_[20]+t_4, t_6);
	uint64_t t_10 = MAP_Explorer::max2(4+d_[20]+t_5, t_7);
	uint64_t t_11 = MAP_Explorer::max2(3+d_[15]+d_[20], d_[13]);
	uint64_t t_12 = MAP_Explorer::max2(1+t_9, d_[19]+t_6);
	uint64_t t_13 = MAP_Explorer::max2(1+t_10, d_[19]+t_7);
	uint64_t t_14 = MAP_Explorer::max2(1+t_11, d_[19]+t_8);
	uint64_t t_15 = MAP_Explorer::max2(d_[20], d_[19]);
	uint64_t t_16 = MAP_Explorer::max2(d_[21]+t_12, 2+d_[10]);
	uint64_t t_17 = MAP_Explorer::max2(d_[26]+t_16, t_4);
	uint64_t t_18 = MAP_Explorer::max2(t_17, 1+t_4);
	uint64_t t_19 = MAP_Explorer::max2(d_[21]+d_[26]+t_13, t_5);
	uint64_t t_20 = MAP_Explorer::max2(t_19, 1+t_5);
	uint64_t t_22 = MAP_Explorer::max2(1+d_[15], 1+d_[21]+d_[26]+t_14);
	uint64_t t_23 = MAP_Explorer::max2(3+d_[30]+t_18, t_16);
	uint64_t t_24 = MAP_Explorer::max2(t_23, 1+t_16);
	uint64_t t_25 = MAP_Explorer::max2(3+d_[30]+t_20, d_[21]+t_13);
	uint64_t t_26 = MAP_Explorer::max2(t_25, 1+d_[21]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(2+d_[30]+t_22, d_[21]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(t_27, 1+d_[21]+t_14);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +3);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +4+d_[5]+d_[21]+d_[23]+t_12, vec_[3] +d_[21]+d_[23]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[19]+d_[21]+d_[23]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[21]+d_[23]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[21]+d_[23]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +3+d_[21]+d_[23]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +4+d_[5]+d_[21]+d_[23]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +3+d_[21]+d_[23]+t_15);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[21]+d_[23]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[21]+d_[23]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[23]);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +6+d_[5]+t_4, vec_[3] +2+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[15]);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +5+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +6+d_[5]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +4+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +3+t_4);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +5+d_[5]+t_0, vec_[3] +1+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +4+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +5+d_[5]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_0);
	uint64_t out_20 = MAP_Explorer::max2(out_13 +2, vec_[16] +2);
	uint64_t out_21 = MAP_Explorer::max2(out_6 +5+d_[5]+t_16, vec_[3] +1+d_[21]+t_13);
	out_21 = MAP_Explorer::max2(out_21, vec_[5] +2+d_[19]+d_[21]);
	out_21 = MAP_Explorer::max2(out_21, vec_[12] +2+d_[21]);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +2+d_[21]+t_14);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +4+t_16);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +5+d_[5]+t_16);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +4+d_[21]+t_15);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +3+t_16);
	out_21 = MAP_Explorer::max2(out_21, vec_[22] +2+t_16);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +5+d_[5], vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +5+d_[5]);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +8+d_[5]+t_18, vec_[3] +4+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +5+d_[19]+d_[21]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5+d_[21]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +4+t_22);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +7+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +8+d_[5]+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +7+d_[21]+d_[26]+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +6+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +5+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +5+d_[26]);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +6+d_[5]+t_24, vec_[3] +2+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +6+d_[19]+d_[21]+d_[26]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +6+d_[21]+d_[26]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_28);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +6+d_[5]+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +8+d_[21]+d_[26]+d_[30]+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_24);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +6+d_[26]+d_[30]);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_37 +1;
	uint64_t out_15 = MAP_Explorer::max2(out_21 +1, vec_[4] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +2+d_[26], vec_[4] +3);
	uint64_t out_0 = out_16 -2+d_[30];
	uint64_t out_14 = out_17 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_342{
    342,
    28668,
    28768,
    true,
    block_342_fn
    };



static void block_343_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[21] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_20 -1;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_343{
    343,
    28780,
    28788,
    true,
    block_343_fn
    };



static void block_344_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_344{
    344,
    29480,
    29480,
    true,
    block_344_fn
    };



static void block_360_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_360{
    360,
    29360,
    29364,
    true,
    block_360_fn
    };



static void block_363_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_363{
    363,
    30468,
    30472,
    true,
    block_363_fn
    };



static void block_366_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[3], vec_[1] +7+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +6+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +5);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +6+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +7+d_[0]+d_[3]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_19 = out_12 +d_[7];
	uint64_t out_18 = MAP_Explorer::max2(out_12 +1+d_[7], vec_[13] +1);
	uint64_t out_16 = out_18 +1;
	uint64_t out_22 = out_18 +3+d_[11];
	uint64_t out_23 = out_18 +4+d_[11];
	uint64_t out_15 = MAP_Explorer::max2(out_18 +5+d_[11], vec_[17] +2);
	uint64_t out_3 = out_23;
	uint64_t out_13 = out_16 +2;
	uint64_t out_14 = out_15 -1;
	uint64_t out_37 = out_15 -1+d_[15];
	uint64_t out_38 = out_15 +d_[15];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_14 +2+d_[15];
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_366{
    366,
    30548,
    30612,
    true,
    block_366_fn
    };



static void block_380_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(4+d_[10], d_[8]);
	uint64_t t_1 = MAP_Explorer::max2(5, d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(3+d_[10]+d_[15], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(4+d_[15], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(4+t_2, d_[14]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(4+t_3, d_[14]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(4, d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(3+d_[20]+t_2, t_4);
	uint64_t t_8 = MAP_Explorer::max2(3+d_[20]+t_3, t_5);
	uint64_t t_9 = MAP_Explorer::max2(3+d_[20], d_[14]);
	uint64_t t_10 = MAP_Explorer::max2(1+t_7, d_[19]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(1+t_8, d_[19]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(d_[20], d_[19]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_9, d_[19]+t_6);
	uint64_t t_14 = MAP_Explorer::max2(d_[21]+d_[26]+t_10, 2+t_2);
	uint64_t t_15 = MAP_Explorer::max2(d_[21]+d_[26]+t_11, 2+t_3);
	uint64_t t_16 = MAP_Explorer::max2(2+t_14, t_2);
	uint64_t t_17 = MAP_Explorer::max2(2+t_15, t_3);
	uint64_t t_18 = MAP_Explorer::max2(1+d_[30]+t_14, t_16);
	uint64_t t_19 = MAP_Explorer::max2(1+d_[30]+t_15, t_17);
	uint64_t t_20 = MAP_Explorer::max2(2+t_18, d_[21]+t_10);
	uint64_t t_21 = MAP_Explorer::max2(2+t_19, d_[21]+t_11);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +3);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_6 +6+d_[5]+t_18, vec_[3] +2+t_19);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +4+d_[19]+d_[21]+d_[26]+d_[30]);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +4+d_[21]+d_[26]+d_[30]);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +3+t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +5+t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +6+d_[5]+t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +5+d_[21]+d_[26]+d_[30]+t_12);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] +4+t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +4+d_[21]+d_[26]+d_[30]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +4+d_[26]+d_[30]);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +5+d_[5], vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +5+d_[5]);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +3);
	uint64_t out_20 = MAP_Explorer::max2(out_6 +7+d_[5]+t_16, vec_[3] +3+t_17);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +6+d_[19]+d_[21]+d_[26]);
	out_20 = MAP_Explorer::max2(out_20, vec_[12] +6+d_[21]+d_[26]);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +4+t_16);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +6+t_16);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +7+d_[5]+t_16);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +7+d_[21]+d_[26]+t_12);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +5+t_16);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +6+d_[21]+d_[26]+t_13);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +6+d_[26]);
	uint64_t out_21 = MAP_Explorer::max2(out_6 +6+d_[5]+t_2, vec_[3] +2+t_3);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +3+t_2);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +5+t_2);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +6+d_[5]+t_2);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +4+t_2);
	out_21 = MAP_Explorer::max2(out_21, vec_[22] +3);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +5+d_[5]+d_[21]+t_10, vec_[3] +1+d_[21]+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+d_[19]+d_[21]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+d_[21]);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+d_[21]+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +4+d_[21]+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +5+d_[5]+d_[21]+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +3+d_[21]+t_12);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +3+d_[21]+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[21]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +8+d_[5]+t_14, vec_[3] +4+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +5+d_[19]+d_[21]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5+d_[21]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +5+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +7+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +8+d_[5]+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +6+d_[21]+d_[26]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +6+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +5+d_[21]+d_[26]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +5+d_[26]);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +6+d_[5]+t_20, vec_[3] +2+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +6+d_[19]+d_[21]+d_[26]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +6+d_[21]+d_[26]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +6+d_[5]+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +7+d_[21]+d_[26]+d_[30]+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +6+d_[21]+d_[26]+d_[30]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +6+d_[26]+d_[30]);
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_22 +1;
	uint64_t out_18 = out_37 -2;
	uint64_t out_19 = out_21 -1;
	uint64_t out_3 = out_17 -2+d_[23];
	uint64_t out_14 = out_18 +1;


	vec_[6] = out_6;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_380{
    380,
    23228,
    23328,
    true,
    block_380_fn
    };



static void block_381_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_381{
    381,
    23332,
    23332,
    true,
    block_381_fn
    };



static void block_388_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_388{
    388,
    23900,
    23904,
    true,
    block_388_fn
    };



static void block_391_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_391{
    391,
    25008,
    25012,
    true,
    block_391_fn
    };



static void block_392_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[4], vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 +1;
	uint64_t out_19 = out_18 +1+d_[4];
	uint64_t out_37 = out_18 +d_[4];
	uint64_t out_0 = out_37;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_392{
    392,
    25040,
    25060,
    true,
    block_392_fn
    };



static void block_393_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[4], vec_[1] +8+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +7+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +7+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +5+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +8+d_[0]+d_[4]);
	uint64_t out_12 = out_19 -1;
	uint64_t out_22 = MAP_Explorer::max2(out_19 +4+d_[8], vec_[22] +5);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +1+d_[12], vec_[17] +2);
	uint64_t out_15 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_14 = out_37 -1;
	uint64_t out_18 = out_22 -4;
	uint64_t out_23 = out_22 +d_[12];
	uint64_t out_38 = out_37 +d_[16];
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_14 +2;
	uint64_t out_16 = out_18 +1;
	uint64_t out_4 = out_6 +d_[16];
	uint64_t out_13 = out_16 +2;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[16] = out_16;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_393{
    393,
    25088,
    25152,
    true,
    block_393_fn
    };



static void block_389_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_38 -1;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_389{
    389,
    23908,
    23916,
    true,
    block_389_fn
    };



static void block_390_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_18 +1;
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2, vec_[19] +1);
	uint64_t out_19 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_14 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_390{
    390,
    23920,
    23936,
    true,
    block_390_fn
    };



static void block_427_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[21] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_21 +1+d_[2]+d_[3]+d_[5], vec_[3] +d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[32] +1+d_[5]);
	uint64_t out_18 = MAP_Explorer::max2(out_21 +1, vec_[12] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_21 +2+d_[2]+d_[3], vec_[3] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[32] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[8], vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[8], vec_[14] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);


	vec_[21] = out_21;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_427{
    427,
    6840,
    6864,
    true,
    block_427_fn
    };



static void block_345_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_345{
    345,
    29484,
    29484,
    true,
    block_345_fn
    };



static void block_346_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_346{
    346,
    29640,
    29644,
    true,
    block_346_fn
    };



static void block_347_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_17 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_347{
    347,
    29648,
    29660,
    true,
    block_347_fn
    };



static void block_348_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_348{
    348,
    29540,
    29544,
    true,
    block_348_fn
    };



static void block_466_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[8], d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[5]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[5]+d_[7]);
	uint64_t t_6 = MAP_Explorer::max2(d_[15], d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(2+t_6, d_[11]+d_[13]);
	uint64_t t_8 = MAP_Explorer::max2(1+d_[15], d_[13]);
	uint64_t t_9 = MAP_Explorer::max2(d_[22], d_[18]);
	uint64_t t_10 = MAP_Explorer::max2(3+d_[16]+t_7+t_9, d_[11]);
	uint64_t t_11 = MAP_Explorer::max2(2+d_[16]+d_[26]+t_7+t_9, t_10);
	uint64_t t_12 = MAP_Explorer::max2(2+t_11, d_[16]+d_[18]+t_7);
	uint64_t t_13 = MAP_Explorer::max2(4+d_[26]+t_9, d_[18]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[9]+d_[16]+t_4+t_7+t_9, vec_[1] +4+d_[1]+d_[9]+d_[16]+t_4+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +4+d_[9]+d_[16]+t_4+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+d_[9]+d_[16]+t_4+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+d_[16]+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +4+d_[9]+d_[16]+t_4+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[9]+d_[16]+t_5+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+d_[7]+d_[9]+d_[16]+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +4+d_[9]+d_[16]+t_5+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+d_[9]+d_[16]+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+d_[16]+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[25] +3+d_[9]+d_[16]+t_4+t_7+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +3+d_[16]+t_8+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +2+d_[22]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]+d_[1]+d_[9]+d_[16]+t_4+t_7+t_9);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[9]+t_4+t_10, vec_[1] +4+d_[1]+d_[9]+t_4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4+d_[9]+t_4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+d_[9]+t_4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +6+d_[16]+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4+d_[9]+t_4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+d_[9]+t_5+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3+d_[7]+d_[9]+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +4+d_[9]+t_5+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[16] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +6+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +3+d_[9]+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +3+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +3+d_[9]+t_4+t_10);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +6+d_[16]+t_8+t_9);
	out_13 = MAP_Explorer::max2(out_13, vec_[27] +5+d_[22]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +4+d_[0]+d_[1]+d_[9]+t_4+t_10);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+d_[16]+d_[18]+t_4+t_7, vec_[1] +3+d_[1]+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +1+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+d_[16]+d_[18]);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+d_[9]+d_[16]+d_[18]+t_5+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+d_[7]+d_[9]+d_[16]+d_[18]+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[15] +3+d_[9]+d_[16]+d_[18]+t_5+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+d_[18]);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+d_[9]+d_[16]+d_[18]+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+d_[16]+d_[18]+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2+d_[16]+d_[18]+t_8);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +3+d_[0]+d_[1]+d_[9]+d_[16]+d_[18]+t_4+t_7);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[9]+t_4+t_11, vec_[1] +4+d_[1]+d_[9]+t_4+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+d_[9]+t_4+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[9]+t_4+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +5+d_[16]+d_[26]+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+d_[9]+t_4+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[9]+t_5+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[7]+d_[9]+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +4+d_[9]+t_5+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +5+d_[26]+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+d_[9]+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +3+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+d_[9]+t_4+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +5+d_[16]+d_[26]+t_8+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +4+d_[22]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]+d_[9]+t_4+t_11);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[9]+t_4+t_12, vec_[1] +4+d_[1]+d_[9]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+d_[9]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+d_[9]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+d_[16]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[9]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[9]+t_5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[7]+d_[9]+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[9]+t_5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[9]+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3+d_[9]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +3+d_[16]+t_8+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +6+d_[22]+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]+d_[9]+t_4+t_12);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_25 -1+d_[20];
	uint64_t out_24 = out_37 +1;
	uint64_t out_26 = MAP_Explorer::max2(out_12 +1, vec_[16] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_26 +1, vec_[17] +1);


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[24] = out_24;
	vec_[26] = out_26;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_466{
    466,
    27148,
    27220,
    true,
    block_466_fn
    };



static void block_467_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_467{
    467,
    27224,
    27228,
    true,
    block_467_fn
    };



static void block_468_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]);
	uint64_t out_13 = out_19 +1+d_[4];
	uint64_t out_22 = out_19 +2+d_[4];
	uint64_t out_25 = MAP_Explorer::max2(out_19 +3+d_[4], vec_[25] +1);
	uint64_t out_27 = MAP_Explorer::max2(out_25 +1, vec_[4] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_25 +3+d_[8], vec_[4] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +3);
	uint64_t out_12 = out_18 +1;
	uint64_t out_23 = out_18 +1+d_[12];
	uint64_t out_37 = out_18 +d_[12];
	uint64_t out_38 = out_18 +2+d_[12];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_23;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[18] = out_18;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_468{
    468,
    27232,
    27284,
    true,
    block_468_fn
    };



static void block_469_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_469{
    469,
    27288,
    27292,
    true,
    block_469_fn
    };



static void block_470_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[4], vec_[1] +5+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +4+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +4+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +3+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +5+d_[0]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +2, vec_[18] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_19 +1+d_[8], vec_[4] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_25 +2, vec_[27] +2);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_16 = out_17 +1;
	uint64_t out_37 = out_17 +d_[12];
	uint64_t out_38 = out_17 +2+d_[12];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_16 +d_[12];
	uint64_t out_1 = out_14;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_470{
    470,
    27296,
    27348,
    true,
    block_470_fn
    };



static void block_471_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[23] );
	out_0 = MAP_Explorer::max2(out_0, vec_[24] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_471{
    471,
    27352,
    27360,
    true,
    block_471_fn
    };



static void block_472_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_38 -1;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_472{
    472,
    27364,
    27372,
    true,
    block_472_fn
    };



static void block_473_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +3+d_[0]);
	uint64_t out_10 = out_32 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_32 +1, vec_[22] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_32 +2, vec_[19] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[22] +2);
	uint64_t out_34 = MAP_Explorer::max2(out_32 +3+d_[4], vec_[19] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[22] +3+d_[4]);
	uint64_t out_33 = out_34 +2;
	uint64_t out_37 = out_34 +4+d_[8]+d_[12];
	uint64_t out_38 = out_34 +6+d_[8]+d_[12];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_22 = out_33 -3;
	uint64_t out_19 = out_22 +2;
	uint64_t out_20 = out_22 +6+d_[8];
	uint64_t out_16 = out_19 +3+d_[8];
	uint64_t out_17 = out_19 +4+d_[8]+d_[12];
	uint64_t out_1 = out_17;


	vec_[32] = out_32;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[21] = out_21;
	vec_[34] = out_34;
	vec_[33] = out_33;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_473{
    473,
    27376,
    27428,
    true,
    block_473_fn
    };



static void block_474_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[20] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +2+d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +5);
	out_32 = MAP_Explorer::max2(out_32, vec_[12] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[19] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[20] +5);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +4);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_16 = out_32 -1;
	uint64_t out_20 = out_32 +1+d_[5];
	uint64_t out_33 = MAP_Explorer::max2(out_32 +2+d_[5], vec_[22] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_33 +1, vec_[18] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_33 +3+d_[9], vec_[18] +4);
	uint64_t out_10 = out_22 -1;
	uint64_t out_18 = out_22 +1+d_[13];
	uint64_t out_37 = out_22 +d_[13];
	uint64_t out_38 = out_22 +2+d_[13];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_37;


	vec_[9] = out_9;
	vec_[32] = out_32;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[33] = out_33;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_474{
    474,
    27436,
    27492,
    true,
    block_474_fn
    };



static void block_475_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(out_12 +3, vec_[10] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[18] +3);
	uint64_t out_33 = MAP_Explorer::max2(out_12 +7+d_[4]+d_[8], vec_[10] +6+d_[8]);
	out_33 = MAP_Explorer::max2(out_33, vec_[13] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[18] +7+d_[4]+d_[8]);
	out_33 = MAP_Explorer::max2(out_33, vec_[33] +4+d_[8]);
	uint64_t out_34 = MAP_Explorer::max2(out_33 +2+d_[12], vec_[9] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +2+d_[12]);
	uint64_t out_35 = MAP_Explorer::max2(out_12 +6+d_[4], vec_[10] +5);
	out_35 = MAP_Explorer::max2(out_35, vec_[13] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[18] +6+d_[4]);
	out_35 = MAP_Explorer::max2(out_35, vec_[33] +3);
	uint64_t out_19 = out_33 -1;
	uint64_t out_9 = MAP_Explorer::max2(out_33 +2, vec_[9] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[34] +2);
	uint64_t out_11 = MAP_Explorer::max2(out_33 +1, vec_[34] +1);
	uint64_t out_13 = MAP_Explorer::max2(out_34 +2, vec_[21] +1);
	uint64_t out_18 = out_13 +2+d_[16];
	uint64_t out_37 = out_13 +1+d_[16];
	uint64_t out_38 = out_13 +3+d_[16];
	uint64_t out_21 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_37;


	vec_[12] = out_12;
	vec_[10] = out_10;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[19] = out_19;
	vec_[9] = out_9;
	vec_[11] = out_11;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[21] = out_21;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_475{
    475,
    27504,
    27576,
    true,
    block_475_fn
    };



static void block_476_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[18] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +3+d_[0]);
	uint64_t out_13 = out_34 +1;
	uint64_t out_11 = MAP_Explorer::max2(out_34 +5+d_[4]+d_[8], vec_[11] +3+d_[8]);
	out_11 = MAP_Explorer::max2(out_11, vec_[32] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[35] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_34 +5+d_[4], vec_[11] +3);
	uint64_t out_32 = MAP_Explorer::max2(out_34 +6+d_[4]+d_[8], vec_[11] +4+d_[8]);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[33] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[35] +2);
	uint64_t out_33 = MAP_Explorer::max2(out_34 +7+d_[4]+d_[8], vec_[11] +5+d_[8]);
	out_33 = MAP_Explorer::max2(out_33, vec_[16] +1);
	out_33 = MAP_Explorer::max2(out_33, vec_[32] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[33] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[35] +3);
	uint64_t out_12 = out_13 +1;
	uint64_t out_18 = out_21 -1;
	uint64_t out_35 = out_33 +3+d_[12];
	uint64_t out_37 = out_33 +2+d_[12];
	uint64_t out_38 = out_33 +4+d_[12];
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_35;
	uint64_t out_0 = out_37;


	vec_[34] = out_34;
	vec_[13] = out_13;
	vec_[11] = out_11;
	vec_[21] = out_21;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_476{
    476,
    27584,
    27644,
    true,
    block_476_fn
    };



static void block_477_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_11 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_11 = MAP_Explorer::max2(out_11, vec_[2] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[11] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[12] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[35] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[36] +3+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(out_11 +11+d_[3]+d_[7]+d_[11]+d_[15], vec_[9] +11+d_[7]+d_[11]+d_[15]);
	out_35 = MAP_Explorer::max2(out_35, vec_[10] +9+d_[7]+d_[11]+d_[15]);
	out_35 = MAP_Explorer::max2(out_35, vec_[17] +11+d_[7]+d_[11]+d_[15]);
	out_35 = MAP_Explorer::max2(out_35, vec_[19] +9+d_[11]+d_[15]);
	out_35 = MAP_Explorer::max2(out_35, vec_[21] +6+d_[11]+d_[15]);
	out_35 = MAP_Explorer::max2(out_35, vec_[34] +3+d_[15]);
	uint64_t out_10 = out_35 +1;
	uint64_t out_16 = out_35 +2+d_[19];
	uint64_t out_21 = MAP_Explorer::max2(out_35 +7+d_[19]+d_[23], vec_[4] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[20] +4);
	out_21 = MAP_Explorer::max2(out_21, vec_[33] +3);
	uint64_t out_18 = out_21 +1;
	uint64_t out_19 = out_21 +4+d_[27];
	uint64_t out_37 = out_21 +4+d_[27]+d_[31];
	uint64_t out_38 = out_21 +6+d_[27]+d_[31];
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_18 +4+d_[27]+d_[31];
	uint64_t out_1 = out_12;


	vec_[11] = out_11;
	vec_[35] = out_35;
	vec_[10] = out_10;
	vec_[16] = out_16;
	vec_[21] = out_21;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_477{
    477,
    27652,
    27784,
    true,
    block_477_fn
    };



static void block_479_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_479{
    479,
    28216,
    28220,
    true,
    block_479_fn
    };



static void block_480_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_480{
    480,
    28224,
    28228,
    true,
    block_480_fn
    };



static void block_481_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_481{
    481,
    28260,
    28264,
    true,
    block_481_fn
    };



static void block_482_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_482{
    482,
    28284,
    28288,
    true,
    block_482_fn
    };



static void block_483_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +4+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_17 +4+d_[3], vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +4+d_[3]+d_[7], vec_[3] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	uint64_t out_5 = out_12 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_18 +2, vec_[15] +2);
	uint64_t out_13 = out_16 +2+d_[11];
	uint64_t out_14 = out_16 +6+d_[11]+d_[15]+d_[19];
	uint64_t out_19 = out_16 +d_[11];
	uint64_t out_22 = out_16 +3+d_[11];
	uint64_t out_23 = out_16 +4+d_[11];
	uint64_t out_24 = out_16 +4+d_[11]+d_[15];
	uint64_t out_25 = out_16 +5+d_[11]+d_[15];
	uint64_t out_26 = out_16 +6+d_[11]+d_[15];
	uint64_t out_27 = out_16 +7+d_[11]+d_[15];
	uint64_t out_37 = out_16 +7+d_[11]+d_[15]+d_[19];
	uint64_t out_38 = out_16 +8+d_[11]+d_[15]+d_[19];
	uint64_t out_15 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_13 +7+d_[15]+d_[19];
	uint64_t out_2 = out_4;


	vec_[17] = out_17;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_483{
    483,
    28292,
    28380,
    true,
    block_483_fn
    };



static void block_495_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +1+d_[3], vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_495{
    495,
    30500,
    30520,
    true,
    block_495_fn
    };



static void block_561_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_561{
    561,
    47336,
    47344,
    true,
    block_561_fn
    };



static void block_562_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_16 +1, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +d_[2], vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_0 = out_15 -1;


	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_562{
    562,
    47320,
    47332,
    true,
    block_562_fn
    };



static void block_485_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_485{
    485,
    23612,
    23612,
    true,
    block_485_fn
    };



static void block_486_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_486{
    486,
    23616,
    23620,
    true,
    block_486_fn
    };



static void block_487_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_487{
    487,
    23660,
    23664,
    true,
    block_487_fn
    };



static void block_488_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +1, vec_[17] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[3], vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_38 -1;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_488{
    488,
    23668,
    23684,
    true,
    block_488_fn
    };



static void block_489_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_489{
    489,
    23688,
    23692,
    true,
    block_489_fn
    };



static void block_491_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_491{
    491,
    23488,
    23492,
    true,
    block_491_fn
    };



static void block_490_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[14] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[15] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[19] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +5+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[4], vec_[1] +7+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +6+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +6+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +5+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[19] +4+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +7+d_[0]+d_[4]);
	uint64_t out_16 = MAP_Explorer::max2(out_20 +2+d_[8], vec_[16] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_20 +4+d_[8], vec_[16] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +6+d_[8]+d_[12], vec_[16] +5+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_15 = out_17 -1;
	uint64_t out_37 = out_17 +1+d_[12];
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_14 = out_15 +1+d_[12];


	vec_[10] = out_10;
	vec_[20] = out_20;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_490{
    490,
    23696,
    23756,
    true,
    block_490_fn
    };



static void block_493_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_493{
    493,
    29548,
    29552,
    true,
    block_493_fn
    };



static void block_494_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[3], vec_[1] +7+d_[3]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +6+d_[3]);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +6+d_[3]);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +5);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +5+d_[3]);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +7+d_[0]+d_[3]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +4+d_[0]);
	uint64_t out_15 = out_20 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_20 +2+d_[7], vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_20 +5+d_[7]+d_[11], vec_[14] +4+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[15];
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_18 -3;
	uint64_t out_14 = out_17 +1;
	uint64_t out_1 = out_14 +1+d_[15];
	uint64_t out_0 = out_1 -1;


	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_494{
    494,
    29556,
    29616,
    true,
    block_494_fn
    };



static void block_522_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], 1+d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(d_[4]+d_[7], d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, t_1);
	uint64_t t_3 = MAP_Explorer::max2(t_2, 1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(d_[14], 1+d_[10]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_0 = out_19 +4+t_3+t_4;
	uint64_t out_3 = out_19 +6+d_[10]+d_[13]+t_3;
	uint64_t out_20 = out_19 +5+d_[10]+t_3;
	uint64_t out_37 = out_19 +5+t_3;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +6+t_3+t_4, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_522{
    522,
    48328,
    48368,
    true,
    block_522_fn
    };



static void block_298_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_20 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_298{
    298,
    44460,
    44472,
    true,
    block_298_fn
    };



static void block_299_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[20] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_18 = out_37;
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_299{
    299,
    44488,
    44504,
    true,
    block_299_fn
    };



static void block_498_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_498{
    498,
    27816,
    27820,
    true,
    block_498_fn
    };



static void block_312_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[4], vec_[1] +6+d_[4]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +5+d_[4]);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +4+d_[4]);
	out_32 = MAP_Explorer::max2(out_32, vec_[17] +5+d_[4]);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +6+d_[0]+d_[4]);
	uint64_t out_21 = out_32 +1;
	uint64_t out_19 = MAP_Explorer::max2(out_32 +2+d_[8], vec_[4] +1);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +4+d_[8], vec_[4] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[16] +1);
	uint64_t out_10 = out_19 +1;
	uint64_t out_18 = out_33 +1;
	uint64_t out_20 = out_21 -2;
	uint64_t out_37 = out_33 +1+d_[12];
	uint64_t out_38 = out_33 +3+d_[12];
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_20 +3;
	uint64_t out_17 = out_18 +1+d_[12];
	uint64_t out_1 = out_17;


	vec_[32] = out_32;
	vec_[21] = out_21;
	vec_[19] = out_19;
	vec_[33] = out_33;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_312{
    312,
    26928,
    26984,
    true,
    block_312_fn
    };



static void block_313_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_313{
    313,
    26996,
    27000,
    true,
    block_313_fn
    };



static void block_314_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_314{
    314,
    27012,
    27016,
    true,
    block_314_fn
    };



static void block_315_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_315{
    315,
    27028,
    27028,
    true,
    block_315_fn
    };



static void block_368_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_368{
    368,
    27120,
    27120,
    true,
    block_368_fn
    };



static void block_369_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_369{
    369,
    27124,
    27124,
    true,
    block_369_fn
    };



static void block_370_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_370{
    370,
    27128,
    27128,
    true,
    block_370_fn
    };



static void block_371_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_371{
    371,
    27076,
    27076,
    true,
    block_371_fn
    };



static void block_267_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_267{
    267,
    1260,
    1264,
    true,
    block_267_fn
    };



static void block_424_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_424{
    424,
    848,
    848,
    true,
    block_424_fn
    };



static void block_435_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_6 +1, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +1+d_[4], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_14 +2+t_0, vec_[3] +1+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_14 +2+d_[5]+t_0, vec_[3] +1+d_[3]+d_[5]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[3]+d_[5]);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[5]);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[7];


	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_435{
    435,
    852,
    872,
    true,
    block_435_fn
    };



static void block_436_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_436{
    436,
    876,
    884,
    true,
    block_436_fn
    };



static void block_437_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_437{
    437,
    888,
    888,
    true,
    block_437_fn
    };



static void block_438_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_38 +1;
	uint64_t out_5 = out_17;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_17;
	uint64_t out_0 = out_17 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_438{
    438,
    892,
    908,
    true,
    block_438_fn
    };



static void block_465_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[3] +1);
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_16 = out_17 -1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_465{
    465,
    912,
    928,
    true,
    block_465_fn
    };



static void block_484_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_17 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_484{
    484,
    932,
    940,
    true,
    block_484_fn
    };



static void block_492_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[3] +1);
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_16 = out_17 -1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_492{
    492,
    944,
    960,
    true,
    block_492_fn
    };



static void block_496_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_496{
    496,
    964,
    964,
    true,
    block_496_fn
    };



static void block_497_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_497{
    497,
    968,
    984,
    true,
    block_497_fn
    };



static void block_526_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[2]+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[2]+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+d_[2]+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[4]);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[6];


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_526{
    526,
    988,
    1004,
    true,
    block_526_fn
    };



static void block_529_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_12 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_529{
    529,
    1008,
    1016,
    true,
    block_529_fn
    };



static void block_530_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_530{
    530,
    1020,
    1020,
    true,
    block_530_fn
    };



static void block_531_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[3] +1);
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_16 = out_17 -1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_531{
    531,
    1024,
    1040,
    true,
    block_531_fn
    };



static void block_532_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_19 +d_[3];
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[3], vec_[3] +1);
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_38 +1;
	uint64_t out_5 = out_17;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_17;
	uint64_t out_0 = out_17 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_532{
    532,
    1044,
    1060,
    true,
    block_532_fn
    };



static void block_533_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[12] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_533{
    533,
    1064,
    1072,
    true,
    block_533_fn
    };



static void block_536_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_19 +d_[3];
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[3], vec_[3] +1);
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_38 +1;
	uint64_t out_5 = out_17;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_17;
	uint64_t out_0 = out_17 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_536{
    536,
    1076,
    1092,
    true,
    block_536_fn
    };



static void block_537_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_537{
    537,
    1096,
    1096,
    true,
    block_537_fn
    };



static void block_538_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_538{
    538,
    1100,
    1116,
    true,
    block_538_fn
    };



static void block_540_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_540{
    540,
    828,
    828,
    true,
    block_540_fn
    };



static void block_541_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_541{
    541,
    832,
    836,
    true,
    block_541_fn
    };



static void block_542_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_542{
    542,
    840,
    844,
    true,
    block_542_fn
    };



static void block_543_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[4], vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[4]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_543{
    543,
    1120,
    1136,
    true,
    block_543_fn
    };



static void block_544_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_544{
    544,
    1140,
    1140,
    true,
    block_544_fn
    };



static void block_545_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_19 +d_[2];
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[3] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_38 +1;
	uint64_t out_5 = out_17;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_17;
	uint64_t out_0 = out_17 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_545{
    545,
    1144,
    1160,
    true,
    block_545_fn
    };



static void block_546_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_38 +1;
	uint64_t out_5 = out_17;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_17;
	uint64_t out_0 = out_17 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_546{
    546,
    1164,
    1180,
    true,
    block_546_fn
    };



static void block_547_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_547{
    547,
    27044,
    27048,
    true,
    block_547_fn
    };



static void block_548_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_548{
    548,
    27052,
    27056,
    true,
    block_548_fn
    };



static void block_549_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_549{
    549,
    1184,
    1184,
    true,
    block_549_fn
    };



static void block_550_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_5 , vec_[12] +1);
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_550{
    550,
    1192,
    1208,
    true,
    block_550_fn
    };



static void block_551_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[2];


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_551{
    551,
    1212,
    1220,
    true,
    block_551_fn
    };



static void block_552_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_3 = out_5;
	uint64_t out_4 = out_5 +4+d_[6];
	uint64_t out_37 = out_5 +2+d_[6];
	uint64_t out_38 = out_5 +3+d_[6];
	uint64_t out_14 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[6] = out_6;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_552{
    552,
    1224,
    1256,
    true,
    block_552_fn
    };



static void block_271_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_37 = out_18 -1+d_[3];
	uint64_t out_14 = MAP_Explorer::max2(out_18 +d_[3], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +1+d_[3], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_271{
    271,
    1268,
    1284,
    true,
    block_271_fn
    };



static void block_478_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[5], vec_[14] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_19 +d_[5];
	uint64_t out_37 = out_38 -1;
	uint64_t out_25 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_478{
    478,
    27788,
    27820,
    true,
    block_478_fn
    };



static void block_408_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 +2+d_[4];


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_408{
    408,
    48780,
    48796,
    true,
    block_408_fn
    };



static void block_337_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_21 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_21 -1;
	uint64_t out_1 = out_38 -1;


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_337{
    337,
    44572,
    44580,
    true,
    block_337_fn
    };



static void block_338_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_338{
    338,
    44584,
    44588,
    true,
    block_338_fn
    };



static void block_340_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_14 +1, vec_[21] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +4+d_[3], vec_[12] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[18] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +5+d_[3]+d_[7], vec_[12] +3+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +6+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +6+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_17 +3+d_[3], vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +4);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +2+d_[3], vec_[15] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +3);
	uint64_t out_16 = out_19 +2;


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_340{
    340,
    44596,
    44636,
    true,
    block_340_fn
    };



static void block_273_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1+d_[2], vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = out_37 +1;
	uint64_t out_2 = out_4;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_273{
    273,
    1288,
    1304,
    true,
    block_273_fn
    };



static void block_272_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_272{
    272,
    1312,
    1312,
    true,
    block_272_fn
    };



static void block_556_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(d_[13], d_[9]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[9]);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +5);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +4);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +5);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_16 +1+d_[7]+d_[9]+t_0, vec_[19] +2+d_[5]+d_[7]+d_[9]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +1+d_[7]+t_0+t_1, vec_[19] +2+d_[5]+d_[7]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +2+d_[7]+t_0+t_2, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+d_[5]+d_[7]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_18 -1+d_[11];
	uint64_t out_14 = out_15 -1;
	uint64_t out_19 = out_37 +1;


	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_556{
    556,
    15916,
    15956,
    true,
    block_556_fn
    };



static void block_297_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_13 = MAP_Explorer::max2(out_17 +1, vec_[13] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +3, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[20] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +3+d_[5], vec_[13] +3+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_37 +1;


	vec_[17] = out_17;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_297{
    297,
    44476,
    44504,
    true,
    block_297_fn
    };



static void block_276_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_32 = out_37;
	uint64_t out_17 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_21 = out_37 +1;
	uint64_t out_38 = out_37 +d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_20 = out_21 -2;
	uint64_t out_4 = out_20 +2+d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[32] = out_32;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[20] = out_20;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_276{
    276,
    3208,
    3232,
    true,
    block_276_fn
    };



static void block_280_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[35] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_35 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[9] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[35] = out_35;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_280{
    280,
    3292,
    3304,
    true,
    block_280_fn
    };



static void block_281_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[35] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[34] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_281{
    281,
    3188,
    3196,
    true,
    block_281_fn
    };



static void block_331_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[5], d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, t_1);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(d_[10]+t_3, d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(d_[13]+t_3, t_4);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[5]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[10]+t_3);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[3]+t_7, vec_[1] +8+d_[3]+t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +7+d_[3]+t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +6+d_[3]+t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +6+t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +7+d_[3]+t_7);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +3);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +8+d_[0]+d_[3]+t_7);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[3]+d_[10]+t_3, vec_[1] +8+d_[3]+d_[10]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +7+d_[3]+d_[10]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +6+d_[3]+d_[10]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +6+d_[10]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +7+d_[3]+d_[10]+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +8+d_[0]+d_[3]+d_[10]+t_3);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[3]+t_4, vec_[1] +8+d_[3]+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +7+d_[3]+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +6+d_[3]+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[4] +6+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +7+d_[3]+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +8+d_[0]+d_[3]+t_4);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +9+d_[0]+d_[3]+t_6, vec_[1] +9+d_[3]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +8+d_[3]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +7+d_[3]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +7+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +8+d_[3]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +9+d_[0]+d_[3]+t_6);
	uint64_t out_18 = out_0 +1+d_[15];
	uint64_t out_38 = out_0 +2+d_[15];
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;


	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_331{
    331,
    4500,
    4556,
    true,
    block_331_fn
    };



static void block_401_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_21 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_21 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_401{
    401,
    48464,
    48476,
    true,
    block_401_fn
    };



static void block_402_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_402{
    402,
    48480,
    48484,
    true,
    block_402_fn
    };



static void block_330_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_18 = out_37 +2;
	uint64_t out_38 = out_37 +1+t_0;
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_18 -1;
	uint64_t out_0 = out_16 -2+d_[3];
	uint64_t out_1 = out_16 -1+t_0;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_330{
    330,
    3588,
    3600,
    true,
    block_330_fn
    };



static void block_403_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_403{
    403,
    48488,
    48496,
    true,
    block_403_fn
    };



static void block_404_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +2);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_404{
    404,
    48500,
    48512,
    true,
    block_404_fn
    };



static void block_332_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[12], d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[9]+d_[11]);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +4+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +4);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +4+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_16 = out_17 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_17 +2, vec_[23] +2);
	uint64_t out_21 = MAP_Explorer::max2(out_17 +1+d_[6], vec_[23] +2);
	uint64_t out_15 = out_21 +3+t_1;
	uint64_t out_37 = out_21 +4+t_1;
	uint64_t out_38 = out_21 +5+d_[17]+t_1;
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_15 +1+d_[17];
	uint64_t out_3 = out_15 +2+d_[16];
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_332{
    332,
    3528,
    3584,
    true,
    block_332_fn
    };



static void block_405_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[6], d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(t_1, t_0);
	uint64_t t_3 = MAP_Explorer::max2(7+d_[10]+d_[14]+t_2, t_0);
	uint64_t t_4 = MAP_Explorer::max2(d_[16]+t_3, 7+d_[10]+t_2);
	uint64_t t_5 = MAP_Explorer::max2(t_4, 1+t_0);
	uint64_t t_6 = MAP_Explorer::max2(d_[18]+t_5, 7+d_[10]+t_2);
	uint64_t t_7 = MAP_Explorer::max2(d_[21]+t_3, t_5);
	uint64_t t_8 = MAP_Explorer::max2(d_[21], d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, t_6);
	uint64_t t_10 = MAP_Explorer::max2(1+t_8, d_[16]+d_[18]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_9, d_[20]+t_6);
	uint64_t t_12 = MAP_Explorer::max2(1+t_10, d_[16]+d_[18]+d_[20]);
	uint64_t t_13 = MAP_Explorer::max2(d_[22]+t_11, 7+d_[10]+t_2);
	uint64_t t_14 = MAP_Explorer::max2(d_[24]+t_13, 7+d_[10]+t_2);
	uint64_t t_15 = MAP_Explorer::max2(d_[26]+t_14, 7+d_[10]+t_2);
	uint64_t t_16 = MAP_Explorer::max2(d_[29]+t_13, t_14);
	uint64_t t_17 = MAP_Explorer::max2(d_[29], d_[24]);
	uint64_t t_18 = MAP_Explorer::max2(1+t_16, t_15);
	uint64_t t_19 = MAP_Explorer::max2(1+t_17, d_[24]+d_[26]);
	uint64_t t_20 = MAP_Explorer::max2(1+t_18, d_[28]+t_15);
	uint64_t t_21 = MAP_Explorer::max2(1+t_19, d_[24]+d_[26]+d_[28]);
	uint64_t t_22 = MAP_Explorer::max2(d_[30]+t_20, 7+d_[10]+t_2);
	uint64_t t_23 = MAP_Explorer::max2(t_22, 5+d_[10]+d_[14]+t_2);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_11 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_11 = MAP_Explorer::max2(out_11, vec_[2] +3+t_0);
	out_11 = MAP_Explorer::max2(out_11, vec_[3] +1+t_0);
	out_11 = MAP_Explorer::max2(out_11, vec_[4] +3);
	out_11 = MAP_Explorer::max2(out_11, vec_[6] +3+t_0);
	out_11 = MAP_Explorer::max2(out_11, vec_[12] +2+t_0);
	out_11 = MAP_Explorer::max2(out_11, vec_[15] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_22, vec_[1] +5+d_[1]+t_22);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +5+t_22);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +3+t_22);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +11+d_[6]+d_[10]+d_[14]+d_[22]+d_[30]+t_12+t_21);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +5+t_22);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +4+t_22);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +10+d_[6]+d_[10]+d_[14]+d_[22]+d_[30]+t_12+t_21);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +3+d_[22]+d_[30]+t_12+t_21);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +4+d_[22]+d_[30]+t_12+t_21);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +5+d_[0]+d_[1]+t_22);
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_2, vec_[1] +5+d_[1]+t_2);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +5+t_2);
	out_35 = MAP_Explorer::max2(out_35, vec_[3] +3+t_2);
	out_35 = MAP_Explorer::max2(out_35, vec_[4] +4+d_[6]);
	out_35 = MAP_Explorer::max2(out_35, vec_[6] +5+t_2);
	out_35 = MAP_Explorer::max2(out_35, vec_[12] +4+t_2);
	out_35 = MAP_Explorer::max2(out_35, vec_[15] +3+d_[6]);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +5+d_[0]+d_[1]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_20, vec_[1] +5+d_[1]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +11+d_[6]+d_[10]+d_[14]+d_[22]+t_12+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +5+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +4+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +10+d_[6]+d_[10]+d_[14]+d_[22]+t_12+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3+d_[22]+t_12+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +4+d_[22]+t_12+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[1]+t_20);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1]+t_23, vec_[1] +6+d_[1]+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +6+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +12+d_[6]+d_[10]+d_[14]+d_[22]+d_[30]+t_12+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +5+t_23);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +11+d_[6]+d_[10]+d_[14]+d_[22]+d_[30]+t_12+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[22]+d_[30]+t_12+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +5+d_[22]+d_[30]+t_12+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+d_[1]+t_23);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_15 -1+d_[32];
	uint64_t out_9 = out_11 +1;
	uint64_t out_34 = out_35 +1;
	uint64_t out_18 = MAP_Explorer::max2(out_35 +5+d_[10], vec_[18] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_35 +5+d_[10]+d_[14], vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_33 = out_34 +1;
	uint64_t out_32 = out_33 +1;
	uint64_t out_20 = out_32 +1+d_[10];
	uint64_t out_17 = out_20 +1;
	uint64_t out_10 = out_17 -2;


	vec_[6] = out_6;
	vec_[11] = out_11;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[34] = out_34;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[33] = out_33;
	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[17] = out_17;
	vec_[10] = out_10;
}

extern const MAP_Explorer::Block block_405{
    405,
    48668,
    48764,
    true,
    block_405_fn
    };



static void block_407_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_407{
    407,
    48768,
    48776,
    true,
    block_407_fn
    };



static void block_409_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]);
	uint64_t out_37 = out_19 +d_[4];
	uint64_t out_15 = MAP_Explorer::max2(out_19 +1+d_[4], vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[4], vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_409{
    409,
    48800,
    48824,
    true,
    block_409_fn
    };



static void block_410_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_12;
	uint64_t out_6 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_6 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_410{
    410,
    48828,
    48836,
    true,
    block_410_fn
    };



static void block_354_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_354{
    354,
    30168,
    30172,
    true,
    block_354_fn
    };



static void block_355_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_355{
    355,
    31852,
    31860,
    true,
    block_355_fn
    };



static void block_356_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_19 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_356{
    356,
    31864,
    31868,
    true,
    block_356_fn
    };



static void block_357_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[2], vec_[1] +6+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +5+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +5+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +6+d_[0]+d_[2]);
	uint64_t out_37 = out_19 +d_[6];
	uint64_t out_14 = MAP_Explorer::max2(out_19 +2+d_[6], vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[6], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_3 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_3;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_357{
    357,
    31816,
    31848,
    true,
    block_357_fn
    };



static void block_358_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +4+d_[4], vec_[4] +4+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_358{
    358,
    30176,
    30204,
    true,
    block_358_fn
    };



static void block_359_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_18 +1, vec_[17] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1+d_[3], vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_19 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_359{
    359,
    30372,
    30392,
    true,
    block_359_fn
    };



static void block_353_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_353{
    353,
    30164,
    30164,
    true,
    block_353_fn
    };



static void block_352_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3], vec_[1] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_23 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_352{
    352,
    29620,
    29636,
    true,
    block_352_fn
    };



static void block_635_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_19 = out_23;
	uint64_t out_3 = out_23;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_23 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_635{
    635,
    52596,
    52604,
    true,
    block_635_fn
    };



static void block_636_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_636{
    636,
    52592,
    52592,
    true,
    block_636_fn
    };



static void block_187_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_187{
    187,
    48196,
    48196,
    true,
    block_187_fn
    };



static void block_189_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_189{
    189,
    48240,
    48244,
    true,
    block_189_fn
    };



static void block_430_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_20 +1, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[16] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_0 = out_19 +d_[5];
	uint64_t out_3 = out_19 +2+d_[4];


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_430{
    430,
    48528,
    48544,
    true,
    block_430_fn
    };



static void block_290_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_290{
    290,
    3376,
    3376,
    true,
    block_290_fn
    };



static void block_291_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(3, d_[8]);
	uint64_t t_6 = MAP_Explorer::max2(2+d_[13], d_[8]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[12]+t_3+t_5, vec_[3] +d_[12]+t_3+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[12]+t_3+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[12]+t_4+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +3+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[6]+d_[12]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[12]+t_5);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_3+t_6, vec_[3] +1+t_3+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_3+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_4+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +3+d_[13]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[13]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[6]+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_6);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+t_3, vec_[3] +1+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[13], vec_[5] +1);
	uint64_t out_12 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_291{
    291,
    44144,
    44176,
    true,
    block_291_fn
    };



static void block_292_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8], d_[5]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_17 +1+d_[3]+d_[5]+d_[7], vec_[3] +d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[5]+d_[7]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +3+t_1, vec_[3] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_12 = out_38 -1;
	uint64_t out_20 = out_37 -1;
	uint64_t out_1 = out_12;
	uint64_t out_0 = out_12 -1;


	vec_[6] = out_6;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[12] = out_12;
	vec_[20] = out_20;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_292{
    292,
    44316,
    44348,
    true,
    block_292_fn
    };



static void block_293_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_293{
    293,
    44352,
    44360,
    true,
    block_293_fn
    };



static void block_294_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+t_0, vec_[1] +2+d_[3]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_0 = out_13 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_13 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_294{
    294,
    44364,
    44376,
    true,
    block_294_fn
    };



static void block_295_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_13 +1, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[5], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_19 +1;
	uint64_t out_17 = out_19 +1+d_[5];
	uint64_t out_37 = out_19 +d_[5];
	uint64_t out_0 = out_37;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_295{
    295,
    44380,
    44404,
    true,
    block_295_fn
    };



static void block_300_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_20 = out_37 -1;
	uint64_t out_4 = out_20 +3;
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_300{
    300,
    44508,
    44524,
    true,
    block_300_fn
    };



static void block_304_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_304{
    304,
    44640,
    44644,
    true,
    block_304_fn
    };



static void block_306_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_23 +2+d_[3], vec_[13] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[3]);
	uint64_t out_16 = MAP_Explorer::max2(out_23 +2, vec_[13] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_23 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +4+d_[3], vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[3]);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[23] = out_23;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_306{
    306,
    44180,
    44204,
    true,
    block_306_fn
    };



static void block_307_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +4+d_[3]);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_15 +2, vec_[17] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +2+d_[7], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_20 -1;
	uint64_t out_37 = out_20 +d_[7];
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_19 +2+d_[7];


	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_307{
    307,
    30628,
    30664,
    true,
    block_307_fn
    };



static void block_308_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -2+d_[2];
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_308{
    308,
    30680,
    30688,
    true,
    block_308_fn
    };



static void block_309_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_309{
    309,
    30700,
    30700,
    true,
    block_309_fn
    };



static void block_310_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_310{
    310,
    44208,
    44208,
    true,
    block_310_fn
    };



static void block_311_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_14 +1, vec_[12] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_15 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +1+d_[3], vec_[4] +2);
	uint64_t out_17 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_311{
    311,
    44212,
    44228,
    true,
    block_311_fn
    };



static void block_316_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_316{
    316,
    27032,
    27036,
    true,
    block_316_fn
    };



static void block_317_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_317{
    317,
    27060,
    27060,
    true,
    block_317_fn
    };



static void block_318_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_318{
    318,
    27064,
    27068,
    true,
    block_318_fn
    };



static void block_319_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_319{
    319,
    27140,
    27144,
    true,
    block_319_fn
    };



static void block_320_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_320{
    320,
    44232,
    44232,
    true,
    block_320_fn
    };



static void block_321_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_12 = out_13 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_13 , vec_[23] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_14 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_14 +3+d_[5], vec_[22] +4);
	uint64_t out_22 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_23 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_321{
    321,
    44236,
    44268,
    true,
    block_321_fn
    };



static void block_322_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_322{
    322,
    3380,
    3380,
    true,
    block_322_fn
    };



static void block_329_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[8], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(5+d_[13]+t_0+t_1, d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(3+d_[13], d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(2+t_0+t_1+t_4, d_[1]);
	uint64_t t_6 = MAP_Explorer::max2(t_3, t_5);
	uint64_t t_7 = MAP_Explorer::max2(d_[18]+t_6, 2+t_0+t_1);
	uint64_t t_8 = MAP_Explorer::max2(4+d_[18]+t_6, d_[14]+t_5);
	uint64_t t_9 = MAP_Explorer::max2(t_8, 6+t_0+t_1);
	uint64_t t_10 = MAP_Explorer::max2(4+d_[18], d_[14]);
	uint64_t t_11 = MAP_Explorer::max2(4+t_7, t_9);
	uint64_t t_12 = MAP_Explorer::max2(2+t_11, d_[20]+t_9);
	uint64_t t_13 = MAP_Explorer::max2(2, d_[20]);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[24]+t_11, t_12);
	uint64_t t_15 = MAP_Explorer::max2(1+d_[24], d_[20]);
	uint64_t t_16 = MAP_Explorer::max2(1+t_14, d_[23]+t_12);
	uint64_t t_17 = MAP_Explorer::max2(1+t_15, d_[23]+t_13);
	uint64_t t_18 = MAP_Explorer::max2(d_[32], d_[27]);
	uint64_t t_19 = MAP_Explorer::max2(1+t_18, d_[27]+d_[29]);
	uint64_t t_20 = MAP_Explorer::max2(1+t_19, d_[27]+d_[29]+d_[31]);
	uint64_t t_21 = MAP_Explorer::max2(d_[40], d_[35]);
	uint64_t t_22 = MAP_Explorer::max2(1+t_21, d_[35]+d_[37]);
	uint64_t t_23 = MAP_Explorer::max2(1+t_22, d_[35]+d_[37]+d_[39]);
	uint64_t t_24 = MAP_Explorer::max2(d_[25]+d_[33]+t_16+t_20+t_23, 3+d_[18]+t_6);
	uint64_t t_25 = MAP_Explorer::max2(d_[25]+d_[33]+t_10+t_17+t_20+t_23, 3+d_[18]);
	uint64_t t_26 = MAP_Explorer::max2(d_[25]+d_[33]+d_[41]+t_16+t_20+t_23, 4+d_[18]+t_6);
	uint64_t t_27 = MAP_Explorer::max2(d_[25]+d_[33]+d_[41]+t_10+t_17+t_20+t_23, 4+d_[18]);
	uint64_t t_28 = MAP_Explorer::max2(1+d_[25]+d_[33]+t_16+t_20+t_22, t_24);
	uint64_t t_29 = MAP_Explorer::max2(1+d_[25]+d_[33]+t_10+t_17+t_20+t_22, t_25);
	uint64_t t_30 = MAP_Explorer::max2(1+t_28, t_26);
	uint64_t t_31 = MAP_Explorer::max2(1+t_29, t_27);
	uint64_t t_32 = MAP_Explorer::max2(2+t_30, d_[43]+t_26);
	uint64_t t_33 = MAP_Explorer::max2(2+t_31, d_[43]+t_27);
	uint64_t t_34 = MAP_Explorer::max2(2, d_[43]);
	uint64_t t_35 = MAP_Explorer::max2(1+d_[47]+t_30, t_32);
	uint64_t t_36 = MAP_Explorer::max2(t_35, 4+t_0+t_1);
	uint64_t t_37 = MAP_Explorer::max2(1+d_[47]+t_31, t_33);
	uint64_t t_38 = MAP_Explorer::max2(1+d_[47], d_[43]);
	uint64_t t_39 = MAP_Explorer::max2(1+t_35, d_[46]+t_32);
	uint64_t t_40 = MAP_Explorer::max2(t_39, 5+t_0+t_1);
	uint64_t t_41 = MAP_Explorer::max2(1+t_37, d_[46]+t_33);
	uint64_t t_42 = MAP_Explorer::max2(1+t_38, d_[46]+t_34);
	uint64_t t_43 = MAP_Explorer::max2(1+t_36, t_40);
	uint64_t t_44 = MAP_Explorer::max2(1+t_43, d_[48]+t_40);
	uint64_t t_45 = MAP_Explorer::max2(2+d_[50]+t_44, d_[1]);
	uint64_t t_46 = MAP_Explorer::max2(2+d_[54]+t_44, t_45);
	uint64_t t_47 = MAP_Explorer::max2(d_[54], d_[50]);
	uint64_t t_48 = MAP_Explorer::max2(1+t_46, d_[1]);
	uint64_t t_49 = MAP_Explorer::max2(t_46, d_[50]+d_[52]+t_44);
	uint64_t t_50 = MAP_Explorer::max2(1+t_49, d_[1]);
	uint64_t t_51 = MAP_Explorer::max2(2+t_47, d_[50]+d_[52]);
	uint64_t t_52 = MAP_Explorer::max2(1+d_[54], d_[52]);
	uint64_t t_53 = MAP_Explorer::max2(t_48, t_50);
	uint64_t t_54 = MAP_Explorer::max2(1+t_53, d_[55]+t_50);
	uint64_t t_55 = MAP_Explorer::max2(d_[55]+t_51, 2+d_[50]);
	uint64_t t_56 = MAP_Explorer::max2(d_[60], d_[57]);
	uint64_t t_57 = MAP_Explorer::max2(1+t_56, d_[57]);
	uint64_t t_58 = MAP_Explorer::max2(1+d_[64]+t_57, d_[57]);
	uint64_t t_59 = MAP_Explorer::max2(1+t_58, d_[57]);
	uint64_t t_60 = MAP_Explorer::max2(d_[70], d_[67]);
	uint64_t t_61 = MAP_Explorer::max2(1+t_60, d_[67]+d_[69]);
	uint64_t t_62 = MAP_Explorer::max2(2+t_59+t_61, t_56);
	uint64_t t_63 = MAP_Explorer::max2(1+d_[75]+t_62, t_57);
	uint64_t t_64 = MAP_Explorer::max2(t_63, 2+t_57);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_0+t_1, vec_[1] +7+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +2+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +3+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +4+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[13] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[14] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +7+d_[0]+t_0+t_1);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[57]+t_54, vec_[1] +4+d_[57]+t_54);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[57]+t_54);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+d_[48]+d_[57]+t_2+t_4+t_41+t_55);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +5+d_[25]+d_[33]+d_[41]+d_[48]+d_[57]+t_17+t_20+t_23+t_42+t_55);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[48]+d_[57]+t_1+t_4+t_41+t_55);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +4+d_[48]+d_[57]+t_1+t_4+t_41+t_55);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+d_[57]+t_54);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +3+d_[57]+t_54);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+d_[57]+t_55);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +3+d_[55]+d_[57]+t_52);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]+d_[57]+t_54);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_54+t_59+t_61, vec_[1] +7+t_54+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +6+t_54+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +5+d_[48]+t_2+t_4+t_41+t_55+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +8+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +6+d_[48]+t_1+t_4+t_41+t_55+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +7+d_[48]+t_1+t_4+t_41+t_55+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +6+t_54+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +6+t_54+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +5+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +6+t_55+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[27] +6+d_[55]+t_52+t_59+t_61);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +7+d_[0]+t_54+t_59+t_61);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_54+t_56, vec_[1] +5+t_54+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +4+t_54+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +3+d_[48]+t_2+t_4+t_41+t_55+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +6+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +4+d_[48]+t_1+t_4+t_41+t_55+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +5+d_[48]+t_1+t_4+t_41+t_55+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +4+t_54+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +4+t_54+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +4+t_55+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[27] +4+d_[55]+t_52+t_56);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +5+d_[0]+t_54+t_56);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_54+t_57, vec_[1] +5+t_54+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +4+t_54+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +3+d_[48]+t_2+t_4+t_41+t_55+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +6+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +4+d_[48]+t_1+t_4+t_41+t_55+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +5+d_[48]+t_1+t_4+t_41+t_55+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +4+t_54+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +4+t_54+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +4+t_55+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[27] +4+d_[55]+t_52+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +5+d_[0]+t_54+t_57);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_54+t_58, vec_[1] +5+t_54+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +4+t_54+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +3+d_[48]+t_2+t_4+t_41+t_55+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +6+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[6] +4+d_[48]+t_1+t_4+t_41+t_55+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[12] +5+d_[48]+t_1+t_4+t_41+t_55+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +4+t_54+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +4+t_54+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[24] +4+t_55+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[27] +4+d_[55]+t_52+t_58);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +5+d_[0]+t_54+t_58);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_11, vec_[1] +4+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_2+t_4+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_1+t_4+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_1+t_4+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +3+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +3+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +4+d_[0]+t_11);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_30, vec_[1] +4+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +3+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+t_2+t_4+t_31);
	out_29 = MAP_Explorer::max2(out_29, vec_[4] +4+d_[25]+d_[33]+d_[41]+t_17+t_20+t_23);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+t_1+t_4+t_31);
	out_29 = MAP_Explorer::max2(out_29, vec_[12] +3+t_1+t_4+t_31);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +3+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[14] +3+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +4+d_[0]+t_30);
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_6, vec_[1] +4+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[3] +1+t_2+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[6] +2+t_1+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[12] +3+t_1+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[13] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[14] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +4+d_[0]+t_6);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_54+t_62, vec_[1] +6+t_54+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5+t_54+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +4+d_[48]+t_2+t_4+t_41+t_55+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +7+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +5+d_[48]+t_1+t_4+t_41+t_55+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +6+d_[48]+t_1+t_4+t_41+t_55+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +5+t_54+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +5+t_54+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +6+t_61);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +5+t_55+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +5+d_[55]+t_52+t_62);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +6+d_[0]+t_54+t_62);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_54+t_64, vec_[1] +6+t_54+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_54+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+d_[48]+t_2+t_4+t_41+t_55+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +7+d_[25]+d_[33]+d_[41]+d_[48]+t_17+t_20+t_23+t_42+t_55+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+d_[48]+t_1+t_4+t_41+t_55+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +6+d_[48]+t_1+t_4+t_41+t_55+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +5+t_54+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+t_54+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +7+d_[75]+t_61);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +5+t_55+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +5+d_[55]+t_52+t_64);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_54+t_64);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[75];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[74];
	uint64_t out_9 = MAP_Explorer::max2(out_31 +2+d_[18], vec_[4] +2);
	uint64_t out_11 = MAP_Explorer::max2(out_31 +2, vec_[4] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +2, vec_[23] +2);


	vec_[10] = out_10;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[29] = out_29;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[11] = out_11;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_329{
    329,
    3384,
    3584,
    true,
    block_329_fn
    };



static void block_333_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +6+d_[0]);
	uint64_t out_19 = out_24 -3;
	uint64_t out_37 = out_24 -2+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_24 +d_[4], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_11 = out_19 +2;
	uint64_t out_12 = out_19 +3+d_[4];
	uint64_t out_3 = out_12;
	uint64_t out_9 = out_11 -1;


	vec_[24] = out_24;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[11] = out_11;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[9] = out_9;
}

extern const MAP_Explorer::Block block_333{
    333,
    4560,
    4580,
    true,
    block_333_fn
    };



static void block_334_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_24 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_334{
    334,
    4584,
    4588,
    true,
    block_334_fn
    };



static void block_372_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_372{
    372,
    27080,
    27080,
    true,
    block_372_fn
    };



static void block_373_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_373{
    373,
    27084,
    27084,
    true,
    block_373_fn
    };



static void block_374_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[33] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_374{
    374,
    27088,
    27088,
    true,
    block_374_fn
    };



static void block_375_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[33] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_375{
    375,
    27092,
    27096,
    true,
    block_375_fn
    };



static void block_376_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_376{
    376,
    27072,
    27072,
    true,
    block_376_fn
    };



static void block_196_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_196{
    196,
    48452,
    48452,
    true,
    block_196_fn
    };



static void block_428_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_428{
    428,
    6868,
    6868,
    true,
    block_428_fn
    };



static void block_190_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_190{
    190,
    48292,
    48300,
    true,
    block_190_fn
    };



static void block_191_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[14], 1+d_[10]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10]+d_[13], d_[14]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, t_1);
	uint64_t t_3 = MAP_Explorer::max2(t_2, 1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(d_[20], 1+d_[16]);

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +4+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +1, vec_[14] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_21 +4+d_[4], vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +4);
	uint64_t out_19 = MAP_Explorer::max2(out_21 +4+d_[4]+d_[8], vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +5+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +4+d_[8]);
	uint64_t out_1 = out_19 +5+t_3+t_4;
	uint64_t out_3 = out_19 +6+d_[16]+d_[19]+t_3;
	uint64_t out_20 = out_19 +5+d_[16]+t_3;
	uint64_t out_37 = out_19 +5+t_3;
	uint64_t out_38 = out_19 +6+t_3+t_4;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_191{
    191,
    48304,
    48368,
    true,
    block_191_fn
    };



static void block_192_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_20 +1, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_0 = out_18 -2+d_[3];


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_192{
    192,
    48372,
    48384,
    true,
    block_192_fn
    };



static void block_195_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_195{
    195,
    48252,
    48256,
    true,
    block_195_fn
    };



static void block_243_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[18] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +1+d_[3];


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_243{
    243,
    17196,
    17208,
    true,
    block_243_fn
    };



static void block_399_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_18;
	uint64_t out_37 = MAP_Explorer::max2(out_18 , vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[12] +2);
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_0 = out_1 -1;


	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[25] = out_25;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_399{
    399,
    3604,
    3616,
    true,
    block_399_fn
    };



static void block_400_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +1);
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_16;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_400{
    400,
    5584,
    5592,
    true,
    block_400_fn
    };



static void block_411_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[12], d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[7]+d_[9]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[7]+d_[9]+d_[11]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +3+d_[5], vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[5]);
	out_14 = MAP_Explorer::max2(out_14, vec_[25] +3+d_[5]);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +3, vec_[12] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[25] +3);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +1, vec_[25] +1);
	uint64_t out_0 = out_14 +1+t_1;
	uint64_t out_5 = out_14 +2+t_2;
	uint64_t out_15 = out_16 -1;
	uint64_t out_37 = out_14 +2+t_0;
	uint64_t out_38 = out_14 +2+t_1;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[13];


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_411{
    411,
    5596,
    5636,
    true,
    block_411_fn
    };



static void block_412_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[2]);
	uint64_t out_32 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[16] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[22] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_32 +1+d_[5], vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_21 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_38 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_32 +1, vec_[4] +1);
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_22 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[21] = out_21;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_412{
    412,
    2000,
    2024,
    true,
    block_412_fn
    };



static void block_413_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[21] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1+d_[5], vec_[32] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_14 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_37 +1;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_413{
    413,
    2028,
    2056,
    true,
    block_413_fn
    };



static void block_414_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_414{
    414,
    2060,
    2060,
    true,
    block_414_fn
    };



static void block_415_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[19] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +5+d_[0]);
	uint64_t out_17 = out_20 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_20 +1+d_[4], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_3 = out_19;
	uint64_t out_1 = out_14;
	uint64_t out_0 = out_14 -1;


	vec_[20] = out_20;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_415{
    415,
    2064,
    2092,
    true,
    block_415_fn
    };



static void block_420_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_22;
	uint64_t out_37 = MAP_Explorer::max2(out_22 , vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	uint64_t out_16 = out_37;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[22] = out_22;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_420{
    420,
    2116,
    2128,
    true,
    block_420_fn
    };



static void block_421_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_421{
    421,
    5640,
    5640,
    true,
    block_421_fn
    };



static void block_515_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[7]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_19 +1;
	uint64_t out_17 = MAP_Explorer::max2(out_19 +2, vec_[4] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[30] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +4+d_[4], vec_[4] +4+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +4);
	uint64_t out_16 = out_37 -1;
	uint64_t out_38 = out_37 +d_[10];
	uint64_t out_15 = out_16 -1;
	uint64_t out_0 = out_15 +1+d_[10];
	uint64_t out_3 = out_15 +2+d_[7]+d_[9];
	uint64_t out_5 = out_15 +3+t_0;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_515{
    515,
    4464,
    4496,
    true,
    block_515_fn
    };



static void block_516_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_516{
    516,
    2444,
    2444,
    true,
    block_516_fn
    };



static void block_517_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(d_[14], d_[10]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[8]+d_[10]+d_[12]+t_3, vec_[3] +d_[8]+d_[10]+d_[12]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[8]+d_[10]+d_[12]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+d_[10]+d_[12]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[6]+d_[8]+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[8]+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[12]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +3+d_[8]+t_3+t_5, vec_[3] +2+d_[8]+t_3+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[8]+t_3+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+d_[8]+t_4+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+d_[6]+d_[8]+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+d_[8]+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +2+d_[14]);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+d_[8]+d_[10]+t_3, vec_[3] +1+d_[8]+d_[10]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+d_[10]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[8]+d_[10]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[8]+d_[10]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[6]+d_[8]+d_[10]);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+d_[8]+d_[10]);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_23 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = out_37 +1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_517{
    517,
    2448,
    2492,
    true,
    block_517_fn
    };



static void block_518_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_24 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_518{
    518,
    2496,
    2500,
    true,
    block_518_fn
    };



static void block_519_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_519{
    519,
    2856,
    2856,
    true,
    block_519_fn
    };



static void block_520_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(6+d_[2]+d_[6]+d_[10], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(7+d_[6]+d_[10], d_[1]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +8+d_[6]+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +4+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +5+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[25] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+t_0);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[11];
	uint64_t out_12 = out_25 +1;
	uint64_t out_16 = MAP_Explorer::max2(out_25 +3+d_[6], vec_[17] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +3);
	uint64_t out_23 = MAP_Explorer::max2(out_25 +1+d_[6], vec_[23] +1);
	uint64_t out_15 = out_16 +1;
	uint64_t out_37 = out_16 +d_[10];
	uint64_t out_38 = out_16 +1+d_[10];
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_15 -2;


	vec_[5] = out_5;
	vec_[25] = out_25;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[23] = out_23;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_520{
    520,
    2860,
    2900,
    true,
    block_520_fn
    };



static void block_521_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[22] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_521{
    521,
    2904,
    2920,
    true,
    block_521_fn
    };



static void block_524_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_25 = MAP_Explorer::max2(out_17 +3, vec_[25] +3);
	uint64_t out_14 = out_25 -2;
	uint64_t out_16 = MAP_Explorer::max2(out_25 -1+d_[5], vec_[23] +1);
	uint64_t out_15 = out_16 +1;
	uint64_t out_22 = out_16 +5+d_[9];
	uint64_t out_23 = out_16 +6+d_[9];
	uint64_t out_24 = out_16 +7+d_[9];
	uint64_t out_37 = out_16 +5+d_[9]+d_[13];
	uint64_t out_38 = out_16 +6+d_[9]+d_[13];
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_24;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_15 +2;
	uint64_t out_13 = out_15 +3+d_[9];
	uint64_t out_5 = out_12 +1;
	uint64_t out_4 = out_5 +3+d_[9]+d_[13];
	uint64_t out_2 = out_4;


	vec_[17] = out_17;
	vec_[25] = out_25;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_524{
    524,
    2924,
    2980,
    true,
    block_524_fn
    };



static void block_335_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_23 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_335{
    335,
    3356,
    3372,
    true,
    block_335_fn
    };



static void block_136_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_18 = out_25;
	uint64_t out_3 = out_25;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_25 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_136{
    136,
    63140,
    63148,
    true,
    block_136_fn
    };



static void block_698_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_18 = out_19;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[17] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +1+d_[3];


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_698{
    698,
    17000,
    17012,
    true,
    block_698_fn
    };



static void block_137_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_137{
    137,
    63136,
    63136,
    true,
    block_137_fn
    };



static void block_433_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_433{
    433,
    48580,
    48584,
    true,
    block_433_fn
    };



static void block_434_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_434{
    434,
    48664,
    48664,
    true,
    block_434_fn
    };



static void block_361_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_361{
    361,
    29368,
    29376,
    true,
    block_361_fn
    };



static void block_362_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_18 +1;
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[3], vec_[19] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_362{
    362,
    29380,
    29396,
    true,
    block_362_fn
    };



static void block_382_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_382{
    382,
    23336,
    23336,
    true,
    block_382_fn
    };



static void block_193_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +4+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_20 +d_[3], vec_[17] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_20 +3+d_[3], vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +4);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +5+d_[3]+d_[7], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +5+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +6+d_[7]);
	uint64_t out_17 = out_21;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_37 +1;
	uint64_t out_3 = out_37 +1+d_[9];


	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_193{
    193,
    48388,
    48424,
    true,
    block_193_fn
    };



static void block_194_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_194{
    194,
    48428,
    48436,
    true,
    block_194_fn
    };



static void block_296_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[17] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[18] +2+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = out_23 +1;
	uint64_t out_17 = MAP_Explorer::max2(out_23 +4+d_[6], vec_[4] +3);
	uint64_t out_16 = out_17 +1;
	uint64_t out_18 = out_19 +1;
	uint64_t out_37 = out_17 +2+d_[10];
	uint64_t out_38 = out_17 +4+d_[10];
	uint64_t out_20 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_16 +1;
	uint64_t out_15 = out_16 +2+d_[10];
	uint64_t out_1 = out_15;
	uint64_t out_13 = out_14 -3;


	vec_[23] = out_23;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[20] = out_20;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_296{
    296,
    44424,
    44472,
    true,
    block_296_fn
    };



static void block_305_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +3, vec_[23] +3);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +4+d_[6], vec_[3] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +4);
	uint64_t out_22 = out_23 -2;
	uint64_t out_37 = out_23 +2+d_[10]+d_[14];
	uint64_t out_38 = out_23 +3+d_[10]+d_[14];
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_22 +4+d_[10];
	uint64_t out_12 = out_15;
	uint64_t out_14 = out_15 -2;
	uint64_t out_5 = out_14;
	uint64_t out_4 = out_14 +4+d_[14];
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_305{
    305,
    44648,
    44712,
    true,
    block_305_fn
    };



static void block_336_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[2]+d_[6], vec_[1] +6+d_[2]+d_[6]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +5+d_[2]+d_[6]);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[17] +5+d_[6]);
	out_23 = MAP_Explorer::max2(out_23, vec_[18] +5+d_[2]+d_[6]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +6+d_[0]+d_[2]+d_[6]);
	uint64_t out_19 = out_23 +1;
	uint64_t out_17 = MAP_Explorer::max2(out_23 +4+d_[10], vec_[4] +3);
	uint64_t out_16 = out_17 +1;
	uint64_t out_18 = out_19 +1;
	uint64_t out_37 = out_17 +2+d_[14];
	uint64_t out_38 = out_17 +4+d_[14];
	uint64_t out_20 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_16 +1;
	uint64_t out_15 = out_16 +2+d_[14];
	uint64_t out_1 = out_15;
	uint64_t out_13 = out_14 -3;


	vec_[23] = out_23;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[20] = out_20;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_336{
    336,
    44408,
    44472,
    true,
    block_336_fn
    };



static void block_339_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_14 +1, vec_[21] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +4+d_[4], vec_[12] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[18] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +5+d_[4]+d_[8], vec_[12] +3+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +6+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +6+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_17 +3+d_[4], vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +4);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +2+d_[4], vec_[15] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +3);
	uint64_t out_16 = out_19 +2;


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_339{
    339,
    44592,
    44636,
    true,
    block_339_fn
    };



static void block_341_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[8]+t_0, d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(4+d_[8], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[12]+d_[13]+t_1, t_0);
	uint64_t t_4 = MAP_Explorer::max2(d_[12]+d_[13]+d_[15]+t_1, t_0);
	uint64_t t_5 = MAP_Explorer::max2(t_3, t_4);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, t_0);
	uint64_t t_7 = MAP_Explorer::max2(d_[18]+t_3, t_6);
	uint64_t t_8 = MAP_Explorer::max2(d_[18], d_[15]);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_1, vec_[1] +6+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +5+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +4+d_[1]+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +5+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +5+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[25] +5+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +6+d_[0]+t_1);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_0, vec_[1] +6+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +4+d_[1]);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +6+d_[0]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_4, vec_[1] +6+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +5+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +4+d_[1]+d_[12]+d_[13]+d_[15]+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +5+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +5+t_4);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +5+d_[12]+d_[13]+d_[15]+t_2);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[13]+d_[15]);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+d_[15]);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +6+d_[0]+t_4);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_6, vec_[1] +6+t_6);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +5+t_6);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +5+d_[1]+d_[12]+d_[13]+d_[15]+t_2);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +5+t_6);
	out_27 = MAP_Explorer::max2(out_27, vec_[24] +5+t_6);
	out_27 = MAP_Explorer::max2(out_27, vec_[25] +6+d_[12]+d_[13]+d_[15]+t_2);
	out_27 = MAP_Explorer::max2(out_27, vec_[26] +3+d_[13]+d_[15]);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +3+d_[15]);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +6+d_[0]+t_6);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_3, vec_[1] +5+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +4+d_[1]+d_[12]+d_[13]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +4+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +5+d_[12]+d_[13]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_7, vec_[1] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+d_[1]+d_[12]+d_[13]+t_2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +5+d_[12]+d_[13]+t_2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+d_[13]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+t_7);
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_16 = out_17 -1;
	uint64_t out_24 = out_25 -2;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_15 = out_16 -1;
	uint64_t out_14 = out_15 -1;


	vec_[17] = out_17;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_341{
    341,
    44872,
    44928,
    true,
    block_341_fn
    };



static void block_349_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_349{
    349,
    29716,
    29724,
    true,
    block_349_fn
    };



static void block_350_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_350{
    350,
    29708,
    29712,
    true,
    block_350_fn
    };



static void block_351_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +3+d_[2], vec_[17] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_17 = out_18 -3;
	uint64_t out_14 = out_17 +1;
	uint64_t out_0 = out_14 +d_[6];


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[14] = out_14;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_351{
    351,
    29592,
    29616,
    true,
    block_351_fn
    };



static void block_364_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_364{
    364,
    30476,
    30484,
    true,
    block_364_fn
    };



static void block_365_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +1+d_[6], vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_365{
    365,
    30488,
    30520,
    true,
    block_365_fn
    };



static void block_367_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +1, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +d_[3], vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[27] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_17 +1, vec_[26] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_367{
    367,
    44932,
    44948,
    true,
    block_367_fn
    };



static void block_377_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_377{
    377,
    44952,
    44952,
    true,
    block_377_fn
    };



static void block_378_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[24] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_37 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[5], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_3 = out_17;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_378{
    378,
    44956,
    44976,
    true,
    block_378_fn
    };



static void block_379_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_24 = out_38 +1;
	uint64_t out_5 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_2 = out_24;
	uint64_t out_0 = out_24 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[24] = out_24;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_379{
    379,
    44980,
    44988,
    true,
    block_379_fn
    };



static void block_383_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_383{
    383,
    23400,
    23404,
    true,
    block_383_fn
    };



static void block_384_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[4] +2);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_0 = out_1 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_384{
    384,
    23408,
    23424,
    true,
    block_384_fn
    };



static void block_385_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_17 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_385{
    385,
    23600,
    23608,
    true,
    block_385_fn
    };



static void block_386_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_386{
    386,
    23592,
    23596,
    true,
    block_386_fn
    };



static void block_387_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_14 +3, vec_[15] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[4], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_19 -1;
	uint64_t out_18 = out_19 +d_[4];
	uint64_t out_37 = out_19 -1+d_[4];
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_17 -1;


	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_387{
    387,
    23472,
    23492,
    true,
    block_387_fn
    };



static void block_394_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +1, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[25] +1);
	uint64_t out_14 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_394{
    394,
    44992,
    45008,
    true,
    block_394_fn
    };



static void block_395_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_395{
    395,
    45012,
    45012,
    true,
    block_395_fn
    };



static void block_396_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_22 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_396{
    396,
    45188,
    45192,
    true,
    block_396_fn
    };



static void block_397_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +5+d_[0]);
	uint64_t out_25 = out_26 -1;
	uint64_t out_27 = out_26 +d_[3];
	uint64_t out_37 = out_26 -1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_26 +d_[3], vec_[22] +1);
	uint64_t out_12 = out_38;
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_24 = out_25 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[26] = out_26;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_397{
    397,
    45028,
    45048,
    true,
    block_397_fn
    };



static void block_398_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +3, vec_[23] +3);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +4+d_[5], vec_[3] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +4);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +5);
	uint64_t out_22 = out_23 -2;
	uint64_t out_37 = out_23 +2+d_[9]+d_[13];
	uint64_t out_38 = out_23 +3+d_[9]+d_[13];
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_22 +4+d_[9];
	uint64_t out_12 = out_15;
	uint64_t out_14 = out_15 -2;
	uint64_t out_5 = out_14;
	uint64_t out_4 = out_14 +4+d_[13];
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_398{
    398,
    44652,
    44712,
    true,
    block_398_fn
    };



static void block_523_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[18] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_17 = MAP_Explorer::max2(out_21 , vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_523{
    523,
    48408,
    48424,
    true,
    block_523_fn
    };



static void block_525_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_525{
    525,
    48456,
    48460,
    true,
    block_525_fn
    };



static void block_204_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 +2+d_[4];


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_204{
    204,
    48268,
    48284,
    true,
    block_204_fn
    };



static void block_419_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_419{
    419,
    2440,
    2440,
    true,
    block_419_fn
    };



static void block_429_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_429{
    429,
    48516,
    48524,
    true,
    block_429_fn
    };



static void block_431_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +4+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_18 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_431{
    431,
    48548,
    48572,
    true,
    block_431_fn
    };



static void block_432_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_432{
    432,
    48576,
    48576,
    true,
    block_432_fn
    };



static void block_266_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_22;
	uint64_t out_13 = out_22 +1;
	uint64_t out_12 = MAP_Explorer::max2(out_22 +2, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_22 +3+d_[4], vec_[4] +3);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[22] = out_22;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_266{
    266,
    7344,
    7368,
    true,
    block_266_fn
    };



static void block_274_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_274{
    274,
    7396,
    7396,
    true,
    block_274_fn
    };



static void block_275_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[5]+d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(d_[10], d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[5]+d_[7]+d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(d_[18], d_[13]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[13]+d_[15]);
	uint64_t t_7 = MAP_Explorer::max2(d_[18], d_[15]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[13]+d_[15]+d_[17]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, d_[15]+d_[17]);
	uint64_t t_10 = MAP_Explorer::max2(d_[26], d_[21]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, d_[21]+d_[23]);
	uint64_t t_12 = MAP_Explorer::max2(d_[26], d_[23]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_11, d_[21]+d_[23]+d_[25]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_12, d_[23]+d_[25]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13, vec_[1] +3+d_[2]+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[11]+d_[19]+d_[27]+t_4+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[9]+d_[11]+d_[19]+d_[27]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[11]+d_[19]+d_[27]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[19]+d_[27]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[19]+d_[27]+t_9+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[17]+d_[19]+d_[27]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[19]+d_[27]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[27]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[27]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +1+d_[25]+d_[27]);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +1+d_[27]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+d_[27]+t_3+t_8+t_13);
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13, vec_[1] +6+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +5+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[3] +3+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[4] +3);
	out_35 = MAP_Explorer::max2(out_35, vec_[5] +4+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[6] +5+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[12] +4+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[13] +4+d_[11]+d_[19]+t_4+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[22] +4+d_[9]+d_[11]+d_[19]+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[23] +4+d_[11]+d_[19]+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[24] +4+d_[19]+t_8+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[25] +4+d_[19]+t_9+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[26] +4+d_[17]+d_[19]+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[27] +4+d_[19]+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[28] +4+t_13);
	out_35 = MAP_Explorer::max2(out_35, vec_[29] +4+t_14);
	out_35 = MAP_Explorer::max2(out_35, vec_[30] +4+d_[25]);
	out_35 = MAP_Explorer::max2(out_35, vec_[31] +4);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +6+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	uint64_t out_15 = out_35 -2;
	uint64_t out_34 = out_35 +d_[31];
	uint64_t out_37 = out_35 +4+d_[31]+d_[35];
	uint64_t out_38 = out_35 +6+d_[31]+d_[35];
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_6 = out_15 +1;
	uint64_t out_12 = out_15 +5+d_[31];
	uint64_t out_19 = out_34 +5+d_[35];
	uint64_t out_1 = out_19;
	uint64_t out_9 = out_12 +d_[35];


	vec_[3] = out_3;
	vec_[35] = out_35;
	vec_[15] = out_15;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[9] = out_9;
}

extern const MAP_Explorer::Block block_275{
    275,
    3096,
    3196,
    true,
    block_275_fn
    };



static void block_282_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(8+d_[6]+d_[10], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(7+d_[6]+d_[10]+d_[14], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, t_0);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+t_0, vec_[1] +4+d_[1]+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +4+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +4+d_[0]+d_[1]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[1]+d_[6], vec_[1] +7+d_[1]+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +7+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +4+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +7+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +5+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +7+d_[0]+d_[1]+d_[6]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_1, vec_[1] +5+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[1]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_2, vec_[1] +5+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]+t_2);
	uint64_t out_23 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_18 = out_19 -2;
	uint64_t out_24 = out_19 +3+d_[10];
	uint64_t out_27 = out_19 +1+d_[10];
	uint64_t out_30 = out_19 +2+d_[10];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[18] = out_18;
	vec_[24] = out_24;
	vec_[27] = out_27;
	vec_[30] = out_30;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_282{
    282,
    3308,
    3372,
    true,
    block_282_fn
    };



static void block_422_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_9 +4, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +4);
	uint64_t out_24 = MAP_Explorer::max2(out_9 +7+d_[4], vec_[3] +6);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +7+d_[4]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_23 = out_24 -1;
	uint64_t out_25 = out_24 +d_[8];
	uint64_t out_26 = out_24 +1+d_[8];
	uint64_t out_27 = out_24 +2+d_[8];
	uint64_t out_28 = out_24 +3+d_[8];
	uint64_t out_29 = out_24 +3+d_[8]+d_[12];
	uint64_t out_31 = out_24 +5+d_[8]+d_[12];
	uint64_t out_37 = out_24 +4+d_[8]+d_[12];
	uint64_t out_38 = out_24 +4+d_[8]+d_[12]+d_[16];
	uint64_t out_30 = out_37;
	uint64_t out_6 = out_31;
	uint64_t out_3 = out_31;
	uint64_t out_1 = out_38;
	uint64_t out_22 = out_23 -1;
	uint64_t out_13 = out_22 -1;
	uint64_t out_4 = out_13 +8+d_[8]+d_[12]+d_[16];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[9] = out_9;
	vec_[12] = out_12;
	vec_[24] = out_24;
	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[30] = out_30;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_422{
    422,
    4592,
    4656,
    true,
    block_422_fn
    };



static void block_423_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_23 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[6] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_423{
    423,
    7400,
    7408,
    true,
    block_423_fn
    };



static void block_177_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_0, vec_[1] +5+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +5);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_0);
	uint64_t out_16 = out_37 -2;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[6], vec_[20] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_177{
    177,
    76936,
    76960,
    true,
    block_177_fn
    };



static void block_178_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_178{
    178,
    76924,
    76932,
    true,
    block_178_fn
    };



static void block_202_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_202{
    202,
    48248,
    48256,
    true,
    block_202_fn
    };



static void block_502_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_502{
    502,
    29728,
    29728,
    true,
    block_502_fn
    };



static void block_188_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_188{
    188,
    48200,
    48204,
    true,
    block_188_fn
    };



static void block_668_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_19 , vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[3], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3+d_[3]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_17 +1;
	uint64_t out_37 = out_17 +d_[3];
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_16 +d_[3]+d_[4];


	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_668{
    668,
    73908,
    73924,
    true,
    block_668_fn
    };



static void block_669_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_22 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_22;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_669{
    669,
    73928,
    73932,
    true,
    block_669_fn
    };



static void block_670_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_16;
	uint64_t out_17 = MAP_Explorer::max2(out_16 , vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[24] +1);
	uint64_t out_15 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_670{
    670,
    73936,
    73952,
    true,
    block_670_fn
    };



static void block_671_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6], d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(d_[13], d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[9]+d_[11]);
	uint64_t t_5 = MAP_Explorer::max2(d_[13], d_[11]);
	uint64_t t_6 = MAP_Explorer::max2(3+d_[7]+t_1+t_4, d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +3+d_[7]+t_1+t_4, vec_[3] +2+d_[7]+t_1+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[5]+d_[7]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+d_[7]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +3+d_[7]+t_2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+d_[7]+t_1+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_4);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +3+d_[7]+d_[9]+d_[11]+t_1, vec_[3] +2+d_[7]+d_[9]+d_[11]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[5]+d_[7]+d_[9]+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[7]+d_[9]+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3+d_[7]+d_[9]+d_[11]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3+d_[7]+d_[9]+d_[11]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+d_[9]+d_[11]);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_6, vec_[3] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +5+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +5+d_[5]+d_[7]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +5+d_[7]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +6+d_[7]+t_2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +5+t_4);
	uint64_t out_13 = out_37;
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_0 = out_23 -1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_671{
    671,
    93600,
    93644,
    true,
    block_671_fn
    };



static void block_674_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[6]+d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[14]+t_1, d_[6]+d_[8]);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +4+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[22] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_14 +1+d_[4], vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +6+t_1, vec_[6] +6);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+t_2, vec_[6] +5+d_[14]);
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_22 = out_23 -1;
	uint64_t out_37 = out_23 -2+d_[14];
	uint64_t out_5 = MAP_Explorer::max2(out_19 +2+d_[6]+d_[8], vec_[6] +2);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_22 -1;
	uint64_t out_12 = out_13 -1;
	uint64_t out_6 = out_12 +2+d_[14];


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[6] = out_6;
}

extern const MAP_Explorer::Block block_674{
    674,
    93680,
    93732,
    true,
    block_674_fn
    };



static void block_675_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_675{
    675,
    73956,
    73956,
    true,
    block_675_fn
    };



static void block_676_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_18 +2+d_[5];


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_676{
    676,
    73960,
    73980,
    true,
    block_676_fn
    };



static void block_78_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_11 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_11 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[11] = out_11;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_78{
    78,
    612,
    616,
    true,
    block_78_fn
    };



static void block_80_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[4]+t_0, vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +3+t_0, vec_[3] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3);
	uint64_t out_13 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[8];
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_18 -2;
	uint64_t out_1 = out_17 +1+d_[8];
	uint64_t out_0 = out_1 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_80{
    80,
    17496,
    17520,
    true,
    block_80_fn
    };



static void block_203_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +2, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +4+d_[3], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +5);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_1 = out_19 +2;
	uint64_t out_3 = out_19 +2+d_[6];


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_203{
    203,
    48260,
    48284,
    true,
    block_203_fn
    };



static void block_205_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_205{
    205,
    48288,
    48288,
    true,
    block_205_fn
    };



static void block_17_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_17{
    17,
    77376,
    77384,
    true,
    block_17_fn
    };



static void block_18_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +1, vec_[4] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +3, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +5+d_[5], vec_[3] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +4+d_[5]);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[9];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[9];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_18{
    18,
    77388,
    77424,
    true,
    block_18_fn
    };



static void block_19_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_19{
    19,
    77428,
    77436,
    true,
    block_19_fn
    };



static void block_77_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(d_[15], d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[10]+d_[12]);
	uint64_t t_7 = MAP_Explorer::max2(d_[15], d_[12]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[10]+d_[12]+d_[14]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, d_[12]+d_[14]);
	uint64_t t_10 = MAP_Explorer::max2(d_[23], d_[18]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, d_[18]+d_[20]);
	uint64_t t_12 = MAP_Explorer::max2(d_[23], d_[20]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_11, d_[18]+d_[20]+d_[22]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_12, d_[20]+d_[22]);
	uint64_t t_15 = MAP_Explorer::max2(d_[31], d_[26]);
	uint64_t t_16 = MAP_Explorer::max2(1+t_15, d_[26]+d_[28]);
	uint64_t t_17 = MAP_Explorer::max2(d_[31], d_[28]);
	uint64_t t_18 = MAP_Explorer::max2(1+t_16, d_[26]+d_[28]+d_[30]);
	uint64_t t_19 = MAP_Explorer::max2(1+t_17, d_[28]+d_[30]);
	uint64_t t_20 = MAP_Explorer::max2(d_[38], d_[34]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_3+t_8+t_13+t_18, vec_[3] +d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_3+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_3+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[7] +1+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_4+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[8] +1+d_[6]+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[9] +1+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[10] +1+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[11] +1+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_9+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[14]+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[16]+d_[24]+d_[32]+d_[34]+d_[36]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[24]+d_[32]+d_[34]+d_[36]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[24]+d_[32]+d_[34]+d_[36]+t_14+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[22]+d_[24]+d_[32]+d_[34]+d_[36]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[24]+d_[32]+d_[34]+d_[36]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[32]+d_[34]+d_[36]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[32]+d_[34]+d_[36]+t_19);
	out_3 = MAP_Explorer::max2(out_3, vec_[32] +1+d_[30]+d_[32]+d_[34]+d_[36]);
	out_3 = MAP_Explorer::max2(out_3, vec_[33] +1+d_[32]+d_[34]+d_[36]);
	out_3 = MAP_Explorer::max2(out_3, vec_[34] +1+d_[34]+d_[36]);
	out_3 = MAP_Explorer::max2(out_3, vec_[35] +1+d_[36]);
	uint64_t out_9 = MAP_Explorer::max2(out_6 +2+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_3+t_8+t_13+t_18, vec_[3] +1+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_3+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[4] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[5] +2+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_3+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[7] +2+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_4+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[8] +2+d_[6]+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[9] +2+d_[8]+d_[16]+d_[24]+d_[32]+d_[34]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[10] +2+d_[16]+d_[24]+d_[32]+d_[34]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[11] +2+d_[16]+d_[24]+d_[32]+d_[34]+t_9+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[14] +2+d_[14]+d_[16]+d_[24]+d_[32]+d_[34]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[15] +2+d_[16]+d_[24]+d_[32]+d_[34]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[16] +2+d_[24]+d_[32]+d_[34]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[17] +2+d_[24]+d_[32]+d_[34]+t_14+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[18] +2+d_[22]+d_[24]+d_[32]+d_[34]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[19] +2+d_[24]+d_[32]+d_[34]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[20] +2+d_[32]+d_[34]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[21] +2+d_[32]+d_[34]+t_19);
	out_9 = MAP_Explorer::max2(out_9, vec_[32] +2+d_[30]+d_[32]+d_[34]);
	out_9 = MAP_Explorer::max2(out_9, vec_[33] +2+d_[32]+d_[34]);
	out_9 = MAP_Explorer::max2(out_9, vec_[34] +2+d_[34]);
	out_9 = MAP_Explorer::max2(out_9, vec_[35] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +4+d_[8]+d_[16]+d_[24]+d_[32]+t_3+t_8+t_13+t_18+t_20, vec_[3] +3+d_[8]+d_[16]+d_[24]+d_[32]+t_3+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+d_[8]+d_[16]+d_[24]+d_[32]+t_3+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[7] +4+d_[8]+d_[16]+d_[24]+d_[32]+t_4+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[8] +4+d_[6]+d_[8]+d_[16]+d_[24]+d_[32]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +4+d_[8]+d_[16]+d_[24]+d_[32]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +4+d_[16]+d_[24]+d_[32]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[11] +4+d_[16]+d_[24]+d_[32]+t_9+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[14]+d_[16]+d_[24]+d_[32]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[16]+d_[24]+d_[32]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[24]+d_[32]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+d_[24]+d_[32]+t_14+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[22]+d_[24]+d_[32]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +4+d_[24]+d_[32]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +4+d_[32]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +4+d_[32]+t_19+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +4+d_[30]+d_[32]+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[33] +4+d_[32]+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +4+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +3+d_[38]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_11 = out_37 +1;
	uint64_t out_1 = out_11;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[11] = out_11;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_77{
    77,
    512,
    596,
    true,
    block_77_fn
    };



static void block_79_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_79{
    79,
    620,
    628,
    true,
    block_79_fn
    };



static void block_81_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3], vec_[1] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[3]);
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_12 -1;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_81{
    81,
    17528,
    17540,
    true,
    block_81_fn
    };



static void block_82_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_82{
    82,
    17544,
    17544,
    true,
    block_82_fn
    };



static void block_83_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_83{
    83,
    17548,
    17552,
    true,
    block_83_fn
    };



static void block_84_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_84{
    84,
    17556,
    17560,
    true,
    block_84_fn
    };



static void block_233_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2+d_[5]+t_0, vec_[5] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[5]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+d_[5]);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +1+d_[10], vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_23 -1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_19 +1;
	uint64_t out_37 = out_19 +d_[10];
	uint64_t out_3 = out_12 -2+d_[7];


	vec_[18] = out_18;
	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_233{
    233,
    74356,
    74388,
    true,
    block_233_fn
    };



static void block_250_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_12 = out_37;
	uint64_t out_23 = out_37 +1;
	uint64_t out_38 = out_37 +d_[5];
	uint64_t out_6 = out_23;
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_23 -2;
	uint64_t out_4 = out_5 +2+d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_250{
    250,
    74652,
    74672,
    true,
    block_250_fn
    };



static void block_503_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_503{
    503,
    29968,
    29976,
    true,
    block_503_fn
    };



static void block_504_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +3+d_[3], vec_[18] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_20 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_37 +1;
	uint64_t out_12 = out_23 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[20] = out_20;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_504{
    504,
    30116,
    30140,
    true,
    block_504_fn
    };



static void block_506_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_506{
    506,
    30824,
    30828,
    true,
    block_506_fn
    };



static void block_634_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_23 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_634{
    634,
    52584,
    52592,
    true,
    block_634_fn
    };



static void block_638_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(2+d_[8], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[7]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[8], d_[7]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2]+d_[9]+d_[11]+t_2, vec_[1] +3+d_[2]+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +3+d_[9]+d_[11]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[9]+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[2]+d_[9]+d_[11]+t_2);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2]+d_[9]+t_2, vec_[1] +4+d_[2]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[2]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +4+d_[9]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +2+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[2]+d_[9]+t_2);
	uint64_t out_18 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[14];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_13 -1+d_[14];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_638{
    638,
    52616,
    52656,
    true,
    block_638_fn
    };



static void block_639_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_19 , vec_[24] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[3], vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_639{
    639,
    52660,
    52676,
    true,
    block_639_fn
    };



static void block_666_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[16] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+t_3, vec_[5] +2+d_[7]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_4);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_1, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_13 +1, vec_[4] +1);
	uint64_t out_12 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -1;
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_666{
    666,
    73836,
    73864,
    true,
    block_666_fn
    };



static void block_667_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(d_[9], d_[5]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+d_[5]+d_[7]+t_0, vec_[1] +2+d_[3]+d_[5]+d_[7]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[1]+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+d_[5]+d_[7]+t_0);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+d_[5]+t_0, vec_[1] +3+d_[3]+d_[5]+t_0);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[1]+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1+d_[1]+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[1]+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+d_[1]+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[3]+d_[5]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[3]+t_0+t_1, vec_[1] +4+d_[3]+t_0+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +3+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[3]+t_0+t_1);
	uint64_t out_23 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_667{
    667,
    73868,
    73896,
    true,
    block_667_fn
    };



static void block_672_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 +1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_672{
    672,
    93648,
    93656,
    true,
    block_672_fn
    };



static void block_673_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_673{
    673,
    93660,
    93676,
    true,
    block_673_fn
    };



static void block_677_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[7]+d_[9]);

	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +6+d_[0]);
	uint64_t out_24 = out_25 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_25 +3+d_[4]+t_0, vec_[4] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_25 +2+d_[4]+t_1, vec_[4] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_1);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = out_37 -1;
	uint64_t out_23 = out_24 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_22 = out_23 -1;
	uint64_t out_12 = out_22 +4+d_[4];
	uint64_t out_5 = out_12 -1;


	vec_[25] = out_25;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[12] = out_12;
	vec_[5] = out_5;
}

extern const MAP_Explorer::Block block_677{
    677,
    73984,
    74028,
    true,
    block_677_fn
    };



static void block_15_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
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

extern const MAP_Explorer::Block block_15{
    15,
    77172,
    77180,
    true,
    block_15_fn
    };



static void block_20_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[18] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_20{
    20,
    77440,
    77444,
    true,
    block_20_fn
    };



static void block_21_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_21{
    21,
    77500,
    77504,
    true,
    block_21_fn
    };



static void block_30_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_10 = out_37;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_30{
    30,
    31872,
    31880,
    true,
    block_30_fn
    };



static void block_31_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +3);
	out_9 = MAP_Explorer::max2(out_9, vec_[10] +3);
	out_9 = MAP_Explorer::max2(out_9, vec_[16] +3);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +4+d_[0]);
	uint64_t out_4 = out_9 +2+d_[3];
	uint64_t out_17 = out_9 +d_[3];
	uint64_t out_37 = out_9 -1+d_[3];
	uint64_t out_38 = out_9 +1+d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;


	vec_[9] = out_9;
	vec_[4] = out_4;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_31{
    31,
    31940,
    31956,
    true,
    block_31_fn
    };



static void block_32_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[1]+d_[3]+d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(d_[14], d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[9]+d_[11]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_4, d_[9]+d_[11]+d_[13]);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[7]+t_2+t_4, vec_[1] +2+d_[7]+t_2+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +1+d_[7]+t_2+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +d_[7]+t_2+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +1+d_[7]+t_2+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[18] +1+d_[7]+t_2+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +2+d_[0]+d_[7]+t_2+t_4);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[7]+d_[15]+t_2+t_5, vec_[1] +2+d_[7]+d_[15]+t_2+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[7]+d_[15]+t_2+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[7]+d_[15]+t_2+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[7]+d_[15]+t_2+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[7]+d_[15]+t_2+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[7]+d_[15]+t_2+t_5);
	uint64_t out_4 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[7]+t_2+t_5, vec_[1] +3+d_[7]+t_2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[2] +2+d_[7]+t_2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[3] +1+d_[7]+t_2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[5] +2);
	out_4 = MAP_Explorer::max2(out_4, vec_[15] +2+d_[7]+t_2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[18] +2+d_[7]+t_2+t_5);
	out_4 = MAP_Explorer::max2(out_4, vec_[36] +3+d_[0]+d_[7]+t_2+t_5);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[7]+t_2+t_3, vec_[1] +3+d_[7]+t_2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[7]+t_2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[7]+t_2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+d_[7]+t_2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[7]+t_2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[7]+t_2+t_3);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +1, vec_[5] +1);


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
}

extern const MAP_Explorer::Block block_32{
    32,
    31988,
    32020,
    true,
    block_32_fn
    };



static void block_85_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_1 = out_19;
	uint64_t out_18 = out_19 -2;


	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_85{
    85,
    17564,
    17580,
    true,
    block_85_fn
    };



static void block_86_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_86{
    86,
    17584,
    17584,
    true,
    block_86_fn
    };



static void block_88_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +6);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +6);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +6+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_3 = out_13;
	uint64_t out_12 = out_13 -2;
	uint64_t out_38 = MAP_Explorer::max2(out_13 +d_[5], vec_[20] +2);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 +1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_88{
    88,
    17676,
    17704,
    true,
    block_88_fn
    };



static void block_89_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +5);
	out_9 = MAP_Explorer::max2(out_9, vec_[3] +4);
	out_9 = MAP_Explorer::max2(out_9, vec_[6] +5);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +6+d_[0]);
	uint64_t out_8 = out_9 -1;
	uint64_t out_10 = out_9 +d_[4];
	uint64_t out_11 = out_9 +1+d_[4];
	uint64_t out_15 = out_9 +2+d_[4];
	uint64_t out_16 = out_9 +3+d_[4];
	uint64_t out_17 = out_9 +3+d_[4]+d_[8];
	uint64_t out_18 = out_9 +4+d_[4]+d_[8];
	uint64_t out_19 = out_9 +5+d_[4]+d_[8];
	uint64_t out_20 = out_9 +6+d_[4]+d_[8];
	uint64_t out_21 = out_9 +6+d_[4]+d_[8]+d_[12];
	uint64_t out_32 = out_9 +7+d_[4]+d_[8]+d_[12];
	uint64_t out_33 = out_9 +8+d_[4]+d_[8]+d_[12];
	uint64_t out_34 = out_9 +9+d_[4]+d_[8]+d_[12];
	uint64_t out_37 = out_9 +8+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_38 = out_9 +9+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_35 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_7 = out_8 -1;
	uint64_t out_5 = out_7 -1;


	vec_[9] = out_9;
	vec_[8] = out_8;
	vec_[10] = out_10;
	vec_[11] = out_11;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[35] = out_35;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[7] = out_7;
	vec_[5] = out_5;
}

extern const MAP_Explorer::Block block_89{
    89,
    640,
    712,
    true,
    block_89_fn
    };



static void block_172_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_23 = out_37;
	uint64_t out_19 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_172{
    172,
    76048,
    76060,
    true,
    block_172_fn
    };



static void block_173_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[19] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_28;
	uint64_t out_16 = MAP_Explorer::max2(out_28 , vec_[23] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +1, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_173{
    173,
    76064,
    76080,
    true,
    block_173_fn
    };



static void block_174_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_174{
    174,
    76796,
    76804,
    true,
    block_174_fn
    };



static void block_179_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_179{
    179,
    76868,
    76868,
    true,
    block_179_fn
    };



static void block_181_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_181{
    181,
    76084,
    76084,
    true,
    block_181_fn
    };



static void block_184_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +5+d_[0]);
	uint64_t out_19 = out_22 -1;
	uint64_t out_37 = out_22 -2+d_[3];
	uint64_t out_38 = out_22 +d_[3];
	uint64_t out_17 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_19 -1;
	uint64_t out_1 = out_14 +1+d_[3];


	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_184{
    184,
    75940,
    75956,
    true,
    block_184_fn
    };



static void block_185_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_185{
    185,
    75968,
    75968,
    true,
    block_185_fn
    };



static void block_186_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_186{
    186,
    76320,
    76328,
    true,
    block_186_fn
    };



static void block_197_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = out_22 +2;
	uint64_t out_37 = out_22 +2+d_[5];
	uint64_t out_38 = out_22 +3+d_[5];
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_19 -1;
	uint64_t out_4 = out_18 +2+d_[5]+d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;
	uint64_t out_3 = out_4 -1+d_[8];


	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_197{
    197,
    76332,
    76360,
    true,
    block_197_fn
    };



static void block_198_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_25 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_38 -1;
	uint64_t out_1 = out_14;
	uint64_t out_0 = out_14 -1;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_198{
    198,
    76000,
    76008,
    true,
    block_198_fn
    };



static void block_199_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[22] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[26] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[28] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +2, vec_[23] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_37 -1;
	uint64_t out_0 = out_23 +d_[6];
	uint64_t out_3 = out_23 +2+d_[5];


	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_199{
    199,
    76012,
    76032,
    true,
    block_199_fn
    };



static void block_508_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[21] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_20 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_508{
    508,
    29732,
    29736,
    true,
    block_508_fn
    };



static void block_509_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_509{
    509,
    29804,
    29808,
    true,
    block_509_fn
    };



static void block_510_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +1, vec_[20] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[3], vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_20 = out_38 -1;
	uint64_t out_1 = out_20;
	uint64_t out_0 = out_20 -1;


	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[20] = out_20;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_510{
    510,
    29812,
    29828,
    true,
    block_510_fn
    };



static void block_511_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_20 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_511{
    511,
    29832,
    29836,
    true,
    block_511_fn
    };



static void block_512_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[4] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +4+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_32 +5+d_[4]+d_[8], vec_[16] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +6+d_[8]);
	uint64_t out_16 = MAP_Explorer::max2(out_32 +7+d_[4]+d_[8], vec_[16] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +8+d_[8]);
	uint64_t out_20 = MAP_Explorer::max2(out_32 +2+d_[4], vec_[19] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_32 +8+d_[4]+d_[8]+d_[12], vec_[16] +4+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +9+d_[8]+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_22 = out_37;
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_10 = out_20 +1;
	uint64_t out_15 = out_16 -1;
	uint64_t out_19 = out_16 +d_[12];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[32] = out_32;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[10] = out_10;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_512{
    512,
    29840,
    29900,
    true,
    block_512_fn
    };



static void block_513_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_513{
    513,
    29612,
    29616,
    true,
    block_513_fn
    };



static void block_514_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_514{
    514,
    30800,
    30804,
    true,
    block_514_fn
    };



static void block_575_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
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

extern const MAP_Explorer::Block block_575{
    575,
    46244,
    46248,
    true,
    block_575_fn
    };



static void block_576_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_37;
	uint64_t out_3 = out_19;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_576{
    576,
    46252,
    46264,
    true,
    block_576_fn
    };



static void block_577_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[2] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_577{
    577,
    46268,
    46268,
    true,
    block_577_fn
    };


} // namespace CV32E40P_DSE