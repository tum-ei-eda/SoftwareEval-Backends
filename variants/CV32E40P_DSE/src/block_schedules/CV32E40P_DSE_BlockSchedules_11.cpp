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

static void block_34_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[10], +d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[11]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[10]+d_[12]+d_[14], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[14], +d_[9]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[9]+d_[11]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[14], +d_[11]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +d_[13]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[9]+d_[11]+d_[13]);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[11]+d_[13]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[16]+t_3, +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[16]+t_4, +t_6);
	uint64_t t_13 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +d_[15]+t_8);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +d_[15]+t_9);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +d_[15]+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+d_[18]+t_11, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[18]+t_12, +t_15);
	uint64_t t_22 = MAP_Explorer::max2(+d_[18]+t_13, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+t_22, +t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +d_[17]+t_17);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_24, +d_[17]+t_18);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_25, +d_[17]+t_19);
	uint64_t t_29 = MAP_Explorer::max2(+d_[20]+t_20, +1+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+d_[20]+t_21, +t_24);
	uint64_t t_31 = MAP_Explorer::max2(+d_[20]+t_22, +1+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+t_29, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+1+t_30, +t_27);
	uint64_t t_34 = MAP_Explorer::max2(+t_31, +t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +d_[19]+t_26);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_33, +d_[19]+t_27);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_34, +d_[19]+t_28);
	uint64_t t_38 = MAP_Explorer::max2(+d_[22]+t_29, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[22]+t_30, +t_33);
	uint64_t t_40 = MAP_Explorer::max2(+d_[22]+t_31, +1+t_34);
	uint64_t t_41 = MAP_Explorer::max2(+t_38, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_39, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+t_40, +t_37);
	uint64_t t_44 = MAP_Explorer::max2(+t_41, +d_[21]+t_35);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_42, +d_[21]+t_36);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_43, +d_[21]+t_37);
	uint64_t t_47 = MAP_Explorer::max2(+d_[24]+t_38, +1+t_41);
	uint64_t t_48 = MAP_Explorer::max2(+d_[24]+t_39, +t_42);
	uint64_t t_49 = MAP_Explorer::max2(+d_[24]+t_40, +1+t_43);
	uint64_t t_50 = MAP_Explorer::max2(+t_47, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+1+t_48, +t_45);
	uint64_t t_52 = MAP_Explorer::max2(+t_49, +t_46);
	uint64_t t_53 = MAP_Explorer::max2(+t_50, +d_[23]+t_44);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_51, +d_[23]+t_45);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_52, +d_[23]+t_46);
	uint64_t t_56 = MAP_Explorer::max2(+d_[26]+t_47, +1+t_50);
	uint64_t t_57 = MAP_Explorer::max2(+d_[26]+t_48, +t_51);
	uint64_t t_58 = MAP_Explorer::max2(+d_[26]+t_49, +1+t_52);
	uint64_t t_59 = MAP_Explorer::max2(+t_56, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+1+t_57, +t_54);
	uint64_t t_61 = MAP_Explorer::max2(+t_58, +t_55);
	uint64_t t_62 = MAP_Explorer::max2(+t_59, +d_[25]+t_53);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_60, +d_[25]+t_54);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_61, +d_[25]+t_55);
	uint64_t t_65 = MAP_Explorer::max2(+d_[28]+t_56, +1+t_59);
	uint64_t t_66 = MAP_Explorer::max2(+d_[28]+t_57, +t_60);
	uint64_t t_67 = MAP_Explorer::max2(+d_[28]+t_58, +1+t_61);
	uint64_t t_68 = MAP_Explorer::max2(+t_65, +1+t_62);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_66, +t_63);
	uint64_t t_70 = MAP_Explorer::max2(+t_67, +t_64);
	uint64_t t_71 = MAP_Explorer::max2(+t_68, +d_[27]+t_62);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_69, +d_[27]+t_63);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_70, +d_[27]+t_64);
	uint64_t t_74 = MAP_Explorer::max2(+d_[30]+t_65, +1+t_68);
	uint64_t t_75 = MAP_Explorer::max2(+d_[30]+t_66, +t_69);
	uint64_t t_76 = MAP_Explorer::max2(+d_[30]+t_67, +1+t_70);
	uint64_t t_77 = MAP_Explorer::max2(+t_74, +1+t_71);
	uint64_t t_78 = MAP_Explorer::max2(+1+t_75, +t_72);
	uint64_t t_79 = MAP_Explorer::max2(+t_76, +t_73);
	uint64_t t_80 = MAP_Explorer::max2(+t_77, +d_[29]+t_71);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_78, +d_[29]+t_72);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_79, +d_[29]+t_73);
	uint64_t t_83 = MAP_Explorer::max2(+d_[32]+t_74, +1+t_77);
	uint64_t t_84 = MAP_Explorer::max2(+d_[32]+t_75, +t_78);
	uint64_t t_85 = MAP_Explorer::max2(+d_[32]+t_76, +1+t_79);
	uint64_t t_86 = MAP_Explorer::max2(+t_83, +1+t_80);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_84, +t_81);
	uint64_t t_88 = MAP_Explorer::max2(+t_85, +t_82);
	uint64_t t_89 = MAP_Explorer::max2(+t_86, +d_[31]+t_80);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_87, +d_[31]+t_81);
	uint64_t t_91 = MAP_Explorer::max2(+1+t_88, +d_[31]+t_82);
	uint64_t t_92 = MAP_Explorer::max2(+d_[34]+t_83, +1+t_86);
	uint64_t t_93 = MAP_Explorer::max2(+d_[34]+t_84, +t_87);
	uint64_t t_94 = MAP_Explorer::max2(+d_[34]+t_85, +1+t_88);
	uint64_t t_95 = MAP_Explorer::max2(+t_92, +1+t_89);
	uint64_t t_96 = MAP_Explorer::max2(+1+t_93, +t_90);
	uint64_t t_97 = MAP_Explorer::max2(+t_94, +t_91);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = out_19 +d_[2]+d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[33]+t_89, vec_[3] +d_[33]+t_90);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[7]+d_[8]+d_[33]+t_89);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[33]+t_91);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_95, vec_[3] +1+t_96);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[7]+d_[8]+t_95);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_97);
	uint64_t out_14 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +2+d_[7]);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5], vec_[4] +1);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_83, vec_[3] +1+t_84);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[7]+d_[8]+t_83);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_85);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_92, vec_[3] +1+t_93);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[7]+d_[8]+t_92);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_94);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_34{
    34,
    29648,
    29732,
    block_34_fn
    };

