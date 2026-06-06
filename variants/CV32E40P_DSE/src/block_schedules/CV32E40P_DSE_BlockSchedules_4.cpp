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



static void block_1252_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = out_38 +d_[1];
	uint64_t out_5 = out_14;
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_14 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1252{
    1252,
    43424,
    43432,
    true,
    block_1252_fn
    };



static void block_1253_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[6], d_[4]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2, vec_[4] +3);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_37 +1;
	uint64_t out_1 = out_12;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1253{
    1253,
    2624,
    2652,
    true,
    block_1253_fn
    };



static void block_1254_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[4]+d_[8], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[3]);
	uint64_t t_4 = MAP_Explorer::max2(t_2, t_0);
	uint64_t t_5 = MAP_Explorer::max2(t_3, t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[14], d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[11]+d_[13]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +6+t_4+t_7, vec_[3] +5+t_5+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +6+t_5+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[13]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +6+t_5+t_7);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +5+t_4, vec_[3] +4+t_5);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +5+t_5);
	out_15 = MAP_Explorer::max2(out_15, vec_[24] +5+t_5);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +3+t_0, vec_[3] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +3+t_1);
	uint64_t out_24 = MAP_Explorer::max2(out_19 +2+d_[4], vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +5+d_[14]+t_4, vec_[3] +4+d_[14]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +5+d_[14]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +5+d_[14]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +6+t_4+t_6, vec_[3] +5+t_5+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+t_5+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +6+t_5+t_6);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[15];
	uint64_t out_14 = out_15 -1;
	uint64_t out_16 = out_17 -1;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_1254{
    1254,
    2676,
    2724,
    true,
    block_1254_fn
    };



static void block_1257_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +4+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_3 = out_23;
	uint64_t out_22 = out_23 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_23 +3+d_[6], vec_[15] +3);
	uint64_t out_16 = out_37;
	uint64_t out_13 = out_22 +2;
	uint64_t out_19 = out_37 -2;
	uint64_t out_38 = out_37 +d_[10];
	uint64_t out_1 = out_38;
	uint64_t out_17 = out_19 +3;
	uint64_t out_15 = out_17 -2;
	uint64_t out_5 = out_15 +2+d_[10];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[23] = out_23;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1257{
    1257,
    2728,
    2768,
    true,
    block_1257_fn
    };



static void block_1261_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1261{
    1261,
    2772,
    2772,
    true,
    block_1261_fn
    };



static void block_1262_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2+d_[2], vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +3);
	uint64_t out_17 = out_37;
	uint64_t out_16 = out_37 -1;
	uint64_t out_38 = out_37 +d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_15 = out_16 +3;
	uint64_t out_3 = out_15;
	uint64_t out_14 = out_15 -1;
	uint64_t out_5 = out_14 +d_[6];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1262{
    1262,
    2776,
    2800,
    true,
    block_1262_fn
    };



static void block_1263_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +1, vec_[22] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +2, vec_[22] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[3], vec_[22] +2+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1263{
    1263,
    2804,
    2820,
    true,
    block_1263_fn
    };



static void block_1264_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1264{
    1264,
    2824,
    2824,
    true,
    block_1264_fn
    };



static void block_1265_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[2]+d_[6], d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[6], d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(t_2, t_0);
	uint64_t t_5 = MAP_Explorer::max2(t_3, t_1);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[2]);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[25] +3+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +4+d_[0]+t_0);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_4, vec_[1] +4+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_4);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_6, vec_[1] +4+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_6);
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_37 +1;
	uint64_t out_15 = out_38 +1;
	uint64_t out_16 = out_17 -1;
	uint64_t out_5 = out_15;
	uint64_t out_3 = out_15;
	uint64_t out_2 = out_15;
	uint64_t out_0 = out_15 -2;


	vec_[17] = out_17;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1265{
    1265,
    2828,
    2856,
    true,
    block_1265_fn
    };



static void block_1266_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +2, vec_[23] +2);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1266{
    1266,
    2860,
    2876,
    true,
    block_1266_fn
    };



static void block_1267_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1267{
    1267,
    2880,
    2880,
    true,
    block_1267_fn
    };



static void block_1268_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1268{
    1268,
    2884,
    2896,
    true,
    block_1268_fn
    };



