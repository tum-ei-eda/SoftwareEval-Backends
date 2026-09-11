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



static void block_174_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[15] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
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

extern const MAP_Explorer::Block block_174{
    174,
    76824,
    76832,
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
    76896,
    76896,
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
    76112,
    76112,
    true,
    block_181_fn
    };



static void block_184_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_22 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[4];
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_22 +1;
	uint64_t out_3 = out_17;
	uint64_t out_14 = out_17 -3;
	uint64_t out_1 = out_14 +1+d_[4];
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_184{
    184,
    75968,
    75984,
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
    75996,
    75996,
    true,
    block_185_fn
    };



static void block_186_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[27] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_186{
    186,
    76348,
    76356,
    true,
    block_186_fn
    };



static void block_197_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[6]);


	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = out_22 +2;
	uint64_t out_37 = out_22 +2+d_[7];
	uint64_t out_38 = out_22 +3+d_[7];
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_19 -1;
	uint64_t out_4 = out_18 +3+t_0;
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
    76360,
    76388,
    true,
    block_197_fn
    };



static void block_198_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_38 -1;
	uint64_t out_1 = out_14;
	uint64_t out_0 = out_14 -1;


	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_198{
    198,
    76028,
    76036,
    true,
    block_198_fn
    };



static void block_199_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[26] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +3);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[22] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[26] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[28] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_23 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_23 +2+d_[5];


	vec_[37] = out_37;
	vec_[28] = out_28;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_199{
    199,
    76040,
    76060,
    true,
    block_199_fn
    };



static void block_578_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_578{
    578,
    46272,
    46276,
    true,
    block_578_fn
    };



static void block_579_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0-1+d_[2], vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_19;
	uint64_t out_3 = out_19;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_579{
    579,
    46280,
    46292,
    true,
    block_579_fn
    };



static void block_580_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_580{
    580,
    46296,
    46296,
    true,
    block_580_fn
    };



static void block_581_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[4]+t_0, vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +d_[3], vec_[5] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_581{
    581,
    74104,
    74116,
    true,
    block_581_fn
    };



static void block_582_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);


	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+t_0);
	uint64_t out_12 = out_37;
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -1;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_582{
    582,
    74120,
    74136,
    true,
    block_582_fn
    };



static void block_583_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
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

extern const MAP_Explorer::Block block_583{
    583,
    74140,
    74144,
    true,
    block_583_fn
    };



static void block_584_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
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

extern const MAP_Explorer::Block block_584{
    584,
    74148,
    74152,
    true,
    block_584_fn
    };



static void block_585_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_585{
    585,
    74188,
    74196,
    true,
    block_585_fn
    };



static void block_589_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_589{
    589,
    74200,
    74208,
    true,
    block_589_fn
    };



static void block_590_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_590{
    590,
    74212,
    74220,
    true,
    block_590_fn
    };



static void block_591_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_4 = out_15;
	uint64_t out_3 = out_15;
	uint64_t out_2 = out_15;
	uint64_t out_1 = out_15 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_591{
    591,
    46872,
    46876,
    true,
    block_591_fn
    };



static void block_592_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[4], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(4, d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[4]+d_[10], d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[10], d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[10], d_[7]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[7]+d_[9]+t_0, vec_[3] +d_[7]+d_[9]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[7]+d_[9]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +4+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[7]+d_[9]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_4, vec_[3] +1+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +5+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+t_6);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +3+d_[4], vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_2, vec_[3] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+d_[10]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_19 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_592{
    592,
    47444,
    47472,
    true,
    block_592_fn
    };



static void block_593_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_593{
    593,
    17316,
    17324,
    true,
    block_593_fn
    };



static void block_597_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_597{
    597,
    47476,
    47480,
    true,
    block_597_fn
    };



static void block_599_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
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
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_599{
    599,
    47484,
    47496,
    true,
    block_599_fn
    };



static void block_600_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_600{
    600,
    74224,
    74224,
    true,
    block_600_fn
    };



static void block_602_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_15;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_602{
    602,
    74240,
    74244,
    true,
    block_602_fn
    };



static void block_603_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_15;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_603{
    603,
    74268,
    74272,
    true,
    block_603_fn
    };



static void block_604_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_604{
    604,
    74288,
    74288,
    true,
    block_604_fn
    };



static void block_605_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_605{
    605,
    46136,
    46136,
    true,
    block_605_fn
    };



static void block_606_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
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

extern const MAP_Explorer::Block block_606{
    606,
    74292,
    74296,
    true,
    block_606_fn
    };



static void block_607_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_607{
    607,
    46140,
    46140,
    true,
    block_607_fn
    };



static void block_608_fn(uint64_t* vec_, uint8_t* d_){


    

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
	uint64_t out_22 = MAP_Explorer::max2(out_13 +2, vec_[22] +3);
	uint64_t out_3 = out_22;
	uint64_t out_14 = out_22 -2;
	uint64_t out_37 = out_22 -2+d_[5];
	uint64_t out_38 = out_22 -1+d_[5];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_14 +2+d_[5];
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_608{
    608,
    74300,
    74324,
    true,
    block_608_fn
    };



static void block_609_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_13 = out_37;
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_12 -1;
	uint64_t out_1 = out_38 -1;


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_609{
    609,
    46300,
    46312,
    true,
    block_609_fn
    };



static void block_52_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_52{
    52,
    17132,
    17140,
    true,
    block_52_fn
    };



static void block_53_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +2+t_0, vec_[3] +1+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1+d_[3], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+t_0, vec_[3] +1+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_3 = out_14 -1+d_[4];
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_53{
    53,
    17144,
    17160,
    true,
    block_53_fn
    };



static void block_62_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_62{
    62,
    52392,
    52392,
    true,
    block_62_fn
    };



static void block_74_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(4, d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[3]+d_[8], d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[8], d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[8], d_[7]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_4, vec_[3] +1+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +5+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+t_6);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +1+d_[3], vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +2, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[8], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_2, vec_[3] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+d_[8]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[9];
	uint64_t out_14 = out_19 -1;


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_74{
    74,
    77224,
    77252,
    true,
    block_74_fn
    };



static void block_75_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +2, vec_[3] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +d_[6], vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[6]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+d_[5], vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]);
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_0 = out_19 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_75{
    75,
    102028,
    102052,
    true,
    block_75_fn
    };



static void block_92_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_92{
    92,
    17616,
    17616,
    true,
    block_92_fn
    };



static void block_93_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_93{
    93,
    17620,
    17624,
    true,
    block_93_fn
    };



static void block_94_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[20] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;
	uint64_t out_3 = out_4 -1+d_[2];


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_94{
    94,
    17632,
    17640,
    true,
    block_94_fn
    };



static void block_95_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_95{
    95,
    102096,
    102104,
    true,
    block_95_fn
    };



static void block_96_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[14] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]+d_[1]);

	uint64_t out_3 = x_0 -2+d_[2];
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_96{
    96,
    102108,
    102124,
    true,
    block_96_fn
    };



static void block_97_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_97{
    97,
    77256,
    77260,
    true,
    block_97_fn
    };



static void block_98_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_5 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_98{
    98,
    77264,
    77276,
    true,
    block_98_fn
    };



static void block_114_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_114{
    114,
    52396,
    52396,
    true,
    block_114_fn
    };



static void block_135_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_25 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_135{
    135,
    63156,
    63164,
    true,
    block_135_fn
    };



static void block_139_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[4]+d_[10], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[3]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+t_0);
	uint64_t t_6 = MAP_Explorer::max2(1+t_3, d_[7]+t_1);
	uint64_t t_7 = MAP_Explorer::max2(1+t_4, d_[7]+d_[9]+t_0);
	uint64_t t_8 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_6, d_[7]+d_[9]+t_1);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_7, vec_[1] +7+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +6+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +5+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +6+t_7);
	x_0 = MAP_Explorer::max2(x_0, vec_[22] +6+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +4+t_9);
	x_0 = MAP_Explorer::max2(x_0, vec_[30] +4+t_9);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +7+d_[0]+t_7);

	uint64_t out_3 = x_0 -3+d_[11];
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[4], vec_[1] +5+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +3+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +4+d_[4]);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[30] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +7+d_[0]+t_7, vec_[1] +7+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +6+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +4+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +7+d_[0]+t_7);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_24 = out_37 +1;
	uint64_t out_1 = out_24;


	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[24] = out_24;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_139{
    139,
    63188,
    63228,
    true,
    block_139_fn
    };



static void block_140_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 , vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[5];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_140{
    140,
    63232,
    63248,
    true,
    block_140_fn
    };



static void block_147_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[3], vec_[17] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;


	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_147{
    147,
    77428,
    77452,
    true,
    block_147_fn
    };



static void block_164_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[3]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[16] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_6 +1+t_0, vec_[5] +d_[7]);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +1+t_0);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+d_[3], vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_0, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_0);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_12 -1+d_[5];


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_164{
    164,
    73788,
    73808,
    true,
    block_164_fn
    };



static void block_165_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_165{
    165,
    73836,
    73836,
    true,
    block_165_fn
    };



static void block_166_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +3);
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

extern const MAP_Explorer::Block block_166{
    166,
    75204,
    75208,
    true,
    block_166_fn
    };



static void block_167_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+t_3, vec_[5] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2+d_[7]);
	uint64_t out_26 = MAP_Explorer::max2(out_19 +1, vec_[16] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_26 +d_[13], vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 -1+d_[9];
	uint64_t out_12 = out_37 +1;
	uint64_t out_24 = MAP_Explorer::max2(out_26 +1, vec_[14] +1);


	vec_[6] = out_6;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[24] = out_24;
}

extern const MAP_Explorer::Block block_167{
    167,
    75212,
    75252,
    true,
    block_167_fn
    };



static void block_168_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
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

extern const MAP_Explorer::Block block_168{
    168,
    75256,
    75260,
    true,
    block_168_fn
    };



static void block_169_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[8], d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_1, d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(2+t_2, d_[5]+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(2, d_[7]);


	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_3, vec_[1] +3+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[1]+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_1, vec_[1] +3+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[1]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+t_1);
	uint64_t out_19 = out_37;
	uint64_t out_3 = out_13;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[26] );
	uint64_t out_38 = MAP_Explorer::max2(out_13 , vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_169{
    169,
    75264,
    75288,
    true,
    block_169_fn
    };



static void block_170_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_1 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_1 = MAP_Explorer::max2(x_1, vec_[2] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[3] +1);
	x_1 = MAP_Explorer::max2(x_1, vec_[6] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[27] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[36] +3+d_[0]);
	uint64_t x_0 = MAP_Explorer::max2(x_1 +d_[1], vec_[28] +2);

	uint64_t out_3 = x_0 -1+d_[3];
	uint64_t out_19 = MAP_Explorer::max2(x_1+d_[1], vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_0 = out_19 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_170{
    170,
    75456,
    75468,
    true,
    block_170_fn
    };



static void block_171_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_25 +1;
	uint64_t out_23 = out_25 +2+d_[2];
	uint64_t out_37 = out_25 +1+d_[2];
	uint64_t out_38 = out_25 +3+d_[2];
	uint64_t out_28 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_23;
	uint64_t out_0 = out_37;


	vec_[25] = out_25;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[28] = out_28;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_171{
    171,
    75928,
    75944,
    true,
    block_171_fn
    };



static void block_175_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
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

extern const MAP_Explorer::Block block_175{
    175,
    76884,
    76892,
    true,
    block_175_fn
    };



static void block_176_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_15 = out_18 +2+d_[5];
	uint64_t out_20 = out_18 +4+d_[5];
	uint64_t out_21 = out_18 +3+d_[5];
	uint64_t out_37 = out_18 +3+d_[5]+d_[9];
	uint64_t out_38 = MAP_Explorer::max2(out_18 +4+d_[5]+d_[9], vec_[4] +1);
	uint64_t out_10 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[10] = out_10;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_176{
    176,
    76908,
    76948,
    true,
    block_176_fn
    };



static void block_180_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_180{
    180,
    76900,
    76904,
    true,
    block_180_fn
    };



static void block_182_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_182{
    182,
    76452,
    76460,
    true,
    block_182_fn
    };



static void block_183_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_27 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_183{
    183,
    75956,
    75960,
    true,
    block_183_fn
    };



static void block_201_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[17] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_22 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_201{
    201,
    75988,
    75992,
    true,
    block_201_fn
    };



static void block_206_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_27 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_28 = out_38 +1;
	uint64_t out_4 = out_28;
	uint64_t out_3 = out_28;
	uint64_t out_2 = out_28;
	uint64_t out_0 = out_28 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[27] = out_27;
	vec_[1] = out_1;
	vec_[28] = out_28;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_206{
    206,
    76064,
    76072,
    true,
    block_206_fn
    };



static void block_207_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_13 -1;
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +1+d_[3];
	uint64_t out_24 = out_13 +3+d_[3];
	uint64_t out_25 = out_13 +2+d_[3];
	uint64_t out_26 = out_13 +3+d_[3]+d_[7];
	uint64_t out_38 = MAP_Explorer::max2(out_13 +4+d_[3]+d_[7], vec_[4] +2);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_26;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_207{
    207,
    75796,
    75836,
    true,
    block_207_fn
    };



static void block_208_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[6], d_[2]+d_[4]);


	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_5 +1+d_[2]+d_[4], vec_[4] +2+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(out_5 +1+t_0, vec_[4] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_5 +1+t_1, vec_[4] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_1);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_208{
    208,
    73840,
    73860,
    true,
    block_208_fn
    };



static void block_218_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_218{
    218,
    76872,
    76876,
    true,
    block_218_fn
    };



static void block_219_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_219{
    219,
    76852,
    76860,
    true,
    block_219_fn
    };



static void block_223_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_223{
    223,
    77008,
    77012,
    true,
    block_223_fn
    };



static void block_234_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[3] +1+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2+d_[1], vec_[3] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
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

extern const MAP_Explorer::Block block_234{
    234,
    74704,
    74712,
    true,
    block_234_fn
    };



static void block_235_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(out_18 +2, vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +3+d_[7], vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[7]);
	uint64_t out_2 = out_38;
	uint64_t out_3 = out_13 -1+d_[5];
	uint64_t out_19 = out_38 -1;
	uint64_t out_37 = out_13 -1+d_[7];
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_235{
    235,
    74716,
    74740,
    true,
    block_235_fn
    };



static void block_236_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_236{
    236,
    74748,
    74752,
    true,
    block_236_fn
    };



static void block_249_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_13 = out_22 -1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_249{
    249,
    74840,
    74848,
    true,
    block_249_fn
    };



static void block_586_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +5+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0-1+d_[3], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +4);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +5+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[5];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_586{
    586,
    74420,
    74440,
    true,
    block_586_fn
    };



