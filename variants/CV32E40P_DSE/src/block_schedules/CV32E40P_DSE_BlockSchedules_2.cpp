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



static void block_847_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_847{
    847,
    57456,
    57460,
    true,
    block_847_fn
    };



static void block_848_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_848{
    848,
    57512,
    57512,
    true,
    block_848_fn
    };



static void block_849_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_849{
    849,
    57564,
    57568,
    true,
    block_849_fn
    };



static void block_850_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_850{
    850,
    57572,
    57576,
    true,
    block_850_fn
    };



static void block_851_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_851{
    851,
    57580,
    57584,
    true,
    block_851_fn
    };



static void block_852_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6]+t_0, d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(d_[6]+d_[8]+t_0, 1+d_[4]);
	uint64_t t_4 = MAP_Explorer::max2(d_[11]+t_0, t_2);
	uint64_t t_5 = MAP_Explorer::max2(d_[11], d_[6]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, t_3);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[6]+d_[8]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[4]);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[31] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_16 +1+d_[10]+t_3, vec_[13] +1+d_[6]+d_[8]+d_[10]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[6]+d_[8]+d_[10]+t_1);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +2+t_6, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_1+t_7);
	out_17 = MAP_Explorer::max2(out_17, vec_[29] +2+t_1+t_7);
	uint64_t out_19 = MAP_Explorer::max2(out_16 +1+d_[4], vec_[13] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[29] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +2+t_4, vec_[13] +2+t_1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +2+t_1+t_5);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +2+t_8, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +3+t_1+t_7);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_852{
    852,
    57588,
    57620,
    true,
    block_852_fn
    };



static void block_853_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_13 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[26] );
	uint64_t out_33 = MAP_Explorer::max2(out_37 +1, vec_[26] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[13] = out_13;
	vec_[0] = out_0;
	vec_[33] = out_33;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_853{
    853,
    57624,
    57632,
    true,
    block_853_fn
    };



static void block_854_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_854{
    854,
    57644,
    57648,
    true,
    block_854_fn
    };



static void block_855_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_32 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_32 = MAP_Explorer::max2(out_32, vec_[2] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[30] +1);
	out_32 = MAP_Explorer::max2(out_32, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_32 +3, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_32 +1+t_0, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[32] = out_32;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_855{
    855,
    57652,
    57668,
    true,
    block_855_fn
    };



static void block_856_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[2], vec_[1] +2+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[2]);
	uint64_t out_15 = out_16;
	uint64_t out_3 = out_16;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[25] +1);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_856{
    856,
    60504,
    60516,
    true,
    block_856_fn
    };



static void block_869_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_869{
    869,
    60520,
    60520,
    true,
    block_869_fn
    };



static void block_870_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_870{
    870,
    57672,
    57680,
    true,
    block_870_fn
    };



static void block_871_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_13 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_29 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
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

extern const MAP_Explorer::Block block_871{
    871,
    57696,
    57708,
    true,
    block_871_fn
    };



static void block_872_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_872{
    872,
    57188,
    57192,
    true,
    block_872_fn
    };



static void block_873_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_873{
    873,
    57712,
    57716,
    true,
    block_873_fn
    };



static void block_874_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_874{
    874,
    57720,
    57720,
    true,
    block_874_fn
    };



static void block_875_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_16 = out_38;
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_875{
    875,
    64844,
    64856,
    true,
    block_875_fn
    };



static void block_876_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_876{
    876,
    64860,
    64860,
    true,
    block_876_fn
    };



static void block_877_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +5);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +6+d_[0]+d_[1]);
	uint64_t out_22 = out_23 -2;
	uint64_t out_24 = out_23 +d_[5];
	uint64_t out_25 = out_23 +2+d_[5];
	uint64_t out_26 = out_23 +3+d_[5];
	uint64_t out_27 = out_23 +3+d_[5]+d_[9];
	uint64_t out_28 = out_23 +4+d_[5]+d_[9];
	uint64_t out_29 = out_23 +5+d_[5]+d_[9];
	uint64_t out_30 = out_23 +6+d_[5]+d_[9];
	uint64_t out_31 = out_23 +6+d_[5]+d_[9]+d_[13];
	uint64_t out_37 = out_23 +4+d_[5]+d_[9]+d_[13];
	uint64_t out_38 = MAP_Explorer::max2(out_23 +6+d_[5]+d_[9]+d_[13], vec_[4] +1);
	uint64_t out_19 = out_24;
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_13 = out_22 -1;


	vec_[23] = out_23;
	vec_[22] = out_22;
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
	vec_[13] = out_13;
}

extern const MAP_Explorer::Block block_877{
    877,
    57724,
    57780,
    true,
    block_877_fn
    };



static void block_878_fn(uint64_t* vec_, uint8_t* d_){


    
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
	uint64_t out_14 = out_38;
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
	vec_[14] = out_14;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_878{
    878,
    57788,
    57804,
    true,
    block_878_fn
    };



static void block_883_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_883{
    883,
    98308,
    98312,
    true,
    block_883_fn
    };



static void block_884_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_884{
    884,
    98104,
    98116,
    true,
    block_884_fn
    };



static void block_894_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_894{
    894,
    23092,
    23092,
    true,
    block_894_fn
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
    52488,
    52528,
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
    52560,
    52584,
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
    52588,
    52604,
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
    53464,
    53468,
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
    53484,
    53484,
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
    52608,
    52608,
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
    52612,
    52632,
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
    22172,
    22176,
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


    
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_14 = out_15 +2;
	uint64_t out_37 = out_15 +1+d_[5];
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+d_[5], vec_[5] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[6];


	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_12{
    12,
    49564,
    49588,
    true,
    block_12_fn
    };



static void block_13_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[6], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[6], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(d_[13], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[8]+d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(d_[13], d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[8]+d_[10]+d_[12]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[10]+d_[12]);
	uint64_t t_8 = MAP_Explorer::max2(d_[19], d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(3+t_8, d_[16]);
	uint64_t t_10 = MAP_Explorer::max2(d_[22]+t_9, 1+d_[16]);
	uint64_t t_11 = MAP_Explorer::max2(2+d_[25]+t_8, t_9);
	uint64_t t_12 = MAP_Explorer::max2(1+t_11, t_10);
	uint64_t t_13 = MAP_Explorer::max2(d_[25], d_[22]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_10 = MAP_Explorer::max2(out_6 +2+t_1, vec_[3] +1+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[16] +2+t_1);
	out_10 = MAP_Explorer::max2(out_10, vec_[17] +2+t_2);
	uint64_t out_16 = MAP_Explorer::max2(out_10 +2+d_[14]+t_6+t_8, vec_[14] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[15] +3+d_[14]+t_6+t_8);
	out_16 = MAP_Explorer::max2(out_16, vec_[18] +3+d_[14]+t_7+t_8);
	out_16 = MAP_Explorer::max2(out_16, vec_[19] +3+d_[12]+d_[14]+t_8);
	out_16 = MAP_Explorer::max2(out_16, vec_[20] +3+d_[14]+t_8);
	out_16 = MAP_Explorer::max2(out_16, vec_[21] +3+t_8);
	uint64_t out_17 = MAP_Explorer::max2(out_10 +1+d_[14]+d_[16]+t_6, vec_[15] +2+d_[14]+d_[16]+t_6);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+d_[14]+d_[16]+t_7);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +2+d_[12]+d_[14]+d_[16]);
	out_17 = MAP_Explorer::max2(out_17, vec_[20] +2+d_[14]+d_[16]);
	out_17 = MAP_Explorer::max2(out_17, vec_[21] +2+d_[16]);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +2, vec_[5] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_10 +2+d_[14]+t_6+t_11, vec_[5] +1+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3+d_[25]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +3+d_[14]+t_6+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3+d_[14]+t_7+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +3+d_[12]+d_[14]+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[20] +3+d_[14]+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +3+t_11);
	uint64_t out_15 = out_17;
	uint64_t out_0 = out_38 -1;
	uint64_t out_14 = out_16 +1;
	uint64_t out_3 = MAP_Explorer::max2(out_10 +1+d_[14]+d_[24]+t_6+t_10, vec_[5] +1+d_[22]+d_[24]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +3+d_[22]+d_[24]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[14]+d_[24]+t_6+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[14]+d_[24]+t_7+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +2+d_[12]+d_[14]+d_[24]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[20] +2+d_[14]+d_[24]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +2+d_[24]+t_10);
	uint64_t out_5 = MAP_Explorer::max2(out_10 +2+d_[14]+t_6+t_12, vec_[5] +2+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +4+t_13);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[14]+t_6+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +3+d_[14]+t_7+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[19] +3+d_[12]+d_[14]+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[20] +3+d_[14]+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[21] +3+t_12);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[10] = out_10;
	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_13{
    13,
    50848,
    50912,
    true,
    block_13_fn
    };



static void block_14_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(3, d_[8]);
	uint64_t t_6 = MAP_Explorer::max2(2+d_[13], d_[8]);
	uint64_t t_7 = MAP_Explorer::max2(2+t_6, d_[12]+t_5);
	uint64_t t_8 = MAP_Explorer::max2(1+d_[13], d_[12]);
	uint64_t t_9 = MAP_Explorer::max2(2, d_[12]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_3+t_7, vec_[3] +1+t_3+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_3+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_4+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[6]+t_7);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +4+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[16] +3+t_8);
	out_5 = MAP_Explorer::max2(out_5, vec_[17] +2+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_7);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+t_3, vec_[3] +1+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_3);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[6]);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2);
	uint64_t out_22 = MAP_Explorer::max2(out_13 +1, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +3+t_3+t_6, vec_[3] +2+t_3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +3+t_3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+t_4+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+d_[6]+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +4+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +3+d_[13]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_6);
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
    67424,
    67464,
    true,
    block_14_fn
    };



