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



static void block_1229_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[6], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(5+d_[10]+d_[14]+d_[18]+t_0, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[24], d_[21]);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1]+t_1, vec_[1] +6+d_[1]+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +6+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +5+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +11+d_[6]+d_[10]+d_[14]+d_[18]);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +6+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[25] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[27] +4+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +6+d_[0]+d_[1]+t_1);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[4] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +3);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+t_0, vec_[1] +5+d_[1]+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +5+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +4+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[4] +5+d_[6]);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +5+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[27] +3+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +5+d_[0]+d_[1]+t_0);
	uint64_t out_12 = out_28;
	uint64_t out_13 = out_28 -1;
	uint64_t out_21 = out_28 +3+d_[10];
	uint64_t out_26 = out_27 -1;
	uint64_t out_31 = out_27 +d_[6];
	uint64_t out_14 = MAP_Explorer::max2(out_28 +6+d_[10]+d_[14], vec_[25] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +1, vec_[24] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +2, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[24], vec_[23] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_20 = out_21 +1;
	uint64_t out_3 = MAP_Explorer::max2(out_37 +d_[21]+d_[23], vec_[23] +1+d_[23]);
	uint64_t out_5 = MAP_Explorer::max2(out_37 +1+t_2, vec_[23] +2);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_19 = out_20 +d_[14];
	uint64_t out_18 = out_19 -1;
	uint64_t out_16 = out_18 +2;


	vec_[17] = out_17;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[21] = out_21;
	vec_[26] = out_26;
	vec_[31] = out_31;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[16] = out_16;
}

extern const MAP_Explorer::Block block_1229{
    1229,
    1356,
    1440,
    true,
    block_1229_fn
    };



static void block_1231_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[34] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +2+d_[3], vec_[15] +2+d_[3]);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+d_[3]);
	uint64_t out_19 = MAP_Explorer::max2(out_21 +5+d_[3], vec_[10] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +5+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +5+d_[3]);
	uint64_t out_34 = MAP_Explorer::max2(out_21 +6+d_[3]+d_[7], vec_[10] +3);
	out_34 = MAP_Explorer::max2(out_34, vec_[15] +6+d_[3]+d_[7]);
	out_34 = MAP_Explorer::max2(out_34, vec_[18] +6+d_[7]);
	out_34 = MAP_Explorer::max2(out_34, vec_[19] +6+d_[3]+d_[7]);
	out_34 = MAP_Explorer::max2(out_34, vec_[32] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_34 +4+d_[11], vec_[33] +4);
	uint64_t out_33 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_32 = out_34 +1;
	uint64_t out_38 = out_37 +1+d_[15];
	uint64_t out_10 = MAP_Explorer::max2(out_34 +2, vec_[33] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[15];
	uint64_t out_0 = out_1 -1;


	vec_[21] = out_21;
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

extern const MAP_Explorer::Block block_1231{
    1231,
    16228,
    16288,
    true,
    block_1231_fn
    };



static void block_1232_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[21] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +5+d_[5], vec_[3] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+d_[5]);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +4);
	uint64_t out_3 = out_16;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_21 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_37 +1;
	uint64_t out_1 = out_17;


	vec_[19] = out_19;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1232{
    1232,
    37820,
    37852,
    true,
    block_1232_fn
    };



static void block_1233_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1233{
    1233,
    27580,
    27584,
    true,
    block_1233_fn
    };



static void block_1234_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1234{
    1234,
    27588,
    27588,
    true,
    block_1234_fn
    };



static void block_1235_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	uint64_t out_15 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_1235{
    1235,
    27592,
    27596,
    true,
    block_1235_fn
    };



static void block_1236_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1236{
    1236,
    27600,
    27600,
    true,
    block_1236_fn
    };



static void block_1237_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1237{
    1237,
    27604,
    27604,
    true,
    block_1237_fn
    };



static void block_1249_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_26 -1;
	uint64_t out_0 = out_3;


	vec_[37] = out_37;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1249{
    1249,
    1636,
    1644,
    true,
    block_1249_fn
    };



static void block_186_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_186{
    186,
    92392,
    92392,
    true,
    block_186_fn
    };



static void block_188_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_188{
    188,
    92436,
    92440,
    true,
    block_188_fn
    };



static void block_206_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[5], vec_[17] +1);
	uint64_t out_15 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_0 = out_19 +d_[5];
	uint64_t out_3 = out_19 +2+d_[4];


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_206{
    206,
    92464,
    92480,
    true,
    block_206_fn
    };



static void block_1250_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1250{
    1250,
    892,
    904,
    true,
    block_1250_fn
    };



static void block_204_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
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

extern const MAP_Explorer::Block block_204{
    204,
    92444,
    92452,
    true,
    block_204_fn
    };



static void block_176_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_3 +2, vec_[15] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_16 +2+d_[4], vec_[20] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = out_16 +1+d_[4];


	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_176{
    176,
    91952,
    91976,
    true,
    block_176_fn
    };



static void block_177_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[10] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_177{
    177,
    91940,
    91948,
    true,
    block_177_fn
    };



static void block_187_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_187{
    187,
    92396,
    92400,
    true,
    block_187_fn
    };



static void block_1375_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_17 +2+d_[4];


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1375{
    1375,
    88924,
    88940,
    true,
    block_1375_fn
    };



static void block_1376_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1376{
    1376,
    88944,
    88948,
    true,
    block_1376_fn
    };



static void block_1377_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_15 = out_37;
	uint64_t out_3 = out_16;
	uint64_t out_17 = MAP_Explorer::max2(out_16 , vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1377{
    1377,
    88952,
    88968,
    true,
    block_1377_fn
    };



static void block_1378_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[5]+d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(d_[10], d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]+d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+d_[9]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_22 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[2]);
	uint64_t out_37 = MAP_Explorer::max2(out_22 +1+d_[11]+d_[15]+t_4, vec_[5] +2+d_[11]+d_[15]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[11]+d_[15]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[11]+d_[15]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[9]+d_[11]+d_[15]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_23 = out_38 -1;
	uint64_t out_13 = MAP_Explorer::max2(out_22 +2+d_[11]+t_4, vec_[5] +3+d_[11]);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+d_[11]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3+d_[11]+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +3+d_[9]+d_[11]);
	uint64_t out_19 = MAP_Explorer::max2(out_22 +1+d_[11]+t_4, vec_[5] +2+d_[11]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[11]+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[11]+t_5);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+d_[9]+d_[11]);
	uint64_t out_12 = out_19;
	uint64_t out_3 = out_19;
	uint64_t out_1 = out_23;
	uint64_t out_0 = out_23 -1;


	vec_[6] = out_6;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[23] = out_23;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1378{
    1378,
    109304,
    109348,
    true,
    block_1378_fn
    };



static void block_1381_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[6]);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(out_14 +1, vec_[22] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[13] +1);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +4+d_[8]+t_0, vec_[6] +4);
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_13 +d_[12];
	uint64_t out_38 = out_13 +1+d_[12];
	uint64_t out_23 = out_38;
	uint64_t out_22 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +4+d_[12];
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1381{
    1381,
    109384,
    109436,
    true,
    block_1381_fn
    };



static void block_1382_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1382{
    1382,
    88972,
    88972,
    true,
    block_1382_fn
    };



static void block_1383_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_12 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[4], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 +1;
	uint64_t out_37 = out_18 +d_[4];
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_17 +d_[4]+d_[5];


	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1383{
    1383,
    88976,
    88996,
    true,
    block_1383_fn
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
    7480,
    7504,
    true,
    block_80_fn
    };



static void block_205_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_15 = out_37;
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = out_37 +1+d_[7];
	uint64_t out_18 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_19 +1+d_[7];
	uint64_t out_3 = out_19 +2+d_[6];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_205{
    205,
    92456,
    92480,
    true,
    block_205_fn
    };



static void block_207_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_207{
    207,
    92484,
    92484,
    true,
    block_207_fn
    };



static void block_17_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_17{
    17,
    93080,
    93088,
    true,
    block_17_fn
    };



static void block_18_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_17 +1, vec_[4] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +2+d_[3], vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_19 = out_18 +3+d_[7];
	uint64_t out_37 = out_18 +2+d_[7];
	uint64_t out_38 = out_18 +4+d_[7];
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
    93092,
    93128,
    true,
    block_18_fn
    };



static void block_19_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_17;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -1;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_19{
    19,
    93132,
    93140,
    true,
    block_19_fn
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
    93144,
    93148,
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
    93204,
    93208,
    true,
    block_21_fn
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
    7512,
    7524,
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
    7528,
    7528,
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
    7532,
    7536,
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
    7540,
    7544,
    true,
    block_84_fn
    };



static void block_195_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_195{
    195,
    92648,
    92648,
    true,
    block_195_fn
    };



static void block_232_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8], d_[5]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[3]+d_[5]+d_[7], vec_[5] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[5]+d_[7]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +3+t_1, vec_[5] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_12 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -1;
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_0 = out_23 -1;


	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_232{
    232,
    89372,
    89404,
    true,
    block_232_fn
    };



static void block_249_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_14 +3, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_14 +3+d_[3], vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[3]);
	uint64_t out_23 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_249{
    249,
    89668,
    89688,
    true,
    block_249_fn
    };



static void block_1259_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1259{
    1259,
    17388,
    17392,
    true,
    block_1259_fn
    };



static void block_1260_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1260{
    1260,
    17396,
    17400,
    true,
    block_1260_fn
    };



static void block_1341_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1341{
    1341,
    67600,
    67608,
    true,
    block_1341_fn
    };



static void block_1345_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[5], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(d_[7]+t_0, 1+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7]+d_[9]+t_0, 2+d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(d_[12]+t_0, t_1);
	uint64_t t_4 = MAP_Explorer::max2(d_[12], d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, t_2);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[7]+d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[5]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[11]+t_2, vec_[1] +4+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +3+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +3+d_[7]+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +4+d_[0]+d_[11]+t_2);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[5], vec_[1] +5+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +4+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_5, vec_[1] +5+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +4+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_7, vec_[1] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +6+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +3+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_7);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = out_37 +1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_1345{
    1345,
    67632,
    67672,
    true,
    block_1345_fn
    };



static void block_1346_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 , vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
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

extern const MAP_Explorer::Block block_1346{
    1346,
    67676,
    67692,
    true,
    block_1346_fn
    };



static void block_1373_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[7]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[5]+t_0, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[5]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[3]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+t_1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = out_37 +d_[7];
	uint64_t out_12 = out_13;
	uint64_t out_3 = out_13;


	vec_[18] = out_18;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1373{
    1373,
    88852,
    88880,
    true,
    block_1373_fn
    };



static void block_1374_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[1]+d_[3]+d_[5]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[3]+d_[5]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[7]+t_3, vec_[1] +2+d_[7]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[7]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[7]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[7]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[7]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[7]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[5]+d_[7]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[7]+t_3);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_3, vec_[1] +3+t_3);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_3);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1+t_3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_3);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_3);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_4);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[5]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+t_3);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[11], vec_[4] +1);
	uint64_t out_23 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[25] = out_25;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1374{
    1374,
    88884,
    88912,
    true,
    block_1374_fn
    };



static void block_1379_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+t_0, vec_[3] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_18 +1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_1379{
    1379,
    109352,
    109360,
    true,
    block_1379_fn
    };



static void block_1380_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_13 +2, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +d_[3], vec_[23] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_14 = out_16 -1;
	uint64_t out_37 = out_16 -1+d_[3];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[13] = out_13;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1380{
    1380,
    109364,
    109380,
    true,
    block_1380_fn
    };



