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
	uint64_t out_18 = MAP_Explorer::max2(out_37 +2, vec_[3] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[3] +1);
	uint64_t out_3 = out_18;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_128{
    128,
    79104,
    79112,
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
    78944,
    78948,
    block_129_fn
    };

static void block_130_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+1+d_[4]+d_[5], +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5]+d_[7], +1+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[7], +t_1);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[6]+t_0, vec_[1] +2+d_[1]+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[6]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +2+d_[6]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[6]+t_0);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3], vec_[1] +2+d_[1]+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[12] +2+d_[3]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+d_[3]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_2, vec_[1] +2+d_[1]+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_2);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_14 -2+d_[4]+d_[5]+d_[7];
	uint64_t out_1 = out_38 -1;
	uint64_t out_17 = out_14 +d_[4];
	uint64_t out_37 = out_14 -1+d_[4]+d_[5];


	vec_[3] = out_3;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[17] = out_17;
	vec_[37] = out_37;
}

extern const MAP_Explorer::Block block_130{
    130,
    78952,
    78972,
    block_130_fn
    };

static void block_131_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +3);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+d_[2]);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_13;
	uint64_t out_6 = out_13 -1+d_[3];
	uint64_t out_37 = out_13 -2+d_[3];
	uint64_t out_38 = out_13 -2+d_[3]+d_[4];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[4];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_131{
    131,
    78976,
    78992,
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
    66188,
    66188,
    block_132_fn
    };

static void block_133_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +2);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]);
	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[4] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = out_37 +1;
	uint64_t out_38 = out_37 +1+d_[3];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_18 -1+d_[3];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_133{
    133,
    66196,
    66208,
    block_133_fn
    };