static void block_16_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_0, vec_[1] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+t_0);
	uint64_t out_14 = out_37;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[6] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;
	uint64_t out_3 = out_5 -1+d_[3];


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_16{
    16,
    67468,
    67480,
    true,
    block_16_fn
    };



static void block_22_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(d_[10], d_[5]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[5]+d_[7]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3]+t_0, vec_[1] +3+d_[3]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[1]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[1]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+d_[1]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2+d_[1]+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]+t_0);
	uint64_t out_0 = out_37 -1+t_1;
	uint64_t out_3 = out_37 -1+d_[5]+d_[7]+d_[9];
	uint64_t out_38 = MAP_Explorer::max2(out_37 +t_2, vec_[12] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_22{
    22,
    67484,
    67504,
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
    67508,
    67512,
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
    67516,
    67516,
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
    73936,
    73940,
    true,
    block_25_fn
    };



static void block_26_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_26{
    26,
    50508,
    50512,
    true,
    block_26_fn
    };



static void block_27_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2, d_[3]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +t_0;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[4] +1);
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
    50520,
    50540,
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
    50544,
    50544,
    true,
    block_28_fn
    };



static void block_29_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(2+d_[11], d_[8]);
	uint64_t t_2 = MAP_Explorer::max2(d_[18], d_[14]);
	uint64_t t_3 = MAP_Explorer::max2(2+t_2, d_[14]+d_[16]);
	uint64_t t_4 = MAP_Explorer::max2(1+d_[18], d_[16]);
	uint64_t t_5 = MAP_Explorer::max2(5+d_[23], d_[19]);
	uint64_t t_6 = MAP_Explorer::max2(4+d_[23]+d_[29], d_[19]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[26]+t_5);
	uint64_t t_8 = MAP_Explorer::max2(d_[29], d_[26]);
	uint64_t t_9 = MAP_Explorer::max2(1+t_7, d_[26]+d_[28]+t_5);
	uint64_t t_10 = MAP_Explorer::max2(1+t_8, d_[26]+d_[28]);
	uint64_t t_11 = MAP_Explorer::max2(d_[37], d_[32]);
	uint64_t t_12 = MAP_Explorer::max2(1+t_11, d_[32]+d_[34]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_12, d_[32]+d_[34]+d_[36]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +5+d_[6]+t_0, vec_[3] +2+d_[4]+d_[6]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +3+d_[4]+d_[6]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[6]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_12 -1+d_[12]+d_[14]+t_1, vec_[22] +2+d_[12]+d_[14]);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[14]);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +d_[12]+t_1+t_3, vec_[4] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +3+d_[12]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +3+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +3+t_4);
	uint64_t out_37 = MAP_Explorer::max2(out_12 -1+d_[12]+d_[30]+t_1+t_3+t_9+t_12, vec_[4] +6+d_[23]+d_[30]+t_10+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[12]+d_[30]+t_3+t_9+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[30]+t_3+t_9+t_12);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[30]+t_4+t_9+t_12);
	uint64_t out_38 = MAP_Explorer::max2(out_12 -1+d_[12]+d_[30]+t_1+t_3+t_9+t_13, vec_[4] +6+d_[23]+d_[30]+t_10+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[12]+d_[30]+t_3+t_9+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[30]+t_3+t_9+t_13);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[30]+t_4+t_9+t_13);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = out_38 +d_[38];
	uint64_t out_16 = out_19 -1;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[40];
	uint64_t out_15 = out_16 +2;
	uint64_t out_14 = out_15 +1+d_[23];


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
    49840,
    49944,
    true,
    block_29_fn
    };



static void block_33_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[20], d_[15]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[15]+d_[17]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[15]+d_[17]+d_[19]);
	uint64_t t_3 = MAP_Explorer::max2(d_[28], d_[23]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[23]+d_[25]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_4, d_[23]+d_[25]+d_[27]);
	uint64_t t_6 = MAP_Explorer::max2(d_[36], d_[31]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[31]+d_[33]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_7, d_[31]+d_[33]+d_[35]);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +3);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_23 = out_24 +2;
	uint64_t out_16 = MAP_Explorer::max2(out_24 +6+d_[5]+d_[9], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +10+d_[5]+d_[9]+d_[13]+d_[21]+d_[29]+t_2+t_5+t_7, vec_[3] +1+d_[21]+d_[29]+t_2+t_5+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +5+d_[13]+d_[21]+d_[29]+t_2+t_5+t_7);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[21]+d_[29]+t_2+t_5+t_7);
	uint64_t out_38 = MAP_Explorer::max2(out_24 +10+d_[5]+d_[9]+d_[13]+d_[21]+d_[29]+t_2+t_5+t_8, vec_[3] +1+d_[21]+d_[29]+t_2+t_5+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +5+d_[13]+d_[21]+d_[29]+t_2+t_5+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[21]+d_[29]+t_2+t_5+t_8);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = out_38 +d_[37];
	uint64_t out_15 = out_16 +1;
	uint64_t out_22 = out_23 +1+d_[5];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[39];
	uint64_t out_13 = out_22 +2;
	uint64_t out_14 = out_15 +1+d_[13];
	uint64_t out_19 = out_22 +2+d_[9];


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[22] = out_22;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_33{
    33,
    49948,
    50056,
    true,
    block_33_fn
    };



static void block_34_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(d_[18], d_[13]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[13]+d_[15]);
	uint64_t t_3 = MAP_Explorer::max2(d_[18], d_[15]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[13]+d_[15]+d_[17]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[15]+d_[17]);
	uint64_t t_6 = MAP_Explorer::max2(d_[26], d_[21]);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, d_[21]+d_[23]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_7, d_[21]+d_[23]+d_[25]);
	uint64_t t_9 = MAP_Explorer::max2(d_[34], d_[29]);
	uint64_t t_10 = MAP_Explorer::max2(1+t_9, d_[29]+d_[31]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = out_19 +2;
	uint64_t out_15 = MAP_Explorer::max2(out_19 +3+d_[5], vec_[4] +2);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +3, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +7+d_[5]+d_[11]+d_[19]+d_[27]+t_0+t_4+t_8, vec_[3] +1+d_[9]+d_[11]+d_[19]+d_[27]+t_4+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +6+d_[11]+d_[19]+d_[27]+t_0+t_4+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[9]+d_[11]+d_[19]+d_[27]+t_4+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+d_[19]+d_[27]+t_5+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[19]+d_[27]+t_4+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[11]+d_[19]+d_[27]+t_4+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[9]+d_[11]+d_[19]+d_[27]+t_4+t_8);
	uint64_t out_0 = out_37 -1+t_9;
	uint64_t out_3 = out_37 -1+d_[29]+d_[31]+d_[33];
	uint64_t out_5 = out_37 +t_10;
	uint64_t out_14 = out_15 +2;
	uint64_t out_38 = out_37 +t_9;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_34{
    34,
    50060,
    50144,
    true,
    block_34_fn
    };