static void block_1269_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +2+d_[3], vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[3], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_15 = out_37 +2;
	uint64_t out_5 = out_15;
	uint64_t out_3 = out_15;
	uint64_t out_2 = out_15;


	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1269{
    1269,
    2900,
    2924,
    true,
    block_1269_fn
    };



static void block_1270_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +1, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	uint64_t out_17 = out_37;
	uint64_t out_15 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_15 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1270{
    1270,
    2928,
    2944,
    true,
    block_1270_fn
    };



static void block_1271_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_12 +3, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_12 +4+d_[3], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[3]);
	uint64_t out_24 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_13 = out_22 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_23 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_25 = out_37 +2;
	uint64_t out_4 = out_25;
	uint64_t out_3 = out_25;
	uint64_t out_2 = out_25;


	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[0] = out_0;
	vec_[25] = out_25;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1271{
    1271,
    2948,
    2972,
    true,
    block_1271_fn
    };



static void block_1272_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_5 +1, vec_[12] +2);
	uint64_t out_14 = out_37 -1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_14 +2;
	uint64_t out_6 = out_12;
	uint64_t out_3 = out_12;
	uint64_t out_4 = out_12 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1272{
    1272,
    2656,
    2672,
    true,
    block_1272_fn
    };



static void block_1273_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1273{
    1273,
    43436,
    43448,
    true,
    block_1273_fn
    };



static void block_1274_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1274{
    1274,
    464,
    472,
    true,
    block_1274_fn
    };



static void block_1275_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[3]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1+d_[6], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+t_0, vec_[3] +1+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_3 = MAP_Explorer::max2(out_15 +1+d_[3]+d_[5], vec_[3] +d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1275{
    1275,
    61024,
    61044,
    true,
    block_1275_fn
    };



static void block_1276_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6]+t_0, 2+d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(d_[10]+t_0, t_2);
	uint64_t t_4 = MAP_Explorer::max2(d_[10], d_[6]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_6 +1+t_3, vec_[3] +t_1+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +1+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +1+t_3);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +2+t_2, vec_[3] +1+d_[6]+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[6]);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+t_2);
	uint64_t out_24 = MAP_Explorer::max2(out_6 +2+d_[4], vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_3, vec_[3] +2+t_1+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_22 +d_[9], vec_[5] +1+d_[9]);


	vec_[6] = out_6;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1276{
    1276,
    63924,
    63952,
    true,
    block_1276_fn
    };



static void block_1277_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_22 = out_37;
	uint64_t out_24 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_6 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_24 -2;
	uint64_t out_4 = out_5 +2+d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1277{
    1277,
    64128,
    64144,
    true,
    block_1277_fn
    };



static void block_1278_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_1278{
    1278,
    61048,
    61056,
    true,
    block_1278_fn
    };



static void block_1279_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[0], vec_[1] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_1279{
    1279,
    61060,
    61060,
    true,
    block_1279_fn
    };



static void block_1280_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 +1+d_[2];
	uint64_t out_37 = out_16 +2+d_[2];
	uint64_t out_38 = out_16 +2+d_[2]+d_[6];
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_15 +2;
	uint64_t out_4 = out_14 +d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1280{
    1280,
    61080,
    61104,
    true,
    block_1280_fn
    };