static void block_587_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
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

extern const MAP_Explorer::Block block_587{
    587,
    74828,
    74832,
    true,
    block_587_fn
    };



static void block_588_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_588{
    588,
    74836,
    74836,
    true,
    block_588_fn
    };



static void block_611_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_611{
    611,
    17328,
    17332,
    true,
    block_611_fn
    };



static void block_612_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 -1;
	uint64_t out_0 = out_3;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_612{
    612,
    74228,
    74236,
    true,
    block_612_fn
    };



static void block_630_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[6], d_[4]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_12 , vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_630{
    630,
    46880,
    46900,
    true,
    block_630_fn
    };



static void block_631_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[11], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[11], d_[6]+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[8]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_19 +1+d_[4]+t_0+t_1, vec_[3] +d_[2]+d_[4]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+d_[2]+d_[4]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +1+d_[2]+d_[4]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +d_[11]);
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[4]+d_[6]+d_[8]+d_[10]+t_0, vec_[3] +d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[8]+d_[10]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2+d_[4]+t_0, vec_[3] +1+d_[2]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[2]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[2]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[4]+t_0+t_2, vec_[3] +1+d_[2]+d_[4]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]+d_[4]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[2]+d_[4]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_631{
    631,
    46904,
    46928,
    true,
    block_631_fn
    };



static void block_633_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(2+t_2, d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_6 = MAP_Explorer::max2(d_[14], d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(1+d_[14], d_[9]+d_[11]);
	uint64_t t_8 = MAP_Explorer::max2(d_[14], d_[11]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[9]+d_[11]+d_[13]+t_3, vec_[3] +d_[9]+d_[11]+d_[13]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]+d_[11]+d_[13]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[9]+d_[11]+d_[13]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +1+d_[9]+d_[11]+d_[13]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +1+d_[9]+d_[11]+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[11]+d_[13]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_3+t_7, vec_[3] +1+t_3+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_3+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_4+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+t_5+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_8);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_3, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_3+t_6, vec_[3] +1+t_3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_4+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+t_5+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1+d_[14]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_633{
    633,
    52400,
    52432,
    true,
    block_633_fn
    };



static void block_634_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_18 = out_37 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[6] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_634{
    634,
    52436,
    52448,
    true,
    block_634_fn
    };



static void block_635_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[5], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2, d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[12], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[11]+t_2);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[6]+t_1, vec_[1] +4+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +3+d_[6]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]+d_[6]+t_1);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -1+t_3, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +d_[12], vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +t_4, vec_[14] +2+d_[11]);
	uint64_t out_10 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[10] = out_10;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_635{
    635,
    52452,
    52484,
    true,
    block_635_fn
    };



static void block_636_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[6], d_[1]+d_[3]+d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[6], d_[3]+d_[5]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[14], d_[9]+d_[11]+d_[13]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[14], d_[11]+d_[13]);
	uint64_t t_11 = MAP_Explorer::max2(1+d_[22], d_[17]+d_[19]);
	uint64_t t_12 = MAP_Explorer::max2(d_[22], d_[19]);
	uint64_t t_13 = MAP_Explorer::max2(2+t_11, d_[17]+d_[19]+d_[21]);
	uint64_t t_14 = MAP_Explorer::max2(2+t_12, d_[19]+d_[21]);
	uint64_t t_15 = MAP_Explorer::max2(2, d_[21]);
	uint64_t t_16 = MAP_Explorer::max2(d_[27], d_[26]);
	uint64_t t_19 = MAP_Explorer::max2(2+d_[35], d_[30]+d_[32]+d_[34]);
	uint64_t t_22 = MAP_Explorer::max2(2+d_[43], d_[38]+d_[40]+d_[42]);


	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[7]+d_[15]+t_3+t_8+t_13, vec_[1] +3+d_[7]+d_[15]+t_3+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[7]+d_[15]+t_3+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[7]+d_[15]+t_3+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[7]+d_[15]+t_3+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[10] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+d_[7]+d_[15]+t_3+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[7]+d_[15]+t_4+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2+d_[5]+d_[7]+d_[15]+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+d_[7]+d_[15]+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +2+d_[15]+t_8+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[26] +2+d_[15]+t_9+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +2+d_[13]+d_[15]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[28] +2+d_[15]+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[29] +2+t_13);
	out_22 = MAP_Explorer::max2(out_22, vec_[30] +2+t_14);
	out_22 = MAP_Explorer::max2(out_22, vec_[31] +2+t_15);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[7]+d_[15]+t_3+t_8+t_13);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[7]+d_[15]+t_3+t_8+t_11, vec_[1] +3+d_[7]+d_[15]+t_3+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[7]+d_[15]+t_3+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+d_[7]+d_[15]+t_3+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+d_[7]+d_[15]+t_3+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[10] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +2+d_[7]+d_[15]+t_3+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[22] +2+d_[7]+d_[15]+t_4+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[23] +2+d_[5]+d_[7]+d_[15]+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[24] +2+d_[7]+d_[15]+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[25] +2+d_[15]+t_8+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[26] +2+d_[15]+t_9+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[27] +2+d_[13]+d_[15]+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[28] +2+d_[15]+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+t_11);
	out_29 = MAP_Explorer::max2(out_29, vec_[30] +2+t_12);
	out_29 = MAP_Explorer::max2(out_29, vec_[31] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +3+d_[0]+d_[7]+d_[15]+t_3+t_8+t_11);
	uint64_t out_19 = out_22;
	uint64_t out_37 = MAP_Explorer::max2(out_22 +2+d_[28]+d_[36]+d_[44]+t_16+t_19+t_22, vec_[4] +2+d_[28]+d_[36]+d_[44]+t_19+t_22);
	uint64_t out_25 = out_37;
	uint64_t out_12 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[48];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_13 -1+d_[48];
	uint64_t out_0 = out_1 -1;


	vec_[22] = out_22;
	vec_[29] = out_29;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_636{
    636,
    52500,
    52608,
    true,
    block_636_fn
    };



static void block_640_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_640{
    640,
    53596,
    53600,
    true,
    block_640_fn
    };



static void block_643_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_21 +d_[2], vec_[4] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	uint64_t out_30 = MAP_Explorer::max2(out_21 +4+d_[4], vec_[4] +5+d_[4]);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +5+d_[4]);
	uint64_t out_28 = out_30 -2;
	uint64_t out_37 = out_30 +d_[8];
	uint64_t out_38 = out_30 +2+d_[8];
	uint64_t out_23 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_26 = out_28 +1;
	uint64_t out_24 = out_26 -2;
	uint64_t out_19 = out_24 +4+d_[8];
	uint64_t out_1 = out_19;


	vec_[21] = out_21;
	vec_[3] = out_3;
	vec_[30] = out_30;
	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[26] = out_26;
	vec_[24] = out_24;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_643{
    643,
    52708,
    52744,
    true,
    block_643_fn
    };



static void block_644_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], 2);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +4, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[5], vec_[19] +2+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +4+t_0, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +4+t_0);
	uint64_t out_1 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_4 = out_19 +2;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -3;


	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_644{
    644,
    52748,
    52772,
    true,
    block_644_fn
    };



static void block_645_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
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

extern const MAP_Explorer::Block block_645{
    645,
    53336,
    53340,
    true,
    block_645_fn
    };



static void block_646_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +4);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +4);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +5+d_[0]);
	uint64_t out_19 = out_30 -2;
	uint64_t out_37 = out_30 -1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_30 +1+d_[3], vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 +2+d_[3]+d_[5];


	vec_[30] = out_30;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_646{
    646,
    54308,
    54328,
    true,
    block_646_fn
    };



static void block_647_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_647{
    647,
    54332,
    54336,
    true,
    block_647_fn
    };



static void block_648_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
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

extern const MAP_Explorer::Block block_648{
    648,
    57236,
    57240,
    true,
    block_648_fn
    };



static void block_649_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_31 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_31 = MAP_Explorer::max2(out_31, vec_[2] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[30] +1);
	out_31 = MAP_Explorer::max2(out_31, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[31] = out_31;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_649{
    649,
    57244,
    57252,
    true,
    block_649_fn
    };



static void block_650_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_650{
    650,
    53376,
    53376,
    true,
    block_650_fn
    };



static void block_651_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_35 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_35 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[35] = out_35;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_651{
    651,
    53380,
    53384,
    true,
    block_651_fn
    };



static void block_652_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_652{
    652,
    53404,
    53404,
    true,
    block_652_fn
    };



static void block_653_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +1);
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

extern const MAP_Explorer::Block block_653{
    653,
    53412,
    53416,
    true,
    block_653_fn
    };



static void block_654_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[5], d_[2]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[30] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+t_0, vec_[4] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[35] +4+d_[5]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[30] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[35] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +4+d_[0]);
	uint64_t out_3 = out_19;
	uint64_t out_31 = MAP_Explorer::max2(out_26 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_26 +2+d_[5], vec_[4] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_29 = out_37 -1;
	uint64_t out_30 = out_38 -1;
	uint64_t out_1 = out_30;
	uint64_t out_0 = out_30 -1;


	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[3] = out_3;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_654{
    654,
    53424,
    53452,
    true,
    block_654_fn
    };



static void block_655_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);


	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_30 +1+t_1, vec_[3] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +1+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_30 +1+d_[8]+t_2, vec_[3] +d_[8]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[8]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[8]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(out_30 +2+t_0, vec_[3] +1+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_30 +2+t_2, vec_[3] +1+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[30] = out_30;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_655{
    655,
    53456,
    53476,
    true,
    block_655_fn
    };



static void block_656_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_9 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_656{
    656,
    52872,
    52876,
    true,
    block_656_fn
    };



static void block_657_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_35 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[6] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	uint64_t out_3 = out_16;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[35] = out_35;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_657{
    657,
    52884,
    52892,
    true,
    block_657_fn
    };



static void block_658_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
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

extern const MAP_Explorer::Block block_658{
    658,
    52896,
    52900,
    true,
    block_658_fn
    };



static void block_659_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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

extern const MAP_Explorer::Block block_659{
    659,
    52904,
    52908,
    true,
    block_659_fn
    };



static void block_660_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_660{
    660,
    52960,
    52960,
    true,
    block_660_fn
    };



static void block_661_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +1);
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

extern const MAP_Explorer::Block block_661{
    661,
    53012,
    53016,
    true,
    block_661_fn
    };



static void block_662_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_662{
    662,
    53020,
    53024,
    true,
    block_662_fn
    };



static void block_663_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
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

extern const MAP_Explorer::Block block_663{
    663,
    53028,
    53032,
    true,
    block_663_fn
    };



static void block_664_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+t_0);


	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_16 +2, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[8]+t_2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_3 = out_19 -1+d_[8]+d_[10]+t_2;
	uint64_t out_17 = out_38 -1;
	uint64_t out_37 = out_19 +t_2;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_664{
    664,
    53036,
    53068,
    true,
    block_664_fn
    };



static void block_665_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_13 = out_37;
	uint64_t out_33 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_33 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[33] = out_33;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_665{
    665,
    53072,
    53080,
    true,
    block_665_fn
    };



static void block_666_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_32 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_666{
    666,
    53092,
    53096,
    true,
    block_666_fn
    };



static void block_667_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[30] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_667{
    667,
    53100,
    53116,
    true,
    block_667_fn
    };



static void block_668_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_15 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_668{
    668,
    55952,
    55964,
    true,
    block_668_fn
    };



