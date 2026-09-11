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


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0-1+d_[2], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_10;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_21 = MAP_Explorer::max2(out_10 , vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[10] = out_10;
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



static void block_427_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_427{
    427,
    3236,
    3252,
    true,
    block_427_fn
    };



static void block_269_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +2+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +3+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[14] +3+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]+t_0);

	uint64_t out_3 = x_0 -2+d_[3];
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
    7388,
    7408,
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
    7376,
    7384,
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
    31824,
    31828,
    true,
    block_285_fn
    };



static void block_283_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1);
	x_0 = MAP_Explorer::max2(x_0, vec_[5] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]+d_[1]);
	uint64_t x_2 = MAP_Explorer::max2(x_0 -1+d_[2], vec_[12] +1);
	uint64_t x_1 = MAP_Explorer::max2(x_2 +1+d_[4], vec_[13] +2);

	uint64_t out_0 = MAP_Explorer::max2(x_0-1+d_[2], vec_[12] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_3 = x_1 -1+d_[6];
	uint64_t out_38 = MAP_Explorer::max2(x_2+1+d_[4], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_283{
    283,
    30860,
    30876,
    true,
    block_283_fn
    };



static void block_289_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[4], vec_[1] +5+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +4+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +3+d_[8], vec_[12] +4);
	uint64_t out_15 = out_37;
	uint64_t out_13 = out_37;
	uint64_t out_5 = out_19;
	uint64_t out_3 = out_37;
	uint64_t out_12 = out_37 -1;
	uint64_t out_38 = out_37 +d_[12];
	uint64_t out_14 = MAP_Explorer::max2(out_19 +1, vec_[12] +1);
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_12 +2;
	uint64_t out_4 = out_6 +d_[12];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[13] = out_13;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_289{
    289,
    30944,
    30992,
    true,
    block_289_fn
    };



static void block_284_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_13 = out_19 +3;
	uint64_t out_37 = out_19 +2+d_[4];
	uint64_t out_38 = out_19 +3+d_[4];
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_13 -1;
	uint64_t out_5 = out_12 +2+d_[4];
	uint64_t out_2 = out_5;


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_284{
    284,
    30880,
    30900,
    true,
    block_284_fn
    };



static void block_286_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], 2);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +4+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_19 = out_18 +3+d_[6];
	uint64_t out_37 = out_18 +3+d_[6]+d_[10];
	uint64_t out_3 = MAP_Explorer::max2(out_18 +5+d_[6], vec_[3] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_18 +4+d_[6]+t_0, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +4+d_[6]+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_286{
    286,
    31832,
    31876,
    true,
    block_286_fn
    };



static void block_287_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_19 -1+d_[2];
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_287{
    287,
    30904,
    30916,
    true,
    block_287_fn
    };



static void block_288_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +1, vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[3], vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_288{
    288,
    30996,
    31012,
    true,
    block_288_fn
    };



static void block_426_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +4+d_[2]+d_[6], vec_[3] +4+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +4+d_[10], vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = out_19 +4+d_[10];
	uint64_t out_37 = out_19 +3+d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_37;
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

extern const MAP_Explorer::Block block_426{
    426,
    16056,
    16108,
    true,
    block_426_fn
    };



static void block_416_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);


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
	uint64_t out_17 = out_19;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[5];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
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



static void block_440_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(2, d_[11]);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[15], d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[14]+t_5);
	uint64_t t_8 = MAP_Explorer::max2(d_[22], d_[18]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[9]+d_[16]+d_[18]+t_3+t_7, vec_[1] +4+d_[1]+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +4+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2+d_[14]+d_[16]+d_[18]);
	out_20 = MAP_Explorer::max2(out_20, vec_[6] +4+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[12] +2+d_[16]+d_[18]);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +2+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +3+d_[9]+d_[16]+d_[18]+t_3+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +2+d_[9]+d_[16]+d_[18]+t_4+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +2+d_[7]+d_[9]+d_[16]+d_[18]+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[24] +2+d_[18]);
	out_20 = MAP_Explorer::max2(out_20, vec_[25] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[26] +2+d_[9]+d_[16]+d_[18]+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[27] +2+d_[16]+d_[18]+t_7);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +4+d_[0]+d_[1]+d_[9]+d_[16]+d_[18]+t_3+t_7);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+d_[9]+d_[16]+t_3+t_7+t_8, vec_[1] +5+d_[1]+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +5+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +3+d_[14]+d_[16]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +5+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +3+d_[16]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +3+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[15] +4+d_[9]+d_[16]+t_3+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +3+d_[9]+d_[16]+t_4+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +3+d_[7]+d_[9]+d_[16]+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[22]);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +3+d_[9]+d_[16]+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +3+d_[16]+t_7+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +5+d_[0]+d_[1]+d_[9]+d_[16]+t_3+t_7+t_8);
	uint64_t out_3 = out_20 -1+d_[20];
	uint64_t out_27 = MAP_Explorer::max2(out_26 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_27 +3+d_[26], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3+d_[26]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = MAP_Explorer::max2(out_27 +1, vec_[17] +1);
	uint64_t out_13 = out_22 +1;
	uint64_t out_23 = out_22 +1+d_[26];
	uint64_t out_37 = out_22 +d_[26];
	uint64_t out_0 = out_37;


	vec_[6] = out_6;
	vec_[20] = out_20;
	vec_[26] = out_26;
	vec_[3] = out_3;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_440{
    440,
    25196,
    25268,
    true,
    block_440_fn
    };



static void block_441_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
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

extern const MAP_Explorer::Block block_441{
    441,
    25272,
    25276,
    true,
    block_441_fn
    };



static void block_442_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_19 +1+d_[4];
	uint64_t out_24 = out_19 +d_[4];
	uint64_t out_25 = MAP_Explorer::max2(out_19 +2+d_[4], vec_[20] +1);
	uint64_t out_26 = MAP_Explorer::max2(out_25 +1, vec_[4] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_25 +3+d_[8], vec_[4] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +3);
	uint64_t out_13 = out_18 +1;
	uint64_t out_22 = out_18 +1+d_[12];
	uint64_t out_37 = out_18 +d_[12];
	uint64_t out_38 = out_18 +2+d_[12];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_442{
    442,
    25280,
    25332,
    true,
    block_442_fn
    };



static void block_443_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_443{
    443,
    25336,
    25340,
    true,
    block_443_fn
    };



static void block_444_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[4], vec_[1] +6+d_[4]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +5+d_[4]);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +5+d_[4]);
	out_34 = MAP_Explorer::max2(out_34, vec_[27] +4+d_[4]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +6+d_[0]+d_[4]);
	uint64_t out_13 = out_34 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_34 +5+d_[8], vec_[4] +5);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +5+d_[8]);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[26] +3);
	uint64_t out_19 = MAP_Explorer::max2(out_34 +2, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_20 = MAP_Explorer::max2(out_34 +2+d_[8], vec_[4] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +2+d_[8]);
	out_20 = MAP_Explorer::max2(out_20, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_34 +7+d_[8]+d_[12], vec_[4] +7+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +7+d_[8]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +6+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +5+d_[12]);
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_38 -1;
	uint64_t out_37 = out_18 +d_[12];
	uint64_t out_17 = out_37;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[34] = out_34;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_444{
    444,
    25344,
    25400,
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
    25764,
    25764,
    true,
    block_445_fn
    };



static void block_446_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_446{
    446,
    25768,
    25768,
    true,
    block_446_fn
    };



static void block_447_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_447{
    447,
    26624,
    26632,
    true,
    block_447_fn
    };



static void block_448_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[13], d_[11]);


	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[34] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +4+d_[0]);
	uint64_t out_21 = out_15 +d_[3];
	uint64_t out_33 = MAP_Explorer::max2(out_15 +d_[3]+d_[5], vec_[24] +d_[5]);
	uint64_t out_10 = out_33 +2;
	uint64_t out_14 = MAP_Explorer::max2(out_33 +3+d_[8], vec_[12] +2);
	uint64_t out_17 = out_14 +1+d_[11];
	uint64_t out_19 = out_14 +4+t_0;
	uint64_t out_32 = out_14 +2+t_0;
	uint64_t out_37 = out_14 +3+t_0;
	uint64_t out_38 = out_14 +5+t_0;
	uint64_t out_24 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_37;


	vec_[15] = out_15;
	vec_[21] = out_21;
	vec_[33] = out_33;
	vec_[10] = out_10;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_448{
    448,
    25796,
    25852,
    true,
    block_448_fn
    };



static void block_449_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[8], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(3+t_0+t_1, d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(t_2, 1+d_[6]+t_0);


	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[21] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[32] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]+t_0);
	uint64_t out_33 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_2, vec_[1] +3+t_2);
	out_33 = MAP_Explorer::max2(out_33, vec_[2] +2+t_2);
	out_33 = MAP_Explorer::max2(out_33, vec_[10] +1);
	out_33 = MAP_Explorer::max2(out_33, vec_[12] +4+t_1);
	out_33 = MAP_Explorer::max2(out_33, vec_[19] +2+t_2);
	out_33 = MAP_Explorer::max2(out_33, vec_[21] +4+d_[2]+t_1);
	out_33 = MAP_Explorer::max2(out_33, vec_[32] +2+t_2);
	out_33 = MAP_Explorer::max2(out_33, vec_[36] +3+d_[0]+t_2);
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[21] +d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[32] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_3, vec_[1] +6+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +7+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +7+d_[2]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_32 = out_12 +1+d_[6];
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_1 = out_19;


	vec_[12] = out_12;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_449{
    449,
    25880,
    25916,
    true,
    block_449_fn
    };



static void block_450_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[17] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_9 = MAP_Explorer::max2(out_12 +d_[2], vec_[32] +1);
	uint64_t out_32 = MAP_Explorer::max2(out_12 +3+d_[2]+d_[6], vec_[14] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +4+d_[6]);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +2, vec_[19] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[33] +2);
	uint64_t out_19 = out_33 -1;
	uint64_t out_34 = out_33 +3+d_[10];
	uint64_t out_35 = out_33 +5+d_[10]+d_[14];
	uint64_t out_37 = out_33 +4+d_[10]+d_[14];
	uint64_t out_38 = out_33 +6+d_[10]+d_[14];
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_35;
	uint64_t out_0 = out_37;
	uint64_t out_11 = out_19 +2;
	uint64_t out_13 = out_19 +2+d_[10];


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
	vec_[11] = out_11;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_450{
    450,
    25944,
    26008,
    true,
    block_450_fn
    };



static void block_451_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +4);
	out_35 = MAP_Explorer::max2(out_35, vec_[17] +4);
	out_35 = MAP_Explorer::max2(out_35, vec_[35] +3);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +5+d_[0]);
	uint64_t out_34 = out_35 -2;
	uint64_t out_37 = MAP_Explorer::max2(out_35 +2+d_[4], vec_[11] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[8], vec_[19] +1);
	uint64_t out_11 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_37 +1;
	uint64_t out_0 = out_17 -2+d_[8];


	vec_[35] = out_35;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[11] = out_11;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_451{
    451,
    26016,
    26048,
    true,
    block_451_fn
    };



static void block_452_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_452{
    452,
    26052,
    26056,
    true,
    block_452_fn
    };



static void block_453_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +2+d_[2], vec_[19] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 -1;
	uint64_t out_34 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_0 = out_34 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[34] = out_34;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_453{
    453,
    26136,
    26156,
    true,
    block_453_fn
    };



static void block_454_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[4]);


	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[19] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[21] +d_[1]);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_34 = MAP_Explorer::max2(out_35 +2+d_[4], vec_[10] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[17] +2+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_35 +6+t_0, vec_[10] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +6+t_0);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_1 = out_18;


	vec_[35] = out_35;
	vec_[34] = out_34;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_454{
    454,
    26160,
    26188,
    true,
    block_454_fn
    };