static void block_134_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[1]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[3]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[1]+d_[3]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[2]+d_[4]+d_[6], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6], +d_[1]);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_7, +d_[1]+d_[3]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[5]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[5]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[1]+d_[3]+d_[5]);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[3]+d_[5]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8]+t_6, +1+t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[8]+t_7, +t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[7]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[7]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[7]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[7]+t_15);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[5]+d_[7]);
	uint64_t t_30 = MAP_Explorer::max2(+d_[10]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[10]+t_17, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[10]+t_18, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10]+t_19, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +d_[9]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[9]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[9]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[9]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[7]+d_[9]);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[9]+t_29);
	uint64_t t_47 = MAP_Explorer::max2(+d_[12]+t_30, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[12]+t_31, +1+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[12]+t_32, +t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[12]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[12]+t_34, +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+t_47, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+t_48, +t_42);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_59 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_60 = MAP_Explorer::max2(+t_53, +d_[11]+t_41);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_54, +d_[11]+t_42);
	uint64_t t_62 = MAP_Explorer::max2(+1+t_55, +d_[11]+t_43);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_56, +d_[11]+t_44);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_57, +d_[11]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+1+t_58, +d_[9]+d_[11]);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_59, +d_[11]+t_46);
	uint64_t t_67 = MAP_Explorer::max2(+d_[14]+t_47, +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+d_[14]+t_48, +1+t_54);
	uint64_t t_69 = MAP_Explorer::max2(+d_[14]+t_49, +t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[14]+t_50, +1+t_56);
	uint64_t t_71 = MAP_Explorer::max2(+d_[14]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[12]+d_[14], +1+t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[14]+t_52, +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+t_67, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+t_68, +t_61);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_69, +t_62);
	uint64_t t_77 = MAP_Explorer::max2(+t_70, +t_63);
	uint64_t t_78 = MAP_Explorer::max2(+t_71, +t_64);
	uint64_t t_79 = MAP_Explorer::max2(+t_72, +t_65);
	uint64_t t_80 = MAP_Explorer::max2(+d_[14], +d_[11]);
	uint64_t t_81 = MAP_Explorer::max2(+t_73, +t_66);
	uint64_t t_82 = MAP_Explorer::max2(+t_74, +d_[13]+t_60);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[13]+t_61);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_76, +d_[13]+t_62);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_77, +d_[13]+t_63);
	uint64_t t_86 = MAP_Explorer::max2(+1+t_78, +d_[13]+t_64);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_79, +d_[13]+t_65);
	uint64_t t_88 = MAP_Explorer::max2(+1+t_80, +d_[11]+d_[13]);
	uint64_t t_89 = MAP_Explorer::max2(+1+t_81, +d_[13]+t_66);
	uint64_t t_90 = MAP_Explorer::max2(+d_[16]+t_67, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[16]+t_68, +1+t_75);
	uint64_t t_92 = MAP_Explorer::max2(+d_[16]+t_69, +t_76);
	uint64_t t_93 = MAP_Explorer::max2(+d_[16]+t_70, +1+t_77);
	uint64_t t_94 = MAP_Explorer::max2(+d_[16]+t_71, +1+t_78);
	uint64_t t_95 = MAP_Explorer::max2(+d_[16]+t_72, +1+t_79);
	uint64_t t_96 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_80);
	uint64_t t_97 = MAP_Explorer::max2(+d_[16]+t_73, +1+t_81);
	uint64_t t_98 = MAP_Explorer::max2(+t_90, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+t_91, +t_83);
	uint64_t t_100 = MAP_Explorer::max2(+1+t_92, +t_84);
	uint64_t t_101 = MAP_Explorer::max2(+t_93, +t_85);
	uint64_t t_102 = MAP_Explorer::max2(+t_94, +t_86);
	uint64_t t_103 = MAP_Explorer::max2(+t_95, +t_87);
	uint64_t t_104 = MAP_Explorer::max2(+t_96, +t_88);
	uint64_t t_105 = MAP_Explorer::max2(+d_[16], +d_[13]);
	uint64_t t_106 = MAP_Explorer::max2(+t_97, +t_89);
	uint64_t t_107 = MAP_Explorer::max2(+t_98, +d_[15]+t_82);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_99, +d_[15]+t_83);
	uint64_t t_109 = MAP_Explorer::max2(+1+t_100, +d_[15]+t_84);
	uint64_t t_110 = MAP_Explorer::max2(+1+t_101, +d_[15]+t_85);
	uint64_t t_111 = MAP_Explorer::max2(+1+t_102, +d_[15]+t_86);
	uint64_t t_112 = MAP_Explorer::max2(+1+t_103, +d_[15]+t_87);
	uint64_t t_113 = MAP_Explorer::max2(+1+t_104, +d_[15]+t_88);
	uint64_t t_114 = MAP_Explorer::max2(+1+t_105, +d_[13]+d_[15]);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_106, +d_[15]+t_89);
	uint64_t t_116 = MAP_Explorer::max2(+d_[18]+t_90, +1+t_98);
	uint64_t t_117 = MAP_Explorer::max2(+d_[18]+t_91, +1+t_99);
	uint64_t t_118 = MAP_Explorer::max2(+d_[18]+t_92, +t_100);
	uint64_t t_119 = MAP_Explorer::max2(+d_[18]+t_93, +1+t_101);
	uint64_t t_120 = MAP_Explorer::max2(+d_[18]+t_94, +1+t_102);
	uint64_t t_121 = MAP_Explorer::max2(+d_[18]+t_95, +1+t_103);
	uint64_t t_122 = MAP_Explorer::max2(+d_[18]+t_96, +1+t_104);
	uint64_t t_123 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_105);
	uint64_t t_124 = MAP_Explorer::max2(+d_[18]+t_97, +1+t_106);
	uint64_t t_125 = MAP_Explorer::max2(+t_116, +1+t_107);
	uint64_t t_126 = MAP_Explorer::max2(+t_117, +t_108);
	uint64_t t_127 = MAP_Explorer::max2(+1+t_118, +t_109);
	uint64_t t_128 = MAP_Explorer::max2(+t_119, +t_110);
	uint64_t t_129 = MAP_Explorer::max2(+t_120, +t_111);
	uint64_t t_130 = MAP_Explorer::max2(+t_121, +t_112);
	uint64_t t_131 = MAP_Explorer::max2(+t_122, +t_113);
	uint64_t t_132 = MAP_Explorer::max2(+t_123, +t_114);
	uint64_t t_133 = MAP_Explorer::max2(+d_[18], +d_[15]);
	uint64_t t_134 = MAP_Explorer::max2(+t_124, +t_115);
	uint64_t t_135 = MAP_Explorer::max2(+d_[19]+t_116, +1+t_125);
	uint64_t t_136 = MAP_Explorer::max2(+d_[19]+t_117, +1+t_126);
	uint64_t t_137 = MAP_Explorer::max2(+d_[19]+t_118, +t_127);
	uint64_t t_138 = MAP_Explorer::max2(+d_[19]+t_119, +1+t_128);
	uint64_t t_139 = MAP_Explorer::max2(+d_[19]+t_120, +1+t_129);
	uint64_t t_140 = MAP_Explorer::max2(+d_[19]+t_121, +1+t_130);
	uint64_t t_141 = MAP_Explorer::max2(+d_[19]+t_122, +1+t_131);
	uint64_t t_142 = MAP_Explorer::max2(+d_[19]+t_123, +1+t_132);
	uint64_t t_143 = MAP_Explorer::max2(+d_[18]+d_[19], +1+t_133);
	uint64_t t_144 = MAP_Explorer::max2(+d_[19]+t_124, +1+t_134);
	uint64_t t_145 = MAP_Explorer::max2(+t_135, +d_[17]+t_107);
	uint64_t t_146 = MAP_Explorer::max2(+1+t_136, +d_[17]+t_108);
	uint64_t t_147 = MAP_Explorer::max2(+2+t_137, +d_[17]+t_109);
	uint64_t t_148 = MAP_Explorer::max2(+1+t_138, +d_[17]+t_110);
	uint64_t t_149 = MAP_Explorer::max2(+1+t_139, +d_[17]+t_111);
	uint64_t t_150 = MAP_Explorer::max2(+1+t_140, +d_[17]+t_112);
	uint64_t t_151 = MAP_Explorer::max2(+1+t_141, +d_[17]+t_113);
	uint64_t t_152 = MAP_Explorer::max2(+1+t_142, +d_[17]+t_114);
	uint64_t t_153 = MAP_Explorer::max2(+1+t_143, +d_[15]+d_[17]);
	uint64_t t_154 = MAP_Explorer::max2(+1+t_144, +d_[17]+t_115);
	uint64_t t_155 = MAP_Explorer::max2(+1+d_[19], +d_[17]);
	uint64_t t_156 = MAP_Explorer::max2(+d_[20]+t_135, +1+t_145);
	uint64_t t_157 = MAP_Explorer::max2(+d_[20]+t_136, +t_146);
	uint64_t t_158 = MAP_Explorer::max2(+1+d_[20]+t_137, +t_147);
	uint64_t t_159 = MAP_Explorer::max2(+d_[20]+t_138, +t_148);
	uint64_t t_160 = MAP_Explorer::max2(+d_[20]+t_139, +t_149);
	uint64_t t_161 = MAP_Explorer::max2(+d_[20]+t_140, +t_150);
	uint64_t t_162 = MAP_Explorer::max2(+d_[20]+t_141, +t_151);
	uint64_t t_163 = MAP_Explorer::max2(+d_[20]+t_142, +t_152);
	uint64_t t_164 = MAP_Explorer::max2(+d_[20]+t_143, +t_153);
	uint64_t t_165 = MAP_Explorer::max2(+d_[20]+t_144, +t_154);
	uint64_t t_166 = MAP_Explorer::max2(+d_[19]+d_[20], +t_155);
	uint64_t t_167 = MAP_Explorer::max2(+d_[20]+d_[21]+t_135, +1+t_156);
	uint64_t t_168 = MAP_Explorer::max2(+d_[20]+d_[21]+t_136, +1+t_157);
	uint64_t t_169 = MAP_Explorer::max2(+d_[20]+d_[21]+t_137, +t_158);
	uint64_t t_170 = MAP_Explorer::max2(+d_[20]+d_[21]+t_138, +1+t_159);
	uint64_t t_171 = MAP_Explorer::max2(+d_[20]+d_[21]+t_139, +1+t_160);
	uint64_t t_172 = MAP_Explorer::max2(+d_[20]+d_[21]+t_140, +1+t_161);
	uint64_t t_173 = MAP_Explorer::max2(+d_[20]+d_[21]+t_141, +1+t_162);
	uint64_t t_174 = MAP_Explorer::max2(+d_[20]+d_[21]+t_142, +1+t_163);
	uint64_t t_175 = MAP_Explorer::max2(+d_[20]+d_[21]+t_143, +1+t_164);
	uint64_t t_176 = MAP_Explorer::max2(+d_[20]+d_[21]+t_144, +1+t_165);
	uint64_t t_177 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21], +1+t_166);
	uint64_t t_178 = MAP_Explorer::max2(+1+t_169, +t_147);
	uint64_t t_179 = MAP_Explorer::max2(+d_[23]+t_169, +t_178);
	uint64_t t_180 = MAP_Explorer::max2(+d_[23], +d_[22]);
	uint64_t t_181 = MAP_Explorer::max2(+1+t_179, +d_[22]+t_178);
	uint64_t t_182 = MAP_Explorer::max2(+d_[23]+d_[25]+t_169, +1+t_179);
	uint64_t t_183 = MAP_Explorer::max2(+d_[23]+d_[25], +1+t_180);
	uint64_t t_184 = MAP_Explorer::max2(+t_182, +t_181);
	uint64_t t_185 = MAP_Explorer::max2(+t_183, +d_[24]+t_180);
	uint64_t t_186 = MAP_Explorer::max2(+1+t_184, +d_[24]+t_181);
	uint64_t t_187 = MAP_Explorer::max2(+d_[23]+d_[25]+d_[27], +1+t_183);
	uint64_t t_188 = MAP_Explorer::max2(+d_[27]+t_182, +1+t_184);
	uint64_t t_189 = MAP_Explorer::max2(+t_187, +1+t_185);
	uint64_t t_190 = MAP_Explorer::max2(+t_188, +t_186);
	uint64_t t_191 = MAP_Explorer::max2(+d_[27], +d_[24]);
	uint64_t t_192 = MAP_Explorer::max2(+t_189, +d_[26]+t_185);
	uint64_t t_193 = MAP_Explorer::max2(+1+t_190, +d_[26]+t_186);
	uint64_t t_194 = MAP_Explorer::max2(+1+t_191, +d_[24]+d_[26]);
	uint64_t t_195 = MAP_Explorer::max2(+d_[29]+t_187, +1+t_189);
	uint64_t t_196 = MAP_Explorer::max2(+d_[29]+t_188, +1+t_190);
	uint64_t t_197 = MAP_Explorer::max2(+d_[27]+d_[29], +1+t_191);
	uint64_t t_198 = MAP_Explorer::max2(+t_195, +1+t_192);
	uint64_t t_199 = MAP_Explorer::max2(+t_196, +t_193);
	uint64_t t_200 = MAP_Explorer::max2(+t_197, +t_194);
	uint64_t t_201 = MAP_Explorer::max2(+t_198, +d_[28]+t_192);
	uint64_t t_202 = MAP_Explorer::max2(+1+t_199, +d_[28]+t_193);
	uint64_t t_203 = MAP_Explorer::max2(+1+t_200, +d_[28]+t_194);
	uint64_t t_204 = MAP_Explorer::max2(+d_[31]+t_195, +1+t_198);
	uint64_t t_205 = MAP_Explorer::max2(+d_[31]+t_196, +1+t_199);
	uint64_t t_206 = MAP_Explorer::max2(+d_[31]+t_197, +1+t_200);
	uint64_t t_207 = MAP_Explorer::max2(+t_204, +1+t_201);
	uint64_t t_208 = MAP_Explorer::max2(+t_205, +t_202);
	uint64_t t_209 = MAP_Explorer::max2(+t_206, +t_203);
	uint64_t t_210 = MAP_Explorer::max2(+t_207, +d_[30]+t_201);
	uint64_t t_211 = MAP_Explorer::max2(+1+t_208, +d_[30]+t_202);
	uint64_t t_212 = MAP_Explorer::max2(+1+t_209, +d_[30]+t_203);
	uint64_t t_213 = MAP_Explorer::max2(+d_[33]+t_204, +1+t_207);
	uint64_t t_214 = MAP_Explorer::max2(+d_[33]+t_205, +1+t_208);
	uint64_t t_215 = MAP_Explorer::max2(+d_[33]+t_206, +1+t_209);
	uint64_t t_216 = MAP_Explorer::max2(+t_213, +1+t_210);
	uint64_t t_217 = MAP_Explorer::max2(+t_214, +t_211);
	uint64_t t_218 = MAP_Explorer::max2(+t_215, +t_212);
	uint64_t t_219 = MAP_Explorer::max2(+t_216, +d_[32]+t_210);
	uint64_t t_220 = MAP_Explorer::max2(+1+t_217, +d_[32]+t_211);
	uint64_t t_221 = MAP_Explorer::max2(+1+t_218, +d_[32]+t_212);
	uint64_t t_222 = MAP_Explorer::max2(+d_[35]+t_213, +1+t_216);
	uint64_t t_223 = MAP_Explorer::max2(+d_[35]+t_214, +1+t_217);
	uint64_t t_224 = MAP_Explorer::max2(+d_[35]+t_215, +1+t_218);
	uint64_t t_225 = MAP_Explorer::max2(+t_222, +1+t_219);
	uint64_t t_226 = MAP_Explorer::max2(+t_223, +t_220);
	uint64_t t_227 = MAP_Explorer::max2(+t_224, +t_221);
	uint64_t t_228 = MAP_Explorer::max2(+t_225, +d_[34]+t_219);
	uint64_t t_229 = MAP_Explorer::max2(+1+t_226, +d_[34]+t_220);
	uint64_t t_230 = MAP_Explorer::max2(+1+t_227, +d_[34]+t_221);
	uint64_t t_231 = MAP_Explorer::max2(+d_[37]+t_222, +1+t_225);
	uint64_t t_232 = MAP_Explorer::max2(+d_[37]+t_223, +1+t_226);
	uint64_t t_233 = MAP_Explorer::max2(+d_[37]+t_224, +1+t_227);
	uint64_t t_234 = MAP_Explorer::max2(+t_231, +1+t_228);
	uint64_t t_235 = MAP_Explorer::max2(+t_232, +t_229);
	uint64_t t_236 = MAP_Explorer::max2(+t_233, +t_230);
	uint64_t t_237 = MAP_Explorer::max2(+t_234, +d_[36]+t_228);
	uint64_t t_238 = MAP_Explorer::max2(+1+t_235, +d_[36]+t_229);
	uint64_t t_239 = MAP_Explorer::max2(+1+t_236, +d_[36]+t_230);
	uint64_t t_240 = MAP_Explorer::max2(+d_[39]+t_231, +1+t_234);
	uint64_t t_241 = MAP_Explorer::max2(+d_[39]+t_232, +1+t_235);
	uint64_t t_242 = MAP_Explorer::max2(+d_[39]+t_233, +1+t_236);
	uint64_t t_243 = MAP_Explorer::max2(+t_240, +1+t_237);
	uint64_t t_244 = MAP_Explorer::max2(+t_241, +t_238);
	uint64_t t_245 = MAP_Explorer::max2(+t_242, +t_239);
	uint64_t t_246 = MAP_Explorer::max2(+t_243, +d_[38]+t_237);
	uint64_t t_247 = MAP_Explorer::max2(+1+t_244, +d_[38]+t_238);
	uint64_t t_248 = MAP_Explorer::max2(+1+t_245, +d_[38]+t_239);
	uint64_t t_249 = MAP_Explorer::max2(+d_[41]+t_240, +1+t_243);
	uint64_t t_250 = MAP_Explorer::max2(+d_[41]+t_241, +1+t_244);
	uint64_t t_251 = MAP_Explorer::max2(+d_[41]+t_242, +1+t_245);
	uint64_t t_252 = MAP_Explorer::max2(+t_249, +1+t_246);
	uint64_t t_253 = MAP_Explorer::max2(+t_250, +t_247);
	uint64_t t_254 = MAP_Explorer::max2(+t_251, +t_248);
	uint64_t t_255 = MAP_Explorer::max2(+d_[42]+t_249, +1+t_252);
	uint64_t t_256 = MAP_Explorer::max2(+d_[42]+t_250, +1+t_253);
	uint64_t t_257 = MAP_Explorer::max2(+d_[42]+t_251, +1+t_254);
	uint64_t t_258 = MAP_Explorer::max2(+t_167+t_255, +1+t_156);
	uint64_t t_259 = MAP_Explorer::max2(+t_168+t_255, +1+t_157);
	uint64_t t_260 = MAP_Explorer::max2(+t_256, +t_158);
	uint64_t t_261 = MAP_Explorer::max2(+t_170+t_255, +1+t_159);
	uint64_t t_262 = MAP_Explorer::max2(+t_171+t_255, +1+t_160);
	uint64_t t_263 = MAP_Explorer::max2(+t_172+t_255, +1+t_161);
	uint64_t t_264 = MAP_Explorer::max2(+t_173+t_255, +1+t_162);
	uint64_t t_265 = MAP_Explorer::max2(+t_174+t_255, +1+t_163);
	uint64_t t_266 = MAP_Explorer::max2(+t_175+t_255, +1+t_164);
	uint64_t t_267 = MAP_Explorer::max2(+t_176+t_255, +1+t_165);
	uint64_t t_268 = MAP_Explorer::max2(+t_177+t_255, +1+t_166);
	uint64_t t_269 = MAP_Explorer::max2(+d_[43]+t_167+t_255, +1+t_258);
	uint64_t t_270 = MAP_Explorer::max2(+d_[43]+t_168+t_255, +1+t_259);
	uint64_t t_271 = MAP_Explorer::max2(+d_[43]+t_256, +1+t_260);
	uint64_t t_272 = MAP_Explorer::max2(+d_[43]+t_170+t_255, +1+t_261);
	uint64_t t_273 = MAP_Explorer::max2(+d_[43]+t_171+t_255, +1+t_262);
	uint64_t t_274 = MAP_Explorer::max2(+d_[43]+t_172+t_255, +1+t_263);
	uint64_t t_275 = MAP_Explorer::max2(+d_[43]+t_173+t_255, +1+t_264);
	uint64_t t_276 = MAP_Explorer::max2(+d_[43]+t_174+t_255, +1+t_265);
	uint64_t t_277 = MAP_Explorer::max2(+d_[43]+t_175+t_255, +1+t_266);
	uint64_t t_278 = MAP_Explorer::max2(+d_[43]+t_176+t_255, +1+t_267);
	uint64_t t_279 = MAP_Explorer::max2(+d_[43]+t_177+t_255, +1+t_268);
	uint64_t t_280 = MAP_Explorer::max2(+t_271, +t_147);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_269, vec_[1] +t_269);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_270);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +t_271);
	out_0 = MAP_Explorer::max2(out_0, vec_[4] +d_[43]+t_257);
	out_0 = MAP_Explorer::max2(out_0, vec_[6] +t_270);
	out_0 = MAP_Explorer::max2(out_0, vec_[22] +d_[20]+d_[21]+d_[43]+t_255);
	out_0 = MAP_Explorer::max2(out_0, vec_[23] +t_270);
	out_0 = MAP_Explorer::max2(out_0, vec_[24] +t_272);
	out_0 = MAP_Explorer::max2(out_0, vec_[25] +t_273);
	out_0 = MAP_Explorer::max2(out_0, vec_[26] +t_274);
	out_0 = MAP_Explorer::max2(out_0, vec_[27] +t_275);
	out_0 = MAP_Explorer::max2(out_0, vec_[28] +t_276);
	out_0 = MAP_Explorer::max2(out_0, vec_[29] +t_277);
	out_0 = MAP_Explorer::max2(out_0, vec_[30] +t_278);
	out_0 = MAP_Explorer::max2(out_0, vec_[31] +t_279);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_269);
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[40]+t_167+t_246, vec_[1] +2+d_[40]+t_167+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[40]+t_168+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[40]+t_247);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[40]+t_248);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[40]+t_168+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +2+d_[20]+d_[21]+d_[40]+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +2+d_[40]+t_168+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +2+d_[40]+t_170+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[40]+t_171+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +2+d_[40]+t_172+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[27] +2+d_[40]+t_173+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[28] +2+d_[40]+t_174+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[29] +2+d_[40]+t_175+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[30] +2+d_[40]+t_176+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[31] +2+d_[40]+t_177+t_246);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[40]+t_167+t_246);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_167+t_252, vec_[1] +2+t_167+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_168+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_253);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2+t_254);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+t_168+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +2+d_[20]+d_[21]+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +2+t_168+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +2+t_170+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[25] +2+t_171+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[26] +2+t_172+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[27] +2+t_173+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[28] +2+t_174+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[29] +2+t_175+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[30] +2+t_176+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[31] +2+t_177+t_252);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+t_167+t_252);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_145, vec_[1] +3+t_145);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_146);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_147);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+t_146);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_146);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2+t_148);
	out_18 = MAP_Explorer::max2(out_18, vec_[25] +2+t_149);
	out_18 = MAP_Explorer::max2(out_18, vec_[26] +2+t_150);
	out_18 = MAP_Explorer::max2(out_18, vec_[27] +2+t_151);
	out_18 = MAP_Explorer::max2(out_18, vec_[28] +2+t_152);
	out_18 = MAP_Explorer::max2(out_18, vec_[29] +2+t_153);
	out_18 = MAP_Explorer::max2(out_18, vec_[30] +2+t_154);
	out_18 = MAP_Explorer::max2(out_18, vec_[31] +2+t_155);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]+t_145);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_156, vec_[1] +2+t_156);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_157);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +1+t_158);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+t_157);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +2+d_[20]);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_157);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+t_159);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+t_160);
	out_23 = MAP_Explorer::max2(out_23, vec_[26] +2+t_161);
	out_23 = MAP_Explorer::max2(out_23, vec_[27] +2+t_162);
	out_23 = MAP_Explorer::max2(out_23, vec_[28] +2+t_163);
	out_23 = MAP_Explorer::max2(out_23, vec_[29] +2+t_164);
	out_23 = MAP_Explorer::max2(out_23, vec_[30] +2+t_165);
	out_23 = MAP_Explorer::max2(out_23, vec_[31] +2+t_166);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+t_156);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_258, vec_[1] +2+t_258);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_259);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+t_260);
	out_24 = MAP_Explorer::max2(out_24, vec_[4] +2+t_257);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_259);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2+d_[20]+d_[21]+t_255);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_259);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_261);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+t_262);
	out_24 = MAP_Explorer::max2(out_24, vec_[26] +2+t_263);
	out_24 = MAP_Explorer::max2(out_24, vec_[27] +2+t_264);
	out_24 = MAP_Explorer::max2(out_24, vec_[28] +2+t_265);
	out_24 = MAP_Explorer::max2(out_24, vec_[29] +2+t_266);
	out_24 = MAP_Explorer::max2(out_24, vec_[30] +2+t_267);
	out_24 = MAP_Explorer::max2(out_24, vec_[31] +2+t_268);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+t_258);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_125, vec_[1] +2+t_125);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +2+t_126);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +1+t_127);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +2+t_126);
	out_30 = MAP_Explorer::max2(out_30, vec_[22] +1);
	out_30 = MAP_Explorer::max2(out_30, vec_[23] +2+t_126);
	out_30 = MAP_Explorer::max2(out_30, vec_[24] +2+t_128);
	out_30 = MAP_Explorer::max2(out_30, vec_[25] +2+t_129);
	out_30 = MAP_Explorer::max2(out_30, vec_[26] +2+t_130);
	out_30 = MAP_Explorer::max2(out_30, vec_[27] +2+t_131);
	out_30 = MAP_Explorer::max2(out_30, vec_[28] +2+t_132);
	out_30 = MAP_Explorer::max2(out_30, vec_[29] +2+t_133);
	out_30 = MAP_Explorer::max2(out_30, vec_[30] +2+t_134);
	out_30 = MAP_Explorer::max2(out_30, vec_[31] +2);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +2+d_[0]+t_125);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+t_167+t_255, vec_[1] +1+t_167+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_168+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_256);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+t_257);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_168+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+d_[20]+d_[21]+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_168+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_170+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+t_171+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[26] +1+t_172+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[27] +1+t_173+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[28] +1+t_174+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[29] +1+t_175+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1+t_176+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[31] +1+t_177+t_255);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+t_167+t_255);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_269, vec_[1] +2+t_269);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_270);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_280);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+d_[43]+t_257);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_270);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+d_[20]+d_[21]+d_[43]+t_255);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_270);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_272);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+t_273);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +2+t_274);
	out_38 = MAP_Explorer::max2(out_38, vec_[27] +2+t_275);
	out_38 = MAP_Explorer::max2(out_38, vec_[28] +2+t_276);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2+t_277);
	out_38 = MAP_Explorer::max2(out_38, vec_[30] +2+t_278);
	out_38 = MAP_Explorer::max2(out_38, vec_[31] +2+t_279);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+t_269);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[12] = out_12;
	vec_[18] = out_18;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_134{
    134,
    65436,
    65532,
    block_134_fn
    };