static void block_1384_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[12], d_[9]);

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +4+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +4+d_[2]);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +4+d_[2]);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_22 = out_23 -1;
	uint64_t out_24 = out_25 -1;
	uint64_t out_14 = MAP_Explorer::max2(out_25 +2+d_[6]+d_[7], vec_[4] +2+d_[7]);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +2+d_[7]);
	uint64_t out_4 = out_14 +1+t_1;
	uint64_t out_12 = out_24 +3;
	uint64_t out_13 = out_14 +t_0;
	uint64_t out_37 = out_14 +d_[12];
	uint64_t out_38 = out_14 +t_1;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_4 -2;
	uint64_t out_5 = out_12 -1;


	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
}

extern const MAP_Explorer::Block block_1384{
    1384,
    89000,
    89044,
    true,
    block_1384_fn
    };



static void block_15_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
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
    92188,
    92196,
    true,
    block_15_fn
    };



static void block_31_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[10] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_9 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_37 +1;
	uint64_t out_4 = out_17 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[9] = out_9;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_31{
    31,
    41596,
    41612,
    true,
    block_31_fn
    };



static void block_32_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[5]+d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]+d_[9]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+t_0+t_3, vec_[1] +3+d_[3]+t_0+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+d_[3]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+d_[3]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+d_[1]+d_[3]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[1]+d_[3]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]+t_0+t_3);
	uint64_t out_0 = out_37 -1+d_[11];
	uint64_t out_3 = out_37 -1+d_[11]+d_[13]+d_[15];
	uint64_t out_4 = MAP_Explorer::max2(out_37 +d_[11]+d_[13], vec_[5] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[11], vec_[5] +1);
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
    41644,
    41676,
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
    7548,
    7564,
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
    7568,
    7568,
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
    7660,
    7688,
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



static void block_171_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_19 = out_23;
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

extern const MAP_Explorer::Block block_171{
    171,
    91064,
    91076,
    true,
    block_171_fn
    };



static void block_172_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[19] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_28;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_16 = MAP_Explorer::max2(out_28 , vec_[23] +1);
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[28] = out_28;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_172{
    172,
    91080,
    91096,
    true,
    block_172_fn
    };



static void block_173_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
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

extern const MAP_Explorer::Block block_173{
    173,
    91812,
    91820,
    true,
    block_173_fn
    };



static void block_178_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_178{
    178,
    91884,
    91884,
    true,
    block_178_fn
    };



static void block_180_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_180{
    180,
    91100,
    91100,
    true,
    block_180_fn
    };



static void block_183_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_17 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_22 = out_37 +1;
	uint64_t out_1 = out_22;


	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_183{
    183,
    90956,
    90972,
    true,
    block_183_fn
    };



static void block_184_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_184{
    184,
    90984,
    90984,
    true,
    block_184_fn
    };



static void block_185_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[28] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_185{
    185,
    91336,
    91344,
    true,
    block_185_fn
    };



static void block_196_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[6]);

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +4+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[3], vec_[1] +6+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +4+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +6+d_[0]+d_[3]);
	uint64_t out_19 = out_37 -1;
	uint64_t out_38 = out_37 +d_[9];
	uint64_t out_18 = out_19 -1;
	uint64_t out_0 = out_18 +1+d_[9];
	uint64_t out_3 = out_18 +2+d_[6]+d_[8];
	uint64_t out_4 = out_18 +3+t_0;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_196{
    196,
    91348,
    91376,
    true,
    block_196_fn
    };



static void block_197_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_25 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_197{
    197,
    91016,
    91024,
    true,
    block_197_fn
    };



static void block_198_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[22] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[26] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[28] +1);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_23 = MAP_Explorer::max2(out_28 +1, vec_[23] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +1+d_[3], vec_[23] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[5];


	vec_[28] = out_28;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_198{
    198,
    91028,
    91048,
    true,
    block_198_fn
    };



static void block_201_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[14] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
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

extern const MAP_Explorer::Block block_201{
    201,
    91996,
    92000,
    true,
    block_201_fn
    };



static void block_1255_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1255{
    1255,
    20620,
    20628,
    true,
    block_1255_fn
    };



static void block_1256_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_19 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1256{
    1256,
    20768,
    20776,
    true,
    block_1256_fn
    };



static void block_1258_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[10] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[20] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_20 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1258{
    1258,
    17364,
    17372,
    true,
    block_1258_fn
    };



static void block_1282_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1282{
    1282,
    62072,
    62076,
    true,
    block_1282_fn
    };



static void block_1283_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_15 = out_37;
	uint64_t out_3 = out_37;
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

extern const MAP_Explorer::Block block_1283{
    1283,
    62080,
    62092,
    true,
    block_1283_fn
    };



static void block_1284_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1284{
    1284,
    62096,
    62096,
    true,
    block_1284_fn
    };



static void block_1285_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +1, vec_[5] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +1+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[5], vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[22] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +d_[2]+d_[4], vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[4]);


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1285{
    1285,
    89092,
    89104,
    true,
    block_1285_fn
    };



static void block_1286_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+t_0);
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_13 -1;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1286{
    1286,
    89108,
    89124,
    true,
    block_1286_fn
    };



static void block_1287_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1287{
    1287,
    89128,
    89132,
    true,
    block_1287_fn
    };



static void block_1288_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1288{
    1288,
    89136,
    89140,
    true,
    block_1288_fn
    };



static void block_1289_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1289{
    1289,
    89176,
    89184,
    true,
    block_1289_fn
    };



static void block_1293_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_22 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1293{
    1293,
    89188,
    89196,
    true,
    block_1293_fn
    };



static void block_1294_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1294{
    1294,
    89200,
    89208,
    true,
    block_1294_fn
    };



static void block_1295_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1295{
    1295,
    62672,
    62676,
    true,
    block_1295_fn
    };



static void block_1296_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[5], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[7]+t_0, vec_[3] +1+d_[7]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[7]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+d_[5]+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+d_[7]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_12 +1, vec_[15] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +1+d_[5], vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[5]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[9];


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1296{
    1296,
    63120,
    63148,
    true,
    block_1296_fn
    };



static void block_1297_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1297{
    1297,
    7272,
    7280,
    true,
    block_1297_fn
    };



static void block_1301_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1301{
    1301,
    63152,
    63156,
    true,
    block_1301_fn
    };



static void block_1303_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1303{
    1303,
    63160,
    63172,
    true,
    block_1303_fn
    };



static void block_1304_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1304{
    1304,
    89212,
    89212,
    true,
    block_1304_fn
    };



static void block_1306_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_1306{
    1306,
    89228,
    89232,
    true,
    block_1306_fn
    };



static void block_1307_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1307{
    1307,
    89256,
    89260,
    true,
    block_1307_fn
    };



static void block_1308_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1308{
    1308,
    89276,
    89276,
    true,
    block_1308_fn
    };



static void block_1309_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1309{
    1309,
    61936,
    61936,
    true,
    block_1309_fn
    };



static void block_1310_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1310{
    1310,
    89280,
    89284,
    true,
    block_1310_fn
    };



static void block_1311_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1311{
    1311,
    61940,
    61940,
    true,
    block_1311_fn
    };



static void block_1312_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1, vec_[22] +2);
	uint64_t out_22 = out_37 +1;
	uint64_t out_38 = out_37 +d_[6];
	uint64_t out_6 = out_22;
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_38;
	uint64_t out_14 = out_22 -2;
	uint64_t out_4 = out_14 +2+d_[6];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[5] = out_5;
	vec_[37] = out_37;
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

extern const MAP_Explorer::Block block_1312{
    1312,
    89288,
    89312,
    true,
    block_1312_fn
    };



static void block_1313_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[3], vec_[12] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[12] +1);


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_1313{
    1313,
    62100,
    62112,
    true,
    block_1313_fn
    };



static void block_52_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_52{
    52,
    7088,
    7096,
    true,
    block_52_fn
    };



static void block_53_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_0 = out_14 -1;
	uint64_t out_3 = out_14 -1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_14 , vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_53{
    53,
    7100,
    7116,
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
    67380,
    67380,
    true,
    block_62_fn
    };



static void block_74_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_74{
    74,
    92212,
    92240,
    true,
    block_74_fn
    };



static void block_75_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_17 +1+d_[2], vec_[3] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[7], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +d_[5];
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[7], vec_[14] );
	uint64_t out_6 = MAP_Explorer::max2(out_18 , vec_[6] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[6] = out_6;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_75{
    75,
    117704,
    117728,
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
    7572,
    7572,
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
    7576,
    7580,
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
    7588,
    7596,
    true,
    block_94_fn
    };



static void block_95_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_18;
	uint64_t out_0 = out_19 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_95{
    95,
    117772,
    117780,
    true,
    block_95_fn
    };



static void block_96_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[3], vec_[1] +4+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[3]);
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_5 +d_[2], vec_[14] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[2]);
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
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

extern const MAP_Explorer::Block block_96{
    96,
    117784,
    117800,
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
    92244,
    92248,
    true,
    block_97_fn
    };



static void block_98_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_98{
    98,
    92252,
    92264,
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
    67384,
    67384,
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
    78144,
    78152,
    true,
    block_135_fn
    };



static void block_139_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[5], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(d_[7]+t_0, 1+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7]+d_[9]+t_0, 2+d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(d_[12]+t_0, t_1);
	uint64_t t_4 = MAP_Explorer::max2(d_[12], d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, t_2);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[7]+d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[5]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[11]+t_2, vec_[1] +4+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +3+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +3+d_[7]+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +1+d_[11]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +4+d_[0]+d_[11]+t_2);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[5], vec_[1] +5+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +4+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +3+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +4+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[30] +2+d_[5]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +5+d_[0]+d_[5]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_5, vec_[1] +5+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +4+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +4+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +4+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +2+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +5+d_[0]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +6+d_[0]+t_7, vec_[1] +6+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +6+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +3+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +6+d_[0]+t_7);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_24 = out_37 +1;


	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[24] = out_24;
}

extern const MAP_Explorer::Block block_139{
    139,
    78176,
    78216,
    true,
    block_139_fn
    };



static void block_140_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 , vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
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
    78220,
    78236,
    true,
    block_140_fn
    };



static void block_163_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2]+d_[3], vec_[1] +4+d_[2]+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +3+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +3+d_[2]+d_[3]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]+d_[2]+d_[3]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_0 = out_12 -1;
	uint64_t out_3 = out_12 -1+d_[5];
	uint64_t out_6 = MAP_Explorer::max2(out_19 , vec_[6] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_12 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_163{
    163,
    88776,
    88796,
    true,
    block_163_fn
    };



static void block_164_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_164{
    164,
    88824,
    88824,
    true,
    block_164_fn
    };



static void block_165_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_165{
    165,
    90192,
    90196,
    true,
    block_165_fn
    };



static void block_166_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[5]+d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(d_[10], d_[7]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2]+d_[3]+d_[5]+d_[7]+d_[9], vec_[1] +3+d_[2]+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[3]+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[5]+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[7]+d_[9]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[2]+d_[3]+d_[5]+d_[7]+d_[9]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2]+d_[3]+t_1, vec_[1] +4+d_[2]+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3+d_[2]+d_[3]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[26] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[2]+d_[3]+t_1);
	uint64_t out_6 = MAP_Explorer::max2(out_17 , vec_[6] +1);
	uint64_t out_26 = MAP_Explorer::max2(out_19 +1, vec_[16] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_26 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[14], vec_[4] +1);
	uint64_t out_24 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;
	uint64_t out_0 = out_12 -2+d_[14];


	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[6] = out_6;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_166{
    166,
    90200,
    90240,
    true,
    block_166_fn
    };



static void block_167_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_167{
    167,
    90244,
    90248,
    true,
    block_167_fn
    };