static void block_681_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_681{
    681,
    55968,
    55968,
    true,
    block_681_fn
    };



static void block_682_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_38 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_682{
    682,
    53120,
    53128,
    true,
    block_682_fn
    };



static void block_683_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(out_13 +1, vec_[23] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +d_[2], vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_19;


	vec_[13] = out_13;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_683{
    683,
    53144,
    53156,
    true,
    block_683_fn
    };



static void block_684_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_684{
    684,
    52636,
    52640,
    true,
    block_684_fn
    };



static void block_685_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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

extern const MAP_Explorer::Block block_685{
    685,
    53160,
    53164,
    true,
    block_685_fn
    };



static void block_686_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_686{
    686,
    53168,
    53168,
    true,
    block_686_fn
    };



static void block_687_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_14 = out_16;
	uint64_t out_3 = out_16;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_16 +d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_687{
    687,
    60292,
    60304,
    true,
    block_687_fn
    };



static void block_688_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_688{
    688,
    60308,
    60308,
    true,
    block_688_fn
    };



static void block_689_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +5+d_[0]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_23 = out_22 +1+d_[3];
	uint64_t out_24 = out_22 +2+d_[3];
	uint64_t out_25 = out_22 +3+d_[3]+d_[7];
	uint64_t out_26 = out_22 +4+d_[3]+d_[7];
	uint64_t out_27 = out_22 +5+d_[3]+d_[7];
	uint64_t out_28 = out_22 +6+d_[3]+d_[7];
	uint64_t out_30 = out_22 +7+d_[3]+d_[7]+d_[11];
	uint64_t out_31 = out_22 +8+d_[3]+d_[7]+d_[11];
	uint64_t out_37 = out_22 +6+d_[3]+d_[7]+d_[11];
	uint64_t out_38 = MAP_Explorer::max2(out_22 +8+d_[3]+d_[7]+d_[11], vec_[4] +1);
	uint64_t out_29 = out_37;
	uint64_t out_19 = out_24;
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[29] = out_29;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_689{
    689,
    53172,
    53228,
    true,
    block_689_fn
    };



static void block_690_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +5+d_[0]);
	uint64_t out_3 = out_14;
	uint64_t out_12 = out_14 -1;
	uint64_t out_37 = out_14 -2+d_[3];
	uint64_t out_38 = out_14 -1+d_[3];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +2+d_[3];
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_690{
    690,
    53236,
    53252,
    true,
    block_690_fn
    };



static void block_695_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
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

extern const MAP_Explorer::Block block_695{
    695,
    93896,
    93900,
    true,
    block_695_fn
    };



static void block_696_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_696{
    696,
    93692,
    93704,
    true,
    block_696_fn
    };



static void block_706_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_706{
    706,
    17552,
    17552,
    true,
    block_706_fn
    };



static void block_0_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_8 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_8 = MAP_Explorer::max2(out_8, vec_[2] +4);
	out_8 = MAP_Explorer::max2(out_8, vec_[4] +4);
	out_8 = MAP_Explorer::max2(out_8, vec_[36] +5+d_[0]);
	uint64_t out_7 = out_8 -1;
	uint64_t out_9 = out_8 +24+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32];
	uint64_t out_10 = out_8 +1+d_[4];
	uint64_t out_11 = out_8 +2+d_[4];
	uint64_t out_12 = out_8 +3+d_[4];
	uint64_t out_13 = out_8 +3+d_[4]+d_[8];
	uint64_t out_14 = out_8 +4+d_[4]+d_[8];
	uint64_t out_15 = out_8 +5+d_[4]+d_[8];
	uint64_t out_16 = out_8 +6+d_[4]+d_[8];
	uint64_t out_17 = out_8 +6+d_[4]+d_[8]+d_[12];
	uint64_t out_18 = out_8 +7+d_[4]+d_[8]+d_[12];
	uint64_t out_19 = out_8 +8+d_[4]+d_[8]+d_[12];
	uint64_t out_20 = out_8 +9+d_[4]+d_[8]+d_[12];
	uint64_t out_21 = out_8 +9+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_22 = out_8 +10+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_23 = out_8 +11+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_24 = out_8 +12+d_[4]+d_[8]+d_[12]+d_[16];
	uint64_t out_25 = out_8 +12+d_[4]+d_[8]+d_[12]+d_[16]+d_[20];
	uint64_t out_26 = out_8 +13+d_[4]+d_[8]+d_[12]+d_[16]+d_[20];
	uint64_t out_27 = out_8 +14+d_[4]+d_[8]+d_[12]+d_[16]+d_[20];
	uint64_t out_28 = out_8 +15+d_[4]+d_[8]+d_[12]+d_[16]+d_[20];
	uint64_t out_29 = out_8 +15+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24];
	uint64_t out_30 = out_8 +27+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36]+d_[40];
	uint64_t out_31 = out_8 +29+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36]+d_[40];
	uint64_t out_32 = out_8 +18+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24];
	uint64_t out_33 = out_8 +18+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28];
	uint64_t out_34 = out_8 +19+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28];
	uint64_t out_35 = out_8 +20+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28];
	uint64_t out_37 = out_8 +28+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36]+d_[40];
	uint64_t out_38 = out_8 +30+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36]+d_[40];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_31;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_7 -2;
	uint64_t out_6 = out_7 +27+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36];
	uint64_t out_4 = out_5 +27+d_[4]+d_[8]+d_[12]+d_[16]+d_[20]+d_[24]+d_[28]+d_[32]+d_[36];


	vec_[8] = out_8;
	vec_[7] = out_7;
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
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[4] = out_4;
}

extern const MAP_Explorer::Block block_0{
    0,
    256,
    428,
    true,
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
    true,
    block_1_fn
    };



static void block_2_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(4+d_[7], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(3+d_[7]+d_[13], d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[10]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[13], d_[10]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[2], vec_[1] +4+d_[1]+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[1]+d_[2]);
	uint64_t out_12 = out_19 +1+d_[7];
	uint64_t out_3 = MAP_Explorer::max2(out_19 -2+d_[10]+d_[12]+t_0, vec_[5] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[12]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+t_1, vec_[5] +1+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +t_2, vec_[5] +3+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3);
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_38 -1;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_22 -1;


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_2{
    2,
    48076,
    48116,
    true,
    block_2_fn
    };



static void block_3_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_19 +1+d_[3];
	uint64_t out_22 = out_19 +3+d_[3];
	uint64_t out_37 = out_19 +2+d_[3];
	uint64_t out_38 = out_19 +4+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_37;


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
    48148,
    48172,
    true,
    block_3_fn
    };



static void block_4_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_13 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_12 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 +d_[4];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_4{
    4,
    48176,
    48192,
    true,
    block_4_fn
    };



static void block_5_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_5{
    5,
    48912,
    48916,
    true,
    block_5_fn
    };



static void block_6_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_6{
    6,
    48932,
    48932,
    true,
    block_6_fn
    };



static void block_7_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_7{
    7,
    48196,
    48196,
    true,
    block_7_fn
    };



static void block_8_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +4);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
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


	vec_[38] = out_38;
	vec_[12] = out_12;
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

extern const MAP_Explorer::Block block_8{
    8,
    48200,
    48220,
    true,
    block_8_fn
    };



static void block_9_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_9{
    9,
    448,
    448,
    true,
    block_9_fn
    };



static void block_10_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_10{
    10,
    16632,
    16636,
    true,
    block_10_fn
    };



static void block_11_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_11{
    11,
    452,
    460,
    true,
    block_11_fn
    };



static void block_12_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +4+d_[0]);
	uint64_t out_6 = out_15 -2;
	uint64_t out_37 = out_15 +1+d_[3];
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+d_[3], vec_[5] +1);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[6];


	vec_[15] = out_15;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_12{
    12,
    44100,
    44124,
    true,
    block_12_fn
    };



static void block_13_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2, d_[4]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[11], d_[8]+d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[18], d_[14]+d_[16]);
	uint64_t t_7 = MAP_Explorer::max2(d_[18], d_[16]);
	uint64_t t_8 = MAP_Explorer::max2(d_[23], d_[22]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+d_[2]+t_2);
	out_10 = MAP_Explorer::max2(out_10, vec_[16] +2+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2+t_2);
	uint64_t out_15 = MAP_Explorer::max2(out_10 +1+d_[12]+d_[14]+d_[16]+t_4, vec_[15] +2+d_[12]+d_[14]+d_[16]+t_4);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2+d_[10]+d_[12]+d_[14]+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+d_[12]+d_[14]+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +2+d_[14]+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[21] +2+d_[16]);
	uint64_t out_17 = MAP_Explorer::max2(out_10 +1+d_[12]+t_4+t_6, vec_[15] +2+d_[12]+t_4+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+d_[10]+d_[12]+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+d_[12]+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[20] +2+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +2+t_7);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +3+d_[23], vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3+d_[23]);
	uint64_t out_37 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_17 +4+t_8, vec_[5] +2+d_[22]);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+t_8);
	uint64_t out_16 = MAP_Explorer::max2(out_17 +1, vec_[14] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[24];
	uint64_t out_14 = out_16 +1;


	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_13{
    13,
    46436,
    46500,
    true,
    block_13_fn
    };



static void block_14_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(3+t_1, d_[6]+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(2, d_[12]);
	uint64_t t_5 = MAP_Explorer::max2(1+d_[16], d_[12]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[4]+d_[15]+t_0+t_2+t_4, vec_[3] +d_[2]+d_[4]+d_[15]+t_2+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]+d_[4]+d_[15]+t_2+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[4]+d_[15]+t_2+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[15]+t_2+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[15]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[15]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +2+d_[15]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[15]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[15]+t_3+t_4);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[4]+t_0+t_2+t_5, vec_[3] +1+d_[2]+d_[4]+t_2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[2]+d_[4]+t_2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[4]+t_2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[16]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +3+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_3+t_5);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[6]+t_0, vec_[3] +1+d_[2]+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+d_[2]+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +3+d_[4]+t_0+t_1, vec_[3] +2+d_[2]+d_[4]+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +3+d_[2]+d_[4]+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+d_[4]+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +3+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[10]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+d_[4]+t_0+t_2, vec_[3] +1+d_[2]+d_[4]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[2]+d_[4]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[4]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+t_3);
	uint64_t out_12 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_37 -1+d_[16];
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = out_37 +d_[16];


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[38] = out_38;
}

extern const MAP_Explorer::Block block_14{
    14,
    62872,
    62912,
    true,
    block_14_fn
    };



static void block_16_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_18 = out_37 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[6] +1+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[4], vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_16{
    16,
    62916,
    62928,
    true,
    block_16_fn
    };



static void block_22_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[6], d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[6], d_[1]+d_[3]+d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[6], d_[3]+d_[5]);


	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_3, vec_[1] +2+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +1+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +1+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +1+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +2+d_[0]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_1, vec_[1] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+t_1);
	uint64_t out_3 = out_0 +d_[7]+d_[9];
	uint64_t out_38 = MAP_Explorer::max2(out_0 +1+d_[7], vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_22{
    22,
    62932,
    62952,
    true,
    block_22_fn
    };



static void block_23_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_23{
    23,
    62956,
    62960,
    true,
    block_23_fn
    };



static void block_24_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_24{
    24,
    62964,
    62964,
    true,
    block_24_fn
    };



static void block_25_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
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

extern const MAP_Explorer::Block block_25{
    25,
    69384,
    69388,
    true,
    block_25_fn
    };



static void block_26_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
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

extern const MAP_Explorer::Block block_26{
    26,
    46096,
    46100,
    true,
    block_26_fn
    };



static void block_27_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[6], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(t_1, 1+t_0);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_0 = out_37 -1+d_[6];
	uint64_t out_19 = out_37 +t_0;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_2, vec_[4] +1);
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

extern const MAP_Explorer::Block block_27{
    27,
    46108,
    46128,
    true,
    block_27_fn
    };



static void block_28_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_28{
    28,
    46132,
    46132,
    true,
    block_28_fn
    };