static void block_1281_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[11], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]+d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[8]+d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(d_[19], d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[14]+d_[16]);
	uint64_t t_8 = MAP_Explorer::max2(d_[19], d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(6+d_[23]+t_7, d_[14]+d_[16]+d_[18]);
	uint64_t t_10 = MAP_Explorer::max2(6+d_[23]+t_8, d_[16]+d_[18]);
	uint64_t t_11 = MAP_Explorer::max2(6+d_[23], d_[18]);
	uint64_t t_12 = MAP_Explorer::max2(5+d_[23]+d_[27]+t_7, t_9);
	uint64_t t_13 = MAP_Explorer::max2(5+d_[23]+d_[27]+t_8, t_10);
	uint64_t t_14 = MAP_Explorer::max2(5+d_[23]+d_[27], d_[18]);
	uint64_t t_15 = MAP_Explorer::max2(t_14, t_11);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +3+d_[4]+d_[12]+t_0+t_4+t_9, vec_[3] +2+d_[2]+d_[4]+d_[12]+t_4+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +6);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_10);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+t_11);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +8+d_[23]);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +7+d_[23]);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +6+d_[23]);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+d_[2]+d_[4]+d_[12]+t_4+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+d_[4]+d_[12]+t_4+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+d_[12]+t_4+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[25] +3+d_[12]+t_5+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +3+d_[10]+d_[12]+t_9);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +3+d_[12]+t_9);
	uint64_t out_26 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[12]+t_0+t_4+t_7, vec_[3] +1+d_[2]+d_[4]+d_[12]+t_4+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +2+d_[2]+d_[4]+d_[12]+t_4+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+d_[4]+d_[12]+t_4+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+d_[12]+t_4+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[12]+t_5+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[10]+d_[12]+t_7);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+d_[12]+t_7);
	uint64_t out_27 = MAP_Explorer::max2(out_26 +1, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[12]+t_0+t_4+t_12, vec_[3] +1+d_[2]+d_[4]+d_[12]+t_4+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +6+d_[23]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +5+d_[23]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +4+d_[23]+d_[27]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[2]+d_[4]+d_[12]+t_4+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[4]+d_[12]+t_4+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[12]+t_4+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2+d_[12]+t_5+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2+d_[10]+d_[12]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2+d_[12]+t_12);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +4+d_[4]+d_[12]+t_0+t_4+t_12, vec_[3] +3+d_[2]+d_[4]+d_[12]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +6+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +8+d_[23]+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +7+d_[23]+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +6+d_[23]+d_[27]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +4+d_[2]+d_[4]+d_[12]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4+d_[4]+d_[12]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+d_[12]+t_4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+d_[12]+t_5+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +4+d_[10]+d_[12]+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +4+d_[12]+t_12);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_13 = out_38 -1;
	uint64_t out_23 = MAP_Explorer::max2(out_27 +2+d_[23], vec_[4] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +2+d_[23]);
	uint64_t out_24 = MAP_Explorer::max2(out_27 +2, vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[16] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_27 +1, vec_[16] +1);
	uint64_t out_1 = out_13;
	uint64_t out_0 = out_13 -1;
	uint64_t out_22 = out_23 +1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_1281{
    1281,
    61992,
    62068,
    true,
    block_1281_fn
    };



static void block_1298_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1298{
    1298,
    7292,
    7300,
    true,
    block_1298_fn
    };



static void block_1299_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_3 = out_14;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1299{
    1299,
    63740,
    63748,
    true,
    block_1299_fn
    };



static void block_1300_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_5 , vec_[4] +1);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;
	uint64_t out_3 = out_4 -3+d_[3];


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1300{
    1300,
    7304,
    7324,
    true,
    block_1300_fn
    };



static void block_1302_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_1302{
    1302,
    63176,
    63184,
    true,
    block_1302_fn
    };



static void block_1305_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_3 , vec_[4] +1);
	uint64_t out_22 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1305{
    1305,
    89316,
    89328,
    true,
    block_1305_fn
    };



static void block_1314_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1314{
    1314,
    89744,
    89744,
    true,
    block_1314_fn
    };



static void block_1317_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1317{
    1317,
    89332,
    89340,
    true,
    block_1317_fn
    };



static void block_1318_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1318{
    1318,
    64584,
    64584,
    true,
    block_1318_fn
    };



static void block_1319_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[7], d_[4]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[2]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+d_[2]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[2]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[8];
	uint64_t out_13 = MAP_Explorer::max2(out_12 +1, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +d_[7], vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_0 = out_38 -1;


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1319{
    1319,
    64588,
    64612,
    true,
    block_1319_fn
    };



static void block_1320_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_15 = out_18;
	uint64_t out_16 = out_19 +1;
	uint64_t out_20 = out_19 +3+d_[6];
	uint64_t out_37 = out_19 +2+d_[6];
	uint64_t out_38 = out_19 +4+d_[6];
	uint64_t out_17 = out_20;
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_20;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_16 -2;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_1320{
    1320,
    64616,
    64652,
    true,
    block_1320_fn
    };



static void block_1321_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1321{
    1321,
    65072,
    65080,
    true,
    block_1321_fn
    };



static void block_1322_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[4]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_0);
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +t_1;
	uint64_t out_38 = out_37 +1+t_1;
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1322{
    1322,
    65112,
    65132,
    true,
    block_1322_fn
    };