static void block_168_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(d_[9], d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(2+t_1, d_[5]+d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[9], d_[7]);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+t_0+t_2, vec_[1] +3+d_[3]+t_0+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+d_[1]+d_[3]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+d_[1]+d_[3]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[1]+d_[3]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[1]+d_[3]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[17] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[3]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[3]+t_0+t_2);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+d_[5]+t_0, vec_[1] +3+d_[3]+d_[5]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[1]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[1]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[1]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[1]+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[3]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[3]+d_[5]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+t_0+t_1, vec_[1] +3+d_[3]+t_0+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[1]+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[3]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]+t_0+t_1);
	uint64_t out_3 = out_13;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[26] );
	uint64_t out_38 = MAP_Explorer::max2(out_13 , vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_168{
    168,
    90252,
    90276,
    true,
    block_168_fn
    };



static void block_169_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[3]+t_0, vec_[1] +2+d_[3]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[1]+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[3]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[3]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
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

extern const MAP_Explorer::Block block_169{
    169,
    90444,
    90456,
    true,
    block_169_fn
    };



static void block_170_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[4] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +4+d_[0]);
	uint64_t out_25 = out_28 -2;
	uint64_t out_37 = out_28 -1+d_[3];
	uint64_t out_38 = out_28 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_25 +1;
	uint64_t out_23 = out_25 +2+d_[3];
	uint64_t out_1 = out_23;


	vec_[28] = out_28;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[23] = out_23;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_170{
    170,
    90916,
    90932,
    true,
    block_170_fn
    };



static void block_174_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_174{
    174,
    91872,
    91880,
    true,
    block_174_fn
    };



static void block_175_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +3+d_[2]);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_15 = out_18 +2+d_[6];
	uint64_t out_21 = out_18 +3+d_[6];
	uint64_t out_37 = out_18 +4+d_[6];
	uint64_t out_10 = MAP_Explorer::max2(out_18 +5+d_[6], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +4+d_[6]+d_[10], vec_[4] +1);
	uint64_t out_20 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[21] = out_21;
	vec_[37] = out_37;
	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[20] = out_20;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_175{
    175,
    91896,
    91936,
    true,
    block_175_fn
    };



static void block_179_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_179{
    179,
    91888,
    91892,
    true,
    block_179_fn
    };



static void block_181_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_181{
    181,
    91440,
    91448,
    true,
    block_181_fn
    };



static void block_182_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_182{
    182,
    90944,
    90948,
    true,
    block_182_fn
    };



static void block_189_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_19 -2+d_[2];
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
    92488,
    92496,
    true,
    block_189_fn
    };



static void block_190_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_1 = MAP_Explorer::max2(1+d_[10], d_[12]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[16], d_[18]);

	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[16] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +4+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_21 +d_[3], vec_[14] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_21 +4+d_[3]+d_[7], vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +5+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +4+d_[7]);
	uint64_t out_18 = out_19 -1;
	uint64_t out_20 = out_19 +5+d_[13]+d_[16]+t_1;
	uint64_t out_37 = out_19 +4+d_[13]+d_[18]+t_1;
	uint64_t out_38 = out_19 +6+d_[13]+t_1+t_3;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 +6+d_[13]+t_1+t_3;
	uint64_t out_3 = out_18 +6+d_[13]+d_[19]+t_1+t_3;
	uint64_t out_0 = out_1 -1;


	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_190{
    190,
    92500,
    92564,
    true,
    block_190_fn
    };



static void block_191_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_20 +1, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[21] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_20 +d_[2], vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[21] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;


	vec_[20] = out_20;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_191{
    191,
    92568,
    92580,
    true,
    block_191_fn
    };



static void block_192_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +2+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[18] +2+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_20 +1, vec_[17] +1);
	uint64_t out_21 = MAP_Explorer::max2(out_20 +4, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[15] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[17] +4);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +6+d_[6], vec_[3] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +5+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +6+d_[6]);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_37 -1;
	uint64_t out_1 = out_17 +2;
	uint64_t out_3 = out_17 +2+d_[9];


	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_192{
    192,
    92584,
    92620,
    true,
    block_192_fn
    };



static void block_193_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_193{
    193,
    92624,
    92632,
    true,
    block_193_fn
    };



static void block_194_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_194{
    194,
    92448,
    92452,
    true,
    block_194_fn
    };



static void block_200_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_200{
    200,
    91980,
    91984,
    true,
    block_200_fn
    };



static void block_202_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_202{
    202,
    91988,
    91992,
    true,
    block_202_fn
    };



static void block_203_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_203{
    203,
    90976,
    90980,
    true,
    block_203_fn
    };



static void block_208_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +1);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +2);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_1 = out_38;
	uint64_t out_28 = out_38 +1;
	uint64_t out_4 = out_28;
	uint64_t out_3 = out_28;
	uint64_t out_2 = out_28;
	uint64_t out_0 = out_28 -2;


	vec_[27] = out_27;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[28] = out_28;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_208{
    208,
    91052,
    91060,
    true,
    block_208_fn
    };



static void block_209_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +6+d_[0]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_23 = out_22 +d_[4];
	uint64_t out_24 = out_22 +2+d_[4];
	uint64_t out_25 = out_22 +1+d_[4];
	uint64_t out_26 = out_22 +3+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_22 +3+d_[4]+d_[8], vec_[4] +2);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_26;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_5 = out_12 -1;
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_209{
    209,
    90784,
    90824,
    true,
    block_209_fn
    };



static void block_210_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[4]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_4 = out_37 +1+t_0;
	uint64_t out_12 = out_37 +d_[4];
	uint64_t out_38 = out_37 +t_0;
	uint64_t out_6 = out_12;
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[4] = out_4;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_210{
    210,
    88828,
    88848,
    true,
    block_210_fn
    };



static void block_220_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_220{
    220,
    91860,
    91864,
    true,
    block_220_fn
    };



static void block_221_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_221{
    221,
    91840,
    91848,
    true,
    block_221_fn
    };



static void block_233_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[15] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[1]);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_3 = out_22;
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[3] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_38 = MAP_Explorer::max2(out_22 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_233{
    233,
    89692,
    89700,
    true,
    block_233_fn
    };



static void block_234_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[8]+t_1, t_0);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_1, vec_[1] +4+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_2, vec_[1] +4+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +4+d_[1]+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +5+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +4+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_2);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 -1+d_[5];
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[8], vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_234{
    234,
    89704,
    89728,
    true,
    block_234_fn
    };



static void block_235_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
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

extern const MAP_Explorer::Block block_235{
    235,
    89736,
    89740,
    true,
    block_235_fn
    };



static void block_248_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_13 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_22 = out_38 +1;
	uint64_t out_4 = out_22;
	uint64_t out_3 = out_22;
	uint64_t out_2 = out_22;
	uint64_t out_0 = out_22 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_248{
    248,
    89828,
    89836,
    true,
    block_248_fn
    };



static void block_1290_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +4);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +5+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[4], vec_[1] +4+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[4]);
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_37 +1+d_[5];
	uint64_t out_19 = MAP_Explorer::max2(out_17 , vec_[18] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1290{
    1290,
    89408,
    89428,
    true,
    block_1290_fn
    };



static void block_1291_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[15] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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

extern const MAP_Explorer::Block block_1291{
    1291,
    89816,
    89820,
    true,
    block_1291_fn
    };



static void block_1292_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1292{
    1292,
    89824,
    89824,
    true,
    block_1292_fn
    };



static void block_1315_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1315{
    1315,
    7284,
    7288,
    true,
    block_1315_fn
    };



static void block_1316_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1316{
    1316,
    89216,
    89224,
    true,
    block_1316_fn
    };



static void block_1334_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[4]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_1, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +t_1;
	uint64_t out_3 = out_12;


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1334{
    1334,
    62680,
    62700,
    true,
    block_1334_fn
    };



static void block_1335_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_19 +1+t_2, vec_[3] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +1+t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +2+t_1, vec_[3] +1+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +2+d_[8]+t_2, vec_[3] +1+d_[8]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[8]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[8]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_0 +d_[8]+d_[10];


	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1335{
    1335,
    62704,
    62728,
    true,
    block_1335_fn
    };



static void block_1337_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[8], d_[6]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[9]+d_[11]+t_1, vec_[1] +3+d_[1]+d_[2]+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3+d_[2]+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[2]+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[2]+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3+d_[2]+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[9]+d_[11]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +2+d_[9]+d_[11]+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +2+d_[9]+d_[11]);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+d_[11]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[9]+d_[11]+t_1);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+d_[2]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[2]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[2]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[9]+t_1, vec_[1] +3+d_[1]+d_[2]+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+d_[2]+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[2]+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[2]+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[9]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[9]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[9]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[9]+t_1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[13];


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1337{
    1337,
    67388,
    67420,
    true,
    block_1337_fn
    };



static void block_1338_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_18 = out_37 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_3 = out_5 -1+d_[3];


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1338{
    1338,
    67424,
    67436,
    true,
    block_1338_fn
    };



static void block_1339_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(2, d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[13], d_[8]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_4, d_[11]+t_3);
	uint64_t t_6 = MAP_Explorer::max2(d_[13], d_[11]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_2, vec_[1] +4+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +3+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]+t_2);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -1+t_4, vec_[14] +d_[13]);
	uint64_t out_10 = MAP_Explorer::max2(out_18 +d_[11]+t_3, vec_[14] +2+d_[11]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +t_5, vec_[14] +2+t_6);
	uint64_t out_3 = out_10;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1339{
    1339,
    67440,
    67472,
    true,
    block_1339_fn
    };



static void block_1340_fn(uint64_t* vec_, uint8_t* d_){


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
	uint64_t t_10 = MAP_Explorer::max2(d_[23], d_[19]);
	uint64_t t_11 = MAP_Explorer::max2(2+t_10, d_[19]+d_[21]);
	uint64_t t_12 = MAP_Explorer::max2(1+d_[23], d_[21]);
	uint64_t t_13 = MAP_Explorer::max2(d_[29], d_[26]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_13, d_[26]+d_[28]);
	uint64_t t_15 = MAP_Explorer::max2(d_[37], d_[32]);
	uint64_t t_16 = MAP_Explorer::max2(1+t_15, d_[32]+d_[34]);
	uint64_t t_17 = MAP_Explorer::max2(1+t_16, d_[32]+d_[34]+d_[36]);
	uint64_t t_18 = MAP_Explorer::max2(d_[45], d_[40]);
	uint64_t t_19 = MAP_Explorer::max2(1+t_18, d_[40]+d_[42]);
	uint64_t t_20 = MAP_Explorer::max2(1+t_19, d_[40]+d_[42]+d_[44]);

	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11, vec_[1] +3+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[10] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[9]+d_[17]+t_3+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2+d_[9]+d_[17]+t_4+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+d_[7]+d_[9]+d_[17]+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +2+d_[9]+d_[17]+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[26] +2+d_[17]+t_8+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[27] +2+d_[17]+t_9+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[28] +2+d_[15]+d_[17]+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[29] +2+d_[17]+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[30] +2+t_11);
	out_22 = MAP_Explorer::max2(out_22, vec_[31] +2+t_12);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +3+d_[0]+d_[1]+d_[9]+d_[17]+t_3+t_8+t_11);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8, vec_[1] +3+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +1+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[10] +1);
	out_29 = MAP_Explorer::max2(out_29, vec_[13] +2+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[22] +2+d_[9]+d_[17]+d_[19]+t_3+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[23] +2+d_[9]+d_[17]+d_[19]+t_4+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[24] +2+d_[7]+d_[9]+d_[17]+d_[19]+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[25] +2+d_[9]+d_[17]+d_[19]+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[26] +2+d_[17]+d_[19]+t_8);
	out_29 = MAP_Explorer::max2(out_29, vec_[27] +2+d_[17]+d_[19]+t_9);
	out_29 = MAP_Explorer::max2(out_29, vec_[28] +2+d_[15]+d_[17]+d_[19]);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+d_[17]+d_[19]);
	out_29 = MAP_Explorer::max2(out_29, vec_[30] +2+d_[19]);
	out_29 = MAP_Explorer::max2(out_29, vec_[31] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +3+d_[0]+d_[1]+d_[9]+d_[17]+d_[19]+t_3+t_8);
	uint64_t out_19 = out_22;
	uint64_t out_38 = MAP_Explorer::max2(out_22 +4+d_[30]+d_[38]+t_14+t_17+t_20, vec_[4] +4+d_[28]+d_[30]+d_[38]+t_17+t_20);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_25 = out_37;
	uint64_t out_12 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_1 = out_13;


	vec_[22] = out_22;
	vec_[29] = out_29;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1340{
    1340,
    67488,
    67596,
    true,
    block_1340_fn
    };