static void block_29_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(3+t_0, d_[6]+d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[10], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[17], d_[12]+d_[14]);
	uint64_t t_5 = MAP_Explorer::max2(d_[17], d_[14]);
	uint64_t t_6 = MAP_Explorer::max2(2+t_4, d_[12]+d_[14]+d_[16]);
	uint64_t t_7 = MAP_Explorer::max2(2+t_5, d_[14]+d_[16]);
	uint64_t t_8 = MAP_Explorer::max2(2, d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(2+d_[22]+t_1+t_6, t_0);
	uint64_t t_11 = MAP_Explorer::max2(5+d_[22], d_[19]);
	uint64_t t_12 = MAP_Explorer::max2(t_1+t_6+t_11, 3+t_0);
	uint64_t t_13 = MAP_Explorer::max2(t_2+t_6+t_11, 2+d_[10]);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[22]+d_[27]+t_1+t_6, t_9);
	uint64_t t_15 = MAP_Explorer::max2(2+d_[22]+d_[27]+t_2+t_6, d_[10]);
	uint64_t t_16 = MAP_Explorer::max2(3+t_14, t_12);
	uint64_t t_17 = MAP_Explorer::max2(2+t_15, t_13);
	uint64_t t_18 = MAP_Explorer::max2(4+d_[22]+d_[27], d_[19]);
	uint64_t t_19 = MAP_Explorer::max2(1+t_16, d_[26]+t_12);
	uint64_t t_20 = MAP_Explorer::max2(d_[27], d_[26]);
	uint64_t t_21 = MAP_Explorer::max2(1+t_17, d_[26]+t_13);
	uint64_t t_22 = MAP_Explorer::max2(1+t_18, d_[26]+t_11);
	uint64_t t_23 = MAP_Explorer::max2(d_[35], d_[30]);
	uint64_t t_24 = MAP_Explorer::max2(1+d_[35], d_[30]+d_[32]);
	uint64_t t_25 = MAP_Explorer::max2(d_[28]+t_19+t_24, 2+t_0);
	uint64_t t_26 = MAP_Explorer::max2(d_[28]+t_21+t_24, 1+d_[10]);
	uint64_t t_27 = MAP_Explorer::max2(2+d_[35], d_[30]+d_[32]+d_[34]);
	uint64_t t_28 = MAP_Explorer::max2(d_[28]+t_19+t_27, 3+t_0);
	uint64_t t_29 = MAP_Explorer::max2(d_[28]+t_21+t_27, 2+d_[10]);
	uint64_t t_30 = MAP_Explorer::max2(1+d_[28]+t_19+t_23, t_25);
	uint64_t t_31 = MAP_Explorer::max2(1+d_[28]+t_21+t_23, t_26);
	uint64_t t_32 = MAP_Explorer::max2(1+t_30, t_28);
	uint64_t t_33 = MAP_Explorer::max2(1+t_31, t_29);
	uint64_t t_34 = MAP_Explorer::max2(1+t_32, d_[36]+t_28);
	uint64_t t_35 = MAP_Explorer::max2(1+t_33, d_[36]+t_29);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +4+d_[3]+d_[4]+t_0, vec_[3] +2+d_[4]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+d_[4]+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+d_[10]);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +3+d_[3]+d_[4]+t_1+t_4, vec_[3] +1+d_[4]+t_1+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+d_[4]+t_1+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_1+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_2+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_5);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +4+d_[3]+d_[4]+t_1+t_6, vec_[3] +2+d_[4]+t_1+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +3+d_[4]+t_1+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3+t_1+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +3+t_2+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3+t_6);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +3+t_7);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +3+t_8);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +3+d_[3]+d_[4]+t_32, vec_[3] +1+d_[4]+t_32);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +6+d_[22]+d_[28]+t_20+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[4]+t_32);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_32);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_33);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[28]+t_6+t_22+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[28]+t_7+t_22+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[28]+t_8+t_22+t_27);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+d_[3]+d_[4]+t_34, vec_[3] +1+d_[4]+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +6+d_[22]+d_[28]+d_[36]+t_20+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[4]+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_35);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[28]+d_[36]+t_6+t_22+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[28]+d_[36]+t_7+t_22+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[28]+d_[36]+t_8+t_22+t_27);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = out_38 +d_[38];
	uint64_t out_16 = out_19 -1;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[40];
	uint64_t out_15 = out_16 +1+d_[22];
	uint64_t out_14 = out_15 +2;


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_29{
    29,
    45428,
    45532,
    true,
    block_29_fn
    };



static void block_33_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[18], d_[15]+d_[17]);
	uint64_t t_4 = MAP_Explorer::max2(2+d_[26], d_[21]+d_[23]+d_[25]);
	uint64_t t_7 = MAP_Explorer::max2(2+d_[34], d_[29]+d_[31]+d_[33]);


	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +4+d_[0]);
	uint64_t out_23 = out_24 +1+d_[4];
	uint64_t out_16 = MAP_Explorer::max2(out_24 +6+d_[4]+d_[8], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +10+d_[4]+d_[8]+d_[12]+d_[19]+d_[27]+t_1+t_4+t_7, vec_[3] +1+d_[15]+d_[17]+d_[19]+d_[27]+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[12]+d_[19]+d_[27]+t_1+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[19]+d_[27]+t_1+t_4+t_7);
	uint64_t out_0 = out_37 -1+d_[35];
	uint64_t out_5 = out_37 +d_[35]+d_[37];
	uint64_t out_15 = out_16 +1;
	uint64_t out_22 = out_23 +2;
	uint64_t out_38 = out_37 +d_[35];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[39];
	uint64_t out_14 = out_15 +1+d_[12];
	uint64_t out_19 = out_22 +2+d_[8];
	uint64_t out_13 = out_19 -1;


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_33{
    33,
    45536,
    45644,
    true,
    block_33_fn
    };



static void block_34_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[16], d_[11]+d_[13]+d_[15]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[16], d_[13]+d_[15]);
	uint64_t t_7 = MAP_Explorer::max2(2+d_[24], d_[19]+d_[21]+d_[23]);
	uint64_t t_8 = MAP_Explorer::max2(d_[32], d_[27]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[32], d_[27]+d_[29]);
	uint64_t t_10 = MAP_Explorer::max2(2+d_[32], d_[27]+d_[29]+d_[31]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_18 = out_19 +2;
	uint64_t out_5 = MAP_Explorer::max2(out_19 +6+d_[4]+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_10, vec_[3] +1+d_[9]+d_[17]+d_[25]+t_3+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +5+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[15]+d_[17]+d_[25]+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[17]+d_[25]+t_4+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+d_[17]+d_[25]+t_3+t_7+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_10);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2+d_[4], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +6+d_[4]+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_8, vec_[3] +1+d_[9]+d_[17]+d_[25]+t_3+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[15]+d_[17]+d_[25]+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[17]+d_[25]+t_4+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[17]+d_[25]+t_3+t_7+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_8);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +6+d_[4]+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_9, vec_[3] +1+d_[9]+d_[17]+d_[25]+t_3+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5+d_[8]+d_[9]+d_[17]+d_[25]+t_3+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[15]+d_[17]+d_[25]+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[17]+d_[25]+t_4+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[17]+d_[25]+t_3+t_7+t_9);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[9]+d_[17]+d_[25]+t_3+t_7+t_9);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[33];
	uint64_t out_15 = out_16 +1;
	uint64_t out_14 = out_15 +2;


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_34{
    34,
    45648,
    45732,
    true,
    block_34_fn
    };



static void block_35_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[5]+d_[7]+d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(d_[15], d_[12]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +1+d_[2]+d_[3]+t_3, vec_[3] +1+d_[3]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[3]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+d_[3]+t_3);
	uint64_t out_4 = out_5 +5+d_[19]+t_5;
	uint64_t out_12 = out_5 +1+d_[12];
	uint64_t out_13 = out_5 +2+d_[12];
	uint64_t out_22 = out_5 +3+t_5;
	uint64_t out_24 = out_5 +5+t_5;
	uint64_t out_37 = out_5 +4+t_5;
	uint64_t out_38 = out_5 +4+d_[19]+t_5;
	uint64_t out_23 = out_37;
	uint64_t out_6 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_35{
    35,
    45736,
    45792,
    true,
    block_35_fn
    };



static void block_36_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_36{
    36,
    69392,
    69392,
    true,
    block_36_fn
    };



static void block_37_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0-2+d_[2], vec_[3] +1);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_3 = out_18;
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_37 +1;
	uint64_t out_17 = out_18 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_37{
    37,
    62968,
    62980,
    true,
    block_37_fn
    };



static void block_38_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[6]);


	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 +d_[2];
	uint64_t out_18 = MAP_Explorer::max2(out_16 +2+d_[2], vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1+d_[7], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +3+t_0, vec_[3] +2+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[6]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = MAP_Explorer::max2(out_18 +2+t_0, vec_[3] +1+d_[6]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+d_[6]);
	uint64_t out_0 = out_17 -1;
	uint64_t out_3 = out_17 -1+d_[8];


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_38{
    38,
    62984,
    63016,
    true,
    block_38_fn
    };



static void block_39_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
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

extern const MAP_Explorer::Block block_39{
    39,
    63024,
    63032,
    true,
    block_39_fn
    };



static void block_40_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3);
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

extern const MAP_Explorer::Block block_40{
    40,
    63036,
    63040,
    true,
    block_40_fn
    };



static void block_41_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_3 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_41{
    41,
    63796,
    63804,
    true,
    block_41_fn
    };



static void block_42_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[5], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[10], d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(2+d_[10], 1+d_[6]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+t_1+t_2, vec_[3] +1+d_[2]+d_[4]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_1+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[4]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_1+t_3, vec_[3] +1+d_[2]+d_[4]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[4]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_1+t_4, vec_[3] +2+d_[2]+d_[4]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_1+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[4]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_13 = MAP_Explorer::max2(out_19 , vec_[14] +1);
	uint64_t out_0 = out_12 -1;


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_42{
    42,
    76500,
    76532,
    true,
    block_42_fn
    };



static void block_43_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_43{
    43,
    76536,
    76540,
    true,
    block_43_fn
    };



static void block_44_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_19 +1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_44{
    44,
    76544,
    76552,
    true,
    block_44_fn
    };



static void block_45_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_45{
    45,
    76556,
    76560,
    true,
    block_45_fn
    };



static void block_46_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_38 -1;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_46{
    46,
    76700,
    76708,
    true,
    block_46_fn
    };



static void block_47_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_47{
    47,
    76712,
    76720,
    true,
    block_47_fn
    };



static void block_48_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[3]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[3]+d_[5], vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	uint64_t out_6 = MAP_Explorer::max2(out_19 , vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2+t_0, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;


	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_48{
    48,
    94016,
    94040,
    true,
    block_48_fn
    };



static void block_49_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[7], d_[4]+d_[6]);


	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_15 +d_[8]+t_3, vec_[6] +1+d_[8]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[8]);
	uint64_t out_13 = MAP_Explorer::max2(out_15 +1+t_3, vec_[6] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1+t_1, vec_[6] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+t_3, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -1;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_49{
    49,
    94080,
    94104,
    true,
    block_49_fn
    };



static void block_50_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_50{
    50,
    94108,
    94112,
    true,
    block_50_fn
    };



static void block_51_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[4]+d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[8], d_[3]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +1, vec_[15] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +4+d_[4], vec_[3] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[8], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+t_0, vec_[3] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +5+d_[8]);
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = out_19 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_18 +2+d_[9]+t_0, vec_[3] +1+d_[9]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[9]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+d_[8]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +5+d_[8]+d_[9]);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +1+d_[4], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[11];
	uint64_t out_12 = out_14 -1;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_51{
    51,
    94900,
    94936,
    true,
    block_51_fn
    };



static void block_54_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
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

extern const MAP_Explorer::Block block_54{
    54,
    94940,
    94944,
    true,
    block_54_fn
    };



static void block_55_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_5 = out_37;
	uint64_t out_12 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_6 = out_12;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_12 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_55{
    55,
    94948,
    94960,
    true,
    block_55_fn
    };



static void block_56_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_56{
    56,
    94116,
    94116,
    true,
    block_56_fn
    };



static void block_57_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_19 = MAP_Explorer::max2(x_0+2+d_[2], vec_[3] +4);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_22 = out_19 +1+d_[6];
	uint64_t out_24 = MAP_Explorer::max2(out_19 +2+d_[6], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_24 +2+d_[10], vec_[13] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_23 = out_24 +1;
	uint64_t out_37 = out_24 +1+d_[10];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_15 = out_23 +1;


	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_57{
    57,
    94120,
    94164,
    true,
    block_57_fn
    };



static void block_58_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[11], d_[6]+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[8]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[4]+d_[6]+d_[8]+d_[10]+t_0, vec_[3] +d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+d_[4]+t_0+t_2, vec_[3] +1+d_[2]+d_[4]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[4]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[2]+d_[4]+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_38 -1;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_22 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_58{
    58,
    50376,
    50412,
    true,
    block_58_fn
    };



static void block_59_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
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

extern const MAP_Explorer::Block block_59{
    59,
    50544,
    50548,
    true,
    block_59_fn
    };



static void block_60_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_60{
    60,
    50552,
    50552,
    true,
    block_60_fn
    };



static void block_61_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_61{
    61,
    50556,
    50556,
    true,
    block_61_fn
    };



static void block_63_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
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

extern const MAP_Explorer::Block block_63{
    63,
    50560,
    50564,
    true,
    block_63_fn
    };



static void block_64_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
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

extern const MAP_Explorer::Block block_64{
    64,
    50568,
    50572,
    true,
    block_64_fn
    };



static void block_65_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_65{
    65,
    50576,
    50580,
    true,
    block_65_fn
    };



static void block_66_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_19 +1;
	uint64_t out_20 = out_19 +1+d_[2];
	uint64_t out_23 = out_19 +4+d_[2];
	uint64_t out_37 = out_19 +5+d_[2]+d_[6];
	uint64_t out_38 = MAP_Explorer::max2(out_19 +7+d_[2]+d_[6], vec_[3] +2);
	uint64_t out_2 = out_38;
	uint64_t out_16 = out_38 -1;
	uint64_t out_12 = out_16;
	uint64_t out_3 = out_16;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[20] = out_20;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[16] = out_16;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_66{
    66,
    50584,
    50620,
    true,
    block_66_fn
    };



static void block_67_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_0 = out_37;
	uint64_t out_21 = out_37 +1;
	uint64_t out_1 = out_21;


	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[21] = out_21;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_67{
    67,
    50668,
    50680,
    true,
    block_67_fn
    };



static void block_68_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_4 = out_14;
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_14 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_68{
    68,
    51316,
    51320,
    true,
    block_68_fn
    };



static void block_69_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_37 +1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_69{
    69,
    50784,
    50796,
    true,
    block_69_fn
    };



static void block_70_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], 1+d_[2]);


	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+t_0;
	uint64_t out_1 = out_38 -1;
	uint64_t out_26 = out_37 +1+d_[2];
	uint64_t out_19 = out_26 -1;
	uint64_t out_3 = out_19;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[26] = out_26;
	vec_[19] = out_19;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_70{
    70,
    50976,
    50992,
    true,
    block_70_fn
    };