static void block_1323_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_5 = out_12 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_12 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_12 +2+d_[3], vec_[13] +3);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1323{
    1323,
    64804,
    64824,
    true,
    block_1323_fn
    };



static void block_1324_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1324{
    1324,
    89344,
    89344,
    true,
    block_1324_fn
    };



static void block_1325_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[25] );
	uint64_t out_25 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3);
	uint64_t out_3 = out_25;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1325{
    1325,
    62116,
    62120,
    true,
    block_1325_fn
    };



static void block_1326_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +5);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +6+d_[0]+d_[1]);
	uint64_t out_22 = out_23 -1;
	uint64_t out_25 = out_23 +d_[5];
	uint64_t out_26 = out_23 +1+d_[5];
	uint64_t out_27 = out_23 +2+d_[5];
	uint64_t out_14 = MAP_Explorer::max2(out_23 +2+d_[5], vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +3+d_[5]+d_[9], vec_[24] +3);
	uint64_t out_24 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_13 = out_22 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_12 = out_13 -1;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[12] = out_12;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1326{
    1326,
    62124,
    62168,
    true,
    block_1326_fn
    };



static void block_1327_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1327{
    1327,
    61064,
    61068,
    true,
    block_1327_fn
    };



static void block_1328_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_21 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[21] = out_21;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1328{
    1328,
    117412,
    117416,
    true,
    block_1328_fn
    };



static void block_1329_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1329{
    1329,
    7880,
    7884,
    true,
    block_1329_fn
    };



static void block_1330_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[1];


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1330{
    1330,
    7888,
    7892,
    true,
    block_1330_fn
    };



static void block_1331_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +1, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[14] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[5];


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1331{
    1331,
    7240,
    7260,
    true,
    block_1331_fn
    };



static void block_1332_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[5], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[13], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[8]+d_[10]);
	uint64_t t_4 = MAP_Explorer::max2(d_[13], d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[8]+d_[10]+d_[12]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[10]+d_[12]);
	uint64_t t_7 = MAP_Explorer::max2(d_[21], d_[16]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_7, d_[16]+d_[18]);
	uint64_t t_9 = MAP_Explorer::max2(d_[21], d_[18]);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]);
	uint64_t out_6 = out_10 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_10 +1+d_[6]+d_[14]+d_[16]+d_[18]+d_[20]+t_0+t_5, vec_[3] +d_[6]+d_[14]+d_[16]+d_[18]+d_[20]+t_1+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[6]+d_[14]+d_[16]+d_[18]+d_[20]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[6]+d_[14]+d_[16]+d_[18]+d_[20]+t_0+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[14]+d_[16]+d_[18]+d_[20]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[14]+d_[16]+d_[18]+d_[20]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[12]+d_[14]+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[14]+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[16]+d_[18]+d_[20]);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[18]+d_[20]);
	uint64_t out_5 = MAP_Explorer::max2(out_10 +2+d_[6]+d_[14]+t_0+t_5+t_8, vec_[3] +1+d_[6]+d_[14]+t_1+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[6]+d_[14]+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[6]+d_[14]+t_0+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+d_[14]+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+d_[14]+t_6+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +2+d_[12]+d_[14]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +2+d_[14]+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[20] +2+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[21] +2+t_9);
	uint64_t out_15 = MAP_Explorer::max2(out_10 +2, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_10 +2+d_[6]+d_[14]+t_0+t_5, vec_[3] +1+d_[6]+d_[14]+t_1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[6]+d_[14]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+d_[6]+d_[14]+t_0+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[14]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2+d_[14]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[12]+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_10 +2+d_[6]+d_[14]+t_0+t_5+t_7, vec_[3] +1+d_[6]+d_[14]+t_1+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[6]+d_[14]+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[6]+d_[14]+t_0+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[14]+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[14]+t_6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+d_[12]+d_[14]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+d_[14]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1+d_[21]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[10] = out_10;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1332{
    1332,
    7024,
    7072,
    true,
    block_1332_fn
    };



static void block_1333_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(6+d_[10]+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(5+d_[6]+d_[10], d_[4]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[12]+t_1, vec_[3] +1+d_[12]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +4+d_[12]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[12]);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[12]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +6+d_[10]+d_[12]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +7+d_[10]+d_[12]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[12]+t_2);
	uint64_t out_17 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +5+t_0, vec_[3] +4+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +5+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +4+d_[6]);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +2+d_[10], vec_[4] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +6+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +7+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_2);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[14];
	uint64_t out_16 = out_22 -2;
	uint64_t out_14 = MAP_Explorer::max2(out_22 +1, vec_[4] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_22 +1+d_[10], vec_[4] +2);
	uint64_t out_13 = out_16 +1;


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[17] = out_17;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_1333{
    1333,
    6896,
    6940,
    true,
    block_1333_fn
    };