static void block_138_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_138{
    138,
    66564,
    66568,
    block_138_fn
    };

static void block_141_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +2+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +1);
	out_21 = MAP_Explorer::max2(out_21, vec_[25] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]);
	uint64_t out_26 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[2] +2+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[3] +2+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[4] +2+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[6] +2+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[25] +2+d_[3]+d_[4]);
	out_26 = MAP_Explorer::max2(out_26, vec_[36] +2+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_22 = out_26 +d_[5]+d_[6]+d_[7];
	uint64_t out_25 = out_26 +d_[5]+d_[6]+d_[7]+d_[8];
	uint64_t out_27 = out_26 +d_[5];
	uint64_t out_29 = out_26 +d_[5]+d_[6];
	uint64_t out_37 = out_26 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9];
	uint64_t out_38 = out_26 +d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_19 = out_22 +d_[8]+d_[9];
	uint64_t out_1 = out_19 -1+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[3] = out_3;
	vec_[21] = out_21;
	vec_[26] = out_26;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[27] = out_27;
	vec_[29] = out_29;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[19] = out_19;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_141{
    141,
    65632,
    65668,
    block_141_fn
    };

static void block_142_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +2+t_0);

	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_0 = MAP_Explorer::max2(out_18 -2+d_[2]+d_[3]+d_[4]+t_1, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[19] +d_[4]+t_1);
	uint64_t out_3 = MAP_Explorer::max2(out_18 +1+d_[2]+d_[3]+d_[4], vec_[3] +1);
	out_3 = MAP_Explorer::max2(out_3, vec_[19] +3+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(out_18 +d_[2]+d_[3]+d_[4]+t_0, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[4]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+d_[5], vec_[19] +1+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(out_18 -1+d_[2]+d_[3]+d_[4]+t_2, vec_[3] +3);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1+d_[4]+t_2);
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[18] = out_18;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_142{
    142,
    65672,
    65696,
    block_142_fn
    };

static void block_143_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[5], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+d_[4]+d_[5], +1+t_2);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]);
	uint64_t out_28 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_1, vec_[1] +2+d_[1]+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[2] +2+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[3] +2+t_2);
	out_28 = MAP_Explorer::max2(out_28, vec_[4] +2+t_2);
	out_28 = MAP_Explorer::max2(out_28, vec_[6] +2+t_1);
	out_28 = MAP_Explorer::max2(out_28, vec_[36] +2+d_[0]+d_[1]+t_1);
	uint64_t out_30 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_0, vec_[1] +3+d_[1]+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[2] +3+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[3] +2+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[4] +2+d_[2]);
	out_30 = MAP_Explorer::max2(out_30, vec_[6] +3+t_0);
	out_30 = MAP_Explorer::max2(out_30, vec_[36] +3+d_[0]+d_[1]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[3]+d_[4], vec_[1] +1+d_[1]+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[3]+d_[4]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[3]+d_[4]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_3 = out_30;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[28] = out_28;
	vec_[30] = out_30;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_143{
    143,
    67520,
    67536,
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
    67540,
    67540,
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
    67544,
    67544,
    block_145_fn
    };

static void block_146_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[30] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[30] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_3 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[3] +d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +1+d_[2]);
	out_3 = MAP_Explorer::max2(out_3, vec_[21] +1+d_[2]);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[6] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[21] +1);
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_146{
    146,
    72084,
    72092,
    block_146_fn
    };