static void block_35_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(d_[11], d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[7]+d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(3+d_[12]+d_[16]+t_2, d_[7]+d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(3+d_[12]+d_[16]+t_3, d_[9]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +2+d_[5]+d_[7]+d_[9]+t_0, vec_[3] +1+d_[3]+d_[5]+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[3]+d_[5]+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+d_[5]+d_[7]+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+d_[3]+d_[5]+d_[7]+d_[9]);
	uint64_t out_22 = MAP_Explorer::max2(out_19 +5+d_[5]+d_[12]+t_0+t_2, vec_[3] +4+d_[3]+d_[5]+d_[12]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +5+d_[12]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +5+d_[3]+d_[5]+d_[12]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +5+d_[12]+t_3);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +5+d_[12]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +5+d_[5]+d_[12]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +5+d_[3]+d_[5]+d_[12]+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +3+d_[5]+t_0+t_4, vec_[3] +2+d_[3]+d_[5]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+d_[12]+d_[16]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3+d_[3]+d_[5]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +3+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[5]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+d_[3]+d_[5]+t_4);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_13 = out_22 -1;
	uint64_t out_24 = out_22 +1+d_[16];
	uint64_t out_37 = out_22 +d_[16];
	uint64_t out_23 = out_37;
	uint64_t out_6 = out_24;
	uint64_t out_3 = out_24;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_13 -1;


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[13] = out_13;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_35{
    35,
    50148,
    50204,
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
    73944,
    73944,
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
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	uint64_t out_16 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_37{
    37,
    67520,
    67532,
    true,
    block_37_fn
    };



static void block_38_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[10], d_[6]);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_16 +1;
	uint64_t out_18 = MAP_Explorer::max2(out_16 +2+d_[4], vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+t_0;
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_37 +d_[6];
	uint64_t out_3 = out_17 -1+d_[8];


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_38{
    38,
    67536,
    67568,
    true,
    block_38_fn
    };



static void block_39_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
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

extern const MAP_Explorer::Block block_39{
    39,
    67576,
    67584,
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
    67588,
    67592,
    true,
    block_40_fn
    };



static void block_41_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = out_14;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_41{
    41,
    68348,
    68356,
    true,
    block_41_fn
    };



static void block_42_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[8], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[8], d_[6]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +3+d_[1]+d_[2]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+d_[2]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+d_[2]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[2]+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_3 = out_19;
	uint64_t out_37 = MAP_Explorer::max2(out_19 , vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);
	uint64_t out_0 = out_12 -1;


	vec_[6] = out_6;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_42{
    42,
    81052,
    81084,
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
    81088,
    81092,
    true,
    block_43_fn
    };



static void block_44_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[2], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+t_0, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_19 +1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[18] = out_18;
}

extern const MAP_Explorer::Block block_44{
    44,
    81096,
    81104,
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
    81108,
    81112,
    true,
    block_45_fn
    };



static void block_46_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
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

extern const MAP_Explorer::Block block_46{
    46,
    81252,
    81260,
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
    81264,
    81272,
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
    98428,
    98452,
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
    98492,
    98516,
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
    98520,
    98524,
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
    99312,
    99348,
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
    99352,
    99356,
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
    99360,
    99372,
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
    98528,
    98528,
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
    98532,
    98576,
    true,
    block_57_fn
    };



static void block_58_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_1, d_[2]+d_[4]+d_[6]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[4]+d_[6]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[8]+d_[10]+t_3, vec_[3] +d_[8]+d_[10]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[8]+d_[10]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[6]+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+d_[10]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[8]+d_[10]+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[10]);
	uint64_t out_19 = MAP_Explorer::max2(out_6 +2+d_[8]+t_3, vec_[3] +1+d_[8]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+d_[8]+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[6]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+d_[8]+t_3);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[13], vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
	uint64_t out_2 = out_38;
	uint64_t out_22 = out_38 -1;
	uint64_t out_18 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_1 = out_22;
	uint64_t out_0 = out_22 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[22] = out_22;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_58{
    58,
    54928,
    54964,
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
    55096,
    55100,
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
    55104,
    55104,
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
    55108,
    55108,
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
    55112,
    55116,
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
    55120,
    55124,
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
    55128,
    55132,
    true,
    block_65_fn
    };



static void block_66_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[13] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +4+d_[0]);
	uint64_t out_19 = out_20 -2;
	uint64_t out_23 = out_20 +2+d_[4];
	uint64_t out_37 = out_20 +3+d_[4]+d_[8];
	uint64_t out_12 = MAP_Explorer::max2(out_20 +5+d_[4], vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_20 +5+d_[4]+d_[8], vec_[3] +2);
	uint64_t out_3 = out_12;
	uint64_t out_2 = out_38;
	uint64_t out_15 = out_19 +1;
	uint64_t out_16 = out_38 -1;
	uint64_t out_1 = out_16;
	uint64_t out_0 = out_16 -1;


	vec_[20] = out_20;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_66{
    66,
    55136,
    55172,
    true,
    block_66_fn
    };



static void block_67_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_12 = out_37;
	uint64_t out_3 = out_37;
	uint64_t out_21 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_21 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_67{
    67,
    55220,
    55232,
    true,
    block_67_fn
    };



static void block_68_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_3 = out_14;
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_68{
    68,
    55868,
    55872,
    true,
    block_68_fn
    };



static void block_69_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +d_[2], vec_[4] +1);
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
    55336,
    55348,
    true,
    block_69_fn
    };



static void block_70_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[3], 1+t_0);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_1, vec_[1] +3+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +2+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +2+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +2+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +2+t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[26] +2+d_[2]);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +3+d_[0]+t_1);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_0, vec_[1] +5+t_0);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +4+t_0);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +3+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +3+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +4+t_0);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +3+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +5+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3], vec_[1] +3+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[3]);
	uint64_t out_19 = out_26 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[13] +1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_70{
    70,
    55528,
    55544,
    true,
    block_70_fn
    };



static void block_71_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[3], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[1]);
	uint64_t t_2 = MAP_Explorer::max2(d_[9], d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(2, d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(1+d_[14], d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(t_5, t_4);
	uint64_t t_7 = MAP_Explorer::max2(1+t_6, t_4);
	uint64_t t_8 = MAP_Explorer::max2(1+t_7, t_4);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_0);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[3], vec_[1] +3+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +2);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[29] +2+d_[3]);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +3+d_[0]+d_[3]);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+t_3+t_4, vec_[24] +2+t_3+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[8]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+t_4);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +1+t_3+t_4, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_3+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+d_[8]+t_4);
	out_19 = MAP_Explorer::max2(out_19, vec_[27] +2+t_4);
	uint64_t out_25 = MAP_Explorer::max2(out_18 +2+t_3+t_7, vec_[4] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +3+t_3+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +3+d_[8]+t_7);
	out_25 = MAP_Explorer::max2(out_25, vec_[26] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[27] +3+t_7);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+t_3+t_6, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +3+t_3+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +3+d_[8]+t_6);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +3+t_6);
	uint64_t out_38 = MAP_Explorer::max2(out_18 +2+t_3+t_8, vec_[4] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_3+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +3+d_[8]+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +3+t_8);
	uint64_t out_24 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_25 -1;
	uint64_t out_1 = out_38 -1;


	vec_[18] = out_18;
	vec_[29] = out_29;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_71{
    71,
    55560,
    55608,
    true,
    block_71_fn
    };



static void block_72_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[37] = out_37;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_72{
    72,
    56604,
    56608,
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
    55632,
    55640,
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
    106468,
    106476,
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
    23452,
    23460,
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
    106480,
    106488,
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
    106492,
    106504,
    true,
    block_91_fn
    };



static void block_99_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +2);
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

extern const MAP_Explorer::Block block_99{
    99,
    55644,
    55652,
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
    55656,
    55660,
    true,
    block_100_fn
    };



static void block_101_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], 2);

	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_28 +3, vec_[3] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[25] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_28 +2+t_0, vec_[3] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[14] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_18 = out_37 +1;
	uint64_t out_3 = out_18 -1+d_[5];


	vec_[28] = out_28;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_101{
    101,
    55664,
    55688,
    true,
    block_101_fn
    };



static void block_102_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_102{
    102,
    56392,
    56400,
    true,
    block_102_fn
    };



static void block_103_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +1+d_[1]);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_4 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_4;
	uint64_t out_1 = out_4 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_103{
    103,
    56796,
    56800,
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
    56416,
    56420,
    true,
    block_104_fn
    };



static void block_105_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +3+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[27] +3+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[29] +3+d_[2]);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_19 = out_27 -1;
	uint64_t out_24 = MAP_Explorer::max2(out_27 +4+d_[6], vec_[25] +4);
	uint64_t out_25 = MAP_Explorer::max2(out_27 +2, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_27 +5+d_[6]+d_[10], vec_[22] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +5+d_[10]);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_15 = out_24 +1;
	uint64_t out_37 = out_24 +d_[10];
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[27] = out_27;
	vec_[19] = out_19;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_105{
    105,
    56424,
    56468,
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
    106496,
    106504,
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
    56472,
    56476,
    true,
    block_107_fn
    };



static void block_108_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[5], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(d_[8]+t_0, 1+d_[5]);
	uint64_t t_3 = MAP_Explorer::max2(1+d_[5]+d_[11], d_[4]);
	uint64_t t_4 = MAP_Explorer::max2(2+d_[11], d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, t_2);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[8]+t_1);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[27] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_25 = MAP_Explorer::max2(out_14 +1, vec_[24] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_25 +4+d_[5], vec_[3] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +4);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +4+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_25 +3+t_5, vec_[3] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +3+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 -2;
	uint64_t out_0 = MAP_Explorer::max2(out_25 +2+t_3, vec_[3] +1+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +1+t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[28] +2+t_3);
	uint64_t out_3 = MAP_Explorer::max2(out_25 +2+d_[10]+t_2, vec_[3] +1+d_[8]+d_[10]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[8]+d_[10]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +2+d_[10]+t_2);
	uint64_t out_18 = MAP_Explorer::max2(out_25 +2, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[28] +2);
	uint64_t out_15 = out_19 +1;


	vec_[14] = out_14;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[15] = out_15;
}

extern const MAP_Explorer::Block block_108{
    108,
    56480,
    56512,
    true,
    block_108_fn
    };



static void block_109_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]);
	uint64_t out_18 = out_37;
	uint64_t out_0 = out_37 -1+d_[3];
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +2);
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
    55716,
    55728,
    true,
    block_109_fn
    };



static void block_110_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[1]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +4+d_[0]);
	uint64_t out_17 = out_18 -1+t_0;
	uint64_t out_37 = out_18 -1+d_[4];
	uint64_t out_38 = out_18 +t_0;
	uint64_t out_3 = out_17;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_17;
	uint64_t out_0 = out_37;


	vec_[18] = out_18;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_110{
    110,
    55732,
    55748,
    true,
    block_110_fn
    };