static void block_71_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3, d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(2+d_[5], d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(d_[12], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_2, d_[8]+d_[10]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[12], d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[6]+d_[16]+t_1+t_3, d_[1]);


	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +4+d_[0]);
	uint64_t out_18 = out_29 -1+t_0;
	uint64_t out_3 = MAP_Explorer::max2(out_29 +d_[6]+t_1+t_3, vec_[24] +2+d_[6]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+t_4);
	uint64_t out_19 = MAP_Explorer::max2(out_29 +d_[6]+t_1+t_3, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+d_[6]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_4);
	uint64_t out_37 = MAP_Explorer::max2(out_29 +1+d_[6]+t_1+t_3, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +3+d_[6]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +3+t_4);
	uint64_t out_38 = MAP_Explorer::max2(out_29 +t_5, vec_[4] +3+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+d_[6]+d_[16]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+d_[16]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +4+d_[16]+t_4);
	uint64_t out_24 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[16], vec_[13] );
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);


	vec_[29] = out_29;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[25] = out_25;
}

extern const MAP_Explorer::Block block_71{
    71,
    51008,
    51056,
    true,
    block_71_fn
    };



static void block_72_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_72{
    72,
    52052,
    52056,
    true,
    block_72_fn
    };



static void block_73_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[22] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_73{
    73,
    51080,
    51088,
    true,
    block_73_fn
    };



static void block_76_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_21 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_2 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -2+d_[2];


	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_76{
    76,
    102056,
    102064,
    true,
    block_76_fn
    };



static void block_87_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_4 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1);
	uint64_t out_20 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[4] = out_4;
	vec_[20] = out_20;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_87{
    87,
    17912,
    17920,
    true,
    block_87_fn
    };



static void block_90_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_90{
    90,
    102068,
    102076,
    true,
    block_90_fn
    };



static void block_91_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1);
	x_0 = MAP_Explorer::max2(x_0, vec_[14] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[17] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_3 = x_0 -1+d_[1];
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_21 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_14 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_91{
    91,
    102080,
    102092,
    true,
    block_91_fn
    };



static void block_99_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_27 = out_38 -1;
	uint64_t out_1 = out_27;
	uint64_t out_0 = out_27 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[27] = out_27;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_99{
    99,
    51092,
    51100,
    true,
    block_99_fn
    };



static void block_100_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_100{
    100,
    51104,
    51108,
    true,
    block_100_fn
    };



static void block_101_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +3+d_[2], vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[7], vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_15 = out_18 -2;
	uint64_t out_0 = out_15 +d_[7];
	uint64_t out_3 = out_15 +1+d_[5];


	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_101{
    101,
    51112,
    51136,
    true,
    block_101_fn
    };



static void block_102_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_102{
    102,
    51840,
    51848,
    true,
    block_102_fn
    };



static void block_103_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;
	uint64_t out_3 = out_4 -1+d_[1];


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_103{
    103,
    52244,
    52248,
    true,
    block_103_fn
    };



static void block_104_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[27] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_29 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[29] = out_29;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_104{
    104,
    51864,
    51868,
    true,
    block_104_fn
    };



static void block_105_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[29] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +5+d_[0]);
	uint64_t out_19 = out_27 -1;
	uint64_t out_25 = MAP_Explorer::max2(out_27 +1+d_[4], vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_27 +5+d_[4]+d_[8], vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +5+d_[8]);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_24 = out_25 +2+d_[8];
	uint64_t out_37 = out_25 +3+d_[8];
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[27] = out_27;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_105{
    105,
    51872,
    51916,
    true,
    block_105_fn
    };



static void block_106_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_21 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_14 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_38 -1;


	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_106{
    106,
    102084,
    102092,
    true,
    block_106_fn
    };



static void block_107_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_107{
    107,
    51920,
    51924,
    true,
    block_107_fn
    };



static void block_108_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[7], d_[4]);


	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[27] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +2+d_[2], vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[28] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[23] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_14 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +d_[8]+t_0, vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_15 = out_19 +1;
	uint64_t out_37 = out_19 +1+d_[7];
	uint64_t out_0 = out_15 -2+t_0;
	uint64_t out_3 = out_15 -2+d_[8]+d_[10]+t_0;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_108{
    108,
    51928,
    51960,
    true,
    block_108_fn
    };



static void block_109_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_109{
    109,
    51164,
    51176,
    true,
    block_109_fn
    };



static void block_110_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[1]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[2] +3, vec_[3] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[18] +3);

	uint64_t out_38 = MAP_Explorer::max2(x_0+t_1, vec_[0] +4+d_[0]+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[1] +4+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_38 -1;
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_17;


	vec_[38] = out_38;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_110{
    110,
    51180,
    51196,
    true,
    block_110_fn
    };



static void block_111_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[15] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[18] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_3 = out_28;
	uint64_t out_12 = MAP_Explorer::max2(out_28 , vec_[27] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_28 +1, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +d_[5], vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[13] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_111{
    111,
    51200,
    51220,
    true,
    block_111_fn
    };



static void block_112_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_112{
    112,
    51224,
    51228,
    true,
    block_112_fn
    };



static void block_113_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[10], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(3+t_1, d_[9]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(3, d_[9]);


	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +5);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +4);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +5);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +6+d_[0]);
	uint64_t out_27 = out_29 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_29 +1+d_[4]+t_2, vec_[12] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +3+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_3);
	uint64_t out_13 = MAP_Explorer::max2(out_29 +1+d_[4], vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_29 +1+d_[4]+t_1, vec_[12] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_29 -1+d_[4], vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_29 +3+d_[4]+t_1, vec_[12] +4+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +5+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[13];
	uint64_t out_25 = out_27 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_24 = out_25 -1;


	vec_[29] = out_29;
	vec_[27] = out_27;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[24] = out_24;
}

extern const MAP_Explorer::Block block_113{
    113,
    51232,
    51276,
    true,
    block_113_fn
    };



static void block_115_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_5 +3, vec_[12] +4);
	uint64_t out_14 = out_26 -3;
	uint64_t out_23 = out_26 +2+d_[4];
	uint64_t out_37 = out_26 +1+d_[4];
	uint64_t out_38 = out_26 +1+d_[4]+d_[8];
	uint64_t out_22 = out_37;
	uint64_t out_6 = out_23;
	uint64_t out_3 = out_23;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_14 +2;
	uint64_t out_13 = out_14 +3+d_[4];
	uint64_t out_4 = out_12 +3+d_[4]+d_[8];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[26] = out_26;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_115{
    115,
    51280,
    51312,
    true,
    block_115_fn
    };



static void block_116_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
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

extern const MAP_Explorer::Block block_116{
    116,
    94168,
    94172,
    true,
    block_116_fn
    };



static void block_117_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_19 +1+t_1, vec_[3] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +1+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +1+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] );
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[8]+t_2, vec_[3] +d_[8]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[8]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[8]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[8]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2+t_0, vec_[3] +1+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+t_2, vec_[3] +1+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_117{
    117,
    94176,
    94196,
    true,
    block_117_fn
    };



static void block_118_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_118{
    118,
    94356,
    94364,
    true,
    block_118_fn
    };



static void block_119_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[4], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(4, d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[4]+d_[10], d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[10], d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[7]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[10], d_[7]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[7]+d_[9]+t_0, vec_[3] +d_[7]+d_[9]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[7]+d_[9]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +4+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[7]+d_[9]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_4, vec_[3] +1+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +5+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+t_6);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +3+d_[4], vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3+d_[4]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_2, vec_[3] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+d_[10]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_19 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_119{
    119,
    94996,
    95024,
    true,
    block_119_fn
    };



static void block_120_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_6 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[3];


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_120{
    120,
    101792,
    101804,
    true,
    block_120_fn
    };



static void block_121_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_121{
    121,
    101808,
    101812,
    true,
    block_121_fn
    };



static void block_122_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +4+d_[0]);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_122{
    122,
    101816,
    101836,
    true,
    block_122_fn
    };



static void block_123_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_123{
    123,
    95028,
    95032,
    true,
    block_123_fn
    };



static void block_124_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
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
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_124{
    124,
    95036,
    95048,
    true,
    block_124_fn
    };



static void block_125_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_125{
    125,
    94368,
    94368,
    true,
    block_125_fn
    };



static void block_126_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_4 = out_3 +4+d_[4];
	uint64_t out_37 = out_3 +2+d_[4];
	uint64_t out_38 = out_3 +3+d_[4];
	uint64_t out_19 = out_38;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;


	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_126{
    126,
    94400,
    94420,
    true,
    block_126_fn
    };



static void block_127_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_19 +4+d_[2]+d_[3], vec_[3] +4+d_[3]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +5+d_[3]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +4+d_[3]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_37 = out_22 +d_[7];
	uint64_t out_38 = out_22 +1+d_[7];
	uint64_t out_24 = out_38;
	uint64_t out_23 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_13 -1;
	uint64_t out_4 = out_12 +4+d_[7];
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_127{
    127,
    94200,
    94236,
    true,
    block_127_fn
    };



static void block_128_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_18 = out_38 +1;
	uint64_t out_4 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_18;
	uint64_t out_0 = out_18 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_128{
    128,
    76724,
    76732,
    true,
    block_128_fn
    };



static void block_129_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
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

extern const MAP_Explorer::Block block_129{
    129,
    76564,
    76568,
    true,
    block_129_fn
    };



static void block_130_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3, d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+d_[7], d_[2]);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_17 = out_37;
	uint64_t out_14 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 -1+t_1, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 +d_[7];
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_14 -1+d_[6]+t_0;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_130{
    130,
    76572,
    76592,
    true,
    block_130_fn
    };



static void block_131_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]);
	uint64_t out_3 = out_13;
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_13 -2+d_[3];
	uint64_t out_38 = out_13 -1+d_[3];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +2+d_[3];
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_131{
    131,
    76596,
    76612,
    true,
    block_131_fn
    };



static void block_132_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_132{
    132,
    63808,
    63808,
    true,
    block_132_fn
    };



static void block_133_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[13] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_17 = MAP_Explorer::max2(out_3 , vec_[4] +1);
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_1 = out_18;


	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_133{
    133,
    63816,
    63828,
    true,
    block_133_fn
    };