static void block_1344_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_24 = out_38 -1;
	uint64_t out_1 = out_24;
	uint64_t out_0 = out_24 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[24] = out_24;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1344{
    1344,
    68584,
    68588,
    true,
    block_1344_fn
    };



static void block_1347_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[23] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_21 +2, vec_[4] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3);
	uint64_t out_3 = out_24 -2+d_[2];
	uint64_t out_23 = out_24 +3+d_[5];
	uint64_t out_26 = out_24 +1+d_[5];
	uint64_t out_28 = out_24 +d_[5];
	uint64_t out_30 = out_24 +2+d_[5];
	uint64_t out_37 = out_24 +2+d_[5]+d_[9];
	uint64_t out_38 = out_24 +4+d_[5]+d_[9];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_23 +d_[9];
	uint64_t out_1 = out_19;


	vec_[21] = out_21;
	vec_[24] = out_24;
	vec_[3] = out_3;
	vec_[23] = out_23;
	vec_[26] = out_26;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1347{
    1347,
    67696,
    67732,
    true,
    block_1347_fn
    };



static void block_1348_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], 2);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, 3);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[2], vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[2]+t_1, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+t_2);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+t_0, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_2 = out_4;
	uint64_t out_3 = out_19 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1348{
    1348,
    67736,
    67760,
    true,
    block_1348_fn
    };



static void block_1349_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1349{
    1349,
    68324,
    68328,
    true,
    block_1349_fn
    };



static void block_1350_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +4);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +4);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +3);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +5+d_[0]);
	uint64_t out_18 = out_30;
	uint64_t out_19 = out_30 -2;
	uint64_t out_37 = out_30 -1+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_30 +1+d_[4], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_19 +2+d_[4]+d_[5];


	vec_[30] = out_30;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1350{
    1350,
    69296,
    69316,
    true,
    block_1350_fn
    };



static void block_1351_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1351{
    1351,
    69320,
    69324,
    true,
    block_1351_fn
    };



static void block_1352_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1352{
    1352,
    72224,
    72228,
    true,
    block_1352_fn
    };



static void block_1353_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_31 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[31] = out_31;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1353{
    1353,
    72232,
    72240,
    true,
    block_1353_fn
    };



static void block_1354_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1354{
    1354,
    68364,
    68364,
    true,
    block_1354_fn
    };



static void block_1355_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1355{
    1355,
    68368,
    68372,
    true,
    block_1355_fn
    };



static void block_1356_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1356{
    1356,
    68392,
    68392,
    true,
    block_1356_fn
    };



static void block_1357_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1357{
    1357,
    68400,
    68404,
    true,
    block_1357_fn
    };



static void block_1358_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[6], d_[2]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +3+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +3+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[35] +4+d_[6]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[30] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[35] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_3 = out_19;
	uint64_t out_31 = MAP_Explorer::max2(out_26 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_29 = out_31 +1;
	uint64_t out_30 = out_38 -1;
	uint64_t out_37 = out_31 +1+d_[6];
	uint64_t out_1 = out_30;
	uint64_t out_0 = out_30 -1;


	vec_[19] = out_19;
	vec_[26] = out_26;
	vec_[3] = out_3;
	vec_[31] = out_31;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1358{
    1358,
    68412,
    68440,
    true,
    block_1358_fn
    };



static void block_1359_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);

	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = out_37 -1+t_0;
	uint64_t out_3 = out_37 -1+d_[4]+d_[6]+d_[8];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_1, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1359{
    1359,
    68444,
    68464,
    true,
    block_1359_fn
    };



static void block_1360_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1360{
    1360,
    67860,
    67864,
    true,
    block_1360_fn
    };



static void block_1361_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1361{
    1361,
    67872,
    67880,
    true,
    block_1361_fn
    };



static void block_1362_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1362{
    1362,
    67884,
    67888,
    true,
    block_1362_fn
    };



static void block_1363_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1363{
    1363,
    67892,
    67896,
    true,
    block_1363_fn
    };



static void block_1364_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1364{
    1364,
    67948,
    67948,
    true,
    block_1364_fn
    };



static void block_1365_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1365{
    1365,
    68000,
    68004,
    true,
    block_1365_fn
    };



static void block_1366_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
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

extern const MAP_Explorer::Block block_1366{
    1366,
    68008,
    68012,
    true,
    block_1366_fn
    };



static void block_1367_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1367{
    1367,
    68016,
    68020,
    true,
    block_1367_fn
    };



static void block_1368_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[9], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]+t_0);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[31] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_3 = out_19 -1+d_[10]+t_3;
	uint64_t out_37 = out_19 +t_2;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+t_3, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_17 = out_38 -1;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_17 -1;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1368{
    1368,
    68024,
    68056,
    true,
    block_1368_fn
    };



static void block_1369_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_33 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_33 -1;
	uint64_t out_1 = out_38 -1;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[33] = out_33;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1369{
    1369,
    68060,
    68068,
    true,
    block_1369_fn
    };



static void block_1370_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1370{
    1370,
    68080,
    68084,
    true,
    block_1370_fn
    };



static void block_1371_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[30] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_32 +1+t_0, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[32] = out_32;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1371{
    1371,
    68088,
    68104,
    true,
    block_1371_fn
    };



static void block_1372_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_3 = out_15;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1372{
    1372,
    70940,
    70952,
    true,
    block_1372_fn
    };



static void block_1385_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1385{
    1385,
    70956,
    70956,
    true,
    block_1385_fn
    };



static void block_1386_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_38 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1386{
    1386,
    68108,
    68116,
    true,
    block_1386_fn
    };



static void block_1387_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_29 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_19;


	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[29] = out_29;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_1387{
    1387,
    68132,
    68144,
    true,
    block_1387_fn
    };



static void block_1388_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_24 = out_38 -1;
	uint64_t out_1 = out_24;
	uint64_t out_0 = out_24 -1;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[24] = out_24;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1388{
    1388,
    67624,
    67628,
    true,
    block_1388_fn
    };



static void block_1389_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1389{
    1389,
    68148,
    68152,
    true,
    block_1389_fn
    };



static void block_1390_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1390{
    1390,
    68156,
    68156,
    true,
    block_1390_fn
    };



static void block_1391_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]);
	uint64_t out_16 = out_38;
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_15 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1391{
    1391,
    75280,
    75292,
    true,
    block_1391_fn
    };



static void block_1392_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1392{
    1392,
    75296,
    75296,
    true,
    block_1392_fn
    };



static void block_1393_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +3);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +5+d_[0]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_23 = out_22 +1+d_[4];
	uint64_t out_24 = out_22 +2+d_[4];
	uint64_t out_25 = out_22 +4+d_[4];
	uint64_t out_26 = out_22 +4+d_[4]+d_[8];
	uint64_t out_27 = out_22 +5+d_[4]+d_[8];
	uint64_t out_28 = out_22 +6+d_[4]+d_[8];
	uint64_t out_29 = out_22 +7+d_[4]+d_[8];
	uint64_t out_30 = out_22 +7+d_[4]+d_[8]+d_[12];
	uint64_t out_31 = out_22 +8+d_[4]+d_[8]+d_[12];
	uint64_t out_37 = out_22 +6+d_[4]+d_[8]+d_[12];
	uint64_t out_38 = MAP_Explorer::max2(out_22 +8+d_[4]+d_[8]+d_[12], vec_[4] +1);
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
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_1393{
    1393,
    68160,
    68216,
    true,
    block_1393_fn
    };



static void block_1394_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_12 = out_37;
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_6 = out_14;
	uint64_t out_3 = out_14;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 -2;
	uint64_t out_4 = out_5 +2+d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1394{
    1394,
    68224,
    68240,
    true,
    block_1394_fn
    };



static void block_1399_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1399{
    1399,
    109572,
    109576,
    true,
    block_1399_fn
    };



static void block_1400_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_16 = MAP_Explorer::max2(out_14 +1, vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +d_[2], vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_1400{
    1400,
    109368,
    109380,
    true,
    block_1400_fn
    };



static void block_1410_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_1410{
    1410,
    7508,
    7508,
    true,
    block_1410_fn
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


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[8], d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[10]+t_1, 3+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(d_[14]+t_1, t_2);
	uint64_t t_4 = MAP_Explorer::max2(d_[14], d_[10]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +3+t_0, vec_[3] +2+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3);
	uint64_t out_22 = MAP_Explorer::max2(out_19 -1+t_2, vec_[5] +2+d_[10]);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+t_1, vec_[5] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +t_3, vec_[5] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[14]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_19 +1+d_[8];
	uint64_t out_3 = MAP_Explorer::max2(out_19 -2+d_[10]+d_[12]+t_1, vec_[5] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[12]);
	uint64_t out_0 = out_1 -1;


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_2{
    2,
    63752,
    63792,
    true,
    block_2_fn
    };



static void block_3_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_19 +2;
	uint64_t out_22 = out_19 +3+d_[4];
	uint64_t out_37 = out_19 +2+d_[4];
	uint64_t out_38 = out_19 +4+d_[4];
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
    63824,
    63848,
    true,
    block_3_fn
    };



static void block_4_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_19 = out_37;
	uint64_t out_13 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_4{
    4,
    63852,
    63868,
    true,
    block_4_fn
    };



static void block_5_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_5{
    5,
    63900,
    63904,
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
    63920,
    63920,
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
    63872,
    63872,
    true,
    block_7_fn
    };



static void block_8_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_8{
    8,
    63876,
    63896,
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
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
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
    6588,
    6592,
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
    43380,
    43404,
    true,
    block_12_fn
    };



static void block_13_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[7], d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(t_1, t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[15], d_[10]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[10]+d_[12]);
	uint64_t t_5 = MAP_Explorer::max2(d_[15], d_[12]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[10]+d_[12]+d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[12]+d_[14]);
	uint64_t t_8 = MAP_Explorer::max2(d_[8]+t_2+t_6, t_0);
	uint64_t t_9 = MAP_Explorer::max2(d_[8]+d_[16]+t_2+t_6, 1+t_0);
	uint64_t t_10 = MAP_Explorer::max2(1+d_[8]+t_2+t_4, t_8);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, t_9);
	uint64_t t_12 = MAP_Explorer::max2(1+d_[20]+t_11, t_0);
	uint64_t t_13 = MAP_Explorer::max2(1+t_12, t_9);
	uint64_t t_14 = MAP_Explorer::max2(d_[22]+t_13, 1+t_11);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+d_[2]+t_14, vec_[1] +5+d_[1]+d_[2]+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +5+d_[2]+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +3+d_[2]+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[22]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +5+d_[2]+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+d_[22]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +5+d_[8]+d_[16]+d_[20]+d_[22]+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +4+d_[2]+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +4+t_14);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +5+d_[16]+d_[20]+d_[22]+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +5+d_[16]+d_[20]+d_[22]+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[20] +5+d_[14]+d_[16]+d_[20]+d_[22]);
	out_5 = MAP_Explorer::max2(out_5, vec_[21] +5+d_[16]+d_[20]+d_[22]);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +5+d_[0]+d_[1]+d_[2]+t_14);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+d_[2]+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1+d_[2]+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[6] +3+d_[2]+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[16] +2+d_[2]+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2+t_0);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[2]+t_12, vec_[1] +4+d_[1]+d_[2]+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4+d_[2]+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[2]+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +4+d_[2]+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +3+d_[8]+d_[16]+d_[20]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +3+d_[2]+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[17] +3+t_12);
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +3+d_[16]+d_[20]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +3+d_[16]+d_[20]+t_7);
	out_14 = MAP_Explorer::max2(out_14, vec_[20] +3+d_[14]+d_[16]+d_[20]);
	out_14 = MAP_Explorer::max2(out_14, vec_[21] +3+d_[16]+d_[20]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +4+d_[0]+d_[1]+d_[2]+t_12);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[2]+t_9, vec_[1] +4+d_[1]+d_[2]+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +4+d_[2]+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2+d_[2]+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +4+d_[2]+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2+d_[8]+d_[16]+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +3+d_[2]+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[17] +3+t_9);
	out_15 = MAP_Explorer::max2(out_15, vec_[18] +2+d_[16]+t_6);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+d_[16]+t_7);
	out_15 = MAP_Explorer::max2(out_15, vec_[20] +2+d_[14]+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[21] +2+d_[16]);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +4+d_[0]+d_[1]+d_[2]+t_9);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1]+d_[2]+t_11, vec_[1] +4+d_[1]+d_[2]+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +4+d_[2]+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2+d_[2]+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +4+d_[2]+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[15] +2+d_[8]+d_[16]+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +3+d_[2]+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +3+t_11);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+d_[16]+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+d_[16]+t_7);
	out_17 = MAP_Explorer::max2(out_17, vec_[20] +2+d_[14]+d_[16]);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +2+d_[16]);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +4+d_[0]+d_[1]+d_[2]+t_11);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+d_[2]+t_13, vec_[1] +5+d_[1]+d_[2]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+d_[2]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3+d_[2]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+d_[2]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +5+d_[8]+d_[16]+d_[20]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4+d_[2]+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +5+d_[16]+d_[20]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +5+d_[16]+d_[20]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +5+d_[14]+d_[16]+d_[20]);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +5+d_[16]+d_[20]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]+d_[2]+t_13);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[24];
	uint64_t out_16 = MAP_Explorer::max2(out_17 +1, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +1, vec_[5] +1);


	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_13{
    13,
    62236,
    62300,
    true,
    block_13_fn
    };