static void block_111_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[1]);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1+d_[1]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +2+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+t_0);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +1+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2);
	out_28 = MAP_Explorer::max2(out_28, vec_[15] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[18] +2+d_[1]);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_3 = out_28;
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[13] +2);
	uint64_t out_19 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_18 = out_38 -1;
	uint64_t out_1 = out_18;
	uint64_t out_0 = out_18 -1;


	vec_[12] = out_12;
	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[19] = out_19;
	vec_[2] = out_2;
	vec_[18] = out_18;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_111{
    111,
    55752,
    55772,
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
    55776,
    55780,
    true,
    block_112_fn
    };



static void block_113_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[7], d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+d_[12]+t_0, d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(2+d_[12], d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(t_0+t_3, 1+d_[7]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_2, t_4);

	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +3);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +4+d_[0]);
	uint64_t out_29 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_29 = MAP_Explorer::max2(out_29, vec_[2] +4+d_[2]);
	out_29 = MAP_Explorer::max2(out_29, vec_[3] +4);
	out_29 = MAP_Explorer::max2(out_29, vec_[6] +4+d_[2]);
	out_29 = MAP_Explorer::max2(out_29, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_24 = out_25 -1;
	uint64_t out_27 = out_29 -1;
	uint64_t out_3 = MAP_Explorer::max2(out_29 +1+d_[13]+t_4, vec_[12] +1+d_[13]+t_1+t_3);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2+d_[13]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[12]+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[13]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[13]+t_3);
	uint64_t out_5 = MAP_Explorer::max2(out_29 +2+t_5, vec_[12] +2+t_1+t_3);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +3+t_5);
	out_5 = MAP_Explorer::max2(out_5, vec_[18] +3+d_[12]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_3);
	uint64_t out_13 = MAP_Explorer::max2(out_29 +1+d_[7], vec_[12] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[7]);
	uint64_t out_14 = MAP_Explorer::max2(out_29 +3+t_0, vec_[12] +3+t_1);
	out_14 = MAP_Explorer::max2(out_14, vec_[13] +4+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[18] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[22] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_29 +2+t_0, vec_[12] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3+t_0);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_29 , vec_[13] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_29 +2+d_[12]+t_0, vec_[12] +2+d_[12]+t_1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +3+d_[12]+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[12]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[12]);
	uint64_t out_38 = MAP_Explorer::max2(out_29 +2+t_2, vec_[12] +3+d_[12]+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +3+d_[12]);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[25] = out_25;
	vec_[29] = out_29;
	vec_[24] = out_24;
	vec_[27] = out_27;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_113{
    113,
    55784,
    55828,
    true,
    block_113_fn
    };



static void block_115_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2], vec_[1] +5+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +4+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +4+d_[2]);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +4);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +5+d_[0]+d_[2]);
	uint64_t out_22 = out_26 +2;
	uint64_t out_37 = out_26 +1+d_[6];
	uint64_t out_38 = out_26 +2+d_[6];
	uint64_t out_14 = MAP_Explorer::max2(out_5 , vec_[12] +1);
	uint64_t out_23 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_13 = out_22 -1;
	uint64_t out_12 = out_13 -2;
	uint64_t out_4 = out_12 +4+d_[6];
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[26] = out_26;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[23] = out_23;
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
    55832,
    55864,
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
    98580,
    98584,
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
    98588,
    98608,
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
    98768,
    98776,
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
    99408,
    99436,
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
    106204,
    106216,
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
    106220,
    106224,
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
    106228,
    106248,
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
    99440,
    99444,
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
    99448,
    99460,
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
    98780,
    98780,
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
    98812,
    98832,
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
    98612,
    98648,
    true,
    block_127_fn
    };



static void block_128_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_1 = out_38;
	uint64_t out_18 = out_38 +1;
	uint64_t out_4 = out_18;
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_18;
	uint64_t out_0 = out_18 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[18] = out_18;
	vec_[4] = out_4;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_128{
    128,
    81276,
    81284,
    true,
    block_128_fn
    };



static void block_129_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_129{
    129,
    81116,
    81120,
    true,
    block_129_fn
    };



static void block_130_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[4], d_[2]);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +4+d_[0], vec_[1] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +4+d_[0]);
	uint64_t out_3 = out_14 -1+d_[6]+t_0;
	uint64_t out_37 = out_14 +d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_14 +t_0, vec_[18] +1);
	uint64_t out_17 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;


	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[17] = out_17;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_130{
    130,
    81124,
    81144,
    true,
    block_130_fn
    };



static void block_131_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_131{
    131,
    81148,
    81164,
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
    68360,
    68360,
    true,
    block_132_fn
    };



static void block_133_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_3 +2, vec_[4] +3);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_17 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_18 = out_37 +1;
	uint64_t out_1 = out_18;


	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_133{
    133,
    68368,
    68380,
    true,
    block_133_fn
    };



static void block_134_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[1]+d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[12], d_[7]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[7]+d_[9]);
	uint64_t t_4 = MAP_Explorer::max2(d_[12], d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[7]+d_[9]+d_[11]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, d_[9]+d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(d_[19], d_[15]);
	uint64_t t_8 = MAP_Explorer::max2(2+t_7, d_[15]+d_[17]);
	uint64_t t_9 = MAP_Explorer::max2(1+d_[19], d_[17]);
	uint64_t t_10 = MAP_Explorer::max2(d_[25], d_[22]);
	uint64_t t_11 = MAP_Explorer::max2(1+t_10, d_[22]+d_[24]);
	uint64_t t_12 = MAP_Explorer::max2(d_[33], d_[28]);
	uint64_t t_13 = MAP_Explorer::max2(1+t_12, d_[28]+d_[30]);
	uint64_t t_14 = MAP_Explorer::max2(1+t_13, d_[28]+d_[30]+d_[32]);
	uint64_t t_15 = MAP_Explorer::max2(d_[41], d_[36]);
	uint64_t t_16 = MAP_Explorer::max2(1+t_15, d_[36]+d_[38]);

	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[5]+d_[13]+t_1+t_5+t_8, vec_[1] +3+d_[5]+d_[13]+t_1+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[5]+d_[13]+t_1+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1+d_[1]+d_[3]+d_[5]+d_[13]+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+d_[5]+d_[13]+t_1+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+d_[5]+d_[13]+t_1+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+d_[3]+d_[5]+d_[13]+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+d_[13]+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[26] +2+d_[13]+t_6+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[27] +2+d_[11]+d_[13]+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[28] +2+d_[13]+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[29] +2+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[30] +2+d_[5]+d_[13]+t_5+t_8);
	out_23 = MAP_Explorer::max2(out_23, vec_[31] +2+t_9);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +3+d_[0]+d_[5]+d_[13]+t_1+t_5+t_8);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[5]+d_[13]+d_[15]+t_1+t_5, vec_[1] +3+d_[5]+d_[13]+d_[15]+t_1+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+d_[5]+d_[13]+d_[15]+t_1+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+d_[1]+d_[3]+d_[5]+d_[13]+d_[15]+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+d_[5]+d_[13]+d_[15]+t_1+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[22] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[23] +2+d_[5]+d_[13]+d_[15]+t_1+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[24] +2+d_[3]+d_[5]+d_[13]+d_[15]+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[25] +2+d_[13]+d_[15]+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +2+d_[13]+d_[15]+t_6);
	out_30 = MAP_Explorer::max2(out_30, vec_[27] +2+d_[11]+d_[13]+d_[15]);
	out_30 = MAP_Explorer::max2(out_30, vec_[28] +2+d_[13]+d_[15]);
	out_30 = MAP_Explorer::max2(out_30, vec_[29] +2+d_[15]);
	out_30 = MAP_Explorer::max2(out_30, vec_[30] +2+d_[5]+d_[13]+d_[15]+t_5);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[5]+d_[13]+d_[15]+t_1+t_5);
	uint64_t out_18 = out_23;
	uint64_t out_3 = MAP_Explorer::max2(out_23 +1+d_[26]+d_[34]+d_[36]+d_[38]+d_[40]+t_11+t_14, vec_[4] +1+d_[24]+d_[26]+d_[34]+d_[36]+d_[38]+d_[40]+t_14);
	uint64_t out_38 = MAP_Explorer::max2(out_23 +4+d_[26]+d_[34]+t_11+t_14+t_16, vec_[4] +4+d_[24]+d_[26]+d_[34]+t_14+t_16);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_24 = out_37 +1;
	uint64_t out_1 = out_24;


	vec_[23] = out_23;
	vec_[30] = out_30;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[24] = out_24;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_134{
    134,
    67608,
    67704,
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
    68736,
    68740,
    true,
    block_138_fn
    };



static void block_141_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[25] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_27 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1], vec_[1] +5+d_[1]);
	out_27 = MAP_Explorer::max2(out_27, vec_[2] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[3] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[4] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[6] +4);
	out_27 = MAP_Explorer::max2(out_27, vec_[25] +5);
	out_27 = MAP_Explorer::max2(out_27, vec_[36] +5+d_[0]+d_[1]);
	uint64_t out_26 = out_27 -1;
	uint64_t out_29 = out_27 +d_[6];
	uint64_t out_37 = out_27 +2+d_[6];
	uint64_t out_38 = out_27 +3+d_[6]+d_[10];
	uint64_t out_25 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_3 = out_26 -2+d_[2];
	uint64_t out_22 = out_26 +2+d_[6];
	uint64_t out_19 = out_22 +2;
	uint64_t out_1 = out_19 -1+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[21] = out_21;
	vec_[27] = out_27;
	vec_[26] = out_26;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_141{
    141,
    67804,
    67840,
    true,
    block_141_fn
    };



