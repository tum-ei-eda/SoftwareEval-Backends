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

static void block_546_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = out_37 +2;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 -1+d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_546{
    546,
    7276,
    7288,
    block_546_fn
    };

static void block_547_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_547{
    547,
    7292,
    7296,
    block_547_fn
    };

static void block_548_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_548{
    548,
    7300,
    7308,
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
    7312,
    7312,
    block_549_fn
    };

static void block_550_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = out_37 +2;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 -1+d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_550{
    550,
    7316,
    7328,
    block_550_fn
    };

static void block_551_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_551{
    551,
    7332,
    7336,
    block_551_fn
    };

static void block_552_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_552{
    552,
    7340,
    7348,
    block_552_fn
    };

static void block_553_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_553{
    553,
    7352,
    7352,
    block_553_fn
    };

static void block_554_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = out_37 +2;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 -1+d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_554{
    554,
    7356,
    7368,
    block_554_fn
    };

static void block_555_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_555{
    555,
    7372,
    7376,
    block_555_fn
    };

static void block_556_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_556{
    556,
    7380,
    7388,
    block_556_fn
    };

static void block_557_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_557{
    557,
    7392,
    7392,
    block_557_fn
    };

static void block_558_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = out_37 +2;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 -1+d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_558{
    558,
    7396,
    7408,
    block_558_fn
    };

static void block_559_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_559{
    559,
    7412,
    7416,
    block_559_fn
    };

static void block_560_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_560{
    560,
    7420,
    7428,
    block_560_fn
    };

static void block_561_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_561{
    561,
    7432,
    7432,
    block_561_fn
    };

static void block_562_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_5 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_562{
    562,
    7436,
    7444,
    block_562_fn
    };

static void block_564_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_19 -1+d_[2]+d_[3];
	uint64_t out_16 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[3] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +1+d_[2]+d_[3], vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_564{
    564,
    7448,
    7464,
    block_564_fn
    };