static void block_134_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[16], d_[11]+d_[13]+d_[15]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[16], d_[13]+d_[15]);
	uint64_t t_10 = MAP_Explorer::max2(2, d_[17]);
	uint64_t t_12 = MAP_Explorer::max2(2+d_[21], 1+d_[17]);
	uint64_t t_15 = MAP_Explorer::max2(2+d_[29], d_[24]+d_[26]+d_[28]);
	uint64_t t_18 = MAP_Explorer::max2(2+d_[37], d_[32]+d_[34]+d_[36]);
	uint64_t t_19 = MAP_Explorer::max2(1+d_[22]+d_[30]+d_[38]+t_12+t_15+t_18, d_[17]);
	uint64_t t_20 = MAP_Explorer::max2(d_[22]+d_[30]+d_[38]+d_[43]+t_12+t_15+t_18, d_[17]);
	uint64_t t_21 = MAP_Explorer::max2(1+d_[22]+d_[30]+d_[38]+d_[43]+t_12+t_15+t_18, 1+d_[17]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+t_3+t_8, vec_[1] +3+d_[1]+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2+d_[1]+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[3] +1+d_[1]+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2+d_[1]+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[23] +2+d_[1]+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[24] +2+d_[9]+t_3+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[25] +2+d_[7]+d_[9]+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[26] +2+d_[9]+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[27] +2+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[28] +2+t_9);
	x_0 = MAP_Explorer::max2(x_0, vec_[29] +2+d_[15]);
	x_0 = MAP_Explorer::max2(x_0, vec_[30] +2+d_[9]+t_4+t_8);
	x_0 = MAP_Explorer::max2(x_0, vec_[31] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]+d_[1]+d_[9]+t_3+t_8);

	uint64_t out_0 = MAP_Explorer::max2(x_0+t_20, vec_[4] +1+d_[30]+d_[38]+d_[43]+t_15+t_18);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +3+d_[21]+d_[22]+d_[30]+d_[38]+d_[43]+t_15+t_18);
	uint64_t out_23 = MAP_Explorer::max2(x_0+t_10, vec_[22] +3);
	uint64_t out_24 = MAP_Explorer::max2(x_0+1+t_19, vec_[4] +3+d_[30]+d_[38]+t_15+t_18);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +5+d_[21]+d_[22]+d_[30]+d_[38]+t_15+t_18);
	uint64_t out_37 = MAP_Explorer::max2(x_0+1+d_[22]+d_[30]+d_[38]+t_12+t_15+t_18, vec_[4] +2+d_[30]+d_[38]+t_15+t_18);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +4+d_[21]+d_[22]+d_[30]+d_[38]+t_15+t_18);
	uint64_t out_38 = MAP_Explorer::max2(x_0+1+t_21, vec_[4] +3+d_[30]+d_[38]+d_[43]+t_15+t_18);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +5+d_[21]+d_[22]+d_[30]+d_[38]+d_[43]+t_15+t_18);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+t_3+t_8, vec_[1] +3+d_[1]+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+d_[1]+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+d_[1]+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+d_[1]+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[22] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[23] +2+d_[1]+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[24] +2+d_[9]+t_3+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[25] +2+d_[7]+d_[9]+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +2+d_[9]+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[27] +2+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[28] +2+t_9);
	out_30 = MAP_Explorer::max2(out_30, vec_[29] +2+d_[15]);
	out_30 = MAP_Explorer::max2(out_30, vec_[30] +2+d_[9]+t_4+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[1]+d_[9]+t_3+t_8);
	uint64_t out_18 = out_23;
	uint64_t out_12 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 -1+d_[40];


	vec_[0] = out_0;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[30] = out_30;
	vec_[18] = out_18;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_134{
    134,
    63056,
    63152,
    true,
    block_134_fn
    };



static void block_138_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_38 -1;
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_22 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_138{
    138,
    64184,
    64188,
    true,
    block_138_fn
    };



static void block_141_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[25] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_21 +d_[2], vec_[4] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	uint64_t out_29 = MAP_Explorer::max2(out_21 +3+d_[4], vec_[4] +4+d_[4]);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +4+d_[4]);
	uint64_t out_27 = out_29 -1;
	uint64_t out_37 = out_29 +1+d_[8];
	uint64_t out_38 = out_29 +3+d_[8];
	uint64_t out_25 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_26 = out_27 -1;
	uint64_t out_22 = out_26 +3;
	uint64_t out_19 = out_22 +1+d_[8];
	uint64_t out_1 = out_19;


	vec_[21] = out_21;
	vec_[3] = out_3;
	vec_[29] = out_29;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[26] = out_26;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_141{
    141,
    63252,
    63288,
    true,
    block_141_fn
    };



static void block_142_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], 2);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +4, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[5], vec_[19] +2+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +4+t_0, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +4+t_0);
	uint64_t out_1 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_4 = out_19 +2;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -3;


	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_142{
    142,
    63292,
    63316,
    true,
    block_142_fn
    };



static void block_143_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[2]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_30 = MAP_Explorer::max2(out_19 +1+d_[2], vec_[4] +2+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[4], vec_[4] +1+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+t_0, vec_[4] +3+t_0);
	uint64_t out_3 = out_30;
	uint64_t out_2 = out_38;
	uint64_t out_28 = out_38 -1;
	uint64_t out_1 = out_28;
	uint64_t out_0 = out_28 -1;


	vec_[19] = out_19;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[28] = out_28;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_143{
    143,
    65140,
    65156,
    true,
    block_143_fn
    };



static void block_144_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_144{
    144,
    65160,
    65160,
    true,
    block_144_fn
    };



static void block_145_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_145{
    145,
    65164,
    65164,
    true,
    block_145_fn
    };



static void block_146_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_146{
    146,
    69704,
    69712,
    true,
    block_146_fn
    };



static void block_148_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_148{
    148,
    77536,
    77540,
    true,
    block_148_fn
    };



static void block_149_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_2 = MAP_Explorer::max2(2+d_[11], d_[6]+d_[8]+d_[10]);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +1, vec_[14] +2);
	uint64_t out_31 = MAP_Explorer::max2(out_18 +3+d_[3]+d_[4]+d_[12]+t_2, vec_[4] +3+d_[12]+t_2);
	out_31 = MAP_Explorer::max2(out_31, vec_[14] +4+d_[3]+d_[4]+d_[12]+t_2);
	out_31 = MAP_Explorer::max2(out_31, vec_[28] +3+d_[4]+d_[12]+t_2);
	uint64_t out_22 = out_31 -1;
	uint64_t out_26 = out_31 +d_[16];
	uint64_t out_37 = out_31 -1+d_[16];
	uint64_t out_38 = out_31 +1+d_[16];
	uint64_t out_21 = out_22;
	uint64_t out_3 = out_22;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_26;
	uint64_t out_0 = out_37;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[31] = out_31;
	vec_[22] = out_22;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[21] = out_21;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_149{
    149,
    69716,
    69764,
    true,
    block_149_fn
    };



static void block_150_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_150{
    150,
    69772,
    69772,
    true,
    block_150_fn
    };



static void block_151_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_9 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_151{
    151,
    63416,
    63420,
    true,
    block_151_fn
    };



static void block_152_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_35 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[6] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2);
	uint64_t out_3 = out_16;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[35] = out_35;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_152{
    152,
    63428,
    63436,
    true,
    block_152_fn
    };



static void block_153_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[27] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
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

extern const MAP_Explorer::Block block_153{
    153,
    63440,
    63444,
    true,
    block_153_fn
    };



static void block_154_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_154{
    154,
    63448,
    63452,
    true,
    block_154_fn
    };



static void block_155_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_155{
    155,
    63504,
    63504,
    true,
    block_155_fn
    };



static void block_156_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +1);
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

extern const MAP_Explorer::Block block_156{
    156,
    63556,
    63560,
    true,
    block_156_fn
    };



static void block_157_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );
	out_0 = MAP_Explorer::max2(out_0, vec_[26] );
	uint64_t out_26 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_157{
    157,
    63564,
    63568,
    true,
    block_157_fn
    };



static void block_158_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
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

extern const MAP_Explorer::Block block_158{
    158,
    63572,
    63576,
    true,
    block_158_fn
    };



static void block_159_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+t_0);


	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_16 +2, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+d_[8]+t_2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_3 = out_19 -1+d_[8]+d_[10]+t_2;
	uint64_t out_18 = out_38 -1;
	uint64_t out_37 = out_19 +t_2;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_159{
    159,
    63580,
    63612,
    true,
    block_159_fn
    };



static void block_160_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_24 = out_37;
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_32 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_160{
    160,
    63616,
    63624,
    true,
    block_160_fn
    };



static void block_161_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[27] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_10 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_161{
    161,
    63636,
    63640,
    true,
    block_161_fn
    };



static void block_162_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[31] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_162{
    162,
    63644,
    63660,
    true,
    block_162_fn
    };



static void block_163_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_163{
    163,
    66580,
    66592,
    true,
    block_163_fn
    };



static void block_200_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_200{
    200,
    75944,
    75944,
    true,
    block_200_fn
    };



static void block_209_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_209{
    209,
    66596,
    66596,
    true,
    block_209_fn
    };



static void block_210_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_38 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_210{
    210,
    63664,
    63672,
    true,
    block_210_fn
    };



static void block_211_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_30 = MAP_Explorer::max2(out_24 +1, vec_[25] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +d_[2], vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_18;


	vec_[24] = out_24;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_211{
    211,
    63688,
    63700,
    true,
    block_211_fn
    };



static void block_212_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[30] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_212{
    212,
    63180,
    63184,
    true,
    block_212_fn
    };



static void block_213_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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

extern const MAP_Explorer::Block block_213{
    213,
    63704,
    63708,
    true,
    block_213_fn
    };



static void block_214_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_214{
    214,
    63712,
    63712,
    true,
    block_214_fn
    };



static void block_215_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_215{
    215,
    70788,
    70800,
    true,
    block_215_fn
    };



static void block_216_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
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

extern const MAP_Explorer::Block block_216{
    216,
    76836,
    76840,
    true,
    block_216_fn
    };



static void block_217_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_217{
    217,
    76844,
    76848,
    true,
    block_217_fn
    };



static void block_220_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_220{
    220,
    76864,
    76868,
    true,
    block_220_fn
    };



static void block_221_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_221{
    221,
    76888,
    76892,
    true,
    block_221_fn
    };



static void block_222_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_222{
    222,
    76992,
    76996,
    true,
    block_222_fn
    };



static void block_224_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_224{
    224,
    77000,
    77004,
    true,
    block_224_fn
    };



static void block_225_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_225{
    225,
    77016,
    77016,
    true,
    block_225_fn
    };



static void block_226_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_226{
    226,
    76116,
    76124,
    true,
    block_226_fn
    };



static void block_227_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_27 = out_38 -1;
	uint64_t out_1 = out_27;
	uint64_t out_0 = out_27 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[27] = out_27;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_227{
    227,
    75952,
    75960,
    true,
    block_227_fn
    };



static void block_228_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_228{
    228,
    75840,
    75848,
    true,
    block_228_fn
    };



static void block_229_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_1 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	x_1 = MAP_Explorer::max2(x_1, vec_[2] +3);
	x_1 = MAP_Explorer::max2(x_1, vec_[3] +1);
	x_1 = MAP_Explorer::max2(x_1, vec_[6] +3);
	x_1 = MAP_Explorer::max2(x_1, vec_[12] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[36] +3+d_[0]+d_[1]);
	uint64_t x_0 = MAP_Explorer::max2(x_1 +d_[2], vec_[5] +2);

	uint64_t out_3 = x_0 -1+d_[4];
	uint64_t out_12 = MAP_Explorer::max2(x_1+d_[2], vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_0 = out_12 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_12 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_229{
    229,
    74972,
    74988,
    true,
    block_229_fn
    };



static void block_230_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
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

extern const MAP_Explorer::Block block_230{
    230,
    74992,
    74996,
    true,
    block_230_fn
    };



static void block_231_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3);
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

extern const MAP_Explorer::Block block_231{
    231,
    75000,
    75004,
    true,
    block_231_fn
    };



static void block_232_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_14 +2, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_14 +2+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[3]);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 +1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_3 = out_5;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_232{
    232,
    75028,
    75044,
    true,
    block_232_fn
    };



static void block_237_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_19 +1;
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2, vec_[13] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +1, vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1+d_[4], vec_[13] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_237{
    237,
    74768,
    74788,
    true,
    block_237_fn
    };



static void block_238_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[10], d_[5]+d_[7]+d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[10], d_[7]+d_[9]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_18 = MAP_Explorer::max2(x_0+1+d_[2]+d_[3]+t_3, vec_[3] +3+d_[3]+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+d_[3]+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[3]+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_3);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_4);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[9]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_18 +1;
	uint64_t out_6 = MAP_Explorer::max2(out_19 , vec_[6] +1);
	uint64_t out_13 = MAP_Explorer::max2(out_18 +2, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[15], vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_22 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_12 -2+d_[11];
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_0 = out_23 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_238{
    238,
    46616,
    46664,
    true,
    block_238_fn
    };



static void block_239_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[5]);


	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[19] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +6+d_[10]+t_0, vec_[3] +5+d_[5]+d_[10]);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +5+d_[10]);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +6+d_[10]+t_0);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +3+d_[10]);
	uint64_t out_22 = out_23 +1;
	uint64_t out_12 = MAP_Explorer::max2(out_19 +3+t_0, vec_[3] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_0);
	uint64_t out_14 = MAP_Explorer::max2(out_23 +1, vec_[13] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +5+t_0, vec_[3] +4+d_[5]);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +4);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +5+t_0);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +2);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +4+t_0, vec_[3] +3+d_[5]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +4+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_5 = out_12 +1;
	uint64_t out_13 = out_14 +2;
	uint64_t out_37 = out_14 +d_[14];
	uint64_t out_38 = out_14 +1+d_[14];
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_13 +d_[14];
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_239{
    239,
    46668,
    46724,
    true,
    block_239_fn
    };