static void block_142_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_18 +2+d_[3], vec_[19] +3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +3);
	uint64_t out_1 = out_38;
	uint64_t out_19 = out_38 -1;
	uint64_t out_4 = out_19 +2;
	uint64_t out_2 = out_4;
	uint64_t out_3 = out_4 -3;
	uint64_t out_0 = out_3;


	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[3] = out_3;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_142{
    142,
    67844,
    67868,
    true,
    block_142_fn
    };



static void block_143_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_30 = out_37 +d_[2];
	uint64_t out_38 = out_37 +1+d_[2];
	uint64_t out_28 = out_30;
	uint64_t out_3 = out_30;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_30;
	uint64_t out_0 = out_30 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[30] = out_30;
	vec_[38] = out_38;
	vec_[28] = out_28;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_143{
    143,
    69692,
    69708,
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
    69712,
    69712,
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
    69716,
    69716,
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
    74256,
    74264,
    true,
    block_146_fn
    };



static void block_148_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_3 +1+d_[3], vec_[4] +1+d_[3]);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_38 +1;
	uint64_t out_14 = out_37 +1;
	uint64_t out_2 = out_4;


	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[14] = out_14;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_148{
    148,
    53396,
    53412,
    true,
    block_148_fn
    };



static void block_149_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(d_[14], d_[10]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[10]+d_[12]);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_21 = MAP_Explorer::max2(out_17 +2+d_[8]+d_[10]+d_[12]+t_1, vec_[4] +2+d_[6]+d_[8]+d_[10]+d_[12]);
	out_21 = MAP_Explorer::max2(out_21, vec_[28] +2+d_[8]+d_[10]+d_[12]+t_1);
	uint64_t out_38 = MAP_Explorer::max2(out_17 +5+d_[8]+t_1+t_3, vec_[4] +5+d_[6]+d_[8]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +5+d_[8]+t_1+t_3);
	uint64_t out_3 = out_21;
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_31 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_26 = out_37 +1;
	uint64_t out_1 = out_26;
	uint64_t out_22 = out_26 -2;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[21] = out_21;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[31] = out_31;
	vec_[0] = out_0;
	vec_[26] = out_26;
	vec_[1] = out_1;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_149{
    149,
    74268,
    74316,
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
    74324,
    74324,
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
    67968,
    67972,
    true,
    block_151_fn
    };



static void block_152_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_35 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_35 = MAP_Explorer::max2(out_35, vec_[2] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[29] +1);
	out_35 = MAP_Explorer::max2(out_35, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 , vec_[6] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[3] +1);
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

extern const MAP_Explorer::Block block_152{
    152,
    67980,
    67988,
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
    67992,
    67996,
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
    68000,
    68004,
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
    68056,
    68056,
    true,
    block_155_fn
    };



static void block_156_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[35] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_156{
    156,
    68108,
    68112,
    true,
    block_156_fn
    };



static void block_157_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_157{
    157,
    68116,
    68120,
    true,
    block_157_fn
    };



static void block_158_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[29] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_158{
    158,
    68124,
    68128,
    true,
    block_158_fn
    };



static void block_159_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(1+d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(2, d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(d_[6]+t_0, d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(d_[6]+d_[8]+t_0, 1+d_[4]);
	uint64_t t_4 = MAP_Explorer::max2(d_[11]+t_0, t_2);
	uint64_t t_5 = MAP_Explorer::max2(d_[11], d_[6]);
	uint64_t t_6 = MAP_Explorer::max2(1+t_4, t_3);
	uint64_t t_7 = MAP_Explorer::max2(1+t_5, d_[6]+d_[8]);
	uint64_t t_8 = MAP_Explorer::max2(1+t_6, d_[4]);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[16] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_16 +1+d_[10]+t_3, vec_[24] +1+d_[6]+d_[8]+d_[10]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +1+d_[6]+d_[8]+d_[10]+t_1);
	uint64_t out_18 = MAP_Explorer::max2(out_16 +2+t_6, vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+t_1+t_7);
	out_18 = MAP_Explorer::max2(out_18, vec_[30] +2+t_1+t_7);
	uint64_t out_19 = MAP_Explorer::max2(out_16 +1+d_[4], vec_[24] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[30] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_16 +2+t_4, vec_[24] +2+t_1+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +2+t_1+t_5);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +2+t_8, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +3+t_1+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +3+t_1+t_7);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_18 -1;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_159{
    159,
    68132,
    68164,
    true,
    block_159_fn
    };



static void block_160_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_24 = out_37;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[2], vec_[29] );
	uint64_t out_32 = MAP_Explorer::max2(out_37 +1, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[24] = out_24;
	vec_[0] = out_0;
	vec_[32] = out_32;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_160{
    160,
    68168,
    68176,
    true,
    block_160_fn
    };



static void block_161_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[27] );
	uint64_t out_10 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[27] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[10] = out_10;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_161{
    161,
    68188,
    68192,
    true,
    block_161_fn
    };



static void block_162_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], 2);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[31] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +2+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_10 +3, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_10 +1+t_0, vec_[3] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_0);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_3 = out_37 +1+d_[4];


	vec_[10] = out_10;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_162{
    162,
    68196,
    68212,
    true,
    block_162_fn
    };



static void block_163_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_3 = out_14;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_163{
    163,
    71132,
    71144,
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
    80496,
    80496,
    true,
    block_200_fn
    };



static void block_212_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_212{
    212,
    71148,
    71148,
    true,
    block_212_fn
    };



static void block_213_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_213{
    213,
    68216,
    68224,
    true,
    block_213_fn
    };



static void block_214_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(out_24 +1, vec_[25] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +3, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	uint64_t out_30 = out_37;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
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

extern const MAP_Explorer::Block block_214{
    214,
    68240,
    68252,
    true,
    block_214_fn
    };



static void block_215_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_215{
    215,
    67732,
    67736,
    true,
    block_215_fn
    };



static void block_216_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_216{
    216,
    68256,
    68260,
    true,
    block_216_fn
    };



static void block_217_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_217{
    217,
    68264,
    68264,
    true,
    block_217_fn
    };



static void block_218_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_16 = out_37;
	uint64_t out_3 = out_14;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_15 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[15] = out_15;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_218{
    218,
    75340,
    75352,
    true,
    block_218_fn
    };



static void block_219_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_219{
    219,
    81388,
    81392,
    true,
    block_219_fn
    };



static void block_220_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_220{
    220,
    81396,
    81400,
    true,
    block_220_fn
    };



static void block_223_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_223{
    223,
    81416,
    81420,
    true,
    block_223_fn
    };



static void block_224_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_224{
    224,
    81440,
    81444,
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
    81568,
    81568,
    true,
    block_225_fn
    };



static void block_226_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[28] +1);
	uint64_t out_25 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[25] = out_25;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_226{
    226,
    80668,
    80676,
    true,
    block_226_fn
    };



static void block_227_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_27 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[23] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_227{
    227,
    80504,
    80512,
    true,
    block_227_fn
    };



static void block_228_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_15 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[24] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[24] +1);
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

extern const MAP_Explorer::Block block_228{
    228,
    80392,
    80400,
    true,
    block_228_fn
    };



static void block_229_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[2]+d_[4], vec_[3] +d_[2]+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[2]+d_[4]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_0);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_6 +1+d_[5], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[5]);
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

extern const MAP_Explorer::Block block_229{
    229,
    79524,
    79540,
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
    79544,
    79548,
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
    79552,
    79556,
    true,
    block_231_fn
    };



static void block_232_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[1], vec_[1] +4+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[1]);
	uint64_t out_6 = out_38;
	uint64_t out_5 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_12 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_232{
    232,
    79580,
    79596,
    true,
    block_232_fn
    };



static void block_237_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[2], vec_[1] +3+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_19 +1;
	uint64_t out_37 = MAP_Explorer::max2(out_17 +1, vec_[22] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[23] +1);
	uint64_t out_16 = out_37;
	uint64_t out_14 = out_38;
	uint64_t out_3 = out_15;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[17] = out_17;
	vec_[19] = out_19;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[16] = out_16;
	vec_[14] = out_14;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_237{
    237,
    79320,
    79340,
    true,
    block_237_fn
    };