static void block_565_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+d_[13], +d_[8]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[11]+d_[12]+d_[13], +d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[10]+d_[11]+d_[12]+d_[13], +d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[15], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[11]+d_[12]+d_[13]+d_[15], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[12]+d_[13]+d_[15], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[15]+d_[16], +1+t_3);
	uint64_t t_7 = MAP_Explorer::max2(+d_[11]+d_[12]+d_[13]+d_[15]+d_[16], +t_4);
	uint64_t t_8 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[12]+d_[13]+d_[15]+d_[16], +1+t_5);
	uint64_t t_9 = MAP_Explorer::max2(+d_[17]+d_[18]+t_6, +d_[14]+t_0);
	uint64_t t_10 = MAP_Explorer::max2(+2+d_[17]+d_[18]+t_7, +d_[14]+t_1);
	uint64_t t_11 = MAP_Explorer::max2(+1+d_[17]+d_[18]+t_8, +d_[14]+t_2);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[16]+d_[17]+d_[18], +d_[14]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[17]+d_[18]+d_[20]+t_6, +1+t_9);
	uint64_t t_14 = MAP_Explorer::max2(+1+d_[17]+d_[18]+d_[20]+t_7, +t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[17]+d_[18]+d_[20]+t_8, +t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[20], +t_12);
	uint64_t t_17 = MAP_Explorer::max2(+t_13, +d_[19]+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_14, +d_[19]+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_15, +d_[19]+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+d_[20], +d_[19]);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_16, +d_[19]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+d_[17]+d_[18]+d_[20]+d_[22]+t_6, +1+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+d_[17]+d_[18]+d_[20]+d_[22]+t_7, +t_14);
	uint64_t t_24 = MAP_Explorer::max2(+d_[17]+d_[18]+d_[20]+d_[22]+t_8, +1+t_15);
	uint64_t t_25 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[20]+d_[22], +1+t_16);
	uint64_t t_26 = MAP_Explorer::max2(+t_22, +1+t_17);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_23, +t_18);
	uint64_t t_28 = MAP_Explorer::max2(+d_[22], +d_[19]);
	uint64_t t_29 = MAP_Explorer::max2(+t_24, +t_19);
	uint64_t t_30 = MAP_Explorer::max2(+d_[20]+d_[22], +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+t_25, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+t_26, +d_[21]+t_17);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_27, +d_[21]+t_18);
	uint64_t t_34 = MAP_Explorer::max2(+1+t_28, +d_[19]+d_[21]);
	uint64_t t_35 = MAP_Explorer::max2(+1+t_29, +d_[21]+t_19);
	uint64_t t_36 = MAP_Explorer::max2(+t_30, +d_[21]+t_20);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_31, +d_[21]+t_21);
	uint64_t t_38 = MAP_Explorer::max2(+d_[24]+t_22, +1+t_26);
	uint64_t t_39 = MAP_Explorer::max2(+d_[24]+t_23, +t_27);
	uint64_t t_40 = MAP_Explorer::max2(+d_[22]+d_[24], +1+t_28);
	uint64_t t_41 = MAP_Explorer::max2(+d_[24]+t_24, +1+t_29);
	uint64_t t_42 = MAP_Explorer::max2(+d_[20]+d_[22]+d_[24], +1+t_30);
	uint64_t t_43 = MAP_Explorer::max2(+d_[24]+t_25, +1+t_31);
	uint64_t t_44 = MAP_Explorer::max2(+t_38, +1+t_32);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +t_33);
	uint64_t t_46 = MAP_Explorer::max2(+t_40, +t_34);
	uint64_t t_47 = MAP_Explorer::max2(+d_[24], +d_[21]);
	uint64_t t_48 = MAP_Explorer::max2(+t_41, +t_35);
	uint64_t t_49 = MAP_Explorer::max2(+t_42, +1+t_36);
	uint64_t t_50 = MAP_Explorer::max2(+t_43, +t_37);
	uint64_t t_51 = MAP_Explorer::max2(+d_[25]+t_38, +1+t_44);
	uint64_t t_52 = MAP_Explorer::max2(+d_[25]+t_39, +t_45);
	uint64_t t_53 = MAP_Explorer::max2(+d_[25]+t_40, +1+t_46);
	uint64_t t_54 = MAP_Explorer::max2(+d_[24]+d_[25], +1+t_47);
	uint64_t t_55 = MAP_Explorer::max2(+d_[25]+t_41, +1+t_48);
	uint64_t t_56 = MAP_Explorer::max2(+d_[25]+t_42, +1+t_49);
	uint64_t t_57 = MAP_Explorer::max2(+d_[25]+t_43, +1+t_50);
	uint64_t t_58 = MAP_Explorer::max2(+d_[26]+t_51, +1+d_[17]+t_6);
	uint64_t t_59 = MAP_Explorer::max2(+t_58, +1+d_[9]+d_[10]+d_[11]+d_[12]);
	uint64_t t_60 = MAP_Explorer::max2(+d_[26]+t_52, +1+d_[17]+t_7);
	uint64_t t_61 = MAP_Explorer::max2(+t_60, +1+d_[11]+d_[12]);
	uint64_t t_62 = MAP_Explorer::max2(+d_[26]+t_55, +1+d_[17]+t_8);
	uint64_t t_63 = MAP_Explorer::max2(+t_62, +1+d_[10]+d_[11]+d_[12]);
	uint64_t t_64 = MAP_Explorer::max2(+d_[26]+t_57, +1+d_[16]+d_[17]);
	uint64_t t_65 = MAP_Explorer::max2(+d_[26]+d_[27]+t_51, +1+t_59);
	uint64_t t_66 = MAP_Explorer::max2(+d_[26]+d_[27]+t_52, +1+t_61);
	uint64_t t_67 = MAP_Explorer::max2(+d_[26]+d_[27]+t_55, +1+t_63);
	uint64_t t_68 = MAP_Explorer::max2(+d_[26]+d_[27]+t_57, +1+t_64);
	uint64_t t_69 = MAP_Explorer::max2(+d_[28]+d_[29]+t_65, +1+d_[9]);
	uint64_t t_70 = MAP_Explorer::max2(+t_69, +1+t_6);
	uint64_t t_71 = MAP_Explorer::max2(+d_[28]+d_[29]+t_66, +1+t_7);
	uint64_t t_72 = MAP_Explorer::max2(+d_[28]+d_[29]+t_67, +1+t_8);
	uint64_t t_73 = MAP_Explorer::max2(+d_[28]+d_[29]+t_68, +1+d_[16]);
	uint64_t t_74 = MAP_Explorer::max2(+d_[28]+d_[29]+d_[30]+t_65, +1+t_70);
	uint64_t t_75 = MAP_Explorer::max2(+d_[28]+d_[29]+d_[30]+t_66, +1+t_71);
	uint64_t t_76 = MAP_Explorer::max2(+d_[28]+d_[29]+d_[30]+t_67, +1+t_72);
	uint64_t t_77 = MAP_Explorer::max2(+d_[28]+d_[29]+d_[30]+t_68, +1+t_73);
	uint64_t t_78 = MAP_Explorer::max2(+t_74, +1+t_44);
	uint64_t t_79 = MAP_Explorer::max2(+t_78, +1+t_51);
	uint64_t t_80 = MAP_Explorer::max2(+t_75, +t_45);
	uint64_t t_81 = MAP_Explorer::max2(+t_80, +1+t_52);
	uint64_t t_82 = MAP_Explorer::max2(+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_53, +1+t_46);
	uint64_t t_83 = MAP_Explorer::max2(+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_54, +1+t_47);
	uint64_t t_84 = MAP_Explorer::max2(+t_76, +1+t_48);
	uint64_t t_85 = MAP_Explorer::max2(+t_84, +1+t_55);
	uint64_t t_86 = MAP_Explorer::max2(+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_56, +1+t_49);
	uint64_t t_87 = MAP_Explorer::max2(+t_77, +1+t_50);
	uint64_t t_88 = MAP_Explorer::max2(+t_87, +1+t_57);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_74, vec_[1] +d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_75);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] +d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_53);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +d_[4]+d_[5]+d_[6]+d_[7]+t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_54);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_76);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[7]+t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[15] +d_[5]+d_[6]+d_[7]+t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[16] +d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+t_56);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] +t_74);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +t_77);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_74);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[23]+t_32, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[23]+t_33);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[23]+t_34);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[21]+d_[23]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[23]+t_35);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[7]+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[5]+d_[6]+d_[7]+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[23]+t_36);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[23]+t_32);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[23]+t_37);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[23]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[23]+t_32);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2+d_[2]);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[9], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +2+d_[7]+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+d_[5]+d_[6]+d_[7]+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +2+d_[9]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[9]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_65, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+t_66);
	out_14 = MAP_Explorer::max2(out_14, vec_[5] +2+d_[26]+d_[27]+t_53);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[26]+d_[27]+t_54);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+t_67);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[7]+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+d_[26]+d_[27]+t_56);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +2+t_65);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +2+t_68);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2+d_[25]+d_[26]+d_[27]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_65);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_51, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_52);
	out_17 = MAP_Explorer::max2(out_17, vec_[5] +2+t_53);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+t_54);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_55);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2+d_[7]+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +2+t_56);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2+t_51);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2+t_57);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +2+d_[25]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_51);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_59, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_61);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+d_[26]+t_53);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[26]+t_54);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_63);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2+d_[7]+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2+d_[26]+t_56);
	out_18 = MAP_Explorer::max2(out_18, vec_[17] +2+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_64);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[25]+d_[26]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_59);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_3, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_5);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+d_[7]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_3);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_70, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +2+t_71);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2+d_[26]+d_[27]+d_[28]+d_[29]+t_53);
	out_20 = MAP_Explorer::max2(out_20, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[12] +2+d_[26]+d_[27]+d_[28]+d_[29]+t_54);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +2+t_72);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +2+d_[7]+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +2+d_[26]+d_[27]+d_[28]+d_[29]+t_56);
	out_20 = MAP_Explorer::max2(out_20, vec_[17] +2+t_70);
	out_20 = MAP_Explorer::max2(out_20, vec_[22] +2+t_73);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +2+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_70);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_6, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +2+t_7);
	out_21 = MAP_Explorer::max2(out_21, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[13] +2+t_8);
	out_21 = MAP_Explorer::max2(out_21, vec_[14] +2+d_[7]+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +2+t_6);
	out_21 = MAP_Explorer::max2(out_21, vec_[22] +2+d_[16]);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_6);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_44, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_45);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+t_46);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_47);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+t_48);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +2+d_[7]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +2+t_49);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +2+t_44);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_50);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_44);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_79, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_81);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_82);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[4]+d_[5]+d_[6]+d_[7]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_83);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_85);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[7]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[5]+d_[6]+d_[7]+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+t_86);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+t_79);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_88);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+t_79);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_14 +d_[28];
	uint64_t out_37 = out_14 -1+d_[28]+d_[29];


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_565{
    565,
    14776,
    14876,
    block_565_fn
    };

static void block_566_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_566{
    566,
    15568,
    15568,
    block_566_fn
    };


} // namespace CV32E40P_DSE