static void block_455_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[8], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(3+t_0+t_1, d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(t_2, 1+d_[6]+t_0);


	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_2, vec_[1] +3+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +4+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[19] +2+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[21] +4+d_[2]+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[34] +2+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+t_2);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[34] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +4+d_[0]+t_0);
	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[21] +d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +1+d_[2]);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_3, vec_[1] +6+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +7+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +7+d_[2]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_21 = out_17 +1+d_[6];
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_1 = out_19;


	vec_[10] = out_10;
	vec_[17] = out_17;
	vec_[34] = out_34;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_455{
    455,
    26216,
    26252,
    true,
    block_455_fn
    };



static void block_456_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+2+d_[2], vec_[10] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[21] +4);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_34 = MAP_Explorer::max2(out_19 +1+d_[6], vec_[32] +1);
	uint64_t out_32 = out_34 +1;
	uint64_t out_10 = MAP_Explorer::max2(out_34 +2, vec_[33] +1);
	uint64_t out_18 = out_10 +3+d_[10];
	uint64_t out_37 = out_10 +2+d_[10];
	uint64_t out_38 = out_10 +4+d_[10];
	uint64_t out_33 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[34] = out_34;
	vec_[32] = out_32;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[33] = out_33;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_456{
    456,
    26280,
    26332,
    true,
    block_456_fn
    };



static void block_457_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_10 = MAP_Explorer::max2(x_0+1+d_[2], vec_[10] +3);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[10] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[18] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_10 +2+d_[6], vec_[34] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[19] +1);
	uint64_t out_34 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;


	vec_[10] = out_10;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[34] = out_34;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_457{
    457,
    26344,
    26376,
    true,
    block_457_fn
    };



static void block_458_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_458{
    458,
    26380,
    26380,
    true,
    block_458_fn
    };



static void block_459_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_459{
    459,
    26948,
    26952,
    true,
    block_459_fn
    };



static void block_460_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_34 = out_37;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[34] = out_34;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_460{
    460,
    26452,
    26460,
    true,
    block_460_fn
    };



static void block_461_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_461{
    461,
    26464,
    26468,
    true,
    block_461_fn
    };



static void block_462_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[34] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_462{
    462,
    26472,
    26480,
    true,
    block_462_fn
    };



static void block_463_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[34] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_17 +1, vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1+d_[3], vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_34 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;


	vec_[17] = out_17;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[34] = out_34;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_463{
    463,
    26484,
    26504,
    true,
    block_463_fn
    };



static void block_464_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_464{
    464,
    26524,
    26528,
    true,
    block_464_fn
    };



static void block_465_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +4+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_34 +4+d_[3], vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	uint64_t out_16 = MAP_Explorer::max2(out_34 +6+d_[3]+d_[7], vec_[3] +5);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +5+d_[7]);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_34 +5+d_[3]+d_[7], vec_[3] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +4+d_[7]);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	uint64_t out_23 = MAP_Explorer::max2(out_34 +10+d_[3]+d_[7]+d_[11], vec_[3] +9+d_[11]);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +9+d_[7]+d_[11]);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[18] +7+d_[11]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_22 = out_23 -1;
	uint64_t out_24 = out_23 +d_[15];
	uint64_t out_25 = out_23 +1+d_[15];
	uint64_t out_26 = out_23 +2+d_[15];
	uint64_t out_27 = out_23 +3+d_[15];
	uint64_t out_37 = out_23 +3+d_[15]+d_[19];
	uint64_t out_38 = out_23 +4+d_[15]+d_[19];
	uint64_t out_15 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_22 -3;
	uint64_t out_13 = out_19 +2;
	uint64_t out_14 = out_19 +6+d_[15]+d_[19];
	uint64_t out_4 = out_13 +7+d_[15]+d_[19];
	uint64_t out_2 = out_4;


	vec_[34] = out_34;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[5] = out_5;
	vec_[22] = out_22;
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
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_465{
    465,
    26532,
    26620,
    true,
    block_465_fn
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
    44592,
    44596,
    true,
    block_301_fn
    };



static void block_406_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_2 = MAP_Explorer::max2(2+d_[19], d_[14]+d_[16]+d_[18]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[27], d_[22]+d_[24]);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[27], d_[22]+d_[24]+d_[26]);


	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +4);
	out_35 = MAP_Explorer::max2(out_35, vec_[3] +3);
	out_35 = MAP_Explorer::max2(out_35, vec_[15] +4);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +5+d_[0]);
	uint64_t out_11 = out_35 -2;
	uint64_t out_34 = out_35 +d_[3];
	uint64_t out_15 = MAP_Explorer::max2(out_35 +6+d_[3]+d_[7]+d_[11]+d_[12]+d_[20]+t_2+t_5, vec_[16] +3+d_[12]+d_[20]+t_2+t_5);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +3+d_[11]+d_[12]+d_[20]+t_2+t_5);
	uint64_t out_18 = MAP_Explorer::max2(out_35 +4+d_[3]+d_[7], vec_[18] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_35 +5+d_[3]+d_[7], vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_35 +6+d_[3]+d_[7]+d_[11]+d_[12]+d_[20]+t_2+t_4, vec_[16] +3+d_[12]+d_[20]+t_2+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3+d_[11]+d_[12]+d_[20]+t_2+t_4);
	uint64_t out_38 = MAP_Explorer::max2(out_35 +7+d_[3]+d_[7]+d_[11]+d_[12]+d_[20]+t_2+t_5, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[12]+d_[20]+t_2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[11]+d_[12]+d_[20]+t_2+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_15 -1+d_[28];
	uint64_t out_9 = out_11 +1;
	uint64_t out_10 = out_11 +5+d_[3];
	uint64_t out_33 = out_34 +1;
	uint64_t out_32 = out_33 +1;
	uint64_t out_20 = out_32 +1+d_[7];
	uint64_t out_17 = out_20 +1;


	vec_[35] = out_35;
	vec_[11] = out_11;
	vec_[34] = out_34;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[33] = out_33;
	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_406{
    406,
    48708,
    48792,
    true,
    block_406_fn
    };



static void block_302_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_302{
    302,
    44556,
    44560,
    true,
    block_302_fn
    };



static void block_303_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_15 +1, vec_[12] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +2+d_[3], vec_[12] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_0 = out_16 -1;


	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_303{
    303,
    44564,
    44588,
    true,
    block_303_fn
    };



static void block_323_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_17 = out_18 -2;
	uint64_t out_16 = MAP_Explorer::max2(out_18 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +3+d_[5], vec_[4] +4);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_37 +1;
	uint64_t out_1 = out_15;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_323{
    323,
    30732,
    30760,
    true,
    block_323_fn
    };



static void block_324_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_324{
    324,
    30764,
    30768,
    true,
    block_324_fn
    };



static void block_325_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +2, vec_[4] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[3], vec_[4] +3+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_37 +1;
	uint64_t out_1 = out_16;


	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_325{
    325,
    30788,
    30804,
    true,
    block_325_fn
    };



static void block_326_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[19] +1);
	uint64_t out_18 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[19] +1);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_326{
    326,
    30836,
    30848,
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
    30824,
    30824,
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
    30856,
    30856,
    true,
    block_328_fn
    };



static void block_342_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[11], d_[8]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[16], d_[13]);
	uint64_t t_2 = MAP_Explorer::max2(3+d_[16]+d_[22], d_[13]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[19]+t_1);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[19]+d_[21]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[22], d_[19]+d_[21]);
	uint64_t t_7 = MAP_Explorer::max2(t_0+t_5, 2+d_[11]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_0+t_3, t_7);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[27]+t_8, d_[16]+t_0);
	uint64_t t_10 = MAP_Explorer::max2(t_9, 1+d_[16]+t_0);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +5+d_[6], vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +5+d_[6]);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_22 +4+t_10, vec_[4] +5+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +7+d_[27]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +7+d_[21]+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +7+d_[27]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +9+d_[27]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +7+d_[27]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_3 = MAP_Explorer::max2(out_22 -1+d_[23]+t_0+t_5, vec_[5] +1+d_[23]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[21]+d_[23]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[23]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +3+d_[23]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[23]);
	uint64_t out_15 = MAP_Explorer::max2(out_22 +1+t_8, vec_[4] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[5] +3+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +3+d_[21]);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +3+t_5);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +5+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[23] +3);
	uint64_t out_19 = MAP_Explorer::max2(out_22 +t_0, vec_[13] +2);
	uint64_t out_20 = MAP_Explorer::max2(out_22 +2+d_[16]+t_0, vec_[13] +4+d_[16]);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +2);
	uint64_t out_21 = MAP_Explorer::max2(out_22 +t_7, vec_[5] +2+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[12] +2+d_[21]);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +2+t_5);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +4+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_19 +1;
	uint64_t out_14 = out_15 +1;
	uint64_t out_16 = out_37 +1;
	uint64_t out_17 = out_15 +1+d_[27];
	uint64_t out_1 = out_16;


	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_342{
    342,
    28696,
    28796,
    true,
    block_342_fn
    };



static void block_343_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[21] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[21] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_343{
    343,
    28808,
    28816,
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
    29508,
    29508,
    true,
    block_344_fn
    };



static void block_360_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_360{
    360,
    29388,
    29392,
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
    30496,
    30500,
    true,
    block_363_fn
    };



static void block_366_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[4], vec_[1] +8+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +7+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +5+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +7+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +8+d_[0]+d_[4]);
	uint64_t out_12 = out_19 -1;
	uint64_t out_22 = MAP_Explorer::max2(out_19 +4+d_[8], vec_[13] +5);
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

extern const MAP_Explorer::Block block_366{
    366,
    30576,
    30640,
    true,
    block_366_fn
    };



static void block_380_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(4+d_[11], d_[8]);
	uint64_t t_1 = MAP_Explorer::max2(3+d_[11]+d_[16], d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(4+t_1, d_[14]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[16], d_[14]);
	uint64_t t_4 = MAP_Explorer::max2(3+d_[22]+t_1, t_2);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[16]+d_[22], d_[14]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[19]+t_2);
	uint64_t t_8 = MAP_Explorer::max2(1+t_5, d_[19]+t_3);
	uint64_t t_9 = MAP_Explorer::max2(1+t_6, d_[19]+d_[21]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(1+d_[22], d_[19]+d_[21]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_8, d_[19]+d_[21]+t_3);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +5+d_[6], vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +5+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +3);
	uint64_t out_19 = MAP_Explorer::max2(out_13 +t_0, vec_[22] +2);
	uint64_t out_21 = MAP_Explorer::max2(out_13 +1+t_1, vec_[22] +2+d_[16]);
	uint64_t out_22 = MAP_Explorer::max2(out_13 +t_9, vec_[5] +2+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+d_[21]);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +3+t_10);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2);
	uint64_t out_18 = out_22 +2;
	uint64_t out_20 = out_22 +4+d_[27];
	uint64_t out_37 = out_22 +3+d_[27];
	uint64_t out_38 = out_22 +5+d_[27];
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_20;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_18 -1;
	uint64_t out_3 = out_17 -2+d_[23];
	uint64_t out_14 = out_17 +1+d_[27];


	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_380{
    380,
    23256,
    23356,
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
    23360,
    23360,
    true,
    block_381_fn
    };



static void block_388_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_388{
    388,
    23928,
    23932,
    true,
    block_388_fn
    };



static void block_391_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_391{
    391,
    25036,
    25040,
    true,
    block_391_fn
    };



static void block_392_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +2, vec_[4] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[13] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_18 = out_19 -2;
	uint64_t out_0 = out_18 +d_[5];


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_392{
    392,
    25068,
    25088,
    true,
    block_392_fn
    };