static void block_238_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(d_[12], d_[7]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[7]+d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(d_[12], d_[9]);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_19 +1+d_[5]+d_[7]+d_[9]+d_[11]+t_0, vec_[5] +1+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[5]+d_[7]+d_[9]+d_[11]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[3]+d_[5]+d_[7]+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[5]+d_[7]+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[7]+d_[9]+d_[11]);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[9]+d_[11]);
	uint64_t out_6 = MAP_Explorer::max2(out_19 , vec_[6] +1);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +4+d_[5]+t_0+t_2, vec_[5] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +5+d_[5]+t_0+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +4+d_[3]+d_[5]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +4+d_[5]+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +4+t_2);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +4+t_3);
	uint64_t out_18 = MAP_Explorer::max2(out_19 +2+d_[5]+t_0+t_2, vec_[5] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+d_[5]+t_0+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+d_[3]+d_[5]+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+d_[5]+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_3);
	uint64_t out_22 = MAP_Explorer::max2(out_19 +5+d_[5]+t_0+t_2, vec_[5] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +6+d_[5]+t_0+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +5+d_[3]+d_[5]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +5+d_[5]+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[16] +1);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +5+t_2);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +5+t_3);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +4+d_[5]+d_[16]+t_0+t_2, vec_[5] +4+d_[16]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +5+d_[5]+d_[16]+t_0+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +4+d_[3]+d_[5]+d_[16]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +4+d_[5]+d_[16]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[16]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +4+d_[16]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +4+d_[16]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_18 +1;
	uint64_t out_23 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	uint64_t out_0 = out_23 -1;


	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[22] = out_22;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_238{
    238,
    51028,
    51076,
    true,
    block_238_fn
    };



static void block_239_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[7], d_[5]);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2], vec_[19] +1);
	uint64_t out_23 = MAP_Explorer::max2(out_19 +7+t_0, vec_[3] +6+t_0);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +6);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +7+t_0);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +3);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +4);
	uint64_t out_37 = MAP_Explorer::max2(out_23 +1+d_[11], vec_[13] +2);
	uint64_t out_14 = out_37 -1;
	uint64_t out_16 = out_23 -2;
	uint64_t out_22 = out_23 +d_[11];
	uint64_t out_38 = out_37 +d_[15];
	uint64_t out_5 = MAP_Explorer::max2(out_19 +4+t_0, vec_[3] +3+t_0);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +4+t_0);
	uint64_t out_12 = MAP_Explorer::max2(out_19 +3+d_[5], vec_[3] +2+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[5]);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +2, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +2);
	uint64_t out_17 = MAP_Explorer::max2(out_19 +4+t_0, vec_[3] +3+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[12] +4+t_0);
	out_17 = MAP_Explorer::max2(out_17, vec_[23] +1);
	uint64_t out_1 = out_38;
	uint64_t out_13 = out_14 +2;
	uint64_t out_6 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_4 = out_13 +d_[15];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[16] = out_16;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[17] = out_17;
	vec_[1] = out_1;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_239{
    239,
    51080,
    51136,
    true,
    block_239_fn
    };



static void block_240_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_240{
    240,
    52376,
    52416,
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
    22740,
    22748,
    true,
    block_241_fn
    };



static void block_242_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_242{
    242,
    22752,
    22760,
    true,
    block_242_fn
    };



static void block_244_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_244{
    244,
    22780,
    22784,
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
    52420,
    52424,
    true,
    block_245_fn
    };



static void block_246_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_246{
    246,
    52428,
    52440,
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
    79344,
    79348,
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
    79312,
    79316,
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
    80404,
    80404,
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
    75356,
    75356,
    true,
    block_252_fn
    };



static void block_253_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +6+d_[0]+d_[1], vec_[1] +6+d_[1]);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +6);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +5);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +6);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +6+d_[0]+d_[1]);
	uint64_t out_24 = out_25 -2;
	uint64_t out_26 = out_25 +d_[5];
	uint64_t out_27 = out_25 +1+d_[5];
	uint64_t out_28 = out_25 +2+d_[5];
	uint64_t out_29 = out_25 +3+d_[5];
	uint64_t out_30 = out_25 +3+d_[5]+d_[9];
	uint64_t out_31 = out_25 +4+d_[5]+d_[9];
	uint64_t out_37 = out_25 +2+d_[5]+d_[9];
	uint64_t out_38 = MAP_Explorer::max2(out_25 +4+d_[5]+d_[9], vec_[4] +1);
	uint64_t out_19 = out_24;
	uint64_t out_3 = out_31;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_24 -1;


	vec_[25] = out_25;
	vec_[24] = out_24;
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
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_253{
    253,
    68268,
    68312,
    true,
    block_253_fn
    };



static void block_254_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +4);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +5+d_[0]);
	uint64_t out_13 = out_14 +1;
	uint64_t out_37 = out_14 +d_[4];
	uint64_t out_38 = out_14 +1+d_[4];
	uint64_t out_22 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_12 = out_13 -2;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +4+d_[4];
	uint64_t out_2 = out_4;


	vec_[14] = out_14;
	vec_[13] = out_13;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[22] = out_22;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_254{
    254,
    68320,
    68344,
    true,
    block_254_fn
    };



static void block_255_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_255{
    255,
    50916,
    50924,
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
    49592,
    49592,
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
    21456,
    21456,
    true,
    block_257_fn
    };



static void block_258_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
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

extern const MAP_Explorer::Block block_258{
    258,
    49596,
    49600,
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
    21448,
    21448,
    true,
    block_259_fn
    };



static void block_260_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_260{
    260,
    21232,
    21232,
    true,
    block_260_fn
    };



static void block_261_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_261{
    261,
    21444,
    21444,
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
    49604,
    49604,
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
    21452,
    21452,
    true,
    block_263_fn
    };



static void block_264_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(d_[11], d_[6]);
	uint64_t t_2 = MAP_Explorer::max2(1+t_1, d_[6]+d_[8]);
	uint64_t t_3 = MAP_Explorer::max2(d_[11], d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_2, d_[6]+d_[8]+d_[10]);
	uint64_t t_5 = MAP_Explorer::max2(1+t_3, d_[8]+d_[10]);
	uint64_t t_6 = MAP_Explorer::max2(d_[18], d_[14]);
	uint64_t t_7 = MAP_Explorer::max2(12+d_[22]+d_[26]+d_[30]+t_6, d_[14]+d_[16]);
	uint64_t t_8 = MAP_Explorer::max2(11+d_[18]+d_[22]+d_[26]+d_[30], d_[16]);
	uint64_t t_9 = MAP_Explorer::max2(d_[32]+t_7, 7+d_[22]+t_6);
	uint64_t t_10 = MAP_Explorer::max2(t_9, 9+d_[22]+d_[26]+t_6);
	uint64_t t_12 = MAP_Explorer::max2(8+d_[18]+d_[22]+d_[26], d_[32]+t_8);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[12]+t_0+t_4+t_10, vec_[3] +1+d_[2]+d_[4]+d_[12]+t_4+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +13+d_[22]+d_[26]+d_[30]+d_[32]);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_12);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[2]+d_[4]+d_[12]+t_4+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[4]+d_[12]+t_4+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+d_[12]+t_4+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+d_[12]+t_5+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+d_[10]+d_[12]+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[25] +2+d_[12]+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[26] +2+t_10);
	uint64_t out_13 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[12]+d_[14]+t_0+t_4, vec_[3] +1+d_[2]+d_[4]+d_[12]+d_[14]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[2]+d_[4]+d_[12]+d_[14]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+d_[4]+d_[12]+d_[14]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+d_[12]+d_[14]+t_4);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+d_[12]+d_[14]+t_5);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2+d_[10]+d_[12]+d_[14]);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+d_[12]+d_[14]);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2+d_[14]);
	uint64_t out_26 = MAP_Explorer::max2(out_6 +6+d_[4]+d_[12]+t_0+t_4+t_6, vec_[3] +5+d_[2]+d_[4]+d_[12]+t_4+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[4] +5);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +5+d_[18]);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +6+d_[2]+d_[4]+d_[12]+t_4+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +6+d_[4]+d_[12]+t_4+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +6+d_[12]+t_4+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +6+d_[12]+t_5+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +6+d_[10]+d_[12]+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +6+d_[12]+t_6);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +6+t_6);
	uint64_t out_38 = MAP_Explorer::max2(out_6 +2+d_[4]+d_[12]+t_0+t_4+t_7, vec_[3] +1+d_[2]+d_[4]+d_[12]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +13+d_[22]+d_[26]+d_[30]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[2]+d_[4]+d_[12]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[4]+d_[12]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[12]+t_4+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+d_[12]+t_5+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[10]+d_[12]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+d_[12]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+t_7);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[34];
	uint64_t out_22 = out_26 -2;
	uint64_t out_25 = out_26 +3+d_[22];
	uint64_t out_37 = out_26 +7+d_[22]+d_[26]+d_[30];
	uint64_t out_12 = out_22 +3+d_[22];
	uint64_t out_15 = out_22 +8+d_[22]+d_[26];
	uint64_t out_24 = out_25 +d_[26];
	uint64_t out_14 = out_15 +d_[30];
	uint64_t out_23 = out_24 +2;


	vec_[6] = out_6;
	vec_[5] = out_5;
	vec_[13] = out_13;
	vec_[26] = out_26;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[24] = out_24;
	vec_[14] = out_14;
	vec_[23] = out_23;
}

extern const MAP_Explorer::Block block_264{
    264,
    21032,
    21132,
    true,
    block_264_fn
    };



static void block_740_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +4);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]);
	uint64_t out_12 = out_13 -1;
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +1+d_[3];
	uint64_t out_24 = out_13 +2+d_[3];
	uint64_t out_25 = out_13 +3+d_[3];
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

