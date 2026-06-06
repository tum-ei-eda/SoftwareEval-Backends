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

static void block_1187_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1187{
    1187,
    55252,
    55256,
    block_1187_fn
    };

static void block_1188_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[26] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[6] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	uint64_t out_3 = out_16;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1188{
    1188,
    55264,
    55272,
    block_1188_fn
    };

static void block_1189_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	out_0 = MAP_Explorer::max2(out_0, vec_[30] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1189{
    1189,
    55276,
    55280,
    block_1189_fn
    };

static void block_1190_fn(uint64_t* vec_, uint8_t* d_){
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
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_1190{
    1190,
    55284,
    55288,
    block_1190_fn
    };

static void block_1191_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1191{
    1191,
    55340,
    55340,
    block_1191_fn
    };

static void block_1192_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1192{
    1192,
    55392,
    55396,
    block_1192_fn
    };

static void block_1193_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[24] );
	out_0 = MAP_Explorer::max2(out_0, vec_[31] );
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1193{
    1193,
    55400,
    55404,
    block_1193_fn
    };

static void block_1194_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1194{
    1194,
    55408,
    55412,
    block_1194_fn
    };

static void block_1195_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[5], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[5]+d_[7], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[6]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[6]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[9], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +d_[8]+t_4);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_9, +d_[8]+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+t_6, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[11]+t_7, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+t_12, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+t_13, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[12]+t_12, +1+t_14);
	uint64_t t_17 = MAP_Explorer::max2(+d_[12]+t_13, +1+t_15);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_10, vec_[1] +2+d_[1]+d_[2]+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[10]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[10]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +2+d_[10]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_10);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_14, vec_[1] +2+d_[1]+d_[2]+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_15);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +2+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[29] +2+t_15);
	out_17 = MAP_Explorer::max2(out_17, vec_[31] +2+t_14);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_14);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[31] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_12, vec_[1] +1+d_[1]+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_12);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_16, vec_[1] +2+d_[1]+d_[2]+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_16);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1195{
    1195,
    55416,
    55448,
    block_1195_fn
    };

static void block_1196_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[26] );
	uint64_t out_33 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[33] = out_33;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1196{
    1196,
    55452,
    55460,
    block_1196_fn
    };

static void block_1197_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1197{
    1197,
    55472,
    55476,
    block_1197_fn
    };

static void block_1198_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +2);

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
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_1);
	uint64_t out_0 = out_37 -1+d_[5];
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1198{
    1198,
    55480,
    55496,
    block_1198_fn
    };

static void block_1199_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1199{
    1199,
    58332,
    58344,
    block_1199_fn
    };

static void block_1212_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1212{
    1212,
    58348,
    58348,
    block_1212_fn
    };

static void block_1213_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1213{
    1213,
    55500,
    55508,
    block_1213_fn
    };

static void block_1214_fn(uint64_t* vec_, uint8_t* d_){
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
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_1214{
    1214,
    55524,
    55536,
    block_1214_fn
    };

static void block_1215_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1215{
    1215,
    55016,
    55020,
    block_1215_fn
    };

static void block_1216_fn(uint64_t* vec_, uint8_t* d_){
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
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_1216{
    1216,
    55540,
    55544,
    block_1216_fn
    };

static void block_1217_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1217{
    1217,
    55548,
    55548,
    block_1217_fn
    };

static void block_1218_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_1218{
    1218,
    62672,
    62684,
    block_1218_fn
    };


} // namespace CV32E40P_DSE