static void block_393_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +6);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +6);
	x_0 = MAP_Explorer::max2(x_0, vec_[19] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +6+d_[0]+d_[1]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+1+d_[5], vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +6);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +6);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +6+d_[0]+d_[1]);
	uint64_t out_12 = out_19 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[22] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +5+d_[9], vec_[22] +6);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +1+d_[13], vec_[17] +3);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_22 = out_23 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_37 -1;
	uint64_t out_16 = out_22 -3;
	uint64_t out_4 = out_14 +3;
	uint64_t out_13 = out_16 +2;
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_393{
    393,
    25116,
    25180,
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
    23936,
    23944,
    true,
    block_389_fn
    };



static void block_390_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +2, vec_[19] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_390{
    390,
    23948,
    23964,
    true,
    block_390_fn
    };



static void block_428_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_428{
    428,
    6840,
    6864,
    true,
    block_428_fn
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
    29512,
    29512,
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
    29668,
    29672,
    true,
    block_346_fn
    };



static void block_347_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
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
    29676,
    29688,
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
    29568,
    29572,
    true,
    block_348_fn
    };



static void block_467_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[10], d_[5]+d_[7]+d_[9]);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(2, d_[13]);
	uint64_t t_8 = MAP_Explorer::max2(1+d_[17], d_[13]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_8, d_[16]+t_7);
	uint64_t t_10 = MAP_Explorer::max2(d_[11]+d_[18]+t_0+t_5+t_9, d_[3]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[11]+d_[18]+d_[20]+t_0+t_5+t_9, vec_[3] +d_[11]+d_[18]+d_[20]+t_1+t_5+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[11]+d_[18]+d_[20]+t_5+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[11]+d_[18]+d_[20]+t_6+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[11]+d_[18]+d_[20]+t_5+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[9]+d_[11]+d_[18]+d_[20]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[11]+d_[18]+d_[20]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[11]+d_[18]+d_[20]+t_1+t_5+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[18]+d_[20]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[20]);
	uint64_t out_25 = MAP_Explorer::max2(out_6 +2+t_10, vec_[3] +1+d_[11]+d_[18]+t_1+t_5+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+d_[16]+d_[18]);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+d_[11]+d_[18]+t_5+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+d_[11]+d_[18]+t_6+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[15] +3+d_[11]+d_[18]+t_5+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+d_[18]);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+d_[9]+d_[11]+d_[18]+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+d_[11]+d_[18]+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+d_[11]+d_[18]+t_1+t_5+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2+d_[18]+t_9);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +2);
	uint64_t out_26 = MAP_Explorer::max2(out_25 +1+d_[23], vec_[14] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[16] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_26 +2, vec_[17] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[27], vec_[4] +1);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_24 = out_37 +1;
	uint64_t out_12 = MAP_Explorer::max2(out_25 +1, vec_[14] +1);
	uint64_t out_23 = out_24 -2;
	uint64_t out_0 = out_23 +d_[27];


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[24] = out_24;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_467{
    467,
    27176,
    27248,
    true,
    block_467_fn
    };



static void block_468_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_468{
    468,
    27252,
    27256,
    true,
    block_468_fn
    };



static void block_469_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_13 = out_19 +2;
	uint64_t out_22 = out_19 +2+d_[5];
	uint64_t out_25 = MAP_Explorer::max2(out_19 +3+d_[5], vec_[25] +1);
	uint64_t out_27 = MAP_Explorer::max2(out_25 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_27 +3+d_[9], vec_[23] +4);
	uint64_t out_12 = out_37;
	uint64_t out_23 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[13];
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_23 -2;
	uint64_t out_1 = out_18 +1+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_469{
    469,
    27260,
    27312,
    true,
    block_469_fn
    };



static void block_470_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_470{
    470,
    27316,
    27320,
    true,
    block_470_fn
    };



static void block_471_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +5);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +5);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +1+d_[5], vec_[18] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_19 +2, vec_[4] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +4+d_[9], vec_[4] +4+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +3);
	uint64_t out_16 = out_37;
	uint64_t out_17 = out_37 -1;
	uint64_t out_38 = out_37 +1+d_[13];
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_17 +2;
	uint64_t out_1 = out_14 -1+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_471{
    471,
    27324,
    27376,
    true,
    block_471_fn
    };



static void block_472_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_472{
    472,
    27380,
    27388,
    true,
    block_472_fn
    };



static void block_473_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_473{
    473,
    27392,
    27400,
    true,
    block_473_fn
    };



static void block_474_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_32 +1, vec_[22] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_32 +3, vec_[19] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +3);
	uint64_t out_21 = out_22 -1;
	uint64_t out_33 = out_22 +2+d_[5];
	uint64_t out_34 = out_22 +d_[5];
	uint64_t out_37 = out_22 +5+d_[5]+d_[9];
	uint64_t out_38 = out_22 +6+d_[5]+d_[9]+d_[13];
	uint64_t out_20 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_21 +2+d_[5];
	uint64_t out_17 = out_19 +5+d_[9];
	uint64_t out_16 = out_17 -2;
	uint64_t out_1 = out_16 +1+d_[13];
	uint64_t out_0 = out_1 -1;


	vec_[10] = out_10;
	vec_[32] = out_32;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[20] = out_20;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_474{
    474,
    27404,
    27456,
    true,
    block_474_fn
    };



static void block_475_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_9 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_9 = MAP_Explorer::max2(out_9, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[20] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[36] +2+d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(out_9 +3+d_[2], vec_[12] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[19] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +4);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +2+d_[6], vec_[22] +1);
	uint64_t out_16 = out_32 -1;
	uint64_t out_20 = out_32 +1+d_[6];
	uint64_t out_19 = MAP_Explorer::max2(out_33 +1, vec_[18] +1);
	uint64_t out_18 = out_19 +4+d_[10];
	uint64_t out_22 = out_19 +2+d_[10];
	uint64_t out_37 = out_19 +3+d_[10];
	uint64_t out_38 = out_19 +4+d_[10]+d_[14];
	uint64_t out_2 = out_38;
	uint64_t out_10 = out_18 -3;
	uint64_t out_1 = out_10 +2+d_[14];
	uint64_t out_0 = out_1 -1;


	vec_[9] = out_9;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[10] = out_10;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_475{
    475,
    27464,
    27520,
    true,
    block_475_fn
    };



static void block_476_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[10] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[18] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(out_10 +3+d_[5], vec_[13] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[33] +3);
	uint64_t out_19 = out_35 +1;
	uint64_t out_33 = out_35 +1+d_[9];
	uint64_t out_11 = MAP_Explorer::max2(out_35 +2+d_[9], vec_[34] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_35 +7+d_[9]+d_[13], vec_[9] +5+d_[13]);
	out_21 = MAP_Explorer::max2(out_21, vec_[21] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[34] +6+d_[13]);
	uint64_t out_34 = MAP_Explorer::max2(out_35 +4+d_[9], vec_[9] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[34] +3);
	uint64_t out_9 = out_34 -1;
	uint64_t out_13 = out_21 -2;
	uint64_t out_18 = out_21 +d_[17];
	uint64_t out_37 = out_21 -1+d_[17];
	uint64_t out_38 = out_21 +1+d_[17];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_37;


	vec_[10] = out_10;
	vec_[12] = out_12;
	vec_[35] = out_35;
	vec_[19] = out_19;
	vec_[33] = out_33;
	vec_[11] = out_11;
	vec_[21] = out_21;
	vec_[34] = out_34;
	vec_[9] = out_9;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_476{
    476,
    27532,
    27604,
    true,
    block_476_fn
    };



static void block_477_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_34 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_34 = MAP_Explorer::max2(out_34, vec_[2] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[13] +1);
	out_34 = MAP_Explorer::max2(out_34, vec_[18] +2);
	out_34 = MAP_Explorer::max2(out_34, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_13 = out_34 +1;
	uint64_t out_11 = MAP_Explorer::max2(out_34 +6+d_[5], vec_[11] +4);
	out_11 = MAP_Explorer::max2(out_11, vec_[32] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[35] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_34 +5+d_[5], vec_[11] +3);
	uint64_t out_32 = MAP_Explorer::max2(out_34 +6+d_[5]+d_[9], vec_[11] +4+d_[9]);
	out_32 = MAP_Explorer::max2(out_32, vec_[32] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[33] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[35] +2);
	uint64_t out_33 = MAP_Explorer::max2(out_34 +7+d_[5]+d_[9], vec_[11] +5+d_[9]);
	out_33 = MAP_Explorer::max2(out_33, vec_[16] +1);
	out_33 = MAP_Explorer::max2(out_33, vec_[32] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[33] +2);
	out_33 = MAP_Explorer::max2(out_33, vec_[35] +3);
	uint64_t out_12 = out_13 +1;
	uint64_t out_18 = out_21 -1;
	uint64_t out_35 = out_33 +3+d_[13];
	uint64_t out_37 = out_33 +2+d_[13];
	uint64_t out_38 = out_33 +4+d_[13];
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

extern const MAP_Explorer::Block block_477{
    477,
    27612,
    27672,
    true,
    block_477_fn
    };



static void block_478_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_11 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_11 = MAP_Explorer::max2(out_11, vec_[2] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[11] +1);
	out_11 = MAP_Explorer::max2(out_11, vec_[12] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[35] +2);
	out_11 = MAP_Explorer::max2(out_11, vec_[36] +3+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(out_11 +11+d_[4]+d_[8]+d_[12]+d_[16], vec_[9] +11+d_[8]+d_[12]+d_[16]);
	out_35 = MAP_Explorer::max2(out_35, vec_[10] +9+d_[8]+d_[12]+d_[16]);
	out_35 = MAP_Explorer::max2(out_35, vec_[17] +11+d_[8]+d_[12]+d_[16]);
	out_35 = MAP_Explorer::max2(out_35, vec_[19] +8+d_[8]+d_[12]+d_[16]);
	out_35 = MAP_Explorer::max2(out_35, vec_[21] +6+d_[12]+d_[16]);
	out_35 = MAP_Explorer::max2(out_35, vec_[34] +3+d_[16]);
	uint64_t out_16 = out_35 +3;
	uint64_t out_21 = MAP_Explorer::max2(out_35 +7+d_[20]+d_[24], vec_[4] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[20] +3+d_[24]);
	out_21 = MAP_Explorer::max2(out_21, vec_[33] +3);
	uint64_t out_10 = out_16 -2;
	uint64_t out_18 = out_21 +1;
	uint64_t out_19 = out_21 +4+d_[28];
	uint64_t out_37 = out_21 +4+d_[28]+d_[32];
	uint64_t out_38 = out_21 +6+d_[28]+d_[32];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_18 +4+d_[28];
	uint64_t out_12 = out_17 +d_[32];
	uint64_t out_1 = out_12;


	vec_[11] = out_11;
	vec_[35] = out_35;
	vec_[16] = out_16;
	vec_[21] = out_21;
	vec_[10] = out_10;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[12] = out_12;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_478{
    478,
    27680,
    27812,
    true,
    block_478_fn
    };



static void block_480_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_480{
    480,
    28244,
    28248,
    true,
    block_480_fn
    };



static void block_481_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_481{
    481,
    28252,
    28256,
    true,
    block_481_fn
    };



static void block_482_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_482{
    482,
    28288,
    28292,
    true,
    block_482_fn
    };



static void block_483_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_483{
    483,
    28312,
    28316,
    true,
    block_483_fn
    };



static void block_484_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +4+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_17 +4+d_[4], vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +4+d_[4]+d_[8], vec_[3] +2+d_[8]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+d_[8]);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +3, vec_[15] +3);
	uint64_t out_5 = out_12 -1;
	uint64_t out_16 = out_19 -1;
	uint64_t out_22 = out_19 +2+d_[12];
	uint64_t out_23 = out_19 +3+d_[12];
	uint64_t out_24 = out_19 +4+d_[12];
	uint64_t out_25 = out_19 +4+d_[12]+d_[16];
	uint64_t out_26 = out_19 +5+d_[12]+d_[16];
	uint64_t out_27 = out_19 +6+d_[12]+d_[16];
	uint64_t out_37 = out_19 +6+d_[12]+d_[16]+d_[20];
	uint64_t out_38 = out_19 +7+d_[12]+d_[16]+d_[20];
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_27;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_27;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_16 +2+d_[12];
	uint64_t out_4 = out_13 +7+d_[16]+d_[20];
	uint64_t out_2 = out_4;


	vec_[17] = out_17;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_484{
    484,
    28320,
    28408,
    true,
    block_484_fn
    };