static void block_35_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[8], +d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[3]+d_[5]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +d_[7]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[3]+d_[5]+d_[7]);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[5]+d_[7]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+t_3, +1+t_5);
	uint64_t t_12 = MAP_Explorer::max2(+d_[10]+t_4, +t_6);
	uint64_t t_13 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+t_11, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_12, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +d_[9]+t_8);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +d_[9]+t_9);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_16, +d_[9]+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+d_[11]+t_11, +1+t_14);
	uint64_t t_21 = MAP_Explorer::max2(+d_[11]+t_12, +t_15);
	uint64_t t_22 = MAP_Explorer::max2(+d_[11]+t_13, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+t_20, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+1+t_21, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+t_22, +t_19);
	uint64_t t_26 = MAP_Explorer::max2(+d_[13]+t_20, +1+t_23);
	uint64_t t_27 = MAP_Explorer::max2(+d_[13]+t_21, +t_24);
	uint64_t t_28 = MAP_Explorer::max2(+d_[13]+t_22, +1+t_25);
	uint64_t t_29 = MAP_Explorer::max2(+t_26, +d_[12]+t_23);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[12]+t_24);
	uint64_t t_31 = MAP_Explorer::max2(+t_28, +d_[12]+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+d_[14]+t_26, +1+t_29);
	uint64_t t_33 = MAP_Explorer::max2(+d_[14]+t_27, +t_30);
	uint64_t t_34 = MAP_Explorer::max2(+d_[14]+t_28, +1+t_31);
	uint64_t t_35 = MAP_Explorer::max2(+d_[14]+d_[15]+t_26, +1+t_32);
	uint64_t t_36 = MAP_Explorer::max2(+d_[14]+d_[15]+t_27, +1+t_33);
	uint64_t t_37 = MAP_Explorer::max2(+d_[14]+d_[15]+t_28, +1+t_34);
	uint64_t t_38 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_35, +3+t_17);
	uint64_t t_39 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_36, +1+t_18);
	uint64_t t_40 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_37, +2+t_19);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +1+d_[2]+t_17, vec_[3] +1+t_18);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_19);
	uint64_t out_12 = MAP_Explorer::max2(out_19 +1+d_[2]+t_29, vec_[3] +2+t_30);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_31);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1+d_[2]+t_32, vec_[3] +3+t_33);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+t_34);
	uint64_t out_22 = MAP_Explorer::max2(out_19 +1+d_[2]+t_35, vec_[3] +3+t_36);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+d_[15]);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_37);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+t_38, vec_[3] +1+t_39);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[15]+d_[16]+d_[17]+d_[18]+d_[19]);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_40);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_6 = out_22 -1+d_[16]+d_[17]+d_[18];
	uint64_t out_23 = out_22 +d_[16];
	uint64_t out_24 = out_22 +d_[16]+d_[17];
	uint64_t out_37 = out_22 -2+d_[16]+d_[17]+d_[18];
	uint64_t out_3 = out_24;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_6 -2+d_[19];


	vec_[19] = out_19;
	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[6] = out_6;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_35{
    35,
    29736,
    29792,
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
    52580,
    52580,
    block_36_fn
    };