static void block_1336_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_13 +1, vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +2+d_[3], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	uint64_t out_0 = out_37 -1+d_[4];
	uint64_t out_5 = out_37 +d_[4]+d_[6];
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_14 = MAP_Explorer::max2(out_15 +1, vec_[12] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[8];


	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1336{
    1336,
    62804,
    62828,
    true,
    block_1336_fn
    };



static void block_1395_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1395{
    1395,
    62832,
    62832,
    true,
    block_1395_fn
    };



static void block_1396_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_13 +2;
	uint64_t out_37 = out_13 +d_[3];
	uint64_t out_38 = out_13 +1+d_[3];
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +1+d_[3];
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1396{
    1396,
    62836,
    62852,
    true,
    block_1396_fn
    };



static void block_1397_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_15 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_15 +1, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +d_[4], vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_16 = MAP_Explorer::max2(out_17 +1, vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[12] = out_12;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1397{
    1397,
    6944,
    6964,
    true,
    block_1397_fn
    };



static void block_1398_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[5]);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_13 +1, vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +2+d_[6], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +3+t_0, vec_[3] +1+d_[5]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_0);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = out_38 +d_[7];
	uint64_t out_14 = MAP_Explorer::max2(out_15 +1, vec_[12] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[9];


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1398{
    1398,
    62732,
    62760,
    true,
    block_1398_fn
    };



static void block_1401_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1401{
    1401,
    62764,
    62764,
    true,
    block_1401_fn
    };



static void block_1402_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[2], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, t_1);
	uint64_t t_3 = MAP_Explorer::max2(d_[7]+t_2, t_1);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_1, vec_[1] +4+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +3+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[2]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +4+d_[0]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_2, vec_[1] +5+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_3, vec_[1] +5+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+d_[2]+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3+d_[2]+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+t_3);
	uint64_t out_12 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_13 = out_37 +1;
	uint64_t out_6 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_13 -2+d_[7];


	vec_[5] = out_5;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1402{
    1402,
    62776,
    62800,
    true,
    block_1402_fn
    };



static void block_1403_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1403{
    1403,
    6968,
    6968,
    true,
    block_1403_fn
    };



static void block_1404_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = out_17 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_17 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +3+d_[5], vec_[3] +3);
	uint64_t out_18 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_37 +1;
	uint64_t out_3 = out_37 +1+d_[6];


	vec_[17] = out_17;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1404{
    1404,
    6972,
    6996,
    true,
    block_1404_fn
    };



static void block_1406_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_22 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_13 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1406{
    1406,
    7000,
    7020,
    true,
    block_1406_fn
    };



static void block_1407_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_1 = out_38;
	uint64_t out_6 = out_38 -1;
	uint64_t out_5 = out_6;
	uint64_t out_3 = out_6;
	uint64_t out_4 = out_6 +2;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -3;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1407{
    1407,
    7076,
    7084,
    true,
    block_1407_fn
    };