static void block_496_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[4], vec_[22] +1);
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

extern const MAP_Explorer::Block block_496{
    496,
    30528,
    30548,
    true,
    block_496_fn
    };



static void block_486_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_486{
    486,
    23640,
    23640,
    true,
    block_486_fn
    };



static void block_487_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	out_0 = MAP_Explorer::max2(out_0, vec_[21] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_487{
    487,
    23644,
    23648,
    true,
    block_487_fn
    };



static void block_488_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
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

extern const MAP_Explorer::Block block_488{
    488,
    23688,
    23692,
    true,
    block_488_fn
    };



static void block_489_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[4] +2);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_489{
    489,
    23696,
    23712,
    true,
    block_489_fn
    };



static void block_490_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_490{
    490,
    23716,
    23720,
    true,
    block_490_fn
    };



static void block_492_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_492{
    492,
    23516,
    23520,
    true,
    block_492_fn
    };



static void block_491_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[14] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[15] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[19] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_20 = out_10 +2+d_[5];
	uint64_t out_16 = MAP_Explorer::max2(out_10 +4+d_[5]+d_[9], vec_[16] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +2, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +2+d_[13], vec_[21] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_15 = out_17 -1;
	uint64_t out_37 = out_17 +1+d_[13];
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_14 = out_15 +2;


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

extern const MAP_Explorer::Block block_491{
    491,
    23724,
    23784,
    true,
    block_491_fn
    };



static void block_494_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_494{
    494,
    29576,
    29580,
    true,
    block_494_fn
    };



static void block_495_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[4] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +4+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_21 +5+d_[4]+d_[8], vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +6+d_[8]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +7+d_[4]+d_[8], vec_[14] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +8+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_20 = MAP_Explorer::max2(out_21 +3+d_[4], vec_[18] +4);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +10+d_[4]+d_[8]+d_[12], vec_[14] +6+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +11+d_[8]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +5);
	uint64_t out_2 = out_38;
	uint64_t out_15 = out_20 -1;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_1 = out_18;
	uint64_t out_14 = out_18 -2;


	vec_[21] = out_21;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_495{
    495,
    29584,
    29644,
    true,
    block_495_fn
    };



static void block_523_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(d_[9], 1+d_[7]);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[19] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +5+d_[3]+d_[4]+t_1, vec_[19] +6+d_[4]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2+d_[10], vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_20 = out_37 +d_[10];
	uint64_t out_0 = out_20;
	uint64_t out_3 = out_20 +1+d_[13];


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_523{
    523,
    48356,
    48396,
    true,
    block_523_fn
    };



static void block_298_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_14 +1, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +d_[2], vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_0 = out_15 -1;


	vec_[14] = out_14;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_298{
    298,
    44488,
    44500,
    true,
    block_298_fn
    };



static void block_299_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[20] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[3], vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_0 = out_16 -1;


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_299{
    299,
    44516,
    44532,
    true,
    block_299_fn
    };



static void block_499_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_499{
    499,
    27844,
    27848,
    true,
    block_499_fn
    };



static void block_312_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +5);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +5);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +5+d_[0]+d_[1]);

	uint64_t out_32 = MAP_Explorer::max2(x_0+d_[5], vec_[14] +2);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +5);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +5);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_21 = out_32 +1;
	uint64_t out_10 = MAP_Explorer::max2(out_32 +3+d_[9], vec_[4] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_32 +3, vec_[4] +1);
	uint64_t out_33 = MAP_Explorer::max2(out_32 +4+d_[9], vec_[4] +3);
	out_33 = MAP_Explorer::max2(out_33, vec_[16] +1);
	uint64_t out_14 = out_21 +1;
	uint64_t out_18 = out_33 +1;
	uint64_t out_37 = out_33 +1+d_[13];
	uint64_t out_38 = out_33 +3+d_[13];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_18 +1;
	uint64_t out_17 = out_18 +1+d_[13];
	uint64_t out_1 = out_17;


	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[10] = out_10;
	vec_[19] = out_19;
	vec_[33] = out_33;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_312{
    312,
    26956,
    27012,
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
    27024,
    27028,
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
    27040,
    27044,
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
    27056,
    27056,
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
    27148,
    27148,
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
    27152,
    27152,
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
    27156,
    27156,
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
    27104,
    27104,
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



static void block_425_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_425{
    425,
    848,
    848,
    true,
    block_425_fn
    };



static void block_436_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_436{
    436,
    852,
    872,
    true,
    block_436_fn
    };



static void block_437_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_437{
    437,
    876,
    884,
    true,
    block_437_fn
    };



static void block_438_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_438{
    438,
    888,
    888,
    true,
    block_438_fn
    };



static void block_439_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_439{
    439,
    892,
    908,
    true,
    block_439_fn
    };



static void block_466_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_466{
    466,
    912,
    928,
    true,
    block_466_fn
    };



static void block_485_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_485{
    485,
    932,
    940,
    true,
    block_485_fn
    };



static void block_493_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_493{
    493,
    944,
    960,
    true,
    block_493_fn
    };



static void block_497_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_497{
    497,
    964,
    964,
    true,
    block_497_fn
    };



static void block_498_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +3);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[12] = out_12;
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

extern const MAP_Explorer::Block block_498{
    498,
    968,
    984,
    true,
    block_498_fn
    };



static void block_527_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_1 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	x_1 = MAP_Explorer::max2(x_1, vec_[2] +3);
	x_1 = MAP_Explorer::max2(x_1, vec_[3] +1);
	x_1 = MAP_Explorer::max2(x_1, vec_[5] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[6] +3);
	x_1 = MAP_Explorer::max2(x_1, vec_[36] +3+d_[0]+d_[1]);
	uint64_t x_0 = MAP_Explorer::max2(x_1 +d_[2], vec_[12] +2);

	uint64_t out_5 = MAP_Explorer::max2(x_0+d_[4], vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(x_1+d_[2], vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
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
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[6];


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_527{
    527,
    988,
    1004,
    true,
    block_527_fn
    };



static void block_530_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_530{
    530,
    1008,
    1016,
    true,
    block_530_fn
    };



static void block_531_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_531{
    531,
    1020,
    1020,
    true,
    block_531_fn
    };



static void block_532_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_532{
    532,
    1024,
    1040,
    true,
    block_532_fn
    };



static void block_533_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_533{
    533,
    1044,
    1060,
    true,
    block_533_fn
    };



static void block_534_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_534{
    534,
    1064,
    1072,
    true,
    block_534_fn
    };



static void block_537_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_537{
    537,
    1076,
    1092,
    true,
    block_537_fn
    };



static void block_538_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_538{
    538,
    1096,
    1096,
    true,
    block_538_fn
    };



static void block_539_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_539{
    539,
    1100,
    1116,
    true,
    block_539_fn
    };



static void block_541_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_541{
    541,
    828,
    828,
    true,
    block_541_fn
    };



static void block_542_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_542{
    542,
    832,
    836,
    true,
    block_542_fn
    };



static void block_543_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_543{
    543,
    840,
    844,
    true,
    block_543_fn
    };



static void block_544_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_544{
    544,
    1120,
    1136,
    true,
    block_544_fn
    };



static void block_545_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_545{
    545,
    1140,
    1140,
    true,
    block_545_fn
    };



static void block_546_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_546{
    546,
    1144,
    1160,
    true,
    block_546_fn
    };



static void block_547_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_547{
    547,
    1164,
    1180,
    true,
    block_547_fn
    };



static void block_548_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_548{
    548,
    27072,
    27076,
    true,
    block_548_fn
    };



static void block_549_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_549{
    549,
    27080,
    27084,
    true,
    block_549_fn
    };



static void block_550_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_550{
    550,
    1184,
    1184,
    true,
    block_550_fn
    };



static void block_551_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_5 , vec_[12] +1);
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[5] = out_5;
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

extern const MAP_Explorer::Block block_551{
    551,
    1192,
    1208,
    true,
    block_551_fn
    };



static void block_552_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_552{
    552,
    1212,
    1220,
    true,
    block_552_fn
    };



static void block_553_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_553{
    553,
    1224,
    1256,
    true,
    block_553_fn
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



static void block_479_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[6], vec_[14] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_19 +1;
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

extern const MAP_Explorer::Block block_479{
    479,
    27816,
    27848,
    true,
    block_479_fn
    };



static void block_408_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_19 = MAP_Explorer::max2(out_20 , vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_408{
    408,
    48808,
    48824,
    true,
    block_408_fn
    };



static void block_337_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_20 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[17] );
	uint64_t out_21 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_337{
    337,
    44600,
    44608,
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
    44612,
    44616,
    true,
    block_338_fn
    };



static void block_340_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_14 +1, vec_[21] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +4+d_[4], vec_[12] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +4+d_[4]);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[18] +4+d_[4]);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_22 +3+d_[8], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_22 +1;
	uint64_t out_37 = out_22 +1+d_[8];
	uint64_t out_12 = MAP_Explorer::max2(out_17 +3+d_[4], vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +3+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +3+d_[4]);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +2+d_[4], vec_[15] +2+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2+d_[4]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_19 +1+d_[8];


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_340{
    340,
    44624,
    44664,
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



static void block_297_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[14] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[19] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_13 = MAP_Explorer::max2(x_0+d_[2], vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[16] +2);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_13 +2, vec_[20] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[6], vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_37 +1;
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[18] +1);


	vec_[13] = out_13;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_297{
    297,
    44504,
    44532,
    true,
    block_297_fn
    };



static void block_276_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[19] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+2+d_[2], vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +4);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
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


	vec_[37] = out_37;
	vec_[14] = out_14;
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


    	uint64_t t_1 = MAP_Explorer::max2(d_[8], 1+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[13], d_[10]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_1+t_2, d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(t_3, d_[10]+t_1);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_0 = MAP_Explorer::max2(x_0+5+d_[3]+t_4, vec_[4] +7+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +3);
	uint64_t out_17 = MAP_Explorer::max2(x_0+5+d_[3]+d_[10]+t_1, vec_[4] +7+d_[10]+t_1);
	uint64_t out_37 = MAP_Explorer::max2(x_0+5+d_[3]+t_3, vec_[4] +7+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]);
	uint64_t out_18 = out_0 +1+d_[15];
	uint64_t out_38 = out_0 +2+d_[15];
	uint64_t out_23 = MAP_Explorer::max2(out_17 , vec_[23] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18;


	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[23] = out_23;
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


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
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
    48492,
    48504,
    true,
    block_401_fn
    };