static void block_14_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[11], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(2, d_[12]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[6]+t_1+t_2+t_3, vec_[3] +1+d_[2]+d_[4]+d_[6]+t_2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[6]+t_1+t_2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[4]+d_[6]+t_2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[6]+t_2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[11]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +3+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_2+t_3);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+d_[6]+t_1, vec_[3] +1+d_[2]+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+d_[6]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[4]+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_13 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+d_[6]+t_1+t_2, vec_[3] +2+d_[2]+d_[4]+d_[6]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+d_[6]+t_1+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[4]+d_[6]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[6]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_2);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[15];
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_14{
    14,
    77860,
    77900,
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
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_3 = out_5 -1+d_[3];


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_16{
    16,
    77904,
    77916,
    true,
    block_16_fn
    };



static void block_22_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[3]+d_[5]+d_[7]);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +1+d_[1]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +d_[1]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +1+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +1+d_[1]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[14] +1+d_[1]+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[9]+t_2, vec_[1] +2+d_[1]+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]+d_[9]+t_2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[9]+t_2);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[1]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+d_[1]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_2, vec_[1] +3+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_22{
    22,
    77920,
    77940,
    true,
    block_22_fn
    };



static void block_23_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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
    77944,
    77948,
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
    77952,
    77952,
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
    84372,
    84376,
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
    61896,
    61900,
    true,
    block_26_fn
    };



static void block_27_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[3]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_0, vec_[1] +5+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[4], vec_[1] +4+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[4]);
	uint64_t out_3 = out_19;
	uint64_t out_0 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_27{
    27,
    61908,
    61928,
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
    61932,
    61932,
    true,
    block_28_fn
    };



static void block_29_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(3, d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[13], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[12]+t_2);
	uint64_t t_5 = MAP_Explorer::max2(2, d_[16]);
	uint64_t t_6 = MAP_Explorer::max2(1+d_[20], d_[16]);
	uint64_t t_7 = MAP_Explorer::max2(5+d_[24]+t_6, d_[19]+t_5);
	uint64_t t_8 = MAP_Explorer::max2(d_[31], d_[26]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_8, d_[26]+d_[28]);
	uint64_t t_10 = MAP_Explorer::max2(1+t_9, d_[26]+d_[28]+d_[30]);
	uint64_t t_11 = MAP_Explorer::max2(d_[39], d_[34]);
	uint64_t t_12 = MAP_Explorer::max2(1+t_11, d_[34]+d_[36]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_12, d_[34]+d_[36]+d_[38]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1]+t_1, vec_[1] +6+d_[1]+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +6+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+d_[4]+d_[6]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +6+t_1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[6]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +6+d_[0]+d_[1]+t_1);
	uint64_t out_18 = MAP_Explorer::max2(out_12 -1+d_[14]+t_4, vec_[22] +2+d_[12]+d_[14]);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[14]);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1+t_6, vec_[4] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +d_[32]+t_7+t_10+t_11, vec_[4] +6+d_[24]+d_[32]+t_10+t_11);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +d_[32]+t_7+t_10+t_12, vec_[4] +6+d_[24]+d_[32]+t_10+t_12);
	uint64_t out_0 = out_38 -1;
	uint64_t out_16 = out_19 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_18 +d_[32]+t_7+t_10+t_13, vec_[4] +6+d_[24]+d_[32]+t_10+t_13);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[40];
	uint64_t out_15 = out_16 +2;
	uint64_t out_14 = out_15 +1+d_[24];


	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_29{
    29,
    61228,
    61332,
    true,
    block_29_fn
    };



static void block_33_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[22], d_[17]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[17]+d_[19]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[17]+d_[19]+d_[21]);
	uint64_t t_3 = MAP_Explorer::max2(d_[30], d_[25]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[25]+d_[27]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_4, d_[25]+d_[27]+d_[29]);
	uint64_t t_6 = MAP_Explorer::max2(d_[38], d_[33]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[33]+d_[35]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_7, d_[33]+d_[35]+d_[37]);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_23 = out_24 +2;
	uint64_t out_5 = MAP_Explorer::max2(out_24 +10+d_[6]+d_[10]+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_8, vec_[3] +1+d_[15]+d_[23]+d_[31]+t_2+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +5+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[15]+d_[23]+d_[31]+t_2+t_5+t_8);
	uint64_t out_16 = MAP_Explorer::max2(out_24 +6+d_[6]+d_[10], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +10+d_[6]+d_[10]+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_6, vec_[3] +1+d_[15]+d_[23]+d_[31]+t_2+t_5+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[15]+d_[23]+d_[31]+t_2+t_5+t_6);
	uint64_t out_38 = MAP_Explorer::max2(out_24 +10+d_[6]+d_[10]+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_7, vec_[3] +1+d_[15]+d_[23]+d_[31]+t_2+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5+d_[14]+d_[15]+d_[23]+d_[31]+t_2+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[15]+d_[23]+d_[31]+t_2+t_5+t_7);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[39];
	uint64_t out_15 = out_16 +1;
	uint64_t out_22 = out_23 +1+d_[6];
	uint64_t out_14 = out_15 +2;
	uint64_t out_19 = out_22 +3;
	uint64_t out_13 = out_19 -1;


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[5] = out_5;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[22] = out_22;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_33{
    33,
    61336,
    61444,
    true,
    block_33_fn
    };



static void block_34_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[12], d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[9]+d_[11]);
	uint64_t t_2 = MAP_Explorer::max2(d_[20], d_[15]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[15]+d_[17]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[15]+d_[17]+d_[19]);
	uint64_t t_5 = MAP_Explorer::max2(d_[28], d_[23]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[23]+d_[25]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[23]+d_[25]+d_[27]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_18 = out_19 +1+d_[2];
	uint64_t out_16 = MAP_Explorer::max2(out_19 +2+d_[2], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +6+d_[2]+d_[6]+d_[13]+d_[21]+t_1+t_4+t_7, vec_[3] +1+d_[9]+d_[11]+d_[13]+d_[21]+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[6]+d_[13]+d_[21]+t_1+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[13]+d_[21]+t_1+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[21]+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[13]+d_[21]+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[11]+d_[13]+d_[21]+t_4+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[13]+d_[21]+t_1+t_4+t_7);
	uint64_t out_0 = out_37 -1+d_[29];
	uint64_t out_5 = out_37 +d_[29]+d_[31];
	uint64_t out_15 = out_16 +1;
	uint64_t out_38 = out_37 +d_[29];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[33];
	uint64_t out_14 = out_15 +1+d_[6];


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_34{
    34,
    61448,
    61532,
    true,
    block_34_fn
    };



static void block_35_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[13], d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[9]+d_[12]);
	uint64_t t_4 = MAP_Explorer::max2(d_[13], d_[12]);
	uint64_t t_5 = MAP_Explorer::max2(3+d_[17]+t_3, d_[9]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +2+d_[7]+d_[9]+t_1, vec_[3] +1+d_[3]+d_[5]+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[7]+d_[9]+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+d_[5]+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+d_[7]+d_[9]+t_1);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +6+d_[7]+t_1+t_3, vec_[3] +5+d_[3]+d_[5]+d_[7]+t_3);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +6+t_4);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +6+d_[7]+t_1+t_3);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +6+t_3);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +6+d_[7]+t_3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +6+d_[5]+d_[7]+t_3);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +6+d_[7]+t_1+t_3);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[7]+t_1+t_5, vec_[3] +2+d_[3]+d_[5]+d_[7]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+d_[17]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[7]+t_1+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[7]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[5]+d_[7]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+d_[7]+t_1+t_5);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_22 = out_23 -1;
	uint64_t out_24 = out_23 +d_[17];
	uint64_t out_37 = out_23 -1+d_[17];
	uint64_t out_6 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_22 -1;
	uint64_t out_12 = out_13 -1;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[22] = out_22;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_35{
    35,
    61536,
    61592,
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
    84380,
    84380,
    true,
    block_36_fn
    };



static void block_37_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_37{
    37,
    77956,
    77968,
    true,
    block_37_fn
    };



static void block_38_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[6]);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 +1;
	uint64_t out_18 = MAP_Explorer::max2(out_16 +2+d_[3], vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +1+d_[9], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[9]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +3+t_0, vec_[3] +2+d_[6]);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_0);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+d_[6]+d_[8], vec_[3] +d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[6]+d_[8]);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +2+t_0, vec_[3] +1+d_[6]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_0);
	uint64_t out_0 = out_17 -1;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_38{
    38,
    77972,
    78004,
    true,
    block_38_fn
    };



static void block_39_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+t_0);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
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

extern const MAP_Explorer::Block block_39{
    39,
    78012,
    78020,
    true,
    block_39_fn
    };



static void block_40_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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
    78024,
    78028,
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
    78784,
    78792,
    true,
    block_41_fn
    };



static void block_42_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(2+t_2, d_[4]+d_[6]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+t_3, vec_[3] +1+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_5);
	uint64_t out_37 = MAP_Explorer::max2(out_19 , vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[11], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	uint64_t out_13 = out_37;
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[11], vec_[15] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_42{
    42,
    91488,
    91520,
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
    91524,
    91528,
    true,
    block_43_fn
    };



static void block_44_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_19;
	uint64_t out_0 = out_18 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_18 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_44{
    44,
    91532,
    91540,
    true,
    block_44_fn
    };



static void block_45_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[2] +3);
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
    91544,
    91548,
    true,
    block_45_fn
    };



static void block_46_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_46{
    46,
    91688,
    91696,
    true,
    block_46_fn
    };



static void block_47_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
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

extern const MAP_Explorer::Block block_47{
    47,
    91700,
    91708,
    true,
    block_47_fn
    };