extern const MAP_Explorer::Block block_740{
    740,
    21188,
    21228,
    true,
    block_740_fn
    };



static void block_741_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[1]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_5 = MAP_Explorer::max2(out_37 +1+t_0, vec_[3] +1+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[3] +1+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[3] +1);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_741{
    741,
    49608,
    49616,
    true,
    block_741_fn
    };



static void block_742_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[17], d_[14]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[14]+d_[16]);
	uint64_t t_2 = MAP_Explorer::max2(d_[25], d_[20]);
	uint64_t t_3 = MAP_Explorer::max2(1+t_2, d_[20]+d_[22]);
	uint64_t t_4 = MAP_Explorer::max2(1+t_3, d_[20]+d_[22]+d_[24]);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +4);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +5+d_[0]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[3], vec_[1] +5+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +4+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +5+d_[0]+d_[3]);
	uint64_t out_20 = out_21 +1;
	uint64_t out_5 = MAP_Explorer::max2(out_21 +8+d_[7]+d_[11]+d_[18]+t_1+t_4, vec_[4] +5+d_[11]+d_[18]+t_1+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+d_[16]+d_[18]+t_4);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +6+d_[11]+d_[18]+t_1+t_4);
	uint64_t out_6 = MAP_Explorer::max2(out_21 +3+d_[7], vec_[6] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_21 +4+d_[7], vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_21 +8+d_[7]+d_[11]+d_[18]+t_1+t_2, vec_[4] +5+d_[11]+d_[18]+t_1+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+d_[16]+d_[18]+t_2);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +6+d_[11]+d_[18]+t_1+t_2);
	uint64_t out_38 = MAP_Explorer::max2(out_21 +8+d_[7]+d_[11]+d_[18]+t_1+t_3, vec_[4] +5+d_[11]+d_[18]+t_1+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+d_[16]+d_[18]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +6+d_[11]+d_[18]+t_1+t_3);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[26];
	uint64_t out_15 = out_16 +1;
	uint64_t out_18 = out_20 +2;
	uint64_t out_19 = out_20 +2+d_[7];
	uint64_t out_14 = out_15 +2+d_[11];
	uint64_t out_17 = out_18 -1;


	vec_[10] = out_10;
	vec_[21] = out_21;
	vec_[20] = out_20;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[17] = out_17;
}

extern const MAP_Explorer::Block block_742{
    742,
    21460,
    21540,
    true,
    block_742_fn
    };



static void block_743_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_743{
    743,
    51732,
    51736,
    true,
    block_743_fn
    };



static void block_744_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
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

extern const MAP_Explorer::Block block_744{
    744,
    51740,
    51748,
    true,
    block_744_fn
    };



static void block_745_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_745{
    745,
    51752,
    51756,
    true,
    block_745_fn
    };



static void block_748_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_748{
    748,
    51796,
    51800,
    true,
    block_748_fn
    };



static void block_749_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
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

extern const MAP_Explorer::Block block_749{
    749,
    51804,
    51812,
    true,
    block_749_fn
    };



static void block_752_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_752{
    752,
    51848,
    51852,
    true,
    block_752_fn
    };



static void block_753_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +2+d_[0]);
	uint64_t out_19 = out_37;
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[37] = out_37;
	vec_[19] = out_19;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_753{
    753,
    21544,
    21552,
    true,
    block_753_fn
    };



static void block_754_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +3+d_[0]);
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_37 +2;
	uint64_t out_2 = out_5;


	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_754{
    754,
    21568,
    21576,
    true,
    block_754_fn
    };



static void block_755_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +5+d_[0], vec_[1] +5);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +4);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +5+d_[0]);
	uint64_t out_14 = out_19 +4+d_[4];
	uint64_t out_37 = out_19 +3+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_19 +4+d_[4], vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_3 = out_14 -2;
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

extern const MAP_Explorer::Block block_755{
    755,
    21696,
    21724,
    true,
    block_755_fn
    };



static void block_756_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
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

extern const MAP_Explorer::Block block_756{
    756,
    21580,
    21592,
    true,
    block_756_fn
    };



static void block_757_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_5;
	uint64_t out_37 = MAP_Explorer::max2(out_5 , vec_[14] +1);
	uint64_t out_14 = out_37;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[3] = out_3;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_757{
    757,
    49620,
    49632,
    true,
    block_757_fn
    };



static void block_758_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_758{
    758,
    464,
    472,
    true,
    block_758_fn
    };



static void block_759_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[4], d_[3]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_15 = MAP_Explorer::max2(out_6 +1, vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_15 +1+d_[4], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_15 +2+t_0, vec_[3] +1+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+d_[3]);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_12 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_3 = MAP_Explorer::max2(out_15 +1+d_[5]+t_0, vec_[3] +d_[3]+d_[5]);
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

extern const MAP_Explorer::Block block_759{
    759,
    49636,
    49656,
    true,
    block_759_fn
    };



static void block_760_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(2+d_[5], d_[2]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_24 = MAP_Explorer::max2(out_6 +3, vec_[3] +2);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +3);
	uint64_t out_37 = MAP_Explorer::max2(out_24 -1+t_0, vec_[22] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[6], vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = out_37 +d_[6];
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[6], vec_[5] );
	uint64_t out_3 = out_0 +1+d_[9];


	vec_[6] = out_6;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[0] = out_0;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_760{
    760,
    53488,
    53516,
    true,
    block_760_fn
    };



static void block_761_fn(uint64_t* vec_, uint8_t* d_){


    
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
	uint64_t out_24 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_37 = out_38 -1;
	uint64_t out_22 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_761{
    761,
    53692,
    53708,
    true,
    block_761_fn
    };



static void block_762_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_762{
    762,
    49660,
    49668,
    true,
    block_762_fn
    };



static void block_763_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_763{
    763,
    49672,
    49672,
    true,
    block_763_fn
    };



static void block_764_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_16 +2;
	uint64_t out_37 = out_16 +2+d_[5];
	uint64_t out_38 = out_16 +3+d_[5];
	uint64_t out_14 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_15 +2+d_[5];
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

extern const MAP_Explorer::Block block_764{
    764,
    49692,
    49716,
    true,
    block_764_fn
    };



static void block_765_fn(uint64_t* vec_, uint8_t* d_){


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
	uint64_t t_10 = MAP_Explorer::max2(6+d_[22], d_[18]);
	uint64_t t_11 = MAP_Explorer::max2(5+d_[22]+d_[26], d_[18]);
	uint64_t t_12 = MAP_Explorer::max2(t_11, t_10);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8, vec_[1] +3+d_[1]+d_[2]+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +3+d_[2]+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +1+d_[2]+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[5] +2+t_9);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +3+d_[2]+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[12] +2+d_[16]);
	out_26 = MAP_Explorer::max2(out_26, vec_[13] +2);
	out_26 = MAP_Explorer::max2(out_26, vec_[14] +1);
	out_26 = MAP_Explorer::max2(out_26, vec_[22] +2+d_[2]+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[23] +2+d_[10]+t_3+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[24] +2+d_[10]+t_4+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[8]+d_[10]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[26] +2+d_[10]+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[27] +2+t_8);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8+t_11, vec_[1] +3+d_[1]+d_[2]+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+d_[2]+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +2+t_9+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[2]+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +2+d_[16]+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +2+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +6+d_[22]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +5+d_[22]+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +5+d_[26]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +2+d_[2]+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +2+d_[10]+t_3+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +2+d_[10]+t_4+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +2+d_[8]+d_[10]+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +2+d_[10]+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +2+t_8+t_11);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8+t_11);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8+t_12, vec_[1] +5+d_[1]+d_[2]+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +5+d_[2]+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3+d_[2]+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +6+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +4+t_9+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +5+d_[2]+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +4+d_[16]+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +4+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +8+d_[22]+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +7+d_[22]+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +7+d_[26]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +4+d_[2]+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +4+d_[10]+t_3+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +4+d_[10]+t_4+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +4+d_[8]+d_[10]+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +4+d_[10]+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +4+t_8+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+d_[1]+d_[2]+d_[10]+t_3+t_8+t_12);
	uint64_t out_2 = out_38;
	uint64_t out_13 = out_38 -1;
	uint64_t out_27 = MAP_Explorer::max2(out_26 +1, vec_[15] +1);
	uint64_t out_12 = out_13;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_13;
	uint64_t out_0 = out_13 -1;
	uint64_t out_24 = MAP_Explorer::max2(out_27 +1+d_[22], vec_[4] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[16] +2);
	uint64_t out_25 = MAP_Explorer::max2(out_27 +1, vec_[16] +1);
	uint64_t out_23 = out_24 +1;
	uint64_t out_22 = out_23 +1;


	vec_[6] = out_6;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[13] = out_13;
	vec_[27] = out_27;
	vec_[12] = out_12;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[23] = out_23;
	vec_[22] = out_22;
}

extern const MAP_Explorer::Block block_765{
    765,
    50604,
    50680,
    true,
    block_765_fn
    };



static void block_782_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_782{
    782,
    22876,
    22884,
    true,
    block_782_fn
    };



static void block_783_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_783{
    783,
    52476,
    52484,
    true,
    block_783_fn
    };



static void block_784_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_784{
    784,
    22888,
    22908,
    true,
    block_784_fn
    };