static void block_402_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_402{
    402,
    48508,
    48512,
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

extern const MAP_Explorer::Block block_403{
    403,
    48516,
    48524,
    true,
    block_403_fn
    };



static void block_404_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_404{
    404,
    48528,
    48540,
    true,
    block_404_fn
    };



static void block_332_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[12], d_[9]+d_[11]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_17 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +4);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
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


	vec_[17] = out_17;
	vec_[12] = out_12;
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


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(2+d_[23], d_[18]+d_[20]+d_[22]);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[31], d_[26]+d_[28]);
	uint64_t t_7 = MAP_Explorer::max2(2+d_[31], d_[26]+d_[28]+d_[30]);
	uint64_t t_8 = MAP_Explorer::max2(9+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_0+t_4+t_7, d_[3]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +1+d_[3], vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	uint64_t out_35 = MAP_Explorer::max2(out_6 +4+t_0, vec_[3] +3+t_1);
	out_35 = MAP_Explorer::max2(out_35, vec_[4] +5);
	out_35 = MAP_Explorer::max2(out_35, vec_[12] +4+t_1);
	out_35 = MAP_Explorer::max2(out_35, vec_[15] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_35 +6+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_4+t_6, vec_[16] +3+d_[16]+d_[24]+t_4+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3+d_[15]+d_[16]+d_[24]+t_4+t_6);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_8, vec_[3] +10+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_1+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +12+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +11+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_1+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +11+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[16]+d_[24]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[15]+d_[16]+d_[24]+t_4+t_7);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_11 = out_35 -2;
	uint64_t out_34 = out_35 +d_[7];
	uint64_t out_15 = MAP_Explorer::max2(out_35 +6+d_[7]+d_[11]+d_[15]+d_[16]+d_[24]+t_4+t_7, vec_[16] +3+d_[16]+d_[24]+t_4+t_7);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +3+d_[15]+d_[16]+d_[24]+t_4+t_7);
	uint64_t out_18 = MAP_Explorer::max2(out_35 +4+d_[7]+d_[11], vec_[18] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_35 +5+d_[7]+d_[11], vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	uint64_t out_0 = out_15 -1;
	uint64_t out_3 = out_15 -1+d_[32];
	uint64_t out_9 = out_11 +1;
	uint64_t out_10 = out_11 +5+d_[7];
	uint64_t out_33 = out_34 +1;
	uint64_t out_32 = out_33 +1;
	uint64_t out_20 = out_32 +1+d_[11];
	uint64_t out_17 = out_20 +1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[11] = out_11;
	vec_[34] = out_34;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[33] = out_33;
	vec_[32] = out_32;
	vec_[20] = out_20;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_405{
    405,
    48696,
    48792,
    true,
    block_405_fn
    };



static void block_407_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_407{
    407,
    48796,
    48804,
    true,
    block_407_fn
    };



static void block_409_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_18 = out_19 +1;
	uint64_t out_37 = out_19 +d_[5];
	uint64_t out_15 = MAP_Explorer::max2(out_19 +1+d_[5], vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[5], vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_15 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_409{
    409,
    48828,
    48852,
    true,
    block_409_fn
    };



static void block_410_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_6 = out_12;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_410{
    410,
    48856,
    48864,
    true,
    block_410_fn
    };



static void block_564_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_3 = out_19;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -2;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_564{
    564,
    47364,
    47372,
    true,
    block_564_fn
    };



static void block_565_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_14 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[15] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_565{
    565,
    47348,
    47360,
    true,
    block_565_fn
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
    30196,
    30200,
    true,
    block_354_fn
    };



static void block_355_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_355{
    355,
    31880,
    31888,
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
    31892,
    31896,
    true,
    block_356_fn
    };



static void block_357_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], 2);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +3+d_[3], vec_[14] +4);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_37 = out_19 +d_[7];
	uint64_t out_3 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +1+t_0, vec_[3] +2);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_14 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_357{
    357,
    31844,
    31876,
    true,
    block_357_fn
    };



static void block_358_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+d_[5], vec_[1] +5+d_[1]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +5+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[1]+d_[5]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_358{
    358,
    30204,
    30232,
    true,
    block_358_fn
    };



static void block_359_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_18 +1, vec_[17] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +d_[4], vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_19 = MAP_Explorer::max2(out_22 +1, vec_[19] +1);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_359{
    359,
    30400,
    30420,
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
    30192,
    30192,
    true,
    block_353_fn
    };



static void block_352_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_12 = out_37;
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_352{
    352,
    29648,
    29664,
    true,
    block_352_fn
    };



static void block_431_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_431{
    431,
    48556,
    48572,
    true,
    block_431_fn
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


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[9], d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[9], d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(3+t_1, d_[4]+d_[6]+d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(3+t_2, d_[6]+d_[8]);
	uint64_t t_5 = MAP_Explorer::max2(3, d_[8]);


	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +3+d_[1]+d_[2]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[2]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+d_[2]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[2]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[12];
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_38 -1;


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_291{
    291,
    44172,
    44204,
    true,
    block_291_fn
    };



static void block_292_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[5]);


	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_6 = out_17 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_17 +d_[2]+d_[3]+d_[5]+d_[7], vec_[3] +d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[5]+d_[7]);
	uint64_t out_20 = MAP_Explorer::max2(out_17 +1+d_[2]+d_[3]+d_[5], vec_[3] +1+d_[3]+d_[5]);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[12] +2+d_[3]+d_[5]);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +2+d_[5]);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +2+d_[2]+d_[3]+t_0, vec_[3] +2+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_12 = out_38 -1;
	uint64_t out_1 = out_12;
	uint64_t out_0 = out_12 -1;


	vec_[17] = out_17;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_292{
    292,
    44344,
    44376,
    true,
    block_292_fn
    };



static void block_293_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_293{
    293,
    44380,
    44388,
    true,
    block_293_fn
    };



static void block_294_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);


	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[4], vec_[1] +2+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[4]);
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
    44392,
    44404,
    true,
    block_294_fn
    };



static void block_295_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +2, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_17 = out_19 +2;
	uint64_t out_0 = out_17 -2+d_[6];


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_295{
    295,
    44408,
    44432,
    true,
    block_295_fn
    };



static void block_300_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]);
	uint64_t out_20 = out_22 +1;
	uint64_t out_37 = out_22 +1+d_[2];
	uint64_t out_38 = out_22 +2+d_[2];
	uint64_t out_16 = out_38;
	uint64_t out_12 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_20 +2+d_[2];
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_300{
    300,
    44536,
    44552,
    true,
    block_300_fn
    };



static void block_304_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	out_0 = MAP_Explorer::max2(out_0, vec_[18] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_304{
    304,
    44668,
    44672,
    true,
    block_304_fn
    };



static void block_306_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_23 +2, vec_[13] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_23 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +4+d_[4], vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[4]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[4]);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_16 +1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[23] = out_23;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_306{
    306,
    44208,
    44232,
    true,
    block_306_fn
    };



static void block_307_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_15 = out_18 +1+d_[4];
	uint64_t out_20 = MAP_Explorer::max2(out_18 +3+d_[4], vec_[17] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +2+d_[8], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_20 -1;
	uint64_t out_37 = out_20 +d_[8];
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_19 +2+d_[8];


	vec_[18] = out_18;
	vec_[15] = out_15;
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
    30656,
    30692,
    true,
    block_307_fn
    };



static void block_308_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_308{
    308,
    30708,
    30716,
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
    30728,
    30728,
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
    44236,
    44236,
    true,
    block_310_fn
    };



static void block_311_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_14 +1, vec_[12] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1, vec_[4] +1);
	uint64_t out_16 = out_37;
	uint64_t out_17 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_17 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_311{
    311,
    44240,
    44256,
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
    27060,
    27064,
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
    27088,
    27088,
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
    27092,
    27096,
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
    27168,
    27172,
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
    44260,
    44260,
    true,
    block_320_fn
    };



static void block_321_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_13 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +3);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_13 , vec_[23] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_14 +3, vec_[22] +3);
	uint64_t out_15 = out_23 -2;
	uint64_t out_37 = out_23 -1+d_[6];
	uint64_t out_38 = out_23 +d_[6];
	uint64_t out_22 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_15 +3+d_[6];
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_321{
    321,
    44264,
    44296,
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
	uint64_t t_7 = MAP_Explorer::max2(4+d_[18]+t_6, d_[14]+t_5);
	uint64_t t_8 = MAP_Explorer::max2(4+d_[18], d_[14]);
	uint64_t t_9 = MAP_Explorer::max2(2, d_[20]);
	uint64_t t_10 = MAP_Explorer::max2(1+d_[24], d_[20]);
	uint64_t t_11 = MAP_Explorer::max2(t_7+t_10, 2+t_6);
	uint64_t t_12 = MAP_Explorer::max2(1+t_10, d_[23]+t_9);
	uint64_t t_13 = MAP_Explorer::max2(t_7+t_12, 3+t_6);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[24]+t_7, t_11);
	uint64_t t_15 = MAP_Explorer::max2(1+t_14, t_13);
	uint64_t t_16 = MAP_Explorer::max2(1+t_15, d_[25]+t_13);
	uint64_t t_19 = MAP_Explorer::max2(2+d_[32], d_[27]+d_[29]+d_[31]);
	uint64_t t_21 = MAP_Explorer::max2(1+d_[40], d_[35]+d_[37]);
	uint64_t t_22 = MAP_Explorer::max2(2+d_[40], d_[35]+d_[37]+d_[39]);
	uint64_t t_23 = MAP_Explorer::max2(d_[33]+t_16+t_19+t_22, 3+d_[18]+t_6);
	uint64_t t_24 = MAP_Explorer::max2(d_[25]+d_[33]+t_8+t_12+t_19+t_22, 3+d_[18]);
	uint64_t t_25 = MAP_Explorer::max2(d_[33]+d_[41]+t_16+t_19+t_22, 4+d_[18]+t_6);
	uint64_t t_26 = MAP_Explorer::max2(d_[25]+d_[33]+d_[41]+t_8+t_12+t_19+t_22, 4+d_[18]);
	uint64_t t_27 = MAP_Explorer::max2(1+d_[33]+t_16+t_19+t_21, t_23);
	uint64_t t_28 = MAP_Explorer::max2(1+d_[25]+d_[33]+t_8+t_12+t_19+t_21, t_24);
	uint64_t t_29 = MAP_Explorer::max2(1+t_27, t_25);
	uint64_t t_30 = MAP_Explorer::max2(1+t_28, t_26);
	uint64_t t_31 = MAP_Explorer::max2(2+t_29, d_[43]+t_25);
	uint64_t t_32 = MAP_Explorer::max2(2+t_30, d_[43]+t_26);
	uint64_t t_33 = MAP_Explorer::max2(2, d_[43]);
	uint64_t t_34 = MAP_Explorer::max2(1+d_[47]+t_29, t_31);
	uint64_t t_35 = MAP_Explorer::max2(1+d_[47]+t_30, t_32);
	uint64_t t_36 = MAP_Explorer::max2(1+d_[47], d_[43]);
	uint64_t t_37 = MAP_Explorer::max2(1+t_34, d_[46]+t_31);
	uint64_t t_38 = MAP_Explorer::max2(1+t_35, d_[46]+t_32);
	uint64_t t_39 = MAP_Explorer::max2(1+t_36, d_[46]+t_33);
	uint64_t t_40 = MAP_Explorer::max2(d_[54], d_[50]);
	uint64_t t_41 = MAP_Explorer::max2(3+d_[48]+t_37+t_40, d_[1]);
	uint64_t t_42 = MAP_Explorer::max2(2+t_40, d_[50]+d_[52]);
	uint64_t t_43 = MAP_Explorer::max2(1+d_[48]+t_37+t_42, d_[1]);
	uint64_t t_44 = MAP_Explorer::max2(1+d_[54], d_[52]);
	uint64_t t_45 = MAP_Explorer::max2(t_41, t_43);
	uint64_t t_46 = MAP_Explorer::max2(t_45, 2+d_[48]+d_[50]+t_37);
	uint64_t t_47 = MAP_Explorer::max2(1+t_45, d_[55]+t_43);
	uint64_t t_48 = MAP_Explorer::max2(t_47, 3+d_[48]+d_[50]+t_37);
	uint64_t t_49 = MAP_Explorer::max2(1+t_46, t_48);
	uint64_t t_50 = MAP_Explorer::max2(1+t_49, d_[57]+t_48);
	uint64_t t_51 = MAP_Explorer::max2(d_[60]+t_49, t_50);
	uint64_t t_52 = MAP_Explorer::max2(d_[60], d_[57]);
	uint64_t t_54 = MAP_Explorer::max2(1+d_[70], d_[67]+d_[69]);


	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_0+t_1, vec_[1] +7+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +2+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +3+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[12] +4+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[13] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[14] +6+t_0+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +7+d_[0]+t_0+t_1);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_50, vec_[1] +4+t_50);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+t_50);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+d_[48]+d_[55]+d_[57]+t_2+t_4+t_38+t_42);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +5+d_[25]+d_[33]+d_[41]+d_[48]+d_[55]+d_[57]+t_12+t_19+t_22+t_39+t_42);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[48]+d_[55]+d_[57]+t_1+t_4+t_38+t_42);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +4+d_[48]+d_[55]+d_[57]+t_1+t_4+t_38+t_42);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+t_50);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +3+t_50);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+d_[55]+d_[57]+t_42);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +3+d_[55]+d_[57]+t_44);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]+t_50);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_51, vec_[1] +6+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +5+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +4+d_[48]+d_[55]+t_2+t_4+t_38+t_42+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +7+d_[25]+d_[33]+d_[41]+d_[48]+d_[55]+t_12+t_19+t_22+t_39+t_42+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +5+d_[48]+d_[55]+t_1+t_4+t_38+t_42+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +6+d_[48]+d_[55]+t_1+t_4+t_38+t_42+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +5+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +5+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +5+d_[55]+t_42+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[27] +5+d_[55]+t_44+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +6+d_[0]+t_51);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_7, vec_[1] +4+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_2+t_4+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_1+t_4+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_1+t_4+t_8);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +3+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +3+t_7);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +4+d_[0]+t_7);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_29, vec_[1] +4+t_29);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +3+t_29);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+t_2+t_4+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[4] +4+d_[25]+d_[33]+d_[41]+t_12+t_19+t_22);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+t_1+t_4+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[12] +3+t_1+t_4+t_30);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +3+t_29);
	out_29 = MAP_Explorer::max2(out_29, vec_[14] +3+t_29);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +4+d_[0]+t_29);
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_6, vec_[1] +4+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[3] +1+t_2+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[6] +2+t_1+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[12] +3+t_1+t_4);
	out_31 = MAP_Explorer::max2(out_31, vec_[13] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[14] +3+t_6);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +4+d_[0]+t_6);
	uint64_t out_16 = out_17 -1;
	uint64_t out_9 = MAP_Explorer::max2(out_31 +2+d_[18], vec_[4] +2);
	uint64_t out_11 = MAP_Explorer::max2(out_31 +2, vec_[4] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +2, vec_[23] +2);
	uint64_t out_21 = MAP_Explorer::max2(out_17 +1+d_[64], vec_[23] +2);
	uint64_t out_15 = out_21 +3+t_54;
	uint64_t out_37 = out_21 +4+t_54;
	uint64_t out_38 = out_21 +5+d_[75]+t_54;
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_15 +1+d_[75];
	uint64_t out_3 = out_15 +2+d_[74];
	uint64_t out_0 = out_1 -1;


	vec_[10] = out_10;
	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[29] = out_29;
	vec_[31] = out_31;
	vec_[16] = out_16;
	vec_[9] = out_9;
	vec_[11] = out_11;
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
    27108,
    27108,
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
    27112,
    27112,
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
    27116,
    27116,
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
    27120,
    27124,
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
    27100,
    27100,
    true,
    block_376_fn
    };