static void block_240_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(5+d_[6], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[6]+d_[11], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[10]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[10]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = MAP_Explorer::max2(out_18 +2+t_2, vec_[3] +1+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[10]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +6+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +6+d_[6]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +5+t_3);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +3, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +2, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +5+d_[6], vec_[3] +4+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +5+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +4+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[11], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+t_1, vec_[3] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +5+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +5+d_[6]+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+d_[11]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[12];
	uint64_t out_16 = out_19 -2;
	uint64_t out_14 = out_16 +1;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_240{
    240,
    47964,
    48004,
    true,
    block_240_fn
    };



static void block_241_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_241{
    241,
    17200,
    17208,
    true,
    block_241_fn
    };



static void block_242_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_242{
    242,
    17212,
    17220,
    true,
    block_242_fn
    };



static void block_244_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_244{
    244,
    17240,
    17244,
    true,
    block_244_fn
    };



static void block_245_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_245{
    245,
    48008,
    48012,
    true,
    block_245_fn
    };



static void block_246_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_5 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_246{
    246,
    48016,
    48028,
    true,
    block_246_fn
    };



static void block_247_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
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

extern const MAP_Explorer::Block block_247{
    247,
    74792,
    74796,
    true,
    block_247_fn
    };



static void block_248_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_22 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_248{
    248,
    74760,
    74764,
    true,
    block_248_fn
    };



static void block_251_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_251{
    251,
    75852,
    75852,
    true,
    block_251_fn
    };



static void block_252_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_252{
    252,
    70804,
    70804,
    true,
    block_252_fn
    };



static void block_253_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +5+d_[0]);
	uint64_t out_23 = out_24 -1;
	uint64_t out_25 = out_24 +1+d_[3];
	uint64_t out_26 = out_24 +2+d_[3];
	uint64_t out_27 = out_24 +3+d_[3];
	uint64_t out_28 = out_24 +3+d_[3]+d_[7];
	uint64_t out_30 = out_24 +5+d_[3]+d_[7];
	uint64_t out_31 = out_24 +6+d_[3]+d_[7];
	uint64_t out_37 = out_24 +4+d_[3]+d_[7];
	uint64_t out_38 = MAP_Explorer::max2(out_24 +5+d_[3]+d_[7]+d_[11], vec_[4] +1);
	uint64_t out_29 = out_37;
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_23 +d_[3];
	uint64_t out_0 = out_19 +4+d_[7]+d_[11];


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[29] = out_29;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_253{
    253,
    63716,
    63760,
    true,
    block_253_fn
    };



static void block_254_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_37 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +4);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_13 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_22 = out_37 +1;
	uint64_t out_38 = out_37 +d_[6];
	uint64_t out_6 = out_22;
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_22 -2;
	uint64_t out_4 = out_14 +2+d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[5] = out_5;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_254{
    254,
    63768,
    63792,
    true,
    block_254_fn
    };



static void block_255_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[3] );
	uint64_t out_6 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_0, vec_[3] +2);
	uint64_t out_5 = out_6;
	uint64_t out_3 = out_6;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_255{
    255,
    46504,
    46512,
    true,
    block_255_fn
    };



static void block_256_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_256{
    256,
    44128,
    44128,
    true,
    block_256_fn
    };



static void block_257_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_257{
    257,
    16044,
    16044,
    true,
    block_257_fn
    };



static void block_258_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_258{
    258,
    44132,
    44136,
    true,
    block_258_fn
    };



static void block_259_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_259{
    259,
    16048,
    16048,
    true,
    block_259_fn
    };



static void block_260_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_2 = MAP_Explorer::max2(2+d_[20], d_[15]+d_[17]+d_[19]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[28], d_[23]+d_[25]);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[28], d_[23]+d_[25]+d_[27]);

	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +5+d_[0]);

	uint64_t out_21 = MAP_Explorer::max2(x_0+1+d_[4], vec_[3] +3);
	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +4);
	out_32 = MAP_Explorer::max2(out_32, vec_[3] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +5+d_[0]);
	uint64_t out_10 = out_32 +1;
	uint64_t out_20 = out_21 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_21 +5+d_[8]+d_[12]+d_[13]+d_[21]+t_2+t_5, vec_[5] +1+d_[13]+d_[21]+t_2+t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +2+d_[13]+d_[21]+t_2+t_5);
	uint64_t out_6 = MAP_Explorer::max2(out_21 +5+d_[8], vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_21 +6+d_[8]+d_[12]+d_[13]+d_[21]+t_2+t_4, vec_[5] +2+d_[13]+d_[21]+t_2+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[13]+d_[21]+t_2+t_4);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +6+d_[8]+d_[12]+d_[13]+d_[21]+d_[29]+t_2+t_5, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[13]+d_[21]+d_[29]+t_2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[13]+d_[21]+d_[29]+t_2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +d_[29]+d_[31];
	uint64_t out_16 = out_20 +2;
	uint64_t out_19 = out_20 +4+d_[8];
	uint64_t out_15 = out_16 -1;
	uint64_t out_18 = out_19 -1;
	uint64_t out_17 = out_18 -1;


	vec_[21] = out_21;
	vec_[32] = out_32;
	vec_[10] = out_10;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_260{
    260,
    7472,
    7560,
    true,
    block_260_fn
    };



static void block_261_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_261{
    261,
    7716,
    7724,
    true,
    block_261_fn
    };



static void block_262_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_262{
    262,
    44140,
    44140,
    true,
    block_262_fn
    };



static void block_263_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_263{
    263,
    16052,
    16052,
    true,
    block_263_fn
    };



static void block_264_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[14], d_[13]);
	uint64_t t_4 = MAP_Explorer::max2(2+d_[22], d_[17]+d_[19]+d_[21]);
	uint64_t t_5 = MAP_Explorer::max2(1+d_[22], d_[19]+d_[21]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[30], d_[25]+d_[27]+d_[29]);
	uint64_t t_11 = MAP_Explorer::max2(2+d_[38], d_[33]+d_[35]+d_[37]);
	uint64_t t_12 = MAP_Explorer::max2(d_[45], d_[41]);


	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +5);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_20 = out_21 +1;
	uint64_t out_3 = MAP_Explorer::max2(out_21 +6+d_[5]+d_[9]+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_0+t_4+t_8+t_11, vec_[5] +1+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_4+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_0+t_4+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_5+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[21]+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[31]+d_[39]+d_[41]+d_[43]+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[13]+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_4+t_8+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+d_[43]+t_4+t_8+t_11);
	uint64_t out_6 = MAP_Explorer::max2(out_21 +5+d_[5]+d_[9], vec_[6] +1);
	uint64_t out_25 = MAP_Explorer::max2(out_21 +7+d_[5]+d_[9]+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+t_0+t_4+t_8+t_11, vec_[4] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+d_[23]+d_[31]+d_[39]+d_[41]+t_4+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+t_0+t_4+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+d_[23]+d_[31]+d_[39]+d_[41]+t_5+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+d_[21]+d_[23]+d_[31]+d_[39]+d_[41]+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+d_[23]+d_[31]+d_[39]+d_[41]+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+d_[31]+d_[39]+d_[41]+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+d_[13]+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+t_4+t_8+t_11);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+d_[15]+d_[23]+d_[31]+d_[39]+d_[41]+t_4+t_8+t_11);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +9+d_[5]+d_[9]+d_[15]+d_[23]+d_[31]+d_[39]+t_0+t_4+t_8+t_11+t_12, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+d_[23]+d_[31]+d_[39]+t_4+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+d_[15]+d_[23]+d_[31]+d_[39]+t_0+t_4+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4+d_[23]+d_[31]+d_[39]+t_5+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+d_[21]+d_[23]+d_[31]+d_[39]+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +4+d_[23]+d_[31]+d_[39]+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4+d_[31]+d_[39]+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+d_[13]+d_[15]+d_[23]+d_[31]+d_[39]+t_4+t_8+t_11+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+d_[15]+d_[23]+d_[31]+d_[39]+t_4+t_8+t_11+t_12);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_10 = out_20 -2;
	uint64_t out_17 = out_20 +3+d_[5];
	uint64_t out_19 = out_20 +4+d_[5]+d_[9];
	uint64_t out_37 = out_38 -1;
	uint64_t out_24 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_16 = out_17 -1;
	uint64_t out_18 = out_19 -1;
	uint64_t out_2 = out_5;
	uint64_t out_15 = out_16 -1;


	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[10] = out_10;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_264{
    264,
    7228,
    7352,
    true,
    block_264_fn
    };



static void block_556_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_24 = MAP_Explorer::max2(x_0+3+d_[2], vec_[3] +6);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_23 = out_24 -1;
	uint64_t out_25 = out_24 +d_[6];
	uint64_t out_38 = MAP_Explorer::max2(out_24 +1+d_[6], vec_[4] +2);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_25;
	uint64_t out_1 = out_38;
	uint64_t out_22 = out_23 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_13 = out_22 -1;
	uint64_t out_2 = out_4;


	vec_[24] = out_24;
	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_556{
    556,
    7432,
    7468,
    true,
    block_556_fn
    };



static void block_557_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_557{
    557,
    44144,
    44152,
    true,
    block_557_fn
    };



static void block_558_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(5+d_[8]+d_[12], d_[7]);
	uint64_t t_1 = MAP_Explorer::max2(6+d_[12], d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(4+d_[8]+d_[12]+d_[16], d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(5+d_[12]+d_[16], d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(6+d_[8]+d_[12]+d_[16], 2+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(7+d_[12]+d_[16], 2+d_[7]);
	uint64_t t_6 = MAP_Explorer::max2(6+d_[8]+d_[12]+d_[16]+d_[19], 2+d_[7]+d_[19]);
	uint64_t t_7 = MAP_Explorer::max2(7+d_[12]+d_[16]+d_[19], 2+d_[7]+d_[19]);
	uint64_t t_8 = MAP_Explorer::max2(d_[22]+t_4, t_6);
	uint64_t t_9 = MAP_Explorer::max2(d_[22]+t_5, t_7);
	uint64_t t_10 = MAP_Explorer::max2(1+t_8, d_[21]+t_6);
	uint64_t t_11 = MAP_Explorer::max2(1+t_9, d_[21]+t_7);
	uint64_t t_12 = MAP_Explorer::max2(d_[23]+t_10, 3+t_2);
	uint64_t t_13 = MAP_Explorer::max2(d_[23]+t_11, 3+t_3);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +7+d_[0]+d_[3]+d_[8], vec_[1] +7+d_[3]+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +6+d_[3]+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[5] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +5+d_[8]);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +7+d_[0]+d_[3]+d_[8]);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +11+d_[0]+d_[3]+t_2, vec_[1] +11+d_[3]+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +10+d_[3]+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +4+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[5] +5+t_3);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +9+t_2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +11+d_[0]+d_[3]+t_2);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +8+d_[0]+d_[3]+t_0, vec_[1] +8+d_[3]+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +7+d_[3]+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +1+t_1);
	out_20 = MAP_Explorer::max2(out_20, vec_[5] +2+t_1);
	out_20 = MAP_Explorer::max2(out_20, vec_[6] +6+t_0);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +8+d_[0]+d_[3]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +10+d_[0]+d_[3]+t_12, vec_[1] +10+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +9+d_[3]+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +4+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +8+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +10+d_[0]+d_[3]+t_12);
	uint64_t out_18 = out_37;
	uint64_t out_14 = out_20 +1;
	uint64_t out_15 = out_16 -1;
	uint64_t out_17 = out_6 +4+d_[12];
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[28];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 -1+d_[28];
	uint64_t out_3 = out_19 -2+d_[25];
	uint64_t out_0 = out_1 -1;


	vec_[6] = out_6;
	vec_[16] = out_16;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_558{
    558,
    15892,
    15984,
    true,
    block_558_fn
    };



static void block_560_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_16 = out_19 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_19 +1, vec_[6] +1);
	uint64_t out_5 = out_15 +2+d_[7];
	uint64_t out_37 = out_15 +d_[7];
	uint64_t out_38 = out_15 +1+d_[7];
	uint64_t out_14 = out_38;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;


	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_560{
    560,
    15988,
    16020,
    true,
    block_560_fn
    };



static void block_561_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_561{
    561,
    47320,
    47324,
    true,
    block_561_fn
    };



static void block_562_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_562{
    562,
    47328,
    47336,
    true,
    block_562_fn
    };



static void block_563_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_563{
    563,
    47340,
    47344,
    true,
    block_563_fn
    };



static void block_566_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_566{
    566,
    47384,
    47388,
    true,
    block_566_fn
    };



static void block_567_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_567{
    567,
    47436,
    47440,
    true,
    block_567_fn
    };



static void block_568_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +4+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +4+d_[0]);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_568{
    568,
    16024,
    16040,
    true,
    block_568_fn
    };



static void block_569_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_569{
    569,
    44156,
    44168,
    true,
    block_569_fn
    };



static void block_570_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_570{
    570,
    464,
    472,
    true,
    block_570_fn
    };



static void block_571_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[3]+d_[5], vec_[3] +d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+d_[2]+d_[3], vec_[3] +1+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_571{
    571,
    45224,
    45244,
    true,
    block_571_fn
    };



static void block_572_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[3]+d_[8], d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[2]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[6]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[6]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[8], d_[6]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_6 +1+t_4, vec_[3] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[5] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +1+t_6);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +1+t_5);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +2+d_[6]+t_0, vec_[3] +1+d_[6]+t_1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[6]);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+d_[6]+t_1);
	uint64_t out_24 = MAP_Explorer::max2(out_6 +2+d_[3], vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_2, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[8]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+t_3);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_4, vec_[3] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +1+d_[9];


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

extern const MAP_Explorer::Block block_572{
    572,
    48936,
    48964,
    true,
    block_572_fn
    };