static void block_786_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_786{
    786,
    51912,
    51920,
    true,
    block_786_fn
    };



static void block_789_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(out_3 +2, vec_[4] +3);
	uint64_t out_2 = out_38;
	uint64_t out_37 = out_38 -2;
	uint64_t out_22 = out_37;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_37 +1;
	uint64_t out_1 = out_19;


	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[37] = out_37;
	vec_[22] = out_22;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_789{
    789,
    78880,
    78892,
    true,
    block_789_fn
    };



static void block_798_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_798{
    798,
    79308,
    79308,
    true,
    block_798_fn
    };



static void block_801_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_801{
    801,
    78896,
    78904,
    true,
    block_801_fn
    };



static void block_802_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_802{
    802,
    54148,
    54148,
    true,
    block_802_fn
    };



static void block_803_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[3], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(3, d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2+d_[9], d_[4]);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_3 = MAP_Explorer::max2(out_6 +1+d_[8]+t_0+t_1, vec_[3] +d_[2]+d_[8]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[2]+d_[8]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[8]);
	uint64_t out_5 = MAP_Explorer::max2(out_6 +2+t_0+t_2, vec_[3] +1+d_[2]+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+d_[2]+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[9]);
	uint64_t out_12 = MAP_Explorer::max2(out_6 +2+t_0, vec_[3] +1+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_12 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[9], vec_[5] +1);
	uint64_t out_13 = out_37;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[13] = out_13;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_803{
    803,
    54152,
    54176,
    true,
    block_803_fn
    };



static void block_804_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_15 = out_18;
	uint64_t out_16 = out_18 +3+d_[3];
	uint64_t out_19 = out_18 +2+d_[3];
	uint64_t out_20 = out_18 +5+d_[3]+d_[7];
	uint64_t out_37 = out_18 +4+d_[3]+d_[7];
	uint64_t out_38 = out_18 +6+d_[3]+d_[7];
	uint64_t out_17 = out_20;
	uint64_t out_3 = out_20;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_20;
	uint64_t out_0 = out_37;
	uint64_t out_14 = out_16 -2;


	vec_[18] = out_18;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[19] = out_19;
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

extern const MAP_Explorer::Block block_804{
    804,
    54180,
    54216,
    true,
    block_804_fn
    };



static void block_805_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[17] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +2, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_17 -1;
	uint64_t out_1 = out_38 -1;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_805{
    805,
    54636,
    54644,
    true,
    block_805_fn
    };



static void block_806_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[5], d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(2+t_0, d_[2]+d_[4]);
	uint64_t t_2 = MAP_Explorer::max2(2, d_[4]);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +4+d_[0]+t_0, vec_[1] +4+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +2);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +3+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2+t_0);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +4+d_[0]+t_0);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +5+d_[0]+t_1, vec_[1] +5+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +4+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+d_[2]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +3+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +4+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +5+d_[0]+t_1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_19 = out_38 -1;
	uint64_t out_3 = out_19;
	uint64_t out_1 = out_19;


	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_806{
    806,
    54676,
    54696,
    true,
    block_806_fn
    };



static void block_807_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]);
	uint64_t out_5 = out_12 +1;
	uint64_t out_14 = MAP_Explorer::max2(out_12 +1, vec_[13] +1);
	uint64_t out_13 = out_14 +2;
	uint64_t out_37 = out_14 +d_[4];
	uint64_t out_38 = out_14 +1+d_[4];
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_13;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_13 +d_[4];
	uint64_t out_2 = out_4;


	vec_[12] = out_12;
	vec_[5] = out_5;
	vec_[14] = out_14;
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

extern const MAP_Explorer::Block block_807{
    807,
    54368,
    54388,
    true,
    block_807_fn
    };



static void block_808_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_808{
    808,
    78908,
    78908,
    true,
    block_808_fn
    };



static void block_809_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_809{
    809,
    50728,
    50732,
    true,
    block_809_fn
    };



static void block_810_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +6+d_[0], vec_[1] +6);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +4);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +5);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +6+d_[0]);
	uint64_t out_13 = out_22 -1;
	uint64_t out_23 = out_22 +d_[4];
	uint64_t out_25 = out_22 +1+d_[4];
	uint64_t out_26 = out_22 +2+d_[4];
	uint64_t out_27 = out_22 +3+d_[4];
	uint64_t out_38 = MAP_Explorer::max2(out_22 +4+d_[4]+d_[8], vec_[24] +3);
	uint64_t out_24 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_14 = out_37 -1;
	uint64_t out_4 = out_14 +3;
	uint64_t out_2 = out_4;


	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[27] = out_27;
	vec_[38] = out_38;
	vec_[24] = out_24;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_810{
    810,
    50736,
    50780,
    true,
    block_810_fn
    };



static void block_811_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1);
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

extern const MAP_Explorer::Block block_811{
    811,
    49676,
    49680,
    true,
    block_811_fn
    };



static void block_812_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_812{
    812,
    106148,
    106152,
    true,
    block_812_fn
    };



static void block_813_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_813{
    813,
    23464,
    23468,
    true,
    block_813_fn
    };



static void block_814_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_814{
    814,
    23472,
    23476,
    true,
    block_814_fn
    };



static void block_815_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_815{
    815,
    22824,
    22844,
    true,
    block_815_fn
    };



static void block_816_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_816{
    816,
    22608,
    22656,
    true,
    block_816_fn
    };



static void block_817_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_817{
    817,
    22480,
    22524,
    true,
    block_817_fn
    };



static void block_820_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[9], d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(1+t_0, d_[4]+d_[6]);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_13 +1+d_[2], vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_13 +1, vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_14 +2, vec_[3] +1);
	uint64_t out_0 = out_37 -1+t_0;
	uint64_t out_3 = out_37 -1+d_[4]+d_[6]+d_[8];
	uint64_t out_5 = out_37 +t_1;
	uint64_t out_38 = out_37 +t_0;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


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

extern const MAP_Explorer::Block block_820{
    820,
    51416,
    51440,
    true,
    block_820_fn
    };



static void block_879_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_879{
    879,
    51444,
    51444,
    true,
    block_879_fn
    };



static void block_880_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +4+d_[0]+d_[2], vec_[1] +4+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+d_[2]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +4+d_[0]+d_[2]);
	uint64_t out_12 = out_38;
	uint64_t out_6 = out_38;
	uint64_t out_3 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_13 +1;
	uint64_t out_37 = out_38 -1;
	uint64_t out_0 = out_37;
	uint64_t out_4 = out_37 +2;
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[38] = out_38;
	vec_[12] = out_12;
	vec_[6] = out_6;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_880{
    880,
    51448,
    51464,
    true,
    block_880_fn
    };



static void block_881_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_881{
    881,
    22528,
    22548,
    true,
    block_881_fn
    };



static void block_882_fn(uint64_t* vec_, uint8_t* d_){


    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1, vec_[4] +1);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +3, vec_[4] +3);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +2, vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 +4+d_[4], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +4+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +3+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +3);
	uint64_t out_0 = out_37 -1+d_[5];
	uint64_t out_5 = out_37 +d_[5]+d_[7];
	uint64_t out_38 = out_37 +d_[5];
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_3 = out_5 -1+d_[9];


	vec_[19] = out_19;
	vec_[13] = out_13;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[3] = out_3;
}

extern const MAP_Explorer::Block block_882{
    882,
    51344,
    51372,
    true,
    block_882_fn
    };



static void block_885_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_885{
    885,
    51376,
    51376,
    true,
    block_885_fn
    };



static void block_886_fn(uint64_t* vec_, uint8_t* d_){


    	uint64_t t_0 = MAP_Explorer::max2(d_[1], 2);

	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +5+d_[0]+d_[2]+t_0, vec_[1] +5+d_[2]+t_0);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +6+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +5+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +4+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +6+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +5+d_[0]+d_[2]+t_0);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_3 = out_13;
	uint64_t out_12 = out_13 -1;
	uint64_t out_37 = out_13 -2+d_[6];
	uint64_t out_38 = out_13 -1+d_[6];
	uint64_t out_6 = out_38;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_37;
	uint64_t out_5 = out_12 -1;
	uint64_t out_4 = out_5 +2+d_[6];
	uint64_t out_2 = out_4;


	vec_[13] = out_13;
	vec_[19] = out_19;
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

extern const MAP_Explorer::Block block_886{
    886,
    51388,
    51412,
    true,
    block_886_fn
    };



static void block_887_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_887{
    887,
    22552,
    22552,
    true,
    block_887_fn
    };



static void block_888_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_888{
    888,
    22556,
    22580,
    true,
    block_888_fn
    };



static void block_890_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_890{
    890,
    22584,
    22604,
    true,
    block_890_fn
    };



static void block_891_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_891{
    891,
    22660,
    22668,
    true,
    block_891_fn
    };



static void block_892_fn(uint64_t* vec_, uint8_t* d_){


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

extern const MAP_Explorer::Block block_892{
    892,
    22848,
    596,
    true,
    block_892_fn
    };



static void block_893_fn(uint64_t* vec_, uint8_t* d_){


    
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

extern const MAP_Explorer::Block block_893{
    893,
    632,
    632,
    true,
    block_893_fn
    };


} // namespace CV32E40P_DSE