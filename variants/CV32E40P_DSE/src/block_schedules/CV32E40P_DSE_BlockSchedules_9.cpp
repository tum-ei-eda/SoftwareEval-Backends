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

static void block_372_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_0, vec_[1] +2+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_0);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[30] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_1, vec_[1] +1+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_1);
	uint64_t out_1 = out_37 +d_[5];
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = out_37 +1+d_[5];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_372{
    372,
    36288,
    36304,
    block_372_fn
    };

static void block_373_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_15;
	uint64_t out_5 = out_37 +1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_373{
    373,
    39140,
    39152,
    block_373_fn
    };

static void block_386_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_386{
    386,
    39156,
    39156,
    block_386_fn
    };

static void block_387_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[3] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_387{
    387,
    36308,
    36316,
    block_387_fn
    };

static void block_388_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +2);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[22] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[23] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[23] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_388{
    388,
    36332,
    36344,
    block_388_fn
    };

static void block_389_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_389{
    389,
    35824,
    35828,
    block_389_fn
    };

static void block_390_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
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

extern const MAP_Explorer::Block block_390{
    390,
    36348,
    36352,
    block_390_fn
    };

static void block_391_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_391{
    391,
    36356,
    36356,
    block_391_fn
    };

static void block_392_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_16 +d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_392{
    392,
    43480,
    43492,
    block_392_fn
    };

static void block_393_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_393{
    393,
    43496,
    43496,
    block_393_fn
    };

static void block_394_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = out_22 -1+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_23 = out_22 +d_[3]+d_[4];
	uint64_t out_24 = out_22 +d_[3]+d_[4]+d_[5];
	uint64_t out_25 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_26 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_27 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_28 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_29 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_30 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_31 = out_22 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_37 = out_22 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_38 = out_22 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_0 = out_1 -1;


	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_394{
    394,
    36360,
    36416,
    block_394_fn
    };

static void block_395_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_6 = out_14 -1+d_[3];
	uint64_t out_37 = out_14 -2+d_[3];
	uint64_t out_38 = out_14 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_395{
    395,
    36424,
    36440,
    block_395_fn
    };

static void block_400_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_400{
    400,
    77772,
    77776,
    block_400_fn
    };

static void block_401_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_5 = out_37 +1+d_[3];
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_401{
    401,
    77568,
    77580,
    block_401_fn
    };

static void block_411_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_411{
    411,
    2680,
    2680,
    block_411_fn
    };

static void block_0_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]);
	uint64_t out_7 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[2] +2+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[4] +2+d_[2]);
	out_7 = MAP_Explorer::max2(out_7, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_4 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36];
	uint64_t out_6 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38];
	uint64_t out_8 = out_7 +d_[3];
	uint64_t out_9 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35];
	uint64_t out_10 = out_7 +d_[3]+d_[4]+d_[5];
	uint64_t out_11 = out_7 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_12 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_13 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_14 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_15 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_16 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11];
	uint64_t out_17 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_18 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_19 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_20 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15];
	uint64_t out_21 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16];
	uint64_t out_22 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17];
	uint64_t out_23 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18];
	uint64_t out_24 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19];
	uint64_t out_25 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20];
	uint64_t out_26 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21];
	uint64_t out_27 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22];
	uint64_t out_28 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23];
	uint64_t out_29 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24];
	uint64_t out_30 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40];
	uint64_t out_31 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42];
	uint64_t out_32 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27];
	uint64_t out_33 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28];
	uint64_t out_34 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29];
	uint64_t out_35 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30];
	uint64_t out_37 = out_7 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42];
	uint64_t out_38 = out_7 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[32]+d_[33]+d_[34]+d_[35]+d_[36]+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42]+d_[43];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_4 -1+d_[37]+d_[38]+d_[39]+d_[40]+d_[41]+d_[42]+d_[43];
	uint64_t out_0 = out_1 -1;


	vec_[5] = out_5;
	vec_[7] = out_7;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[8] = out_8;
	vec_[9] = out_9;
	vec_[10] = out_10;
	vec_[11] = out_11;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[32] = out_32;
	vec_[33] = out_33;
	vec_[34] = out_34;
	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_0{
    0,
    256,
    428,
    block_0_fn
    };

static void block_1_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1{
    1,
    444,
    444,
    block_1_fn
    };

static void block_2_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[6], +1+t_1);
	uint64_t t_3 = MAP_Explorer::max2(+d_[6], +d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+t_2, +d_[4]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+2+d_[7]+d_[8]+d_[9]+t_3, +d_[2]+d_[4]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+t_2, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+d_[7]+d_[8]+d_[9]+d_[11]+t_3, +t_5);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +d_[10]+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_7, +d_[10]+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]+t_2, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7]+d_[8]+d_[9]+d_[11]+d_[13]+t_3, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+t_10, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_11, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[14]+t_10, +1+t_12);
	uint64_t t_15 = MAP_Explorer::max2(+d_[14]+t_11, +t_13);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[12]+t_8, vec_[1] +2+d_[1]+d_[12]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[12]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[12]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[12]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[12]+t_8);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_12, vec_[1] +2+d_[1]+t_12);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_12);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_12);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+t_12);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_10, vec_[1] +1+d_[1]+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_10);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_10);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_14, vec_[1] +2+d_[1]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_14);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_19 +d_[7]+d_[8];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_2{
    2,
    31952,
    31992,
    block_2_fn
    };

static void block_3_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_12 = out_19 +d_[2]+d_[3];
	uint64_t out_22 = out_19 +d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_37 = out_19 -1+d_[2]+d_[3]+d_[4]+d_[5];
	uint64_t out_38 = out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[4]+d_[5]+d_[6];
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_3{
    3,
    32024,
    32048,
    block_3_fn
    };

static void block_4_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +2+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +1+d_[1]+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[2]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[4], vec_[12] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_3 , vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[12] +3);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_4{
    4,
    32052,
    32068,
    block_4_fn
    };


} // namespace CV32E40P_DSE