static void block_48_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +2+d_[3], vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[3]);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +2+t_0, vec_[5] +1+d_[7]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_1, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+d_[7]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_18 -1+d_[5];
	uint64_t out_12 = out_37 +1;


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_48{
    48,
    109692,
    109716,
    true,
    block_48_fn
    };



static void block_49_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[9], d_[6]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]+d_[8], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[4]+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[6]+d_[8]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +3+d_[2]+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_1);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +3+d_[2]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_0 = out_13 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_13 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_49{
    49,
    109756,
    109780,
    true,
    block_49_fn
    };



static void block_50_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_16 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_50{
    50,
    109784,
    109788,
    true,
    block_50_fn
    };



static void block_51_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(4+d_[5], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(5, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(3+d_[5]+d_[10], d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(4+d_[10], d_[3]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[9]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[9]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(d_[10], d_[9]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +1, vec_[15] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +4+d_[5], vec_[3] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +4+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[10], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+t_2, vec_[3] +1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +5+d_[10]);
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = out_19 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_18 +2+t_4, vec_[3] +1+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +5+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +6+t_6);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +2, vec_[3] +1);
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
    110576,
    110612,
    true,
    block_51_fn
    };



static void block_54_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_54{
    54,
    110616,
    110620,
    true,
    block_54_fn
    };



static void block_55_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_55{
    55,
    110624,
    110636,
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
    109792,
    109792,
    true,
    block_56_fn
    };



static void block_57_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_19 = out_3 +2+d_[3];
	uint64_t out_22 = out_3 +4+d_[3];
	uint64_t out_37 = MAP_Explorer::max2(out_3 +6+d_[3]+d_[7], vec_[4] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[11], vec_[13] +1);
	uint64_t out_15 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_24 = out_37 -2;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_23 = out_24 +1;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[24] = out_24;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_57{
    57,
    109796,
    109840,
    true,
    block_57_fn
    };



static void block_58_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[12], d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_2, d_[8]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[6]+d_[8]+d_[10]+t_1, vec_[3] +d_[2]+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[4]+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[6]+d_[8]+d_[10]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+d_[6]+d_[8]+t_1, vec_[3] +1+d_[2]+d_[4]+d_[6]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[4]+d_[6]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[6]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[6]+d_[8]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +3+d_[6]+t_1+t_2, vec_[3] +2+d_[2]+d_[4]+d_[6]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +3+d_[4]+d_[6]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[6]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +3+d_[6]+t_1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[12]);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+d_[6]+t_1+t_3, vec_[3] +2+d_[2]+d_[4]+d_[6]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+d_[4]+d_[6]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[6]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[6]+t_1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4+d_[12]);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_0 = out_22 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_58{
    58,
    65364,
    65400,
    true,
    block_58_fn
    };



static void block_59_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_13 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_59{
    59,
    65532,
    65536,
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
    65540,
    65540,
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
    65544,
    65544,
    true,
    block_61_fn
    };



static void block_63_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_63{
    63,
    65548,
    65552,
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
    65556,
    65560,
    true,
    block_64_fn
    };



static void block_65_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_65{
    65,
    65564,
    65568,
    true,
    block_65_fn
    };



static void block_66_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_20 -2;
	uint64_t out_23 = out_20 +2+d_[3];
	uint64_t out_37 = out_20 +3+d_[3]+d_[7];
	uint64_t out_38 = MAP_Explorer::max2(out_20 +5+d_[3]+d_[7], vec_[3] +2);
	uint64_t out_2 = out_38;
	uint64_t out_15 = out_19 +1;
	uint64_t out_16 = out_38 -1;
	uint64_t out_12 = out_16;
	uint64_t out_3 = out_16;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_66{
    66,
    65572,
    65608,
    true,
    block_66_fn
    };



static void block_67_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[2]);
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
    65656,
    65668,
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
    66304,
    66308,
    true,
    block_68_fn
    };



static void block_69_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = out_37;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_69{
    69,
    65772,
    65784,
    true,
    block_69_fn
    };



static void block_70_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_26 = out_37 +1+d_[2];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2+d_[2], vec_[13] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_26 -1;
	uint64_t out_3 = out_19;
	uint64_t out_0 = out_19;


	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_70{
    70,
    65964,
    65980,
    true,
    block_70_fn
    };



static void block_71_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[2]+d_[7], d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[7], d_[1]);
	uint64_t t_4 = MAP_Explorer::max2(t_2, t_0);
	uint64_t t_5 = MAP_Explorer::max2(t_3, t_1);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[6]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[6]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(2, d_[10]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[13], d_[10]);
	uint64_t t_10 = MAP_Explorer::max2(1+t_9, t_8);
	uint64_t t_11 = MAP_Explorer::max2(2+d_[8]+t_6+t_10, t_0);
	uint64_t t_12 = MAP_Explorer::max2(t_11, 1+d_[8]+t_6+t_9);
	uint64_t t_13 = MAP_Explorer::max2(2+d_[8]+t_7+t_10, t_1);
	uint64_t t_14 = MAP_Explorer::max2(t_13, 1+d_[8]+t_7+t_9);
	uint64_t t_15 = MAP_Explorer::max2(1+t_10, t_9);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[8]+t_6+t_8, vec_[1] +4+d_[8]+t_6+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+d_[8]+t_7+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[8]+t_7+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +3+d_[8]+t_7+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+d_[6]+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[8]+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +3+d_[8]+t_7+t_8);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +4+d_[0]+d_[8]+t_6+t_8);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[8]+t_6+t_9, vec_[1] +4+d_[8]+t_6+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[8]+t_7+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[8]+t_7+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[8]+t_7+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+d_[6]+d_[8]+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+d_[8]+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +3+d_[8]+t_7+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[8]+t_6+t_9);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[8]+t_6+t_10, vec_[1] +5+d_[8]+t_6+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +4+d_[8]+t_7+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +3+d_[8]+t_7+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[4] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +4+d_[8]+t_7+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +3+d_[6]+d_[8]+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +3+d_[8]+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +3+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[29] +4+d_[8]+t_7+t_10);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +5+d_[0]+d_[8]+t_6+t_10);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +3);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_12, vec_[1] +4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+d_[6]+d_[8]+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3+d_[8]+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +3+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +3+t_14);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_12);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_25 -1;
	uint64_t out_1 = out_38 -1;
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	uint64_t out_24 = out_37;


	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[24] = out_24;
}

extern const MAP_Explorer::Block block_71{
    71,
    65996,
    66044,
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
    67040,
    67044,
    true,
    block_72_fn
    };



static void block_73_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[22] +1);
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

extern const MAP_Explorer::Block block_73{
    73,
    66068,
    66076,
    true,
    block_73_fn
    };



static void block_76_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_38;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_21 = out_37;
	uint64_t out_0 = out_37;


	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[21] = out_21;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_76{
    76,
    117732,
    117740,
    true,
    block_76_fn
    };



static void block_87_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = out_38 -1;
	uint64_t out_20 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_4 = out_20;
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_20;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_20 -1;


	vec_[38] = out_38;
	vec_[37] = out_37;
	vec_[20] = out_20;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_87{
    87,
    7868,
    7876,
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
    117744,
    117752,
    true,
    block_90_fn
    };



static void block_91_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
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
    117756,
    117768,
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
    66080,
    66088,
    true,
    block_99_fn
    };



static void block_100_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[6] );
	out_0 = MAP_Explorer::max2(out_0, vec_[28] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[2] +2);
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
    66092,
    66096,
    true,
    block_100_fn
    };



static void block_101_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +2+t_0, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_15 = out_18 -2;
	uint64_t out_3 = out_15 +1+d_[5];


	vec_[28] = out_28;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_101{
    101,
    66100,
    66124,
    true,
    block_101_fn
    };



static void block_102_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[29] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_17;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_1 = out_19;
	uint64_t out_0 = out_19 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_102{
    102,
    66828,
    66836,
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
    67232,
    67236,
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
    66852,
    66856,
    true,
    block_104_fn
    };



static void block_105_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[27] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +5+d_[0]);
	uint64_t out_37 = out_24 +d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_24 +1+d_[4], vec_[22] +1);
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_105{
    105,
    67072,
    67096,
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
    117760,
    117768,
    true,
    block_106_fn
    };



static void block_107_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_107{
    107,
    67100,
    67104,
    true,
    block_107_fn
    };



static void block_108_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3, d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(2+d_[9], d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[8]+t_0);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[27] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_14 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_25 +2+d_[3]+t_2, vec_[3] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +3+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_25 +2, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[28] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_25 +2+d_[3], vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[28] +3);
	uint64_t out_15 = out_19 +1;
	uint64_t out_37 = out_19 +1+d_[9];
	uint64_t out_0 = out_15 -2+t_1;
	uint64_t out_3 = out_15 -2+d_[10]+t_2;


	vec_[14] = out_14;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_108{
    108,
    66916,
    66948,
    true,
    block_108_fn
    };



static void block_109_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = out_18 -1+d_[2];
	uint64_t out_17 = MAP_Explorer::max2(out_18 +1+d_[2], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +1);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_109{
    109,
    66152,
    66164,
    true,
    block_109_fn
    };



static void block_110_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[3], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[1]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3], vec_[1] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_0);
	uint64_t out_18 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_17 = out_38 -1;
	uint64_t out_3 = out_17;
	uint64_t out_1 = out_17;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[18] = out_18;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[3] = out_3;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_110{
    110,
    66168,
    66184,
    true,
    block_110_fn
    };



static void block_111_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[15] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[18] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]+t_0);
	uint64_t out_3 = out_28;
	uint64_t out_12 = MAP_Explorer::max2(out_28 , vec_[27] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +1, vec_[19] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[13] +2);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_0 = out_1 -1;


	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_111{
    111,
    66188,
    66208,
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
    66212,
    66216,
    true,
    block_112_fn
    };



static void block_113_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[11], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(t_1, t_0);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, t_0);
	uint64_t t_4 = MAP_Explorer::max2(3+t_2, d_[9]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(2+d_[11], d_[9]);
	uint64_t t_6 = MAP_Explorer::max2(2+t_3, t_4);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +5);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +4);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +5);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_27 = out_29 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_29 +d_[5]+d_[13]+t_4, vec_[12] +1+d_[13]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[13]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +3+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[13]+t_5);
	uint64_t out_5 = MAP_Explorer::max2(out_29 +1+d_[5]+t_6, vec_[12] +2+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +3+t_6);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_5);
	uint64_t out_13 = MAP_Explorer::max2(out_29 +1+d_[5], vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_29 +1+d_[5]+t_0, vec_[12] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_29 , vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_29 +2+d_[5]+t_2, vec_[12] +3+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +4+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[11]);
	uint64_t out_38 = MAP_Explorer::max2(out_29 +2+d_[5]+t_3, vec_[12] +3+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[11]);
	uint64_t out_14 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_25 = out_27 -1;


	vec_[24] = out_24;
	vec_[29] = out_29;
	vec_[27] = out_27;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[25] = out_25;
}

extern const MAP_Explorer::Block block_113{
    113,
    66220,
    66264,
    true,
    block_113_fn
    };



static void block_115_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +5);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +5);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_14 = out_26 -3;
	uint64_t out_37 = out_26 +1+d_[5];
	uint64_t out_38 = out_26 +2+d_[5];
	uint64_t out_23 = out_38;
	uint64_t out_22 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_14 +4;
	uint64_t out_12 = out_13 -2;
	uint64_t out_4 = out_12 +4+d_[5];
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[26] = out_26;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_115{
    115,
    66268,
    66300,
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
    109844,
    109848,
    true,
    block_116_fn
    };