static void block_429_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_429{
    429,
    6868,
    6868,
    true,
    block_429_fn
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
	uint64_t t_1 = MAP_Explorer::max2(1+d_[12], d_[7]+d_[9]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[12], d_[7]+d_[9]+d_[11]);


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
    48224,
    48224,
    true,
    block_187_fn
    };



static void block_189_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_189{
    189,
    48268,
    48272,
    true,
    block_189_fn
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
    48480,
    48480,
    true,
    block_196_fn
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
    48320,
    48328,
    true,
    block_190_fn
    };



static void block_191_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(d_[15], 1+d_[13]);


	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +1, vec_[14] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_21 +5+d_[5], vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +5+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +5);
	uint64_t out_18 = out_19 -1;
	uint64_t out_20 = out_19 +4+d_[9]+d_[10]+d_[16]+t_1;
	uint64_t out_37 = out_19 +4+d_[9]+d_[10]+t_1;
	uint64_t out_38 = out_19 +6+d_[9]+d_[10]+d_[16]+t_1;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_20;
	uint64_t out_1 = out_18 +6+d_[9]+d_[10]+d_[16]+t_1;
	uint64_t out_3 = out_18 +6+d_[9]+d_[10]+d_[16]+d_[19]+t_1;


	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_191{
    191,
    48332,
    48396,
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
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;


	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_192{
    192,
    48400,
    48412,
    true,
    block_192_fn
    };



static void block_195_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
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

extern const MAP_Explorer::Block block_195{
    195,
    48280,
    48284,
    true,
    block_195_fn
    };



static void block_516_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_516{
    516,
    4464,
    4496,
    true,
    block_516_fn
    };



static void block_517_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_517{
    517,
    2444,
    2444,
    true,
    block_517_fn
    };



static void block_518_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[7], d_[4]+d_[6]);
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

extern const MAP_Explorer::Block block_518{
    518,
    2448,
    2492,
    true,
    block_518_fn
    };



static void block_519_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_519{
    519,
    2496,
    2500,
    true,
    block_519_fn
    };



static void block_520_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_520{
    520,
    2856,
    2856,
    true,
    block_520_fn
    };



static void block_521_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(6+d_[2]+d_[6]+d_[10], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(7+d_[6]+d_[10], d_[1]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[2] +4, vec_[3] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[25] +4);

	uint64_t out_5 = MAP_Explorer::max2(x_0-2+t_1, vec_[0] +3+d_[0]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[1] +3+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +8+d_[6]+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +4+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +5+d_[10]);
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

extern const MAP_Explorer::Block block_521{
    521,
    2860,
    2900,
    true,
    block_521_fn
    };



static void block_522_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[22] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+d_[2], vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[22] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_522{
    522,
    2904,
    2920,
    true,
    block_522_fn
    };



static void block_525_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_525{
    525,
    2924,
    2980,
    true,
    block_525_fn
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



static void block_434_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_434{
    434,
    48608,
    48612,
    true,
    block_434_fn
    };



static void block_435_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_435{
    435,
    48692,
    48692,
    true,
    block_435_fn
    };



static void block_559_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_16 = MAP_Explorer::max2(x_0+2+d_[2], vec_[3] +4);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_20 +1;
	uint64_t out_15 = out_16 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_16 +1+d_[9]+t_1, vec_[19] +2+d_[9]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[14], vec_[17] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_0 = out_19 -2+d_[14];
	uint64_t out_3 = out_19 -2+d_[11];


	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_559{
    559,
    15944,
    15984,
    true,
    block_559_fn
    };



static void block_361_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_361{
    361,
    29396,
    29404,
    true,
    block_361_fn
    };



static void block_362_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_362{
    362,
    29408,
    29424,
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
    23364,
    23364,
    true,
    block_382_fn
    };



static void block_296_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+d_[3], vec_[13] +2);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[17] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[18] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +4+d_[0]);
	uint64_t out_18 = out_19 +1;
	uint64_t out_13 = MAP_Explorer::max2(out_19 +3, vec_[4] +2);
	uint64_t out_14 = out_13 +2+d_[7];
	uint64_t out_15 = out_13 +3+d_[7]+d_[11];
	uint64_t out_16 = out_13 +1+d_[7];
	uint64_t out_17 = out_13 +d_[7];
	uint64_t out_20 = out_13 +3+d_[7];
	uint64_t out_37 = out_13 +2+d_[7]+d_[11];
	uint64_t out_38 = out_13 +4+d_[7]+d_[11];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_15;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_296{
    296,
    44452,
    44500,
    true,
    block_296_fn
    };



static void block_305_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2+d_[3], vec_[23] +3);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +4+d_[7], vec_[3] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +4);
	uint64_t out_22 = out_23 -2;
	uint64_t out_37 = out_23 +2+d_[11]+d_[15];
	uint64_t out_38 = out_23 +3+d_[11]+d_[15];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_22 +3;
	uint64_t out_15 = out_22 +4+d_[11];
	uint64_t out_12 = out_15;
	uint64_t out_4 = out_5 +3+d_[11]+d_[15];
	uint64_t out_14 = out_15 -2;
	uint64_t out_2 = out_4;
	uint64_t out_13 = out_14 +4;
	uint64_t out_3 = out_13;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[13] = out_13;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_305{
    305,
    44676,
    44740,
    true,
    block_305_fn
    };



static void block_336_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[3], vec_[1] +7+d_[3]);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +6+d_[3]);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +5+d_[3]);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +6+d_[3]);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +7+d_[0]+d_[3]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+d_[7], vec_[13] +2);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[3], vec_[1] +7+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +6+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[17] +5+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[18] +6+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +7+d_[0]+d_[3]);
	uint64_t out_18 = out_19 +1;
	uint64_t out_13 = MAP_Explorer::max2(out_19 +3, vec_[4] +2);
	uint64_t out_14 = out_13 +2+d_[11];
	uint64_t out_15 = out_13 +3+d_[11]+d_[15];
	uint64_t out_16 = out_13 +1+d_[11];
	uint64_t out_17 = out_13 +d_[11];
	uint64_t out_20 = out_13 +3+d_[11];
	uint64_t out_37 = out_13 +2+d_[11]+d_[15];
	uint64_t out_38 = out_13 +4+d_[11]+d_[15];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_15;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_336{
    336,
    44436,
    44500,
    true,
    block_336_fn
    };



static void block_339_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_14 +1, vec_[21] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +4+d_[5], vec_[12] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +4+d_[5]);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[18] +4+d_[5]);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_22 +3+d_[9], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_22 +1;
	uint64_t out_37 = out_22 +1+d_[9];
	uint64_t out_12 = MAP_Explorer::max2(out_17 +3+d_[5], vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +3+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +3+d_[5]);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +2+d_[5], vec_[15] +2+d_[5]);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2+d_[5]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_19 +1+d_[9];


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_339{
    339,
    44620,
    44664,
    true,
    block_339_fn
    };