static void block_1408_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(d_[16], d_[11]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[11]+d_[13]);
	uint64_t t_7 = MAP_Explorer::max2(d_[16], d_[13]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[11]+d_[13]+d_[15]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, d_[13]+d_[15]);
	uint64_t t_10 = MAP_Explorer::max2(d_[24], d_[19]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, d_[19]+d_[21]);
	uint64_t t_12 = MAP_Explorer::max2(d_[24], d_[21]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_11, d_[19]+d_[21]+d_[23]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_12, d_[21]+d_[23]);
	uint64_t t_15 = MAP_Explorer::max2(d_[32], d_[27]);
	uint64_t t_16 = MAP_Explorer::max2(1+t_15, d_[27]+d_[29]);
	uint64_t t_17 = MAP_Explorer::max2(d_[32], d_[29]);
	uint64_t t_18 = MAP_Explorer::max2(1+t_16, d_[27]+d_[29]+d_[31]);
	uint64_t t_19 = MAP_Explorer::max2(1+t_17, d_[29]+d_[31]);
	uint64_t t_20 = MAP_Explorer::max2(d_[39], d_[35]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_3+t_8+t_13+t_18, vec_[3] +d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_3+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_3+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[7] +1+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_4+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[8] +1+d_[7]+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[9] +1+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[10] +1+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_8+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[11] +1+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_9+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[15]+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[17]+d_[25]+d_[33]+d_[35]+d_[37]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[25]+d_[33]+d_[35]+d_[37]+t_13+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[25]+d_[33]+d_[35]+d_[37]+t_14+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +1+d_[23]+d_[25]+d_[33]+d_[35]+d_[37]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[25]+d_[33]+d_[35]+d_[37]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +1+d_[33]+d_[35]+d_[37]+t_18);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[33]+d_[35]+d_[37]+t_19);
	out_3 = MAP_Explorer::max2(out_3, vec_[32] +1+d_[31]+d_[33]+d_[35]+d_[37]);
	out_3 = MAP_Explorer::max2(out_3, vec_[33] +1+d_[33]+d_[35]+d_[37]);
	out_3 = MAP_Explorer::max2(out_3, vec_[34] +1+d_[35]+d_[37]);
	out_3 = MAP_Explorer::max2(out_3, vec_[35] +1+d_[37]);
	uint64_t out_9 = MAP_Explorer::max2(out_6 +2+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_3+t_8+t_13+t_18, vec_[3] +1+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_3+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[4] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[5] +2+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_3+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[7] +2+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_4+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[8] +2+d_[7]+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[9] +2+d_[9]+d_[17]+d_[25]+d_[33]+d_[35]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[10] +2+d_[17]+d_[25]+d_[33]+d_[35]+t_8+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[11] +2+d_[17]+d_[25]+d_[33]+d_[35]+t_9+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[14] +2+d_[15]+d_[17]+d_[25]+d_[33]+d_[35]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[15] +2+d_[17]+d_[25]+d_[33]+d_[35]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[16] +2+d_[25]+d_[33]+d_[35]+t_13+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[17] +2+d_[25]+d_[33]+d_[35]+t_14+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[18] +2+d_[23]+d_[25]+d_[33]+d_[35]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[19] +2+d_[25]+d_[33]+d_[35]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[20] +2+d_[33]+d_[35]+t_18);
	out_9 = MAP_Explorer::max2(out_9, vec_[21] +2+d_[33]+d_[35]+t_19);
	out_9 = MAP_Explorer::max2(out_9, vec_[32] +2+d_[31]+d_[33]+d_[35]);
	out_9 = MAP_Explorer::max2(out_9, vec_[33] +2+d_[33]+d_[35]);
	out_9 = MAP_Explorer::max2(out_9, vec_[34] +2+d_[35]);
	out_9 = MAP_Explorer::max2(out_9, vec_[35] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +4+d_[9]+d_[17]+d_[25]+d_[33]+t_3+t_8+t_13+t_18+t_20, vec_[3] +3+d_[9]+d_[17]+d_[25]+d_[33]+t_3+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+d_[9]+d_[17]+d_[25]+d_[33]+t_3+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[7] +4+d_[9]+d_[17]+d_[25]+d_[33]+t_4+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[8] +4+d_[7]+d_[9]+d_[17]+d_[25]+d_[33]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[9] +4+d_[9]+d_[17]+d_[25]+d_[33]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +4+d_[17]+d_[25]+d_[33]+t_8+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[11] +4+d_[17]+d_[25]+d_[33]+t_9+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[15]+d_[17]+d_[25]+d_[33]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[17]+d_[25]+d_[33]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[25]+d_[33]+t_13+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+d_[25]+d_[33]+t_14+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[23]+d_[25]+d_[33]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +4+d_[25]+d_[33]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +4+d_[33]+t_18+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +4+d_[33]+t_19+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[32] +4+d_[31]+d_[33]+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[33] +4+d_[33]+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[34] +4+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +3+d_[39]);
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

extern const MAP_Explorer::Block block_1408{
    1408,
    7264,
    596,
    true,
    block_1408_fn
    };



static void block_1409_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1409{
    1409,
    632,
    632,
    true,
    block_1409_fn
    };


} // namespace CV32E40P_DSE