static void block_117_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+t_0, vec_[24] );
	uint64_t out_3 = MAP_Explorer::max2(out_37 -1+d_[4]+d_[6]+d_[8], vec_[24] +1+d_[8]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_1, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
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

extern const MAP_Explorer::Block block_117{
    117,
    109852,
    109872,
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
    110032,
    110040,
    true,
    block_118_fn
    };



static void block_119_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(3+d_[5], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[7]+t_0, vec_[3] +1+d_[7]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[7]+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+d_[5]+d_[7]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+d_[7]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_12 +1, vec_[15] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +1+d_[5], vec_[15] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[5]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[9];


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_119{
    119,
    110672,
    110700,
    true,
    block_119_fn
    };



static void block_120_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[3];


	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_120{
    120,
    117468,
    117480,
    true,
    block_120_fn
    };



static void block_121_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_121{
    121,
    117484,
    117488,
    true,
    block_121_fn
    };



static void block_122_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +4+d_[0]);
	uint64_t out_3 = out_5;
	uint64_t out_4 = out_5 +2+d_[3];
	uint64_t out_37 = out_5 +d_[3];
	uint64_t out_38 = out_5 +1+d_[3];
	uint64_t out_14 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;


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

extern const MAP_Explorer::Block block_122{
    122,
    117492,
    117512,
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
    110704,
    110708,
    true,
    block_123_fn
    };



static void block_124_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +4+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_12;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_12 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_124{
    124,
    110712,
    110724,
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
    110044,
    110044,
    true,
    block_125_fn
    };



static void block_126_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +5);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_0);
	uint64_t out_19 = out_37 +1;
	uint64_t out_38 = out_37 +d_[5];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_19 +d_[5];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_126{
    126,
    110076,
    110096,
    true,
    block_126_fn
    };



static void block_127_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +6+t_0, vec_[3] +5+d_[3]);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +6+t_0);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +5+d_[3]);
	uint64_t out_22 = out_23 -1;
	uint64_t out_37 = out_23 -1+d_[8];
	uint64_t out_38 = out_23 +d_[8];
	uint64_t out_24 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_22 -1;
	uint64_t out_12 = out_13 -1;
	uint64_t out_4 = out_12 +4+d_[8];
	uint64_t out_2 = out_4;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[23] = out_23;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[13] = out_13;
	vec_[12] = out_12;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_127{
    127,
    109876,
    109912,
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
    91712,
    91720,
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
    91552,
    91556,
    true,
    block_129_fn
    };



static void block_130_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[2]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[6]+t_0, vec_[1] +3+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[6]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[3], vec_[1] +4+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_0);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+t_0);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_14 = out_37 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_130{
    130,
    91560,
    91580,
    true,
    block_130_fn
    };



static void block_131_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]);
	uint64_t out_12 = out_37;
	uint64_t out_13 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_6 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_13 -2;
	uint64_t out_4 = out_5 +2+d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_131{
    131,
    91584,
    91600,
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
    78796,
    78796,
    true,
    block_132_fn
    };



static void block_133_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_3 , vec_[4] +1);
	uint64_t out_17 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_133{
    133,
    78804,
    78816,
    true,
    block_133_fn
    };



static void block_134_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[5]+d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(d_[10], d_[7]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[5]+d_[7]+d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+d_[9]);
	uint64_t t_6 = MAP_Explorer::max2(d_[18], d_[13]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[13]+d_[15]);
	uint64_t t_8 = MAP_Explorer::max2(d_[18], d_[15]);
	uint64_t t_9 = MAP_Explorer::max2(2+t_7, d_[13]+d_[15]+d_[17]);
	uint64_t t_10 = MAP_Explorer::max2(2+t_8, d_[15]+d_[17]);
	uint64_t t_11 = MAP_Explorer::max2(2, d_[17]);
	uint64_t t_12 = MAP_Explorer::max2(d_[23], d_[22]);
	uint64_t t_13 = MAP_Explorer::max2(d_[31], d_[26]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_13, d_[26]+d_[28]);
	uint64_t t_15 = MAP_Explorer::max2(1+t_14, d_[26]+d_[28]+d_[30]);
	uint64_t t_16 = MAP_Explorer::max2(d_[39], d_[34]);
	uint64_t t_17 = MAP_Explorer::max2(1+t_16, d_[34]+d_[36]);
	uint64_t t_18 = MAP_Explorer::max2(1+t_17, d_[34]+d_[36]+d_[38]);

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+d_[11]+t_0+t_4+t_9, vec_[1] +3+d_[3]+d_[11]+t_0+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[1]+d_[3]+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1+d_[1]+d_[3]+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+d_[1]+d_[3]+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+d_[1]+d_[3]+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+d_[3]+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+d_[11]+t_5+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[26] +2+d_[9]+d_[11]+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[27] +2+d_[11]+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[28] +2+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[29] +2+t_10);
	out_23 = MAP_Explorer::max2(out_23, vec_[30] +2+d_[11]+t_4+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[31] +2+t_11);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[3]+d_[11]+t_0+t_4+t_9);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+d_[11]+t_0+t_4+t_7, vec_[1] +3+d_[3]+d_[11]+t_0+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+d_[1]+d_[3]+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+d_[1]+d_[3]+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+d_[1]+d_[3]+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[22] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[23] +2+d_[1]+d_[3]+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[24] +2+d_[3]+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[25] +2+d_[11]+t_5+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +2+d_[9]+d_[11]+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[27] +2+d_[11]+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[28] +2+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[29] +2+t_8);
	out_30 = MAP_Explorer::max2(out_30, vec_[30] +2+d_[11]+t_4+t_7);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[3]+d_[11]+t_0+t_4+t_7);
	uint64_t out_18 = out_23;
	uint64_t out_38 = MAP_Explorer::max2(out_23 +4+d_[24]+d_[32]+t_12+t_15+t_18, vec_[4] +4+d_[24]+d_[32]+t_15+t_18);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_24 = out_37 +1;
	uint64_t out_1 = out_24;
	uint64_t out_3 = out_24 -2+d_[40];


	vec_[23] = out_23;
	vec_[30] = out_30;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[24] = out_24;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_134{
    134,
    78044,
    78140,
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
    79172,
    79176,
    true,
    block_138_fn
    };



static void block_141_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[25] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_21 +2, vec_[4] +3);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +3);
	uint64_t out_3 = out_26 -2+d_[2];
	uint64_t out_25 = out_26 +3+d_[5];
	uint64_t out_27 = out_26 +d_[5];
	uint64_t out_29 = out_26 +1+d_[5];
	uint64_t out_37 = out_26 +2+d_[5]+d_[9];
	uint64_t out_38 = out_26 +4+d_[5]+d_[9];
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_22 = out_25 -1;
	uint64_t out_19 = out_22 +1+d_[9];
	uint64_t out_1 = out_19;


	vec_[21] = out_21;
	vec_[26] = out_26;
	vec_[3] = out_3;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_141{
    141,
    78240,
    78276,
    true,
    block_141_fn
    };



static void block_142_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], 2);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(t_0, 3);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[2], vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+d_[2]+t_1, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+t_2);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+t_0, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_2 = out_4;
	uint64_t out_3 = out_19 -1;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_142{
    142,
    78280,
    78304,
    true,
    block_142_fn
    };



static void block_143_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +2);
	uint64_t out_1 = out_37 +t_0;
	uint64_t out_30 = out_37 +d_[2];
	uint64_t out_38 = out_37 +1+t_0;
	uint64_t out_28 = out_30;
	uint64_t out_3 = out_30;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[1] = out_1;
	vec_[30] = out_30;
	vec_[38] = out_38;
	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_143{
    143,
    80128,
    80144,
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
    80148,
    80148,
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
    80152,
    80152,
    true,
    block_145_fn
    };



static void block_146_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[2];


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_146{
    146,
    84692,
    84700,
    true,
    block_146_fn
    };



static void block_147_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[4], vec_[17] +2+d_[4]);
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
    93104,
    93128,
    true,
    block_147_fn
    };



static void block_148_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(d_[13], d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[8]+d_[10]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[8]+d_[10]+d_[12]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +1, vec_[14] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +4+d_[6]+t_0+t_3, vec_[4] +3+d_[6]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +5+d_[6]+t_0+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +3+d_[4]+d_[6]+t_3);
	uint64_t out_31 = out_37;
	uint64_t out_26 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[17];
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_26 -2;
	uint64_t out_21 = out_22;
	uint64_t out_3 = out_22;
	uint64_t out_1 = out_22 +1+d_[17];
	uint64_t out_0 = out_1 -1;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[31] = out_31;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[21] = out_21;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_148{
    148,
    84704,
    84752,
    true,
    block_148_fn
    };



static void block_149_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_149{
    149,
    84760,
    84760,
    true,
    block_149_fn
    };



static void block_150_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_150{
    150,
    78404,
    78408,
    true,
    block_150_fn
    };



static void block_151_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_151{
    151,
    78416,
    78424,
    true,
    block_151_fn
    };



static void block_152_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[27] );
	out_0 = MAP_Explorer::max2(out_0, vec_[31] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[27] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[31] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_152{
    152,
    78428,
    78432,
    true,
    block_152_fn
    };



static void block_153_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_153{
    153,
    78436,
    78440,
    true,
    block_153_fn
    };



static void block_154_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_154{
    154,
    78492,
    78492,
    true,
    block_154_fn
    };



static void block_155_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_155{
    155,
    78544,
    78548,
    true,
    block_155_fn
    };



static void block_156_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_26 -1;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_156{
    156,
    78552,
    78556,
    true,
    block_156_fn
    };



static void block_157_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_157{
    157,
    78560,
    78564,
    true,
    block_157_fn
    };



static void block_158_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+d_[9], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]+t_0);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[2]);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_3 = out_19 -1+d_[10]+t_3;
	uint64_t out_37 = out_19 +t_2;
	uint64_t out_38 = MAP_Explorer::max2(out_19 +1+t_3, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[16] = out_16;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_158{
    158,
    78568,
    78600,
    true,
    block_158_fn
    };



static void block_159_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_32 -1;
	uint64_t out_1 = out_38 -1;


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_159{
    159,
    78604,
    78612,
    true,
    block_159_fn
    };



static void block_160_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_160{
    160,
    78624,
    78628,
    true,
    block_160_fn
    };



static void block_161_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[31] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_10 +1+t_0, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[10] = out_10;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_161{
    161,
    78632,
    78648,
    true,
    block_161_fn
    };



static void block_162_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_162{
    162,
    81568,
    81580,
    true,
    block_162_fn
    };



static void block_199_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_199{
    199,
    90932,
    90932,
    true,
    block_199_fn
    };



static void block_211_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_211{
    211,
    81584,
    81584,
    true,
    block_211_fn
    };



static void block_212_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_38 -1+d_[2];
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_212{
    212,
    78652,
    78660,
    true,
    block_212_fn
    };



static void block_213_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_30 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_3 = out_18;


	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[30] = out_30;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_213{
    213,
    78676,
    78688,
    true,
    block_213_fn
    };



static void block_214_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_214{
    214,
    78168,
    78172,
    true,
    block_214_fn
    };



static void block_215_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_215{
    215,
    78692,
    78696,
    true,
    block_215_fn
    };



static void block_216_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_216{
    216,
    78700,
    78700,
    true,
    block_216_fn
    };



static void block_217_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_217{
    217,
    85776,
    85788,
    true,
    block_217_fn
    };



static void block_218_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_218{
    218,
    91824,
    91828,
    true,
    block_218_fn
    };



static void block_219_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_219{
    219,
    91832,
    91836,
    true,
    block_219_fn
    };



static void block_222_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_222{
    222,
    91852,
    91856,
    true,
    block_222_fn
    };



static void block_223_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_223{
    223,
    91876,
    91880,
    true,
    block_223_fn
    };



static void block_224_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_224{
    224,
    92004,
    92004,
    true,
    block_224_fn
    };



static void block_225_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_225{
    225,
    91104,
    91112,
    true,
    block_225_fn
    };



static void block_226_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_27 = out_38 -1;
	uint64_t out_1 = out_27;
	uint64_t out_0 = out_27 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[27] = out_27;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_226{
    226,
    90940,
    90948,
    true,
    block_226_fn
    };



static void block_227_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
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

extern const MAP_Explorer::Block block_227{
    227,
    90828,
    90836,
    true,
    block_227_fn
    };



static void block_228_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[4]+t_0, vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[2]+d_[4]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +1+d_[3], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_12 +1, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_12 -1;
	uint64_t out_1 = out_38 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_228{
    228,
    89960,
    89976,
    true,
    block_228_fn
    };



static void block_229_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_229{
    229,
    89980,
    89984,
    true,
    block_229_fn
    };



static void block_230_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_230{
    230,
    89988,
    89992,
    true,
    block_230_fn
    };



static void block_231_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +2, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	uint64_t out_12 = out_37;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[4];
	uint64_t out_5 = out_6;
	uint64_t out_3 = out_6;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_231{
    231,
    90016,
    90032,
    true,
    block_231_fn
    };



static void block_236_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_15;
	uint64_t out_17 = MAP_Explorer::max2(out_15 , vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[5], vec_[23] +1);
	uint64_t out_16 = out_37;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[19] = out_19;
	vec_[3] = out_3;
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

extern const MAP_Explorer::Block block_236{
    236,
    89756,
    89776,
    true,
    block_236_fn
    };



static void block_237_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[3]+d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(d_[13], d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(3+d_[17]+t_2, d_[9]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_6 = MAP_Explorer::max2(out_19 , vec_[6] +1);
	uint64_t out_12 = MAP_Explorer::max2(out_19 +3+d_[7]+t_1+t_2, vec_[5] +2+d_[13]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +4+d_[7]+t_1+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[7]+t_1+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+d_[5]+d_[7]+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+d_[7]+t_2);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+t_2);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +4+d_[7]+t_1+t_2, vec_[5] +3+d_[13]);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +5+d_[7]+t_1+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +4+d_[7]+t_1+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +4+d_[5]+d_[7]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +4+d_[7]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +4+t_2);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +2+d_[7]+d_[9]+t_1, vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+d_[7]+d_[9]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[7]+d_[9]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+d_[5]+d_[7]+d_[9]);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+d_[7]+d_[9]);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[9]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +5+d_[7]+t_1+t_2, vec_[5] +4+d_[13]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +6+d_[7]+t_1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +5+d_[7]+t_1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +5+d_[5]+d_[7]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +5+d_[7]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +5+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[7]+t_1+t_3, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +5+d_[13]+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +4+d_[7]+t_1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[7]+t_1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[5]+d_[7]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+d_[17]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+d_[7]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+t_3);
	uint64_t out_22 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_18 -1+d_[11];
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[17], vec_[17] );
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);


	vec_[19] = out_19;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_237{
    237,
    62416,
    62464,
    true,
    block_237_fn
    };