static void block_341_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(5+t_0, d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(4+d_[5], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(4+d_[9]+t_0, t_1);
	uint64_t t_4 = MAP_Explorer::max2(3+d_[5]+d_[9], d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(d_[14], d_[13]);
	uint64_t t_6 = MAP_Explorer::max2(2+t_3+t_5, t_0);
	uint64_t t_7 = MAP_Explorer::max2(3+t_4+t_5, d_[5]);
	uint64_t t_8 = MAP_Explorer::max2(1+d_[15]+t_3+t_5, t_0);
	uint64_t t_9 = MAP_Explorer::max2(2+d_[15]+t_4+t_5, d_[5]);
	uint64_t t_10 = MAP_Explorer::max2(2+d_[14]+t_3, t_6);
	uint64_t t_11 = MAP_Explorer::max2(3+d_[14]+t_4, t_7);
	uint64_t t_12 = MAP_Explorer::max2(t_10, t_8);
	uint64_t t_13 = MAP_Explorer::max2(t_11, t_9);


	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_1, vec_[1] +3+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[24] +2+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[25] +2+t_2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+t_1);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_3, vec_[1] +6+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +5+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +4+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +5+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +5+t_3);
	out_17 = MAP_Explorer::max2(out_17, vec_[25] +5+t_4);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +6+d_[0]+t_3);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_0, vec_[1] +6+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +4+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +5+t_0);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +4+d_[5]);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +6+d_[0]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_8, vec_[1] +6+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +5+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +4+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +5+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +5+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +4+t_9);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[13]+d_[15]);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+d_[15]);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +6+d_[0]+t_8);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_10, vec_[1] +5+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +4+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_10);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_12, vec_[1] +6+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+d_[13]+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+d_[15]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_12);
	uint64_t out_1 = out_38;
	uint64_t out_16 = out_17 -1;
	uint64_t out_24 = out_25 -2;
	uint64_t out_27 = out_38 +1;
	uint64_t out_5 = out_27;
	uint64_t out_3 = out_27;
	uint64_t out_2 = out_27;
	uint64_t out_0 = out_27 -2;
	uint64_t out_15 = out_16 -1;


	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[24] = out_24;
	vec_[27] = out_27;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_341{
    341,
    44900,
    44956,
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
    29744,
    29752,
    true,
    block_349_fn
    };



static void block_350_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_350{
    350,
    29736,
    29740,
    true,
    block_350_fn
    };



static void block_351_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +2, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +3+d_[3], vec_[17] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_14 = out_18 -2;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_351{
    351,
    29620,
    29644,
    true,
    block_351_fn
    };



static void block_364_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_22 = out_37;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_364{
    364,
    30504,
    30512,
    true,
    block_364_fn
    };



static void block_365_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[7], vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 +1;
	uint64_t out_19 = out_18 +1+d_[7];
	uint64_t out_37 = out_18 +d_[7];
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

extern const MAP_Explorer::Block block_365{
    365,
    30516,
    30548,
    true,
    block_365_fn
    };



static void block_367_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +1, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[27] +1);
	uint64_t out_14 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[27] +1);
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

extern const MAP_Explorer::Block block_367{
    367,
    44960,
    44976,
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
    44980,
    44980,
    true,
    block_377_fn
    };



static void block_378_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +4+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_15 -1;
	uint64_t out_17 = out_37 +1;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_378{
    378,
    44984,
    45004,
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
    45008,
    45016,
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
    23428,
    23432,
    true,
    block_383_fn
    };



static void block_384_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_38 -1;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_384{
    384,
    23436,
    23452,
    true,
    block_384_fn
    };



static void block_385_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
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
    23628,
    23636,
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
    23620,
    23624,
    true,
    block_386_fn
    };



static void block_387_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 -2;
	uint64_t out_15 = out_17 -1;
	uint64_t out_0 = out_15 +1+d_[5];


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[15] = out_15;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_387{
    387,
    23500,
    23520,
    true,
    block_387_fn
    };



static void block_394_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_15 = out_38;
	uint64_t out_14 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_394{
    394,
    45020,
    45036,
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
    45040,
    45040,
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
    45216,
    45220,
    true,
    block_396_fn
    };



static void block_397_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +6+d_[0]);
	uint64_t out_3 = out_27;
	uint64_t out_26 = out_27 -1;
	uint64_t out_37 = out_27 -2+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_27 -1+d_[4], vec_[22] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_25 = out_26 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_24 = out_25 -1;


	vec_[27] = out_27;
	vec_[3] = out_3;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[25] = out_25;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[24] = out_24;
}

extern const MAP_Explorer::Block block_397{
    397,
    45056,
    45076,
    true,
    block_397_fn
    };



static void block_398_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +2+d_[2], vec_[23] +3);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +4+d_[6], vec_[3] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +4);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +5);
	uint64_t out_22 = out_23 -2;
	uint64_t out_37 = out_23 +2+d_[10]+d_[14];
	uint64_t out_38 = out_23 +3+d_[10]+d_[14];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_22 +3;
	uint64_t out_15 = out_22 +4+d_[10];
	uint64_t out_12 = out_15;
	uint64_t out_4 = out_5 +3+d_[10]+d_[14];
	uint64_t out_14 = out_15 -2;
	uint64_t out_2 = out_4;
	uint64_t out_13 = out_14 +4;
	uint64_t out_3 = out_13;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[13] = out_13;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_398{
    398,
    44680,
    44740,
    true,
    block_398_fn
    };



static void block_193_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +4+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_20 +1, vec_[17] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_20 +3+d_[4], vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +4);
	uint64_t out_17 = out_21;
	uint64_t out_18 = out_21 +1;
	uint64_t out_37 = out_21 +d_[8];
	uint64_t out_38 = out_21 +2+d_[8];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_18 +d_[8];
	uint64_t out_3 = out_18 +d_[8]+d_[9];


	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_193{
    193,
    48416,
    48452,
    true,
    block_193_fn
    };



static void block_194_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_194{
    194,
    48456,
    48464,
    true,
    block_194_fn
    };



static void block_524_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[18] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_21 +1, vec_[17] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +2+d_[3], vec_[17] +3+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 -1;
	uint64_t out_37 = out_18 -1+d_[3];
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_17 +1+d_[3]+d_[4];


	vec_[21] = out_21;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_524{
    524,
    48436,
    48452,
    true,
    block_524_fn
    };



static void block_526_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_526{
    526,
    48484,
    48488,
    true,
    block_526_fn
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



static void block_430_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_430{
    430,
    48544,
    48552,
    true,
    block_430_fn
    };



static void block_432_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_432{
    432,
    48576,
    48600,
    true,
    block_432_fn
    };



static void block_433_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_433{
    433,
    48604,
    48604,
    true,
    block_433_fn
    };



static void block_274_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_23 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_274{
    274,
    7412,
    7416,
    true,
    block_274_fn
    };



static void block_275_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[5]+d_[7]+d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[18], d_[13]+d_[15]+d_[17]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[18], d_[15]+d_[17]);
	uint64_t t_13 = MAP_Explorer::max2(2+d_[26], d_[21]+d_[23]+d_[25]);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[26], d_[23]+d_[25]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13, vec_[1] +6+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +5+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +3+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[5] +4+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +5+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +4+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +4+d_[11]+d_[19]+t_4+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[22] +4+d_[9]+d_[11]+d_[19]+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[23] +4+d_[11]+d_[19]+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +4+d_[19]+t_8+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[25] +4+d_[19]+t_9+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[26] +4+d_[17]+d_[19]+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[27] +4+d_[19]+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[28] +4+t_13);
	x_0 = MAP_Explorer::max2(x_0, vec_[29] +4+t_14);
	x_0 = MAP_Explorer::max2(x_0, vec_[30] +4+d_[25]);
	x_0 = MAP_Explorer::max2(x_0, vec_[31] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +6+d_[0]+d_[2]+d_[3]+d_[11]+d_[19]+t_3+t_8+t_13);

	uint64_t out_3 = x_0 -3+d_[27];
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
	uint64_t t_2 = MAP_Explorer::max2(8+d_[6]+d_[10]+d_[14], 1+d_[3]);


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


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_423{
    423,
    7420,
    7420,
    true,
    block_423_fn
    };



static void block_424_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_424{
    424,
    7360,
    7384,
    true,
    block_424_fn
    };



static void block_503_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_503{
    503,
    29756,
    29756,
    true,
    block_503_fn
    };



static void block_638_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_638{
    638,
    52624,
    52632,
    true,
    block_638_fn
    };



static void block_639_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_639{
    639,
    52620,
    52620,
    true,
    block_639_fn
    };



static void block_504_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
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

extern const MAP_Explorer::Block block_504{
    504,
    29996,
    30004,
    true,
    block_504_fn
    };



static void block_505_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_15 +3, vec_[18] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +5+d_[4], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[4]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +4+d_[4]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_12 +1+d_[4];
	uint64_t out_37 = out_12 +d_[4];
	uint64_t out_20 = out_37;
	uint64_t out_0 = out_37;


	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_505{
    505,
    30144,
    30168,
    true,
    block_505_fn
    };



static void block_507_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_507{
    507,
    30852,
    30856,
    true,
    block_507_fn
    };



static void block_243_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0-1+d_[2], vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_19;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[18] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +1+d_[3];


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_243{
    243,
    17224,
    17236,
    true,
    block_243_fn
    };



static void block_509_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_509{
    509,
    29760,
    29764,
    true,
    block_509_fn
    };



static void block_510_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
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

extern const MAP_Explorer::Block block_510{
    510,
    29832,
    29836,
    true,
    block_510_fn
    };



static void block_511_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[4] +2);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[20] = out_20;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_511{
    511,
    29840,
    29856,
    true,
    block_511_fn
    };



static void block_512_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_512{
    512,
    29860,
    29864,
    true,
    block_512_fn
    };



static void block_513_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[4] +3);
	out_32 = MAP_Explorer::max2(out_32, vec_[14] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[15] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_32 +5+d_[5]+d_[9], vec_[16] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +5+d_[5]+d_[9]);
	uint64_t out_19 = MAP_Explorer::max2(out_32 +8+d_[5]+d_[9], vec_[16] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +8+d_[5]+d_[9]);
	uint64_t out_20 = MAP_Explorer::max2(out_32 +2+d_[5], vec_[19] +2+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(out_32 +8+d_[5]+d_[9]+d_[13], vec_[16] +4+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +8+d_[5]+d_[9]+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_22 = out_37;
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_10 = out_20 +1;
	uint64_t out_16 = out_19 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_15 = out_16 -1;


	vec_[32] = out_32;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[10] = out_10;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_513{
    513,
    29868,
    29928,
    true,
    block_513_fn
    };



static void block_514_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_514{
    514,
    29640,
    29644,
    true,
    block_514_fn
    };



static void block_515_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_515{
    515,
    30828,
    30832,
    true,
    block_515_fn
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
    63168,
    63176,
    true,
    block_136_fn
    };



static void block_701_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[4], vec_[17] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[17] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_701{
    701,
    17028,
    17040,
    true,
    block_701_fn
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
    63164,
    63164,
    true,
    block_137_fn
    };



static void block_500_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[15] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_10 +3, vec_[19] +3);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_20 = out_37 +1;
	uint64_t out_1 = out_20;


	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_500{
    500,
    23788,
    23804,
    true,
    block_500_fn
    };



static void block_502_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[17] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +2, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +2+d_[4], vec_[21] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_15 = out_17 -1;
	uint64_t out_37 = out_17 +1+d_[4];
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_14 = out_15 +2;


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

extern const MAP_Explorer::Block block_502{
    502,
    23760,
    23784,
    true,
    block_502_fn
    };



static void block_506_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
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

extern const MAP_Explorer::Block block_506{
    506,
    30296,
    30300,
    true,
    block_506_fn
    };



static void block_508_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_12 = out_37;
	uint64_t out_16 = out_37 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[5], vec_[17] );
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_508{
    508,
    30172,
    30192,
    true,
    block_508_fn
    };



static void block_204_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_19 = MAP_Explorer::max2(out_18 , vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_204{
    204,
    48296,
    48312,
    true,
    block_204_fn
    };



static void block_265_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[14] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_265{
    265,
    16112,
    16120,
    true,
    block_265_fn
    };



static void block_266_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]);
	uint64_t out_3 = out_22;
	uint64_t out_13 = out_22 +1;
	uint64_t out_12 = MAP_Explorer::max2(out_22 +2, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_22 +3+d_[5], vec_[4] +3);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[22] = out_22;
	vec_[23] = out_23;
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
    7356,
    7384,
    true,
    block_266_fn
    };



static void block_268_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_268{
    268,
    1308,
    1312,
    true,
    block_268_fn
    };



static void block_501_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[20] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +2, vec_[17] +2);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_501{
    501,
    23820,
    23836,
    true,
    block_501_fn
    };