static void block_573_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +5+d_[0]);
	uint64_t out_3 = out_24;
	uint64_t out_22 = out_24 -1;
	uint64_t out_37 = out_24 -2+d_[3];
	uint64_t out_38 = out_24 -1+d_[3];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_22 -1;
	uint64_t out_4 = out_5 +2+d_[3];
	uint64_t out_2 = out_4;


	vec_[24] = out_24;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_573{
    573,
    49140,
    49156,
    true,
    block_573_fn
    };



static void block_574_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
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

extern const MAP_Explorer::Block block_574{
    574,
    45248,
    45256,
    true,
    block_574_fn
    };



static void block_575_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_575{
    575,
    45260,
    45260,
    true,
    block_575_fn
    };



static void block_576_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 +2;
	uint64_t out_37 = out_16 +2+d_[4];
	uint64_t out_38 = out_16 +3+d_[4];
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_15 +2+d_[4];
	uint64_t out_2 = out_4;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_576{
    576,
    45280,
    45304,
    true,
    block_576_fn
    };



static void block_577_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[7], d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[7], d_[4]+d_[6]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[15], d_[10]+d_[12]+d_[14]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[15], d_[12]+d_[14]);
	uint64_t t_10 = MAP_Explorer::max2(5+d_[21]+d_[25], d_[18]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_6 +2+d_[8]+d_[16]+t_3+t_8, vec_[3] +1+d_[8]+d_[16]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+d_[14]+d_[16]);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+d_[16]);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +2+d_[8]+d_[16]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+d_[8]+d_[16]+t_4+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+d_[6]+d_[8]+d_[16]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[8]+d_[16]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[16]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+d_[16]+t_9);
	uint64_t out_27 = MAP_Explorer::max2(out_26 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +4+d_[8]+d_[16]+t_3+t_8+t_10, vec_[3] +3+d_[8]+d_[16]+t_3+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +6+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+d_[14]+d_[16]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4+d_[16]+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +8+d_[21]+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +8+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +7+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +4+d_[8]+d_[16]+t_3+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4+d_[8]+d_[16]+t_4+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+d_[6]+d_[8]+d_[16]+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+d_[8]+d_[16]+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +4+d_[16]+t_8+t_10);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +4+d_[16]+t_9+t_10);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_24 = MAP_Explorer::max2(out_26 +2+d_[21], vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[15] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[16] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_26 +1+d_[21], vec_[15] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[16] +1);
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_23 = out_24 +1;
	uint64_t out_12 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_13;
	uint64_t out_22 = out_23 +1;


	vec_[6] = out_6;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_577{
    577,
    46192,
    46268,
    true,
    block_577_fn
    };



static void block_594_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_6 = out_37;
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_594{
    594,
    17336,
    17344,
    true,
    block_594_fn
    };



static void block_595_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
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

extern const MAP_Explorer::Block block_595{
    595,
    48064,
    48072,
    true,
    block_595_fn
    };



static void block_596_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_5 , vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[4], vec_[14] +3);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[3], vec_[14] +1+d_[3]);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_596{
    596,
    17348,
    17368,
    true,
    block_596_fn
    };



static void block_598_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
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

extern const MAP_Explorer::Block block_598{
    598,
    47500,
    47508,
    true,
    block_598_fn
    };



static void block_601_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+1+d_[2], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_22 = MAP_Explorer::max2(out_3 , vec_[4] +1);
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_1 = out_19;


	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_601{
    601,
    74328,
    74340,
    true,
    block_601_fn
    };



static void block_610_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_610{
    610,
    74756,
    74756,
    true,
    block_610_fn
    };



static void block_613_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


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

extern const MAP_Explorer::Block block_613{
    613,
    74344,
    74352,
    true,
    block_613_fn
    };



static void block_614_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_614{
    614,
    49596,
    49596,
    true,
    block_614_fn
    };



static void block_615_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(3+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[6], d_[4]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +3+t_0, vec_[3] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[6]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[8];


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_615{
    615,
    49600,
    49624,
    true,
    block_615_fn
    };



static void block_616_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_18 = out_19 -3;
	uint64_t out_20 = out_19 +3+d_[5];
	uint64_t out_37 = out_19 +2+d_[5];
	uint64_t out_38 = out_19 +3+d_[5]+d_[9];
	uint64_t out_17 = out_20;
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_38;
	uint64_t out_14 = out_18 +2;
	uint64_t out_16 = out_18 +3+d_[5];
	uint64_t out_1 = out_14 +3+d_[5]+d_[9];
	uint64_t out_0 = out_1 -1;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_616{
    616,
    49628,
    49664,
    true,
    block_616_fn
    };



static void block_617_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_617{
    617,
    50084,
    50092,
    true,
    block_617_fn
    };



static void block_618_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(t_1, 1+t_0);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = out_37 -1+d_[7];
	uint64_t out_1 = out_37 -1+t_2;
	uint64_t out_19 = out_37 +t_0;
	uint64_t out_38 = out_37 +t_2;
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_618{
    618,
    50124,
    50144,
    true,
    block_618_fn
    };



static void block_619_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_38 = MAP_Explorer::max2(x_0+2+d_[2], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 +1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_37 -1;
	uint64_t out_4 = out_14 +3;
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
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_619{
    619,
    49816,
    49836,
    true,
    block_619_fn
    };



static void block_620_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_620{
    620,
    74356,
    74356,
    true,
    block_620_fn
    };



static void block_621_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);


	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[25] );
	uint64_t out_25 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
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

extern const MAP_Explorer::Block block_621{
    621,
    46316,
    46320,
    true,
    block_621_fn
    };



static void block_622_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_13 -1;
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +1+d_[3];
	uint64_t out_25 = out_13 +2+d_[3];
	uint64_t out_26 = out_13 +3+d_[3];
	uint64_t out_27 = out_13 +3+d_[3]+d_[7];
	uint64_t out_37 = MAP_Explorer::max2(out_13 +4+d_[3]+d_[7], vec_[24] +2);
	uint64_t out_5 = out_12 -1;
	uint64_t out_24 = out_37 +1;
	uint64_t out_38 = out_37 +d_[11];
	uint64_t out_6 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_24 -2;
	uint64_t out_4 = out_14 +2+d_[11];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[24] = out_24;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_622{
    622,
    46324,
    46368,
    true,
    block_622_fn
    };



static void block_623_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_623{
    623,
    45264,
    45268,
    true,
    block_623_fn
    };



static void block_624_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_624{
    624,
    101736,
    101740,
    true,
    block_624_fn
    };



static void block_625_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_625{
    625,
    17924,
    17928,
    true,
    block_625_fn
    };



static void block_626_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_626{
    626,
    17932,
    17936,
    true,
    block_626_fn
    };



static void block_627_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+d_[3], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_37 = out_15 +1+d_[3];
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_14 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[5];


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_627{
    627,
    17284,
    17304,
    true,
    block_627_fn
    };



static void block_628_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+t_0);
	uint64_t t_6 = MAP_Explorer::max2(2+d_[15], d_[10]+d_[12]+d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(1+d_[15], d_[12]+d_[14]);


	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = MAP_Explorer::max2(out_10 +2, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +d_[8]+t_2+t_6, vec_[5] +2+d_[6]+d_[8]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2+d_[8]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +2+d_[14]);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +d_[8]+d_[16]+t_2+t_6, vec_[5] +2+d_[6]+d_[8]+d_[16]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[8]+d_[16]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[16]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+d_[16]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+d_[14]+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +2+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +2);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = out_38 +d_[18];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[20];


	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_628{
    628,
    17068,
    17116,
    true,
    block_628_fn
    };



static void block_629_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(5+d_[7]+d_[11], d_[4]);

	uint64_t x_1 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	x_1 = MAP_Explorer::max2(x_1, vec_[2] +3+d_[2]);
	x_1 = MAP_Explorer::max2(x_1, vec_[3] +1+d_[2]);
	x_1 = MAP_Explorer::max2(x_1, vec_[6] +3+d_[2]);
	x_1 = MAP_Explorer::max2(x_1, vec_[13] +2+d_[2]);
	x_1 = MAP_Explorer::max2(x_1, vec_[22] +2);
	x_1 = MAP_Explorer::max2(x_1, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t x_0 = MAP_Explorer::max2(x_1 +t_0, vec_[4] +3+d_[11]);
	x_0 = MAP_Explorer::max2(x_0, vec_[12] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[14] +6+d_[11]);
	x_0 = MAP_Explorer::max2(x_0, vec_[15] +6+d_[7]+d_[11]);

	uint64_t out_5 = MAP_Explorer::max2(x_0+d_[12], vec_[5] +2);
	uint64_t out_38 = MAP_Explorer::max2(x_1+t_0, vec_[4] +3+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +6+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +6+d_[7]+d_[11]);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[22] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[14];
	uint64_t out_16 = MAP_Explorer::max2(out_17 +1, vec_[14] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +2+d_[7], vec_[14] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +2+d_[11], vec_[4] +2+d_[11]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	uint64_t out_13 = out_22 -1;
	uint64_t out_15 = MAP_Explorer::max2(out_22 +2, vec_[4] +2);
	uint64_t out_14 = out_15 -1;


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_629{
    629,
    16940,
    16984,
    true,
    block_629_fn
    };



static void block_632_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[4]+d_[6]);


	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = MAP_Explorer::max2(out_15 +3+t_1, vec_[3] +1+d_[4]+d_[6]);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +3+t_1);
	uint64_t out_14 = MAP_Explorer::max2(out_15 +1, vec_[12] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +2+d_[7], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[7]);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +3+t_0, vec_[3] +1+d_[4]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_0);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[8];


	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_632{
    632,
    47004,
    47028,
    true,
    block_632_fn
    };



static void block_691_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_691{
    691,
    47032,
    47032,
    true,
    block_691_fn
    };



static void block_692_fn(uint64_t* vec_, uint8_t* d_){


    

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
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_5 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_692{
    692,
    47036,
    47052,
    true,
    block_692_fn
    };



static void block_693_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_15 +1, vec_[22] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[5], vec_[6] +1);
	uint64_t out_16 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_693{
    693,
    16988,
    17008,
    true,
    block_693_fn
    };



static void block_694_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[10], d_[5]+d_[7]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +2+d_[3], vec_[4] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +2, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +4+d_[3], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	uint64_t out_0 = out_37 -1+t_0;
	uint64_t out_3 = out_37 -1+d_[5]+d_[7]+d_[9];
	uint64_t out_5 = out_37 +t_1;
	uint64_t out_38 = out_37 +t_0;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_694{
    694,
    46932,
    46960,
    true,
    block_694_fn
    };



static void block_697_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_697{
    697,
    46964,
    46964,
    true,
    block_697_fn
    };



static void block_698_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);


	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_19 +3+d_[2], vec_[4] +3+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +4+t_0, vec_[4] +4+t_0);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
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

extern const MAP_Explorer::Block block_698{
    698,
    46976,
    47000,
    true,
    block_698_fn
    };



static void block_699_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_699{
    699,
    17012,
    17012,
    true,
    block_699_fn
    };



static void block_700_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t x_0 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	x_0 = MAP_Explorer::max2(x_0, vec_[2] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[6] +2);
	x_0 = MAP_Explorer::max2(x_0, vec_[36] +3+d_[0]);

	uint64_t out_17 = MAP_Explorer::max2(x_0+d_[2], vec_[12] +2);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +2, vec_[3] +1);
	uint64_t out_19 = out_37;
	uint64_t out_18 = out_37;
	uint64_t out_1 = out_37 +d_[7];
	uint64_t out_3 = out_37 +1+d_[6];
	uint64_t out_38 = out_37 +1+d_[7];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_700{
    700,
    17016,
    17040,
    true,
    block_700_fn
    };



static void block_702_fn(uint64_t* vec_, uint8_t* d_){


    

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_13 -1+d_[3];
	uint64_t out_38 = out_13 +d_[3];
	uint64_t out_22 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +3+d_[3];
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_702{
    702,
    17044,
    17064,
    true,
    block_702_fn
    };



static void block_703_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_703{
    703,
    17120,
    17128,
    true,
    block_703_fn
    };



static void block_704_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_3 = MAP_Explorer::max2(2+d_[8], d_[3]+d_[5]+d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[8], d_[5]+d_[7]);
	uint64_t t_8 = MAP_Explorer::max2(2+d_[16], d_[11]+d_[13]+d_[15]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[16], d_[13]+d_[15]);
	uint64_t t_13 = MAP_Explorer::max2(2+d_[24], d_[19]+d_[21]+d_[23]);
	uint64_t t_14 = MAP_Explorer::max2(1+d_[24], d_[21]+d_[23]);
	uint64_t t_18 = MAP_Explorer::max2(2+d_[32], d_[27]+d_[29]+d_[31]);
	uint64_t t_19 = MAP_Explorer::max2(1+d_[32], d_[29]+d_[31]);
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

extern const MAP_Explorer::Block block_704{
    704,
    17308,
    596,
    true,
    block_704_fn
    };



static void block_705_fn(uint64_t* vec_, uint8_t* d_){


    

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

extern const MAP_Explorer::Block block_705{
    705,
    632,
    632,
    true,
    block_705_fn
    };


} // namespace CV32E40P_DSE