static void block_37_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +3+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_18;
	uint64_t out_16 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_16 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_37{
    37,
    46156,
    46168,
    block_37_fn
    };

static void block_38_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[7], +d_[6]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[7]+d_[9]+d_[10], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[10], +d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_2);

	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_15 = out_16 +d_[2];
	uint64_t out_3 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+d_[8]+t_0, vec_[3] +d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[8]);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_1, vec_[3] +1+d_[6]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +3+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +3);
	uint64_t out_18 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4], vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[9], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +2+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_3, vec_[3] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+d_[10]);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +3+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +3+d_[10]);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_38{
    38,
    46172,
    46204,
    block_38_fn
    };

static void block_39_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

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
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_1);
	uint64_t out_3 = out_18;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_39{
    39,
    46212,
    46220,
    block_39_fn
    };

static void block_40_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[13] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
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
    46224,
    46228,
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
	uint64_t out_15 = MAP_Explorer::max2(out_37 +1, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[15] = out_15;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_41{
    41,
    46984,
    46992,
    block_41_fn
    };

static void block_42_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_6 = MAP_Explorer::max2(+1+t_4, +d_[2]+d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[8]+t_3, +1+t_5);
	uint64_t t_8 = MAP_Explorer::max2(+d_[8]+t_4, +t_6);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +d_[6]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(+2+t_8, +d_[2]+d_[4]+d_[6]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_9);
	uint64_t t_12 = MAP_Explorer::max2(+1+d_[9]+t_8, +t_10);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+d_[10]+t_7, +1+t_11);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+d_[10]+t_8, +t_12);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_13, +2+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+t_14, +t_10);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_11, vec_[1] +2+d_[1]+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_12);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_11);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_11);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_9, vec_[1] +3+d_[1]+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_10);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_9);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_13, vec_[1] +1+d_[1]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_13);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_15, vec_[1] +2+d_[1]+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_16);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_15);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_15);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[11];
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);


	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_42{
    42,
    59688,
    59720,
    block_42_fn
    };

