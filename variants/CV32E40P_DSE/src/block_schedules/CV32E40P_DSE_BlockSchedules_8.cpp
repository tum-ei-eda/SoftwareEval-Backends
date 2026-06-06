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

static void block_352_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_352{
    352,
    37520,
    37524,
    block_352_fn
    };

static void block_353_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_353{
    353,
    40424,
    40428,
    block_353_fn
    };

static void block_354_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[30] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_354{
    354,
    40432,
    40440,
    block_354_fn
    };

static void block_355_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_355{
    355,
    36564,
    36564,
    block_355_fn
    };

static void block_356_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[35] = out_35;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_356{
    356,
    36568,
    36572,
    block_356_fn
    };

static void block_357_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_357{
    357,
    36592,
    36592,
    block_357_fn
    };

static void block_358_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_358{
    358,
    36600,
    36604,
    block_358_fn
    };

static void block_359_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[5]+d_[6], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[7], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[8], +t_3);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_4, vec_[1] +d_[1]+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +d_[7]+d_[8]);
	out_0 = MAP_Explorer::max2(out_0, vec_[30] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_4);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+d_[3]);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[30] +2+d_[3]);
	out_26 = MAP_Explorer::max2(out_26, vec_[35] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[3]+d_[4]+d_[5]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[3]+d_[4]+d_[5]);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2+d_[5]);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[30] +2+d_[3]+d_[4]+d_[5]);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+t_2);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+t_3);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+d_[7]);
	out_30 = MAP_Explorer::max2(out_30, vec_[24] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[30] +2+t_2);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +2+d_[3]+d_[4]);
	out_31 = MAP_Explorer::max2(out_31, vec_[3] +2);
	out_31 = MAP_Explorer::max2(out_31, vec_[4] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[30] +2+d_[3]+d_[4]);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[1] +1+d_[1]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[5]+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]);
	uint64_t out_3 = out_19;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_359{
    359,
    36612,
    36640,
    block_359_fn
    };

static void block_360_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +d_[6]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]+d_[6]);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[4]+d_[6]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9]+t_3, +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[9]+t_4, +t_6);
	uint64_t t_13 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_10);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+t_11, vec_[1] +d_[1]+t_11);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_11);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_12);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[31] +t_11);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+t_11);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_8, vec_[1] +2+d_[1]+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[8]+t_9);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +2+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_8);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_3, vec_[1] +1+d_[1]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_14, vec_[1] +2+d_[1]+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_14);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_360{
    360,
    36644,
    36664,
    block_360_fn
    };

static void block_361_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_361{
    361,
    36060,
    36064,
    block_361_fn
    };

static void block_362_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[26] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_3 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[35] = out_35;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_362{
    362,
    36072,
    36080,
    block_362_fn
    };

static void block_363_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_363{
    363,
    36084,
    36088,
    block_363_fn
    };

static void block_364_fn(uint64_t* vec_, uint8_t* d_){
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

extern const MAP_Explorer::Block block_364{
    364,
    36092,
    36096,
    block_364_fn
    };

static void block_365_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_365{
    365,
    36148,
    36148,
    block_365_fn
    };

static void block_366_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_366{
    366,
    36200,
    36204,
    block_366_fn
    };

static void block_367_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
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

extern const MAP_Explorer::Block block_367{
    367,
    36208,
    36212,
    block_367_fn
    };

static void block_368_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_368{
    368,
    36216,
    36220,
    block_368_fn
    };

static void block_369_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_6 = MAP_Explorer::max2(+t_4, +d_[8]+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_5, +d_[6]+d_[8]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[11]+t_3, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[12]+t_8, +1+t_10);
	uint64_t t_14 = MAP_Explorer::max2(+d_[12]+t_9, +1+t_11);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+d_[12], +1+t_12);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+t_13, vec_[1] +d_[1]+d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +d_[2]+t_13);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +1+t_15);
	out_0 = MAP_Explorer::max2(out_0, vec_[31] +t_14);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[10]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[10]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +1+d_[10]+t_7);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[10]+t_6);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_10, vec_[1] +2+d_[1]+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]+t_10);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +3+t_12);
	out_17 = MAP_Explorer::max2(out_17, vec_[31] +2+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_10);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_8, vec_[1] +1+d_[1]+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_9);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_8);
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_369{
    369,
    36224,
    36256,
    block_369_fn
    };

static void block_370_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_33 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[26] +2);
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

extern const MAP_Explorer::Block block_370{
    370,
    36260,
    36268,
    block_370_fn
    };

static void block_371_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_371{
    371,
    36280,
    36284,
    block_371_fn
    };


} // namespace CV32E40P_DSE