static void block_528_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_528{
    528,
    31016,
    31024,
    true,
    block_528_fn
    };



static void block_529_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_529{
    529,
    31008,
    31012,
    true,
    block_529_fn
    };



static void block_535_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
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

extern const MAP_Explorer::Block block_535{
    535,
    23368,
    23372,
    true,
    block_535_fn
    };



static void block_536_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_536{
    536,
    25004,
    25008,
    true,
    block_536_fn
    };



static void block_540_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[4], vec_[1] +5+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +4+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +4+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +3+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[19] +2+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +5+d_[0]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +2, vec_[17] +2);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_540{
    540,
    23808,
    23836,
    true,
    block_540_fn
    };



static void block_554_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_25 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_554{
    554,
    7424,
    7428,
    true,
    block_554_fn
    };



static void block_555_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_555{
    555,
    7348,
    7352,
    true,
    block_555_fn
    };



static void block_177_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_3 +2, vec_[15] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_3 +3+d_[3], vec_[15] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_0 = out_18 -1;


	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_177{
    177,
    76964,
    76988,
    true,
    block_177_fn
    };



static void block_178_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[14] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_178{
    178,
    76952,
    76960,
    true,
    block_178_fn
    };



static void block_202_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_202{
    202,
    48276,
    48284,
    true,
    block_202_fn
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
    48228,
    48232,
    true,
    block_188_fn
    };



static void block_671_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	uint64_t out_16 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_37 -1;
	uint64_t out_0 = out_17 +d_[5];
	uint64_t out_3 = out_17 +2+d_[4];


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_671{
    671,
    73936,
    73952,
    true,
    block_671_fn
    };



static void block_672_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_672{
    672,
    73956,
    73960,
    true,
    block_672_fn
    };



static void block_673_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = out_16;
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_673{
    673,
    73964,
    73980,
    true,
    block_673_fn
    };



static void block_674_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(d_[14], d_[11]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_22 +1+d_[9]+d_[11]+t_1, vec_[5] +2+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[9]+d_[11]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[7]+d_[9]+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+d_[9]+d_[11]);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +2+d_[9]+t_1+t_2, vec_[5] +3+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[9]+t_1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[7]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+d_[9]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +2);
	uint64_t out_13 = out_37;
	uint64_t out_12 = out_19;
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_23 = out_38 -1;
	uint64_t out_1 = out_23;
	uint64_t out_0 = out_23 -1;


	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[23] = out_23;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_674{
    674,
    93628,
    93672,
    true,
    block_674_fn
    };



static void block_677_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[11], d_[8]);


	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[22] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +5+d_[5]+d_[6]+t_0, vec_[6] +4+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +6+d_[6]+t_0);
	uint64_t out_22 = out_37;
	uint64_t out_23 = out_37 +1;
	uint64_t out_38 = out_37 +d_[15];
	uint64_t out_12 = MAP_Explorer::max2(out_18 +3+d_[5]+d_[6]+d_[8], vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +4+d_[6]+d_[8]);
	uint64_t out_6 = out_23;
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_13 = out_23 -2;
	uint64_t out_4 = out_13 +2+d_[15];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_677{
    677,
    93708,
    93760,
    true,
    block_677_fn
    };



static void block_678_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_678{
    678,
    73984,
    73984,
    true,
    block_678_fn
    };



static void block_679_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_12 +1, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1+d_[3], vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[5];


	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_679{
    679,
    73988,
    74008,
    true,
    block_679_fn
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


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[4], vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +5+t_0, vec_[3] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +5+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +5);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_13 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_1 = out_18;
	uint64_t out_17 = out_18 -2;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_80{
    80,
    17524,
    17548,
    true,
    block_80_fn
    };



static void block_203_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_17 +2, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +4+d_[4], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[4]);
	uint64_t out_18 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_37 +1;
	uint64_t out_3 = out_37 +1+d_[6];


	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_203{
    203,
    48288,
    48312,
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
    48316,
    48316,
    true,
    block_205_fn
    };



static void block_17_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_17{
    17,
    77404,
    77412,
    true,
    block_17_fn
    };



static void block_18_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +d_[2], vec_[4] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +2+d_[2], vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_19 = out_18 +3+d_[6];
	uint64_t out_37 = out_18 +2+d_[6];
	uint64_t out_38 = out_18 +4+d_[6];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_37;


	vec_[17] = out_17;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_18{
    18,
    77416,
    77452,
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
    77456,
    77464,
    true,
    block_19_fn
    };



static void block_77_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[7], d_[4]+d_[6]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[15], d_[10]+d_[12]+d_[14]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[15], d_[12]+d_[14]);
	uint64_t t_13 = MAP_Explorer::max2(2+d_[23], d_[18]+d_[20]+d_[22]);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[23], d_[20]+d_[22]);
	uint64_t t_18 = MAP_Explorer::max2(2+d_[31], d_[26]+d_[28]+d_[30]);
	uint64_t t_19 = MAP_Explorer::max2(1+d_[31], d_[28]+d_[30]);
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


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_3 = x_0 -1+d_[1];
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[4], vec_[14] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[4], vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_81{
    81,
    17556,
    17568,
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
    17572,
    17572,
    true,
    block_82_fn
    };



static void block_83_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_83{
    83,
    17576,
    17580,
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
    17584,
    17588,
    true,
    block_84_fn
    };



static void block_233_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[6], d_[3]+d_[5]);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +3+t_1, vec_[5] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[11], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_12 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[11], vec_[14] );
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_3 = out_19 -1+d_[7];


	vec_[18] = out_18;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[23] = out_23;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_233{
    233,
    74384,
    74416,
    true,
    block_233_fn
    };



static void block_250_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_14 +2, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_14 +3+d_[2], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4);
	uint64_t out_23 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_250{
    250,
    74680,
    74700,
    true,
    block_250_fn
    };



static void block_637_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_23 = out_37;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_637{
    637,
    52612,
    52620,
    true,
    block_637_fn
    };



static void block_641_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[4]+d_[10], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[3]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+t_1);
	uint64_t t_7 = MAP_Explorer::max2(1+t_4, d_[7]+d_[9]+t_0);
	uint64_t t_8 = MAP_Explorer::max2(1+t_5, d_[7]+d_[9]+t_1);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_7, vec_[1] +7+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +6+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +5+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +6+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +4+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +6+t_9);
	x_0 = MAP_Explorer::max2(x_0, vec_[29] +4+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +7+d_[0]+t_7);

	uint64_t out_3 = x_0 -3+d_[11];
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[4], vec_[1] +5+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_7, vec_[1] +7+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +6+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +4+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +7+d_[0]+t_7);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_1 = out_13;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_641{
    641,
    52644,
    52684,
    true,
    block_641_fn
    };



static void block_642_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 , vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[5];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_642{
    642,
    52688,
    52704,
    true,
    block_642_fn
    };



static void block_669_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[9], d_[5]+d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(d_[9], d_[7]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[16] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_12 = MAP_Explorer::max2(x_0+1+d_[2]+d_[3]+d_[5]+d_[7], vec_[3] +3+d_[3]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[3]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[3]+d_[5]+d_[7]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+d_[5]+d_[7]);
	uint64_t out_13 = MAP_Explorer::max2(x_0+1+d_[2]+d_[3]+t_1, vec_[3] +3+d_[3]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[3]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[3]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_1);
	uint64_t out_37 = MAP_Explorer::max2(x_0+1+d_[2]+d_[3]+t_0, vec_[3] +3+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_12;
	uint64_t out_0 = out_13 -1;
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_13 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_669{
    669,
    73864,
    73892,
    true,
    block_669_fn
    };



static void block_670_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[4], d_[1]+d_[3]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[5]+t_1, vec_[1] +3+d_[5]+t_1);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2+d_[5]+t_1);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1+d_[1]+d_[3]+d_[5]);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2+d_[5]+t_1);
	x_0 = MAP_Explorer::max2(x_0, vec_[22] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[23] +2+d_[5]+t_1);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +2+d_[3]+d_[5]);
	x_0 = MAP_Explorer::max2(x_0, vec_[25] +2+d_[5]);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]+d_[5]+t_1);

	uint64_t out_3 = x_0 -1+d_[7];
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[5]+t_1, vec_[1] +3+d_[5]+t_1);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[5]+t_1);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1+d_[1]+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+d_[5]+t_1);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+d_[5]+t_1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[3]+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[5]+t_1);
	uint64_t out_23 = MAP_Explorer::max2(out_24 +1, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +d_[10], vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_670{
    670,
    73896,
    73924,
    true,
    block_670_fn
    };



static void block_675_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_0 = out_17 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_17 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_675{
    675,
    93676,
    93684,
    true,
    block_675_fn
    };



static void block_676_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_13 +1, vec_[19] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1+d_[2], vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_16 = out_37;
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_676{
    676,
    93688,
    93704,
    true,
    block_676_fn
    };



static void block_680_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[11], d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[7]+d_[9]);


	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_24 = out_25 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_25 +2+d_[5]+d_[7], vec_[4] +2+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+d_[7]);
	uint64_t out_37 = MAP_Explorer::max2(out_25 +3+d_[5]+t_0, vec_[4] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_25 +2+d_[5]+t_1, vec_[4] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_1);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_23 = out_24 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;
	uint64_t out_5 = out_23 +3;
	uint64_t out_12 = out_23 +3+d_[5];


	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[24] = out_24;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[23] = out_23;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_680{
    680,
    74012,
    74056,
    true,
    block_680_fn
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
    77200,
    77208,
    true,
    block_15_fn
    };



static void block_20_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[18] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
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
    77468,
    77472,
    true,
    block_20_fn
    };



static void block_21_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_21{
    21,
    77528,
    77532,
    true,
    block_21_fn
    };



static void block_30_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[4] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_30{
    30,
    31900,
    31908,
    true,
    block_30_fn
    };



static void block_31_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[10] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_9 = out_37;
	uint64_t out_17 = out_37 +1;
	uint64_t out_38 = out_37 +t_0;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_17 -2+d_[4];
	uint64_t out_4 = out_17 +t_0;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_31{
    31,
    31968,
    31984,
    true,
    block_31_fn
    };



static void block_32_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_2 = MAP_Explorer::max2(2+d_[8], d_[3]+d_[5]+d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(d_[16], d_[11]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[16], d_[11]+d_[13]);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+t_2, vec_[1] +3+d_[1]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+d_[1]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[1]+d_[9]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[9]+t_2);
	uint64_t out_0 = out_37 -1+t_3;
	uint64_t out_3 = out_37 -1+d_[11]+d_[13]+d_[15];
	uint64_t out_4 = MAP_Explorer::max2(out_37 +t_4, vec_[5] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_3, vec_[5] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_32{
    32,
    32016,
    32048,
    true,
    block_32_fn
    };



static void block_85_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_18 +1+d_[2];
	uint64_t out_37 = out_18 +d_[2];
	uint64_t out_38 = out_18 +2+d_[2];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_37;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_85{
    85,
    17592,
    17608,
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
    17612,
    17612,
    true,
    block_86_fn
    };



static void block_88_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +4+d_[2], vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +4+d_[2], vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +4+d_[2]+d_[6], vec_[3] +3+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_13 -2;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_5 = out_12 +1;
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_88{
    88,
    17704,
    17732,
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


    

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_3 = out_23;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[23] = out_23;
	vec_[37] = out_37;
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
    76076,
    76088,
    true,
    block_172_fn
    };



static void block_173_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[19] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_28;
	uint64_t out_38 = MAP_Explorer::max2(out_16 +2, vec_[4] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[16] = out_16;
	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_173{
    173,
    76092,
    76108,
    true,
    block_173_fn
    };


} // namespace CV32E40P_DSE