static void block_43_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
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
    59724,
    59728,
    block_43_fn
    };

static void block_44_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

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
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_1);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_44{
    44,
    59732,
    59740,
    block_44_fn
    };

static void block_45_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+t_0, vec_[2] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2);
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
    59744,
    59748,
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
	uint64_t out_0 = out_37 -1+d_[2];
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_46{
    46,
    59888,
    59896,
    block_46_fn
    };

static void block_47_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[12] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_5 = out_37 +1+d_[2];
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[5] = out_5;
	vec_[38] = out_38;
	vec_[14] = out_14;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_47{
    47,
    59900,
    59908,
    block_47_fn
    };

static void block_48_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[7], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[6]+d_[7], +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[8]+t_3, +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8]+t_4, +1+t_2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0, vec_[1] +2+d_[1]+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +2+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[3]+d_[5]);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[2]+d_[5]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[5]+t_0);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[3] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[15] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_1, vec_[1] +2+d_[1]+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +2+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +3+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +2+d_[2]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_3, vec_[1] +1+d_[1]+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +2+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[2]+t_3);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_3);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_5, vec_[1] +2+d_[1]+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +3+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[2]+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_5);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_12 = out_37 +1;
	uint64_t out_0 = out_12 -2+d_[8];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_48{
    48,
    77892,
    77916,
    block_48_fn
    };

static void block_49_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[6]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[6]+t_4);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[4]+d_[6]);
	uint64_t t_13 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+t_6, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+d_[10]+t_13, +1+t_16);
	uint64_t t_20 = MAP_Explorer::max2(+d_[10]+t_14, +1+t_17);
	uint64_t t_21 = MAP_Explorer::max2(+d_[10]+t_15, +1+t_18);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[8]+t_10, vec_[1] +2+d_[1]+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[8]+t_11);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[8]+t_12);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +2+d_[8]+t_10);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[8]+t_10);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_16, vec_[1] +2+d_[1]+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_17);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_18);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2+t_16);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_16);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +3+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_13, vec_[1] +1+d_[1]+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_13);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_13);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_19, vec_[1] +2+d_[1]+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_20);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_21);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_19);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[13] = out_13;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_49{
    49,
    77956,
    77980,
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
    77984,
    77988,
    block_50_fn
    };

static void block_51_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2+d_[6]+d_[7]+d_[8], +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[10], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+1+d_[6]+d_[7]+d_[8]+d_[10], +t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_2, +d_[9]+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+t_3, +d_[9]+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[10], +d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[10]+d_[12], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+d_[6]+d_[7]+d_[8]+d_[10]+d_[12], +t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_7, +1+t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +t_5);
	uint64_t t_11 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_6);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_4, vec_[1] +2+d_[1]+d_[2]+d_[11]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[11]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[11]+t_5);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[11]+t_4);
	out_3 = MAP_Explorer::max2(out_3, vec_[15] +3+d_[8]+d_[11]+t_6);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[11]+t_4);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_9, vec_[1] +2+d_[1]+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_10);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+t_9);
	out_5 = MAP_Explorer::max2(out_5, vec_[15] +3+d_[8]+t_11);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_9);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+d_[4]+d_[5]);
	out_12 = MAP_Explorer::max2(out_12, vec_[14] +1);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[3] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[2]+d_[4]);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7], vec_[1] +2+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]+d_[6]+d_[7]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+t_7, vec_[1] +1+d_[1]+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+t_7);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[8]+d_[10]+d_[12]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+t_7);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_37 = out_19 -1+d_[8]+d_[10];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_51{
    51,
    78776,
    78812,
    block_51_fn
    };

static void block_54_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_54{
    54,
    78816,
    78820,
    block_54_fn
    };

static void block_55_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_12;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_55{
    55,
    78824,
    78836,
    block_55_fn
    };


} // namespace CV32E40P_DSE