static void block_238_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[5]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[12]+t_0, t_1);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, t_1);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_18 +3+d_[3]+d_[5], vec_[3] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +4+d_[5]);
	uint64_t out_15 = MAP_Explorer::max2(out_18 +2+d_[3], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +3);
	uint64_t out_16 = MAP_Explorer::max2(out_18 +5+d_[3]+t_0, vec_[3] +4+t_0);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +3+d_[8]);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +5+t_0);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +6+t_0);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +2);
	uint64_t out_17 = MAP_Explorer::max2(out_18 +4+d_[3]+t_0, vec_[3] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[8]);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +4+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +5+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1, vec_[19] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_18 +5+d_[3]+t_1, vec_[3] +4+t_1);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +5+d_[8]);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +5+t_1);
	out_23 = MAP_Explorer::max2(out_23, vec_[19] +6+t_1);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +7+d_[3]+t_2, vec_[3] +6+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +6+d_[8]+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +7+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +8+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +4+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +5+d_[12]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +7+d_[3]+t_3, vec_[3] +6+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +7+d_[8]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +7+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +8+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +5+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +6+d_[12]);
	uint64_t out_13 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_5 = out_12 +1;
	uint64_t out_14 = out_37 -1;
	uint64_t out_22 = out_23 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_238{
    238,
    62468,
    62524,
    true,
    block_238_fn
    };



static void block_239_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(5+d_[7], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(4+d_[7]+d_[13], d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[10]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(d_[13], d_[10]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[10]+d_[12]+t_0, vec_[3] +d_[10]+d_[12]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[10]+d_[12]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +4+d_[7]+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[10]+d_[12]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[16] +5+d_[7]+d_[10]+d_[12]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +4+d_[10]+d_[12]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[2]+t_2, vec_[3] +1+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +5+d_[7]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +6+d_[7]+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +5+t_3);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +2+d_[2], vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_15 +2, vec_[14] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[17] +1);
	uint64_t out_18 = MAP_Explorer::max2(out_6 +1, vec_[15] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_15 +3+d_[7], vec_[14] +3+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[17] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+d_[2]+t_1, vec_[3] +1+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +4+d_[7]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +5+d_[7]+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+d_[13]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_19 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_15 +1, vec_[14] +1);


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_239{
    239,
    63640,
    63680,
    true,
    block_239_fn
    };



static void block_240_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_240{
    240,
    7156,
    7164,
    true,
    block_240_fn
    };



static void block_241_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_241{
    241,
    7168,
    7176,
    true,
    block_241_fn
    };



static void block_243_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
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

extern const MAP_Explorer::Block block_243{
    243,
    7196,
    7200,
    true,
    block_243_fn
    };



static void block_244_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_244{
    244,
    63684,
    63688,
    true,
    block_244_fn
    };



static void block_245_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_245{
    245,
    63692,
    63704,
    true,
    block_245_fn
    };



static void block_246_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_246{
    246,
    89780,
    89784,
    true,
    block_246_fn
    };



static void block_247_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_247{
    247,
    89748,
    89752,
    true,
    block_247_fn
    };



static void block_250_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_250{
    250,
    90840,
    90840,
    true,
    block_250_fn
    };



static void block_251_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_251{
    251,
    85792,
    85792,
    true,
    block_251_fn
    };



static void block_252_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +4);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +5+d_[0]);
	uint64_t out_19 = out_24;
	uint64_t out_23 = out_24 -1;
	uint64_t out_25 = out_24 +1+d_[4];
	uint64_t out_26 = out_24 +2+d_[4];
	uint64_t out_27 = out_24 +3+d_[4];
	uint64_t out_28 = out_24 +4+d_[4];
	uint64_t out_30 = out_24 +5+d_[4]+d_[8];
	uint64_t out_31 = out_24 +6+d_[4]+d_[8];
	uint64_t out_37 = out_24 +4+d_[4]+d_[8];
	uint64_t out_38 = MAP_Explorer::max2(out_24 +6+d_[4]+d_[8], vec_[4] +1);
	uint64_t out_29 = out_37;
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[24] = out_24;
	vec_[19] = out_19;
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
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_252{
    252,
    78704,
    78748,
    true,
    block_252_fn
    };



static void block_253_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_14 -1;
	uint64_t out_37 = out_14 +d_[3];
	uint64_t out_38 = out_14 +1+d_[3];
	uint64_t out_22 = out_38;
	uint64_t out_13 = out_37;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +4+d_[3];
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_253{
    253,
    78756,
    78780,
    true,
    block_253_fn
    };



static void block_254_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_254{
    254,
    62304,
    62312,
    true,
    block_254_fn
    };



static void block_255_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_255{
    255,
    43408,
    43408,
    true,
    block_255_fn
    };



static void block_256_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_256{
    256,
    3012,
    3012,
    true,
    block_256_fn
    };



static void block_257_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_257{
    257,
    43412,
    43416,
    true,
    block_257_fn
    };



static void block_258_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_258{
    258,
    3016,
    3016,
    true,
    block_258_fn
    };



static void block_259_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_259{
    259,
    1712,
    1712,
    true,
    block_259_fn
    };



static void block_260_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_260{
    260,
    2620,
    2620,
    true,
    block_260_fn
    };



static void block_261_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_261{
    261,
    43420,
    43420,
    true,
    block_261_fn
    };



static void block_262_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_262{
    262,
    3020,
    3020,
    true,
    block_262_fn
    };



static void block_263_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[9], d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[4]+d_[6]+d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]);
	uint64_t t_5 = MAP_Explorer::max2(d_[17], d_[12]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_5, d_[12]+d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(d_[17], d_[14]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[12]+d_[14]+d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, d_[14]+d_[16]);
	uint64_t t_10 = MAP_Explorer::max2(d_[25], d_[20]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, d_[20]+d_[22]);
	uint64_t t_12 = MAP_Explorer::max2(d_[25], d_[22]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_11, d_[20]+d_[22]+d_[24]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_12, d_[22]+d_[24]);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13, vec_[1] +2+d_[1]+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[18]+d_[26]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[18]+d_[26]+t_9+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[16]+d_[18]+d_[26]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[18]+d_[26]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[26]+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[10]+d_[18]+d_[26]+t_4+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[26]+t_14);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +1+d_[24]+d_[26]);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[8]+d_[10]+d_[18]+d_[26]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +1+d_[10]+d_[18]+d_[26]+t_8+t_13);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +1+d_[26]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[10]+d_[18]+d_[26]+t_3+t_8+t_13);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13, vec_[1] +3+d_[1]+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +3+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[4] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+d_[18]+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +3+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+d_[18]+t_9+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2+d_[16]+d_[18]+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +2+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+d_[10]+d_[18]+t_3+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+d_[18]+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[10]+d_[18]+t_4+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+t_14);
	out_26 = MAP_Explorer::max2(out_26, vec_[28] +2+d_[24]);
	out_26 = MAP_Explorer::max2(out_26, vec_[29] +2+d_[8]+d_[10]+d_[18]+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[30] +2+d_[10]+d_[18]+t_8+t_13);
	out_26 = MAP_Explorer::max2(out_26, vec_[31] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[10]+d_[18]+t_3+t_8+t_13);
	uint64_t out_23 = out_26 +2;
	uint64_t out_29 = out_26 +3+d_[30];
	uint64_t out_30 = out_26 +4+d_[30];
	uint64_t out_37 = out_26 +5+d_[30]+d_[34];
	uint64_t out_38 = out_26 +6+d_[30]+d_[34];
	uint64_t out_15 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_22 = out_23 -1;
	uint64_t out_16 = out_22 +4+d_[30];
	uint64_t out_5 = out_16 +2+d_[34];
	uint64_t out_2 = out_5;


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[26] = out_26;
	vec_[23] = out_23;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[22] = out_22;
	vec_[16] = out_16;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_263{
    263,
    812,
    904,
    true,
    block_263_fn
    };



static void block_1251_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +6+d_[0]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_23 = out_22 +d_[4];
	uint64_t out_24 = out_22 +1+d_[4];
	uint64_t out_25 = out_22 +2+d_[4];
	uint64_t out_26 = out_22 +3+d_[4];
	uint64_t out_27 = out_22 +3+d_[4]+d_[8];
	uint64_t out_28 = out_22 +4+d_[4]+d_[8];
	uint64_t out_29 = out_22 +5+d_[4]+d_[8];
	uint64_t out_30 = out_22 +6+d_[4]+d_[8];
	uint64_t out_31 = out_22 +6+d_[4]+d_[8]+d_[12];
	uint64_t out_38 = MAP_Explorer::max2(out_22 +7+d_[4]+d_[8]+d_[12], vec_[4] +2);
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_31;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_14 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_5 = out_12 -1;
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[28] = out_28;
	vec_[29] = out_29;
	vec_[30] = out_30;
	vec_[31] = out_31;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_1251{
    1251,
    1648,
    1708,
    true,
    block_1251_fn
    };


} // namespace CV32E40P_DSE