static void block_148_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[19] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +1);
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

extern const MAP_Explorer::Block block_148{
    148,
    80604,
    80608,
    block_148_fn
    };

static void block_149_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_9 = MAP_Explorer::max2(+t_6, +t_4);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +d_[8]+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+1+t_8, +d_[6]+d_[8]);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[8]+t_4);
	uint64_t t_13 = MAP_Explorer::max2(+d_[11]+t_5, +1+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+t_6, +1+t_9);
	uint64_t t_16 = MAP_Explorer::max2(+t_13, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +t_11);
	uint64_t t_18 = MAP_Explorer::max2(+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +d_[10]+t_10);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_17, +d_[10]+t_11);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_18, +d_[10]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+d_[13]+t_13, +1+t_16);
	uint64_t t_23 = MAP_Explorer::max2(+d_[13]+t_14, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[13]+t_15, +1+t_18);
	uint64_t t_25 = MAP_Explorer::max2(+t_22, +1+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +t_20);
	uint64_t t_27 = MAP_Explorer::max2(+t_24, +t_21);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +d_[12]+t_19);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_26, +d_[12]+t_20);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[12]+t_21);
	uint64_t t_31 = MAP_Explorer::max2(+d_[14]+t_22, +1+t_25);
	uint64_t t_32 = MAP_Explorer::max2(+d_[14]+t_23, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[14]+t_24, +1+t_27);
	uint64_t t_34 = MAP_Explorer::max2(+t_31, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +t_29);
	uint64_t t_36 = MAP_Explorer::max2(+t_33, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[15]+t_31, +1+t_34);
	uint64_t t_38 = MAP_Explorer::max2(+d_[15]+t_32, +1+t_35);
	uint64_t t_39 = MAP_Explorer::max2(+d_[15]+t_33, +1+t_36);

	uint64_t out_17 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[2] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[3] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[6] +2+d_[2]);
	out_17 = MAP_Explorer::max2(out_17, vec_[14] +2);
	out_17 = MAP_Explorer::max2(out_17, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +3+d_[0]);
	uint64_t out_21 = MAP_Explorer::max2(out_17 +1+d_[3]+t_28, vec_[4] +2+t_29);
	out_21 = MAP_Explorer::max2(out_21, vec_[28] +2+t_30);
	uint64_t out_22 = MAP_Explorer::max2(out_17 +d_[3]+t_34, vec_[4] +2+t_35);
	out_22 = MAP_Explorer::max2(out_22, vec_[28] +2+t_36);
	uint64_t out_31 = MAP_Explorer::max2(out_17 +d_[3]+t_37, vec_[4] +2+t_38);
	out_31 = MAP_Explorer::max2(out_31, vec_[28] +2+t_39);
	uint64_t out_3 = out_21;
	uint64_t out_26 = out_31 +d_[16];
	uint64_t out_37 = out_31 -1+d_[16];
	uint64_t out_38 = out_31 +d_[16]+d_[17];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_26 -1+d_[17];
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[21] = out_21;
	vec_[22] = out_22;
	vec_[31] = out_31;
	vec_[3] = out_3;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_149{
    149,
    72096,
    72144,
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
    72152,
    72152,
    block_150_fn
    };

static void block_151_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[29] );
	uint64_t out_9 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_9 = MAP_Explorer::max2(out_9, vec_[29] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[29] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[9] = out_9;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_151{
    151,
    65796,
    65800,
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

extern const MAP_Explorer::Block block_152{
    152,
    65808,
    65816,
    block_152_fn
    };

static void block_153_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_153{
    153,
    65820,
    65824,
    block_153_fn
    };


} // namespace CV32E40P_DSE