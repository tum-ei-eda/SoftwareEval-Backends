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

static void block_25_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +2, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[1], vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1);
	uint64_t out_3 = out_14;
	uint64_t out_0 = out_38 -1;
	uint64_t out_5 = MAP_Explorer::max2(out_38 +1, vec_[3] +1);
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;


	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[0] = out_0;
	vec_[5] = out_5;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_25{
    25,
    69384,
    69388,
    block_25_fn
    };

static void block_26_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);

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
    46096,
    46100,
    block_26_fn
    };

static void block_27_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4]+d_[5], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[3]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[5], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +2+t_0);
	uint64_t t_5 = MAP_Explorer::max2(+1+d_[6], +t_1);
	uint64_t t_6 = MAP_Explorer::max2(+t_5, +1+t_1);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[6], +t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_7, +1+t_2);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+t_0, vec_[1] +3+d_[1]+d_[2]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+d_[2]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+t_2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+d_[2]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[5], vec_[1] +1+d_[1]+d_[2]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[4]+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[5]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[4]+d_[5]);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+t_4, vec_[1] +2+d_[1]+d_[2]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+d_[2]+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_6);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_8);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+d_[2]+t_4);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_37 -1+d_[6];
	uint64_t out_1 = out_38 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_27{
    27,
    46108,
    46128,
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
    block_28_fn
    };

static void block_29_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[5], +d_[4]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[6]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[4]+d_[6]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[7]+d_[9], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[9], +d_[4]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[4]+d_[6]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_12 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[10]+t_6, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[10]+t_7, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+d_[11]+t_12, +d_[8]+t_3);
	uint64_t t_17 = MAP_Explorer::max2(+2+d_[11]+t_13, +d_[4]+d_[6]+d_[8]);
	uint64_t t_18 = MAP_Explorer::max2(+1+d_[11]+t_14, +d_[8]+t_4);
	uint64_t t_19 = MAP_Explorer::max2(+1+d_[11]+t_15, +d_[6]+d_[8]);
	uint64_t t_20 = MAP_Explorer::max2(+1+d_[10]+d_[11], +d_[8]);
	uint64_t t_21 = MAP_Explorer::max2(+d_[11]+d_[13]+t_12, +1+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+1+d_[11]+d_[13]+t_13, +t_17);
	uint64_t t_23 = MAP_Explorer::max2(+d_[11]+d_[13]+t_14, +t_18);
	uint64_t t_24 = MAP_Explorer::max2(+d_[11]+d_[13]+t_15, +t_19);
	uint64_t t_25 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[13], +t_20);
	uint64_t t_26 = MAP_Explorer::max2(+t_21, +d_[12]+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[12]+t_17);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[12]+t_18);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[12]+t_19);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_25, +d_[12]+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_12, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_13, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_14, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15]+t_15, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+d_[10]+d_[11]+d_[13]+d_[15], +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+t_31, +1+t_26);
	uint64_t t_37 = MAP_Explorer::max2(+1+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+t_35, +t_30);
	uint64_t t_41 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_42 = MAP_Explorer::max2(+t_36, +d_[14]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[14]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[14]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[14]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[14]+t_30);
	uint64_t t_47 = MAP_Explorer::max2(+1+t_41, +d_[12]+d_[14]);
	uint64_t t_48 = MAP_Explorer::max2(+d_[17]+t_31, +1+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[17]+t_32, +t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[17]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[17]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[17]+t_35, +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+t_48, +1+t_42);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+t_53, +t_47);
	uint64_t t_60 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_61 = MAP_Explorer::max2(+d_[18]+t_48, +1+t_54);
	uint64_t t_62 = MAP_Explorer::max2(+d_[18]+t_49, +t_55);
	uint64_t t_63 = MAP_Explorer::max2(+d_[18]+t_50, +1+t_56);
	uint64_t t_64 = MAP_Explorer::max2(+d_[18]+t_51, +1+t_57);
	uint64_t t_65 = MAP_Explorer::max2(+d_[18]+t_52, +1+t_58);
	uint64_t t_66 = MAP_Explorer::max2(+d_[18]+t_53, +1+t_59);
	uint64_t t_67 = MAP_Explorer::max2(+d_[17]+d_[18], +1+t_60);
	uint64_t t_68 = MAP_Explorer::max2(+t_61, +d_[16]+t_42);
	uint64_t t_69 = MAP_Explorer::max2(+2+t_62, +d_[16]+t_43);
	uint64_t t_70 = MAP_Explorer::max2(+1+t_63, +d_[16]+t_44);
	uint64_t t_71 = MAP_Explorer::max2(+1+t_64, +d_[16]+t_45);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_65, +d_[16]+t_46);
	uint64_t t_73 = MAP_Explorer::max2(+1+t_66, +d_[16]+t_47);
	uint64_t t_74 = MAP_Explorer::max2(+1+t_67, +d_[14]+d_[16]);
	uint64_t t_75 = MAP_Explorer::max2(+1+d_[18], +d_[16]);
	uint64_t t_76 = MAP_Explorer::max2(+d_[20]+t_61, +1+t_68);
	uint64_t t_77 = MAP_Explorer::max2(+1+d_[20]+t_62, +t_69);
	uint64_t t_78 = MAP_Explorer::max2(+d_[20]+t_63, +t_70);
	uint64_t t_79 = MAP_Explorer::max2(+d_[20]+t_64, +t_71);
	uint64_t t_80 = MAP_Explorer::max2(+d_[20]+t_65, +t_72);
	uint64_t t_81 = MAP_Explorer::max2(+d_[20]+t_66, +t_73);
	uint64_t t_82 = MAP_Explorer::max2(+d_[20]+t_67, +t_74);
	uint64_t t_83 = MAP_Explorer::max2(+d_[18]+d_[20], +t_75);
	uint64_t t_84 = MAP_Explorer::max2(+d_[20]+d_[21]+t_61, +1+t_76);
	uint64_t t_85 = MAP_Explorer::max2(+d_[20]+d_[21]+t_62, +t_77);
	uint64_t t_86 = MAP_Explorer::max2(+d_[20]+d_[21]+t_63, +1+t_78);
	uint64_t t_87 = MAP_Explorer::max2(+d_[20]+d_[21]+t_64, +1+t_79);
	uint64_t t_88 = MAP_Explorer::max2(+d_[20]+d_[21]+t_65, +1+t_80);
	uint64_t t_89 = MAP_Explorer::max2(+d_[20]+d_[21]+t_66, +1+t_81);
	uint64_t t_90 = MAP_Explorer::max2(+d_[20]+d_[21]+t_67, +1+t_82);
	uint64_t t_91 = MAP_Explorer::max2(+d_[18]+d_[20]+d_[21], +1+t_83);
	uint64_t t_92 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_84, +1+t_12);
	uint64_t t_93 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_85, +1+t_13);
	uint64_t t_94 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_86, +1+t_14);
	uint64_t t_95 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_87, +1+t_15);
	uint64_t t_96 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_88, +1+d_[10]);
	uint64_t t_97 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+t_84, +d_[19]+t_68);
	uint64_t t_98 = MAP_Explorer::max2(+t_97, +1+t_12);
	uint64_t t_99 = MAP_Explorer::max2(+2+d_[22]+d_[23]+d_[24]+d_[25]+t_85, +d_[19]+t_69);
	uint64_t t_100 = MAP_Explorer::max2(+t_99, +3+t_13);
	uint64_t t_101 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_86, +d_[19]+t_70);
	uint64_t t_102 = MAP_Explorer::max2(+t_101, +2+t_14);
	uint64_t t_103 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_87, +d_[19]+t_71);
	uint64_t t_104 = MAP_Explorer::max2(+t_103, +2+t_15);
	uint64_t t_105 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_88, +d_[19]+t_72);
	uint64_t t_106 = MAP_Explorer::max2(+t_105, +2+d_[10]);
	uint64_t t_107 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_89, +d_[19]+t_73);
	uint64_t t_108 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_90, +d_[19]+t_74);
	uint64_t t_109 = MAP_Explorer::max2(+1+d_[22]+d_[23]+d_[24]+d_[25]+t_91, +d_[19]+t_75);
	uint64_t t_110 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_84, +1+t_92);
	uint64_t t_111 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_85, +1+t_93);
	uint64_t t_112 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_86, +1+t_94);
	uint64_t t_113 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_87, +1+t_95);
	uint64_t t_114 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_88, +1+t_96);
	uint64_t t_115 = MAP_Explorer::max2(+t_110, +1+t_98);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_111, +t_100);
	uint64_t t_117 = MAP_Explorer::max2(+t_112, +t_102);
	uint64_t t_118 = MAP_Explorer::max2(+t_113, +t_104);
	uint64_t t_119 = MAP_Explorer::max2(+t_114, +t_106);
	uint64_t t_120 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_89, +t_107);
	uint64_t t_121 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_90, +t_108);
	uint64_t t_122 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+t_91, +t_109);
	uint64_t t_123 = MAP_Explorer::max2(+t_115, +d_[26]+t_98);
	uint64_t t_124 = MAP_Explorer::max2(+1+t_116, +d_[26]+t_100);
	uint64_t t_125 = MAP_Explorer::max2(+d_[27], +d_[26]);
	uint64_t t_126 = MAP_Explorer::max2(+1+t_117, +d_[26]+t_102);
	uint64_t t_127 = MAP_Explorer::max2(+1+t_118, +d_[26]+t_104);
	uint64_t t_128 = MAP_Explorer::max2(+1+t_119, +d_[26]+t_106);
	uint64_t t_129 = MAP_Explorer::max2(+1+t_120, +d_[26]+t_107);
	uint64_t t_130 = MAP_Explorer::max2(+1+t_121, +d_[26]+t_108);
	uint64_t t_131 = MAP_Explorer::max2(+1+t_122, +d_[26]+t_109);
	uint64_t t_132 = MAP_Explorer::max2(+d_[29]+t_110, +1+t_115);
	uint64_t t_133 = MAP_Explorer::max2(+d_[29]+t_111, +t_116);
	uint64_t t_134 = MAP_Explorer::max2(+d_[29]+t_112, +1+t_117);
	uint64_t t_135 = MAP_Explorer::max2(+d_[29]+t_113, +1+t_118);
	uint64_t t_136 = MAP_Explorer::max2(+d_[29]+t_114, +1+t_119);
	uint64_t t_137 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+d_[29]+t_89, +1+t_120);
	uint64_t t_138 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+d_[29]+t_90, +1+t_121);
	uint64_t t_139 = MAP_Explorer::max2(+d_[22]+d_[23]+d_[24]+d_[25]+d_[27]+d_[29]+t_91, +1+t_122);
	uint64_t t_140 = MAP_Explorer::max2(+t_132, +1+t_123);
	uint64_t t_141 = MAP_Explorer::max2(+1+t_133, +t_124);
	uint64_t t_142 = MAP_Explorer::max2(+d_[27]+d_[29], +1+t_125);
	uint64_t t_143 = MAP_Explorer::max2(+t_134, +t_126);
	uint64_t t_144 = MAP_Explorer::max2(+t_135, +t_127);
	uint64_t t_145 = MAP_Explorer::max2(+t_136, +t_128);
	uint64_t t_146 = MAP_Explorer::max2(+t_137, +t_129);
	uint64_t t_147 = MAP_Explorer::max2(+t_138, +t_130);
	uint64_t t_148 = MAP_Explorer::max2(+t_139, +t_131);
	uint64_t t_149 = MAP_Explorer::max2(+t_140, +d_[28]+t_123);
	uint64_t t_150 = MAP_Explorer::max2(+t_149, +1+t_12);
	uint64_t t_151 = MAP_Explorer::max2(+1+t_141, +d_[28]+t_124);
	uint64_t t_152 = MAP_Explorer::max2(+t_151, +3+t_13);
	uint64_t t_153 = MAP_Explorer::max2(+t_142, +d_[28]+t_125);
	uint64_t t_154 = MAP_Explorer::max2(+1+t_143, +d_[28]+t_126);
	uint64_t t_155 = MAP_Explorer::max2(+t_154, +2+t_14);
	uint64_t t_156 = MAP_Explorer::max2(+1+t_144, +d_[28]+t_127);
	uint64_t t_157 = MAP_Explorer::max2(+t_156, +2+t_15);
	uint64_t t_158 = MAP_Explorer::max2(+1+t_145, +d_[28]+t_128);
	uint64_t t_159 = MAP_Explorer::max2(+t_158, +2+d_[10]);
	uint64_t t_160 = MAP_Explorer::max2(+1+t_146, +d_[28]+t_129);
	uint64_t t_161 = MAP_Explorer::max2(+1+t_147, +d_[28]+t_130);
	uint64_t t_162 = MAP_Explorer::max2(+1+t_148, +d_[28]+t_131);
	uint64_t t_163 = MAP_Explorer::max2(+d_[31]+t_132, +1+t_140);
	uint64_t t_164 = MAP_Explorer::max2(+d_[31]+t_133, +t_141);
	uint64_t t_165 = MAP_Explorer::max2(+d_[27]+d_[29]+d_[31], +1+t_142);
	uint64_t t_166 = MAP_Explorer::max2(+d_[31]+t_134, +1+t_143);
	uint64_t t_167 = MAP_Explorer::max2(+d_[31]+t_135, +1+t_144);
	uint64_t t_168 = MAP_Explorer::max2(+d_[31]+t_136, +1+t_145);
	uint64_t t_169 = MAP_Explorer::max2(+d_[31]+t_137, +1+t_146);
	uint64_t t_170 = MAP_Explorer::max2(+d_[31]+t_138, +1+t_147);
	uint64_t t_171 = MAP_Explorer::max2(+d_[31]+t_139, +1+t_148);
	uint64_t t_172 = MAP_Explorer::max2(+t_163, +1+t_150);
	uint64_t t_173 = MAP_Explorer::max2(+t_172, +1+t_12);
	uint64_t t_174 = MAP_Explorer::max2(+1+t_164, +t_152);
	uint64_t t_175 = MAP_Explorer::max2(+t_174, +2+t_13);
	uint64_t t_176 = MAP_Explorer::max2(+t_165, +1+t_153);
	uint64_t t_177 = MAP_Explorer::max2(+t_166, +t_155);
	uint64_t t_178 = MAP_Explorer::max2(+t_177, +1+t_14);
	uint64_t t_179 = MAP_Explorer::max2(+t_167, +t_157);
	uint64_t t_180 = MAP_Explorer::max2(+t_179, +1+t_15);
	uint64_t t_181 = MAP_Explorer::max2(+t_168, +t_159);
	uint64_t t_182 = MAP_Explorer::max2(+t_181, +1+d_[10]);
	uint64_t t_183 = MAP_Explorer::max2(+t_169, +t_160);
	uint64_t t_184 = MAP_Explorer::max2(+t_170, +t_161);
	uint64_t t_185 = MAP_Explorer::max2(+t_171, +t_162);
	uint64_t t_186 = MAP_Explorer::max2(+t_172, +d_[30]+t_150);
	uint64_t t_187 = MAP_Explorer::max2(+t_186, +1+t_12);
	uint64_t t_188 = MAP_Explorer::max2(+1+t_174, +d_[30]+t_152);
	uint64_t t_189 = MAP_Explorer::max2(+t_188, +3+t_13);
	uint64_t t_190 = MAP_Explorer::max2(+t_176, +d_[30]+t_153);
	uint64_t t_191 = MAP_Explorer::max2(+1+t_177, +d_[30]+t_155);
	uint64_t t_192 = MAP_Explorer::max2(+t_191, +2+t_14);
	uint64_t t_193 = MAP_Explorer::max2(+1+t_179, +d_[30]+t_157);
	uint64_t t_194 = MAP_Explorer::max2(+t_193, +2+t_15);
	uint64_t t_195 = MAP_Explorer::max2(+1+t_181, +d_[30]+t_159);
	uint64_t t_196 = MAP_Explorer::max2(+t_195, +2+d_[10]);
	uint64_t t_197 = MAP_Explorer::max2(+1+t_183, +d_[30]+t_160);
	uint64_t t_198 = MAP_Explorer::max2(+1+t_184, +d_[30]+t_161);
	uint64_t t_199 = MAP_Explorer::max2(+1+t_185, +d_[30]+t_162);
	uint64_t t_200 = MAP_Explorer::max2(+d_[33]+t_163, +1+t_173);
	uint64_t t_201 = MAP_Explorer::max2(+d_[33]+t_164, +t_175);
	uint64_t t_202 = MAP_Explorer::max2(+d_[33]+t_165, +1+t_176);
	uint64_t t_203 = MAP_Explorer::max2(+d_[33]+t_166, +1+t_178);
	uint64_t t_204 = MAP_Explorer::max2(+d_[33]+t_167, +1+t_180);
	uint64_t t_205 = MAP_Explorer::max2(+d_[33]+t_168, +1+t_182);
	uint64_t t_206 = MAP_Explorer::max2(+d_[33]+t_169, +1+t_183);
	uint64_t t_207 = MAP_Explorer::max2(+d_[33]+t_170, +1+t_184);
	uint64_t t_208 = MAP_Explorer::max2(+d_[33]+t_171, +1+t_185);
	uint64_t t_209 = MAP_Explorer::max2(+t_200, +1+t_187);
	uint64_t t_210 = MAP_Explorer::max2(+1+t_201, +t_189);
	uint64_t t_211 = MAP_Explorer::max2(+t_202, +1+t_190);
	uint64_t t_212 = MAP_Explorer::max2(+t_203, +t_192);
	uint64_t t_213 = MAP_Explorer::max2(+t_204, +t_194);
	uint64_t t_214 = MAP_Explorer::max2(+t_205, +t_196);
	uint64_t t_215 = MAP_Explorer::max2(+t_206, +t_197);
	uint64_t t_216 = MAP_Explorer::max2(+t_207, +t_198);
	uint64_t t_217 = MAP_Explorer::max2(+t_208, +t_199);
	uint64_t t_218 = MAP_Explorer::max2(+t_209, +d_[32]+t_187);
	uint64_t t_219 = MAP_Explorer::max2(+1+t_210, +d_[32]+t_189);
	uint64_t t_220 = MAP_Explorer::max2(+t_211, +d_[32]+t_190);
	uint64_t t_221 = MAP_Explorer::max2(+1+t_212, +d_[32]+t_192);
	uint64_t t_222 = MAP_Explorer::max2(+1+t_213, +d_[32]+t_194);
	uint64_t t_223 = MAP_Explorer::max2(+1+t_214, +d_[32]+t_196);
	uint64_t t_224 = MAP_Explorer::max2(+1+t_215, +d_[32]+t_197);
	uint64_t t_225 = MAP_Explorer::max2(+1+t_216, +d_[32]+t_198);
	uint64_t t_226 = MAP_Explorer::max2(+1+t_217, +d_[32]+t_199);
	uint64_t t_227 = MAP_Explorer::max2(+d_[35]+t_200, +1+t_209);
	uint64_t t_228 = MAP_Explorer::max2(+d_[35]+t_201, +t_210);
	uint64_t t_229 = MAP_Explorer::max2(+d_[35]+t_202, +1+t_211);
	uint64_t t_230 = MAP_Explorer::max2(+d_[35]+t_203, +1+t_212);
	uint64_t t_231 = MAP_Explorer::max2(+d_[35]+t_204, +1+t_213);
	uint64_t t_232 = MAP_Explorer::max2(+d_[35]+t_205, +1+t_214);
	uint64_t t_233 = MAP_Explorer::max2(+d_[35]+t_206, +1+t_215);
	uint64_t t_234 = MAP_Explorer::max2(+d_[35]+t_207, +1+t_216);
	uint64_t t_235 = MAP_Explorer::max2(+d_[35]+t_208, +1+t_217);
	uint64_t t_236 = MAP_Explorer::max2(+t_227, +1+t_218);
	uint64_t t_237 = MAP_Explorer::max2(+1+t_228, +t_219);
	uint64_t t_238 = MAP_Explorer::max2(+t_229, +1+t_220);
	uint64_t t_239 = MAP_Explorer::max2(+t_230, +t_221);
	uint64_t t_240 = MAP_Explorer::max2(+t_231, +t_222);
	uint64_t t_241 = MAP_Explorer::max2(+t_232, +t_223);
	uint64_t t_242 = MAP_Explorer::max2(+t_233, +t_224);
	uint64_t t_243 = MAP_Explorer::max2(+t_234, +t_225);
	uint64_t t_244 = MAP_Explorer::max2(+t_235, +t_226);
	uint64_t t_245 = MAP_Explorer::max2(+t_236, +d_[34]+t_218);
	uint64_t t_246 = MAP_Explorer::max2(+t_245, +1+t_12);
	uint64_t t_247 = MAP_Explorer::max2(+1+t_237, +d_[34]+t_219);
	uint64_t t_248 = MAP_Explorer::max2(+t_247, +3+t_13);
	uint64_t t_249 = MAP_Explorer::max2(+t_238, +d_[34]+t_220);
	uint64_t t_250 = MAP_Explorer::max2(+1+t_239, +d_[34]+t_221);
	uint64_t t_251 = MAP_Explorer::max2(+t_250, +2+t_14);
	uint64_t t_252 = MAP_Explorer::max2(+1+t_240, +d_[34]+t_222);
	uint64_t t_253 = MAP_Explorer::max2(+t_252, +2+t_15);
	uint64_t t_254 = MAP_Explorer::max2(+1+t_241, +d_[34]+t_223);
	uint64_t t_255 = MAP_Explorer::max2(+t_254, +2+d_[10]);
	uint64_t t_256 = MAP_Explorer::max2(+1+t_242, +d_[34]+t_224);
	uint64_t t_257 = MAP_Explorer::max2(+1+t_243, +d_[34]+t_225);
	uint64_t t_258 = MAP_Explorer::max2(+1+t_244, +d_[34]+t_226);
	uint64_t t_259 = MAP_Explorer::max2(+d_[37]+t_227, +1+t_236);
	uint64_t t_260 = MAP_Explorer::max2(+d_[37]+t_228, +t_237);
	uint64_t t_261 = MAP_Explorer::max2(+d_[37]+t_229, +1+t_238);
	uint64_t t_262 = MAP_Explorer::max2(+d_[37]+t_230, +1+t_239);
	uint64_t t_263 = MAP_Explorer::max2(+d_[37]+t_231, +1+t_240);
	uint64_t t_264 = MAP_Explorer::max2(+d_[37]+t_232, +1+t_241);
	uint64_t t_265 = MAP_Explorer::max2(+d_[37]+t_233, +1+t_242);
	uint64_t t_266 = MAP_Explorer::max2(+d_[37]+t_234, +1+t_243);
	uint64_t t_267 = MAP_Explorer::max2(+d_[37]+t_235, +1+t_244);
	uint64_t t_268 = MAP_Explorer::max2(+t_259, +1+t_246);
	uint64_t t_269 = MAP_Explorer::max2(+t_268, +1+t_12);
	uint64_t t_270 = MAP_Explorer::max2(+1+t_260, +t_248);
	uint64_t t_271 = MAP_Explorer::max2(+t_270, +2+t_13);
	uint64_t t_272 = MAP_Explorer::max2(+t_261, +1+t_249);
	uint64_t t_273 = MAP_Explorer::max2(+t_262, +t_251);
	uint64_t t_274 = MAP_Explorer::max2(+t_273, +1+t_14);
	uint64_t t_275 = MAP_Explorer::max2(+t_263, +t_253);
	uint64_t t_276 = MAP_Explorer::max2(+t_275, +1+t_15);
	uint64_t t_277 = MAP_Explorer::max2(+t_264, +t_255);
	uint64_t t_278 = MAP_Explorer::max2(+t_277, +1+d_[10]);
	uint64_t t_279 = MAP_Explorer::max2(+t_265, +t_256);
	uint64_t t_280 = MAP_Explorer::max2(+t_266, +t_257);
	uint64_t t_281 = MAP_Explorer::max2(+t_267, +t_258);
	uint64_t t_282 = MAP_Explorer::max2(+t_268, +d_[36]+t_246);
	uint64_t t_283 = MAP_Explorer::max2(+t_282, +1+t_12);
	uint64_t t_284 = MAP_Explorer::max2(+1+t_270, +d_[36]+t_248);
	uint64_t t_285 = MAP_Explorer::max2(+t_284, +3+t_13);
	uint64_t t_286 = MAP_Explorer::max2(+t_272, +d_[36]+t_249);
	uint64_t t_287 = MAP_Explorer::max2(+1+t_273, +d_[36]+t_251);
	uint64_t t_288 = MAP_Explorer::max2(+t_287, +2+t_14);
	uint64_t t_289 = MAP_Explorer::max2(+1+t_275, +d_[36]+t_253);
	uint64_t t_290 = MAP_Explorer::max2(+t_289, +2+t_15);
	uint64_t t_291 = MAP_Explorer::max2(+1+t_277, +d_[36]+t_255);
	uint64_t t_292 = MAP_Explorer::max2(+t_291, +2+d_[10]);
	uint64_t t_293 = MAP_Explorer::max2(+1+t_279, +d_[36]+t_256);
	uint64_t t_294 = MAP_Explorer::max2(+1+t_280, +d_[36]+t_257);
	uint64_t t_295 = MAP_Explorer::max2(+1+t_281, +d_[36]+t_258);
	uint64_t t_296 = MAP_Explorer::max2(+d_[39]+t_259, +1+t_269);
	uint64_t t_297 = MAP_Explorer::max2(+d_[39]+t_260, +t_271);
	uint64_t t_298 = MAP_Explorer::max2(+d_[39]+t_261, +1+t_272);
	uint64_t t_299 = MAP_Explorer::max2(+d_[39]+t_262, +1+t_274);
	uint64_t t_300 = MAP_Explorer::max2(+d_[39]+t_263, +1+t_276);
	uint64_t t_301 = MAP_Explorer::max2(+d_[39]+t_264, +1+t_278);
	uint64_t t_302 = MAP_Explorer::max2(+d_[39]+t_265, +1+t_279);
	uint64_t t_303 = MAP_Explorer::max2(+d_[39]+t_266, +1+t_280);
	uint64_t t_304 = MAP_Explorer::max2(+d_[39]+t_267, +1+t_281);
	uint64_t t_305 = MAP_Explorer::max2(+t_296, +1+t_283);
	uint64_t t_306 = MAP_Explorer::max2(+1+t_297, +t_285);
	uint64_t t_307 = MAP_Explorer::max2(+t_298, +1+t_286);
	uint64_t t_308 = MAP_Explorer::max2(+t_299, +t_288);
	uint64_t t_309 = MAP_Explorer::max2(+t_300, +t_290);
	uint64_t t_310 = MAP_Explorer::max2(+t_301, +t_292);
	uint64_t t_311 = MAP_Explorer::max2(+t_302, +t_293);
	uint64_t t_312 = MAP_Explorer::max2(+t_303, +t_294);
	uint64_t t_313 = MAP_Explorer::max2(+t_304, +t_295);
	uint64_t t_314 = MAP_Explorer::max2(+t_305, +d_[38]+t_283);
	uint64_t t_315 = MAP_Explorer::max2(+1+t_306, +d_[38]+t_285);
	uint64_t t_316 = MAP_Explorer::max2(+t_307, +d_[38]+t_286);
	uint64_t t_317 = MAP_Explorer::max2(+1+t_308, +d_[38]+t_288);
	uint64_t t_318 = MAP_Explorer::max2(+1+t_309, +d_[38]+t_290);
	uint64_t t_319 = MAP_Explorer::max2(+1+t_310, +d_[38]+t_292);
	uint64_t t_320 = MAP_Explorer::max2(+1+t_311, +d_[38]+t_293);
	uint64_t t_321 = MAP_Explorer::max2(+1+t_312, +d_[38]+t_294);
	uint64_t t_322 = MAP_Explorer::max2(+1+t_313, +d_[38]+t_295);
	uint64_t t_323 = MAP_Explorer::max2(+d_[41]+t_296, +1+t_305);
	uint64_t t_324 = MAP_Explorer::max2(+d_[41]+t_297, +t_306);
	uint64_t t_325 = MAP_Explorer::max2(+d_[41]+t_298, +1+t_307);
	uint64_t t_326 = MAP_Explorer::max2(+d_[41]+t_299, +1+t_308);
	uint64_t t_327 = MAP_Explorer::max2(+d_[41]+t_300, +1+t_309);
	uint64_t t_328 = MAP_Explorer::max2(+d_[41]+t_301, +1+t_310);
	uint64_t t_329 = MAP_Explorer::max2(+d_[41]+t_302, +1+t_311);
	uint64_t t_330 = MAP_Explorer::max2(+d_[41]+t_303, +1+t_312);
	uint64_t t_331 = MAP_Explorer::max2(+d_[41]+t_304, +1+t_313);
	uint64_t t_332 = MAP_Explorer::max2(+t_323, +1+t_314);
	uint64_t t_333 = MAP_Explorer::max2(+1+t_324, +t_315);
	uint64_t t_334 = MAP_Explorer::max2(+t_325, +1+t_316);
	uint64_t t_335 = MAP_Explorer::max2(+t_326, +t_317);
	uint64_t t_336 = MAP_Explorer::max2(+t_327, +t_318);
	uint64_t t_337 = MAP_Explorer::max2(+t_328, +t_319);
	uint64_t t_338 = MAP_Explorer::max2(+t_329, +t_320);
	uint64_t t_339 = MAP_Explorer::max2(+t_330, +t_321);
	uint64_t t_340 = MAP_Explorer::max2(+t_331, +t_322);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[40]+t_314, vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[40]+t_314);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[2]+d_[3]+d_[40]+t_314);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[40]+t_315);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[22]+d_[23]+d_[24]+d_[25]+d_[40]+t_316);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[40]+t_317);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[2]+d_[3]+d_[40]+t_314);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[40]+t_318);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[40]+t_319);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[40]+t_320);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[40]+t_321);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[40]+t_322);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[40]+t_314);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_332, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_332);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+d_[2]+d_[3]+t_332);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_333);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[22]+d_[23]+d_[24]+d_[25]+t_334);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_335);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[2]+d_[3]+t_332);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_336);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_337);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_338);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_339);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+t_340);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_332);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_12, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_12);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[3]+t_12);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2+t_13);
	out_12 = MAP_Explorer::max2(out_12, vec_[5] +2+t_14);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +2+d_[2]+d_[3]+t_12);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+t_15);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +2+d_[10]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_12);
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_76, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_76);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]+t_76);
	out_16 = MAP_Explorer::max2(out_16, vec_[3] +1+t_77);
	out_16 = MAP_Explorer::max2(out_16, vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[5] +2+t_78);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2+d_[2]+d_[3]+t_76);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +2+t_79);
	out_16 = MAP_Explorer::max2(out_16, vec_[13] +2+t_80);
	out_16 = MAP_Explorer::max2(out_16, vec_[22] +2+t_81);
	out_16 = MAP_Explorer::max2(out_16, vec_[23] +2+t_82);
	out_16 = MAP_Explorer::max2(out_16, vec_[24] +2+t_83);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_76);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_54, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_54);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[2]+d_[3]+t_54);
	out_18 = MAP_Explorer::max2(out_18, vec_[3] +1+t_55);
	out_18 = MAP_Explorer::max2(out_18, vec_[5] +2+t_56);
	out_18 = MAP_Explorer::max2(out_18, vec_[6] +2+d_[2]+d_[3]+t_54);
	out_18 = MAP_Explorer::max2(out_18, vec_[12] +2+t_57);
	out_18 = MAP_Explorer::max2(out_18, vec_[13] +2+t_58);
	out_18 = MAP_Explorer::max2(out_18, vec_[22] +2+t_59);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+t_60);
	out_18 = MAP_Explorer::max2(out_18, vec_[24] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_54);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_84, vec_[1] +2+d_[1]+d_[2]+d_[3]+t_84);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+t_84);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+t_85);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_86);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[2]+d_[3]+t_84);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_87);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_88);
	out_19 = MAP_Explorer::max2(out_19, vec_[22] +2+t_89);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +2+t_90);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+t_91);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+t_84);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_296, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_296);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]+d_[3]+t_296);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_297);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[22]+d_[23]+d_[24]+d_[25]+t_298);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_299);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]+d_[3]+t_296);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_300);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_301);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_302);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_303);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_304);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_296);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_323, vec_[1] +1+d_[1]+d_[2]+d_[3]+t_323);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+d_[2]+d_[3]+t_323);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_324);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[22]+d_[23]+d_[24]+d_[25]+t_325);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+t_326);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[2]+d_[3]+t_323);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_327);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_328);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+t_329);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+t_330);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1+t_331);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+d_[2]+d_[3]+t_323);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_15 = out_19 +d_[22];
	uint64_t out_14 = out_15 +d_[23]+d_[24];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[12] = out_12;
	vec_[16] = out_16;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[15] = out_15;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_29{
    29,
    45428,
    45532,
    block_29_fn
    };

static void block_33_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[16], +d_[15]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[18], +d_[15]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[17]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[15]+d_[17]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[16]+d_[18]+d_[20], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[20], +d_[15]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[18]+d_[20], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[15]+d_[17]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+t_8, +d_[19]+t_3);
	uint64_t t_12 = MAP_Explorer::max2(+1+t_9, +d_[15]+d_[17]+d_[19]);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_10, +d_[19]+t_4);
	uint64_t t_14 = MAP_Explorer::max2(+d_[22]+t_5, +1+t_8);
	uint64_t t_15 = MAP_Explorer::max2(+d_[22]+t_6, +t_9);
	uint64_t t_16 = MAP_Explorer::max2(+d_[22]+t_7, +1+t_10);
	uint64_t t_17 = MAP_Explorer::max2(+t_14, +1+t_11);
	uint64_t t_18 = MAP_Explorer::max2(+1+t_15, +t_12);
	uint64_t t_19 = MAP_Explorer::max2(+t_16, +t_13);
	uint64_t t_20 = MAP_Explorer::max2(+t_17, +d_[21]+t_11);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_18, +d_[21]+t_12);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_19, +d_[21]+t_13);
	uint64_t t_23 = MAP_Explorer::max2(+d_[24]+t_14, +1+t_17);
	uint64_t t_24 = MAP_Explorer::max2(+d_[24]+t_15, +t_18);
	uint64_t t_25 = MAP_Explorer::max2(+d_[24]+t_16, +1+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+t_23, +1+t_20);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_24, +t_21);
	uint64_t t_28 = MAP_Explorer::max2(+t_25, +t_22);
	uint64_t t_29 = MAP_Explorer::max2(+t_26, +d_[23]+t_20);
	uint64_t t_30 = MAP_Explorer::max2(+1+t_27, +d_[23]+t_21);
	uint64_t t_31 = MAP_Explorer::max2(+1+t_28, +d_[23]+t_22);
	uint64_t t_32 = MAP_Explorer::max2(+d_[26]+t_23, +1+t_26);
	uint64_t t_33 = MAP_Explorer::max2(+d_[26]+t_24, +t_27);
	uint64_t t_34 = MAP_Explorer::max2(+d_[26]+t_25, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+t_32, +1+t_29);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_33, +t_30);
	uint64_t t_37 = MAP_Explorer::max2(+t_34, +t_31);
	uint64_t t_38 = MAP_Explorer::max2(+t_35, +d_[25]+t_29);
	uint64_t t_39 = MAP_Explorer::max2(+1+t_36, +d_[25]+t_30);
	uint64_t t_40 = MAP_Explorer::max2(+1+t_37, +d_[25]+t_31);
	uint64_t t_41 = MAP_Explorer::max2(+d_[28]+t_32, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[28]+t_33, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[28]+t_34, +1+t_37);
	uint64_t t_44 = MAP_Explorer::max2(+t_41, +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_42, +t_39);
	uint64_t t_46 = MAP_Explorer::max2(+t_43, +t_40);
	uint64_t t_47 = MAP_Explorer::max2(+t_44, +d_[27]+t_38);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_45, +d_[27]+t_39);
	uint64_t t_49 = MAP_Explorer::max2(+1+t_46, +d_[27]+t_40);
	uint64_t t_50 = MAP_Explorer::max2(+d_[30]+t_41, +1+t_44);
	uint64_t t_51 = MAP_Explorer::max2(+d_[30]+t_42, +t_45);
	uint64_t t_52 = MAP_Explorer::max2(+d_[30]+t_43, +1+t_46);
	uint64_t t_53 = MAP_Explorer::max2(+t_50, +1+t_47);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_51, +t_48);
	uint64_t t_55 = MAP_Explorer::max2(+t_52, +t_49);
	uint64_t t_56 = MAP_Explorer::max2(+t_53, +d_[29]+t_47);
	uint64_t t_57 = MAP_Explorer::max2(+1+t_54, +d_[29]+t_48);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_55, +d_[29]+t_49);
	uint64_t t_59 = MAP_Explorer::max2(+d_[32]+t_50, +1+t_53);
	uint64_t t_60 = MAP_Explorer::max2(+d_[32]+t_51, +t_54);
	uint64_t t_61 = MAP_Explorer::max2(+d_[32]+t_52, +1+t_55);
	uint64_t t_62 = MAP_Explorer::max2(+t_59, +1+t_56);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_60, +t_57);
	uint64_t t_64 = MAP_Explorer::max2(+t_61, +t_58);
	uint64_t t_65 = MAP_Explorer::max2(+t_62, +d_[31]+t_56);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_63, +d_[31]+t_57);
	uint64_t t_67 = MAP_Explorer::max2(+1+t_64, +d_[31]+t_58);
	uint64_t t_68 = MAP_Explorer::max2(+d_[34]+t_59, +1+t_62);
	uint64_t t_69 = MAP_Explorer::max2(+d_[34]+t_60, +t_63);
	uint64_t t_70 = MAP_Explorer::max2(+d_[34]+t_61, +1+t_64);
	uint64_t t_71 = MAP_Explorer::max2(+t_68, +1+t_65);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_69, +t_66);
	uint64_t t_73 = MAP_Explorer::max2(+t_70, +t_67);
	uint64_t t_74 = MAP_Explorer::max2(+t_71, +d_[33]+t_65);
	uint64_t t_75 = MAP_Explorer::max2(+1+t_72, +d_[33]+t_66);
	uint64_t t_76 = MAP_Explorer::max2(+1+t_73, +d_[33]+t_67);
	uint64_t t_77 = MAP_Explorer::max2(+d_[36]+t_68, +1+t_71);
	uint64_t t_78 = MAP_Explorer::max2(+d_[36]+t_69, +t_72);
	uint64_t t_79 = MAP_Explorer::max2(+d_[36]+t_70, +1+t_73);
	uint64_t t_80 = MAP_Explorer::max2(+t_77, +1+t_74);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_78, +t_75);
	uint64_t t_82 = MAP_Explorer::max2(+t_79, +t_76);
	uint64_t t_83 = MAP_Explorer::max2(+t_80, +d_[35]+t_74);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_81, +d_[35]+t_75);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_82, +d_[35]+t_76);
	uint64_t t_86 = MAP_Explorer::max2(+d_[38]+t_77, +1+t_80);
	uint64_t t_87 = MAP_Explorer::max2(+d_[38]+t_78, +t_81);
	uint64_t t_88 = MAP_Explorer::max2(+d_[38]+t_79, +1+t_82);
	uint64_t t_89 = MAP_Explorer::max2(+t_86, +1+t_83);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_87, +t_84);
	uint64_t t_91 = MAP_Explorer::max2(+t_88, +t_85);
	uint64_t t_92 = MAP_Explorer::max2(+t_89, +d_[37]+t_83);
	uint64_t t_93 = MAP_Explorer::max2(+1+t_90, +d_[37]+t_84);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_91, +d_[37]+t_85);
	uint64_t t_95 = MAP_Explorer::max2(+d_[40]+t_86, +1+t_89);
	uint64_t t_96 = MAP_Explorer::max2(+d_[40]+t_87, +t_90);
	uint64_t t_97 = MAP_Explorer::max2(+d_[40]+t_88, +1+t_91);
	uint64_t t_98 = MAP_Explorer::max2(+t_95, +1+t_92);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_96, +t_93);
	uint64_t t_100 = MAP_Explorer::max2(+t_97, +t_94);

	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+d_[2]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_23 = out_24 +d_[3]+d_[4];
	uint64_t out_3 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[39]+t_92, vec_[3] +d_[39]+t_93);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[12]+d_[13]+d_[14]+d_[39]+t_92);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[39]+t_94);
	uint64_t out_5 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_98, vec_[3] +1+t_99);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[12]+d_[13]+d_[14]+t_98);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_100);
	uint64_t out_15 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11], vec_[4] +2);
	uint64_t out_16 = MAP_Explorer::max2(out_24 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_86, vec_[3] +1+t_87);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[12]+d_[13]+d_[14]+t_86);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_88);
	uint64_t out_38 = MAP_Explorer::max2(out_24 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+t_95, vec_[3] +1+t_96);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[12]+d_[13]+d_[14]+t_95);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_97);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_15 +d_[12]+d_[13];
	uint64_t out_22 = out_23 +d_[5]+d_[6];
	uint64_t out_13 = out_22 +d_[7]+d_[8];
	uint64_t out_19 = out_22 +d_[7]+d_[8]+d_[9];


	vec_[24] = out_24;
	vec_[23] = out_23;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[13] = out_13;
	vec_[19] = out_19;
}

extern const MAP_Explorer::Block block_33{
    33,
    45536,
    45644,
    block_33_fn
    };

static void block_34_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[10], +d_[9]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[10]+d_[12], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[12], +d_[9]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[11]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[9]+d_[11]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[10]+d_[12]+d_[14], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[14], +d_[9]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[12]+d_[14], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[9]+d_[11]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[14], +d_[11]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[13]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[9]+d_[11]+d_[13]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[13]+t_4);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[11]+d_[13]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[16]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[16]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[16]+t_7, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[14]+d_[16], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+d_[16], +d_[13]);
	uint64_t t_24 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[15]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[15]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[15]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[13]+d_[15]);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[15]+t_15);
	uint64_t t_30 = MAP_Explorer::max2(+d_[18]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[18]+t_17, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[18]+t_18, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[16]+d_[18], +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[18]+t_19, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+d_[18], +d_[15]);
	uint64_t t_39 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +d_[17]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[17]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[17]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[15]+d_[17]);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[17]+t_28);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[17]+t_29);
	uint64_t t_47 = MAP_Explorer::max2(+d_[20]+t_30, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[20]+t_31, +t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[20]+t_32, +1+t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[18]+d_[20], +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[20]+t_33, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[20]+t_34, +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+t_47, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_48, +t_42);
	uint64_t t_55 = MAP_Explorer::max2(+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+t_53, +d_[19]+t_41);
	uint64_t t_60 = MAP_Explorer::max2(+1+t_54, +d_[19]+t_42);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_55, +d_[19]+t_43);
	uint64_t t_62 = MAP_Explorer::max2(+1+t_56, +d_[19]+t_44);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_57, +d_[19]+t_45);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_58, +d_[19]+t_46);
	uint64_t t_65 = MAP_Explorer::max2(+d_[22]+t_47, +1+t_53);
	uint64_t t_66 = MAP_Explorer::max2(+d_[22]+t_48, +t_54);
	uint64_t t_67 = MAP_Explorer::max2(+d_[22]+t_49, +1+t_55);
	uint64_t t_68 = MAP_Explorer::max2(+d_[22]+t_50, +1+t_56);
	uint64_t t_69 = MAP_Explorer::max2(+d_[22]+t_51, +1+t_57);
	uint64_t t_70 = MAP_Explorer::max2(+d_[22]+t_52, +1+t_58);
	uint64_t t_71 = MAP_Explorer::max2(+t_65, +1+t_59);
	uint64_t t_72 = MAP_Explorer::max2(+1+t_66, +t_60);
	uint64_t t_73 = MAP_Explorer::max2(+t_67, +t_61);
	uint64_t t_74 = MAP_Explorer::max2(+t_68, +t_62);
	uint64_t t_75 = MAP_Explorer::max2(+t_69, +t_63);
	uint64_t t_76 = MAP_Explorer::max2(+t_70, +t_64);
	uint64_t t_77 = MAP_Explorer::max2(+t_71, +d_[21]+t_59);
	uint64_t t_78 = MAP_Explorer::max2(+1+t_72, +d_[21]+t_60);
	uint64_t t_79 = MAP_Explorer::max2(+1+t_73, +d_[21]+t_61);
	uint64_t t_80 = MAP_Explorer::max2(+1+t_74, +d_[21]+t_62);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_75, +d_[21]+t_63);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_76, +d_[21]+t_64);
	uint64_t t_83 = MAP_Explorer::max2(+d_[24]+t_65, +1+t_71);
	uint64_t t_84 = MAP_Explorer::max2(+d_[24]+t_66, +t_72);
	uint64_t t_85 = MAP_Explorer::max2(+d_[24]+t_67, +1+t_73);
	uint64_t t_86 = MAP_Explorer::max2(+d_[24]+t_68, +1+t_74);
	uint64_t t_87 = MAP_Explorer::max2(+d_[24]+t_69, +1+t_75);
	uint64_t t_88 = MAP_Explorer::max2(+d_[24]+t_70, +1+t_76);
	uint64_t t_89 = MAP_Explorer::max2(+t_83, +1+t_77);
	uint64_t t_90 = MAP_Explorer::max2(+1+t_84, +t_78);
	uint64_t t_91 = MAP_Explorer::max2(+t_85, +t_79);
	uint64_t t_92 = MAP_Explorer::max2(+t_86, +t_80);
	uint64_t t_93 = MAP_Explorer::max2(+t_87, +t_81);
	uint64_t t_94 = MAP_Explorer::max2(+t_88, +t_82);
	uint64_t t_95 = MAP_Explorer::max2(+t_89, +d_[23]+t_77);
	uint64_t t_96 = MAP_Explorer::max2(+1+t_90, +d_[23]+t_78);
	uint64_t t_97 = MAP_Explorer::max2(+1+t_91, +d_[23]+t_79);
	uint64_t t_98 = MAP_Explorer::max2(+1+t_92, +d_[23]+t_80);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_93, +d_[23]+t_81);
	uint64_t t_100 = MAP_Explorer::max2(+1+t_94, +d_[23]+t_82);
	uint64_t t_101 = MAP_Explorer::max2(+d_[26]+t_83, +1+t_89);
	uint64_t t_102 = MAP_Explorer::max2(+d_[26]+t_84, +t_90);
	uint64_t t_103 = MAP_Explorer::max2(+d_[26]+t_85, +1+t_91);
	uint64_t t_104 = MAP_Explorer::max2(+d_[26]+t_86, +1+t_92);
	uint64_t t_105 = MAP_Explorer::max2(+d_[26]+t_87, +1+t_93);
	uint64_t t_106 = MAP_Explorer::max2(+d_[26]+t_88, +1+t_94);
	uint64_t t_107 = MAP_Explorer::max2(+t_101, +1+t_95);
	uint64_t t_108 = MAP_Explorer::max2(+1+t_102, +t_96);
	uint64_t t_109 = MAP_Explorer::max2(+t_103, +t_97);
	uint64_t t_110 = MAP_Explorer::max2(+t_104, +t_98);
	uint64_t t_111 = MAP_Explorer::max2(+t_105, +t_99);
	uint64_t t_112 = MAP_Explorer::max2(+t_106, +t_100);
	uint64_t t_113 = MAP_Explorer::max2(+t_107, +d_[25]+t_95);
	uint64_t t_114 = MAP_Explorer::max2(+1+t_108, +d_[25]+t_96);
	uint64_t t_115 = MAP_Explorer::max2(+1+t_109, +d_[25]+t_97);
	uint64_t t_116 = MAP_Explorer::max2(+1+t_110, +d_[25]+t_98);
	uint64_t t_117 = MAP_Explorer::max2(+1+t_111, +d_[25]+t_99);
	uint64_t t_118 = MAP_Explorer::max2(+1+t_112, +d_[25]+t_100);
	uint64_t t_119 = MAP_Explorer::max2(+d_[28]+t_101, +1+t_107);
	uint64_t t_120 = MAP_Explorer::max2(+d_[28]+t_102, +t_108);
	uint64_t t_121 = MAP_Explorer::max2(+d_[28]+t_103, +1+t_109);
	uint64_t t_122 = MAP_Explorer::max2(+d_[28]+t_104, +1+t_110);
	uint64_t t_123 = MAP_Explorer::max2(+d_[28]+t_105, +1+t_111);
	uint64_t t_124 = MAP_Explorer::max2(+d_[28]+t_106, +1+t_112);
	uint64_t t_125 = MAP_Explorer::max2(+t_119, +1+t_113);
	uint64_t t_126 = MAP_Explorer::max2(+1+t_120, +t_114);
	uint64_t t_127 = MAP_Explorer::max2(+t_121, +t_115);
	uint64_t t_128 = MAP_Explorer::max2(+t_122, +t_116);
	uint64_t t_129 = MAP_Explorer::max2(+t_123, +t_117);
	uint64_t t_130 = MAP_Explorer::max2(+t_124, +t_118);
	uint64_t t_131 = MAP_Explorer::max2(+t_125, +d_[27]+t_113);
	uint64_t t_132 = MAP_Explorer::max2(+1+t_126, +d_[27]+t_114);
	uint64_t t_133 = MAP_Explorer::max2(+1+t_127, +d_[27]+t_115);
	uint64_t t_134 = MAP_Explorer::max2(+1+t_128, +d_[27]+t_116);
	uint64_t t_135 = MAP_Explorer::max2(+1+t_129, +d_[27]+t_117);
	uint64_t t_136 = MAP_Explorer::max2(+1+t_130, +d_[27]+t_118);
	uint64_t t_137 = MAP_Explorer::max2(+d_[30]+t_119, +1+t_125);
	uint64_t t_138 = MAP_Explorer::max2(+d_[30]+t_120, +t_126);
	uint64_t t_139 = MAP_Explorer::max2(+d_[30]+t_121, +1+t_127);
	uint64_t t_140 = MAP_Explorer::max2(+d_[30]+t_122, +1+t_128);
	uint64_t t_141 = MAP_Explorer::max2(+d_[30]+t_123, +1+t_129);
	uint64_t t_142 = MAP_Explorer::max2(+d_[30]+t_124, +1+t_130);
	uint64_t t_143 = MAP_Explorer::max2(+t_137, +1+t_131);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_138, +t_132);
	uint64_t t_145 = MAP_Explorer::max2(+t_139, +t_133);
	uint64_t t_146 = MAP_Explorer::max2(+t_140, +t_134);
	uint64_t t_147 = MAP_Explorer::max2(+t_141, +t_135);
	uint64_t t_148 = MAP_Explorer::max2(+t_142, +t_136);
	uint64_t t_149 = MAP_Explorer::max2(+t_143, +d_[29]+t_131);
	uint64_t t_150 = MAP_Explorer::max2(+1+t_144, +d_[29]+t_132);
	uint64_t t_151 = MAP_Explorer::max2(+1+t_145, +d_[29]+t_133);
	uint64_t t_152 = MAP_Explorer::max2(+1+t_146, +d_[29]+t_134);
	uint64_t t_153 = MAP_Explorer::max2(+1+t_147, +d_[29]+t_135);
	uint64_t t_154 = MAP_Explorer::max2(+1+t_148, +d_[29]+t_136);
	uint64_t t_155 = MAP_Explorer::max2(+d_[32]+t_137, +1+t_143);
	uint64_t t_156 = MAP_Explorer::max2(+d_[32]+t_138, +t_144);
	uint64_t t_157 = MAP_Explorer::max2(+d_[32]+t_139, +1+t_145);
	uint64_t t_158 = MAP_Explorer::max2(+d_[32]+t_140, +1+t_146);
	uint64_t t_159 = MAP_Explorer::max2(+d_[32]+t_141, +1+t_147);
	uint64_t t_160 = MAP_Explorer::max2(+d_[32]+t_142, +1+t_148);
	uint64_t t_161 = MAP_Explorer::max2(+t_155, +1+t_149);
	uint64_t t_162 = MAP_Explorer::max2(+1+t_156, +t_150);
	uint64_t t_163 = MAP_Explorer::max2(+t_157, +t_151);
	uint64_t t_164 = MAP_Explorer::max2(+t_158, +t_152);
	uint64_t t_165 = MAP_Explorer::max2(+t_159, +t_153);
	uint64_t t_166 = MAP_Explorer::max2(+t_160, +t_154);
	uint64_t t_167 = MAP_Explorer::max2(+t_161, +d_[31]+t_149);
	uint64_t t_168 = MAP_Explorer::max2(+1+t_162, +d_[31]+t_150);
	uint64_t t_169 = MAP_Explorer::max2(+1+t_163, +d_[31]+t_151);
	uint64_t t_170 = MAP_Explorer::max2(+1+t_164, +d_[31]+t_152);
	uint64_t t_171 = MAP_Explorer::max2(+1+t_165, +d_[31]+t_153);
	uint64_t t_172 = MAP_Explorer::max2(+1+t_166, +d_[31]+t_154);
	uint64_t t_173 = MAP_Explorer::max2(+d_[34]+t_155, +1+t_161);
	uint64_t t_174 = MAP_Explorer::max2(+d_[34]+t_156, +t_162);
	uint64_t t_175 = MAP_Explorer::max2(+d_[34]+t_157, +1+t_163);
	uint64_t t_176 = MAP_Explorer::max2(+d_[34]+t_158, +1+t_164);
	uint64_t t_177 = MAP_Explorer::max2(+d_[34]+t_159, +1+t_165);
	uint64_t t_178 = MAP_Explorer::max2(+d_[34]+t_160, +1+t_166);
	uint64_t t_179 = MAP_Explorer::max2(+t_173, +1+t_167);
	uint64_t t_180 = MAP_Explorer::max2(+1+t_174, +t_168);
	uint64_t t_181 = MAP_Explorer::max2(+t_175, +t_169);
	uint64_t t_182 = MAP_Explorer::max2(+t_176, +t_170);
	uint64_t t_183 = MAP_Explorer::max2(+t_177, +t_171);
	uint64_t t_184 = MAP_Explorer::max2(+t_178, +t_172);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_18 = out_19 +d_[2]+d_[3];
	uint64_t out_3 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[33]+t_167, vec_[3] +d_[33]+t_168);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[6]+d_[7]+d_[8]+d_[33]+t_167);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[33]+t_169);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[33]+t_170);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[33]+t_171);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[33]+t_172);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[33]+t_169);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_179, vec_[3] +1+t_180);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[6]+d_[7]+d_[8]+t_179);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_181);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_182);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_183);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_184);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+t_181);
	uint64_t out_15 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4]+d_[5], vec_[4] +2);
	uint64_t out_16 = MAP_Explorer::max2(out_19 +d_[2]+d_[3]+d_[4], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_155, vec_[3] +1+t_156);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1+d_[6]+d_[7]+d_[8]+t_155);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_157);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_158);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_159);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_160);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+t_157);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+t_173, vec_[3] +1+t_174);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[6]+d_[7]+d_[8]+t_173);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_175);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_176);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+t_177);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+t_178);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1+t_175);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_15 +d_[6]+d_[7];


	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_34{
    34,
    45648,
    45732,
    block_34_fn
    };

static void block_35_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[4], +d_[3]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[4]+d_[6], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[6], +d_[3]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[5]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[3]+d_[5]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[8], +d_[3]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[3]+d_[5]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[7]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[3]+d_[5]+d_[7]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[7]+t_4);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[5]+d_[7]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[10]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[10]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[10]+t_7, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_24 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[9]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[9]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[9]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[7]+d_[9]);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[9]+t_15);
	uint64_t t_30 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_17, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_18, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10]+d_[11], +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_19, +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+d_[11], +d_[9]);
	uint64_t t_39 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_41 = MAP_Explorer::max2(+d_[13]+t_30, +1+t_35);
	uint64_t t_42 = MAP_Explorer::max2(+d_[13]+t_31, +t_36);
	uint64_t t_43 = MAP_Explorer::max2(+d_[13]+t_32, +1+t_37);
	uint64_t t_44 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_38);
	uint64_t t_45 = MAP_Explorer::max2(+d_[13]+t_33, +1+t_39);
	uint64_t t_46 = MAP_Explorer::max2(+d_[13]+t_34, +1+t_40);
	uint64_t t_47 = MAP_Explorer::max2(+t_41, +d_[12]+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+1+t_42, +d_[12]+t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13], +d_[12]);
	uint64_t t_50 = MAP_Explorer::max2(+t_43, +d_[12]+t_37);
	uint64_t t_51 = MAP_Explorer::max2(+t_44, +d_[12]+t_38);
	uint64_t t_52 = MAP_Explorer::max2(+t_45, +d_[12]+t_39);
	uint64_t t_53 = MAP_Explorer::max2(+t_46, +d_[12]+t_40);
	uint64_t t_54 = MAP_Explorer::max2(+d_[14]+t_41, +1+t_47);
	uint64_t t_55 = MAP_Explorer::max2(+d_[14]+t_42, +t_48);
	uint64_t t_56 = MAP_Explorer::max2(+d_[13]+d_[14], +1+t_49);
	uint64_t t_57 = MAP_Explorer::max2(+d_[14]+t_43, +1+t_50);
	uint64_t t_58 = MAP_Explorer::max2(+d_[14]+t_44, +1+t_51);
	uint64_t t_59 = MAP_Explorer::max2(+d_[14]+t_45, +1+t_52);
	uint64_t t_60 = MAP_Explorer::max2(+d_[14]+t_46, +1+t_53);
	uint64_t t_61 = MAP_Explorer::max2(+d_[14]+d_[15]+t_41, +1+t_54);
	uint64_t t_62 = MAP_Explorer::max2(+d_[14]+d_[15]+t_42, +1+t_55);
	uint64_t t_63 = MAP_Explorer::max2(+d_[13]+d_[14]+d_[15], +1+t_56);
	uint64_t t_64 = MAP_Explorer::max2(+d_[14]+d_[15]+t_43, +1+t_57);
	uint64_t t_65 = MAP_Explorer::max2(+d_[14]+d_[15]+t_44, +1+t_58);
	uint64_t t_66 = MAP_Explorer::max2(+d_[14]+d_[15]+t_45, +1+t_59);
	uint64_t t_67 = MAP_Explorer::max2(+d_[14]+d_[15]+t_46, +1+t_60);
	uint64_t t_68 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_61, +3+t_25);
	uint64_t t_69 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_62, +1+t_26);
	uint64_t t_70 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_64, +2+t_27);
	uint64_t t_71 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_65, +2+d_[9]);
	uint64_t t_72 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_66, +2+t_28);
	uint64_t t_73 = MAP_Explorer::max2(+d_[16]+d_[17]+d_[18]+d_[19]+t_67, +2+t_29);

	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_5 = MAP_Explorer::max2(out_19 +1+d_[2]+t_25, vec_[3] +1+t_26);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_27);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+d_[9]);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_28);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_29);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+t_27);
	uint64_t out_12 = MAP_Explorer::max2(out_19 +1+d_[2]+t_47, vec_[3] +2+t_48);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3+t_49);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+t_50);
	out_12 = MAP_Explorer::max2(out_12, vec_[13] +3+t_51);
	out_12 = MAP_Explorer::max2(out_12, vec_[22] +3+t_52);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +3+t_53);
	out_12 = MAP_Explorer::max2(out_12, vec_[24] +3+t_50);
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1+d_[2]+t_54, vec_[3] +3+t_55);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +3+t_56);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +3+t_57);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +3+t_58);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +3+t_59);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +3+t_60);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +3+t_57);
	uint64_t out_22 = MAP_Explorer::max2(out_19 +1+d_[2]+t_61, vec_[3] +3+t_62);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +3+t_63);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +3+t_64);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +3+t_65);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +3+t_66);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +3+t_67);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +3+t_64);
	uint64_t out_38 = MAP_Explorer::max2(out_19 -1+d_[2]+t_68, vec_[3] +1+t_69);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[16]+d_[17]+d_[18]+d_[19]+t_63);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_70);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_71);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+t_72);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+t_73);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1+t_70);
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
    45736,
    45792,
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
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[3], vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_0 = out_16 -2+d_[3];
	uint64_t out_1 = out_38 -1;


	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_37{
    37,
    62968,
    62980,
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
	uint64_t out_0 = MAP_Explorer::max2(out_16 -2+d_[2]+d_[3]+d_[4]+d_[5]+t_3, vec_[3] +t_4);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_5);
	out_0 = MAP_Explorer::max2(out_0, vec_[17] +d_[5]+t_3);
	out_0 = MAP_Explorer::max2(out_0, vec_[18] +t_3);
	uint64_t out_3 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+d_[8]+t_0, vec_[3] +d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[6]+d_[8]);
	out_3 = MAP_Explorer::max2(out_3, vec_[17] +2+d_[5]+d_[8]+t_0);
	out_3 = MAP_Explorer::max2(out_3, vec_[18] +2+d_[8]+t_0);
	uint64_t out_17 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_1, vec_[3] +1+d_[6]);
	out_17 = MAP_Explorer::max2(out_17, vec_[13] +2+t_2);
	out_17 = MAP_Explorer::max2(out_17, vec_[17] +2+d_[5]+t_1);
	out_17 = MAP_Explorer::max2(out_17, vec_[18] +2+t_1);
	uint64_t out_18 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4], vec_[17] +2);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_16 -1+d_[2]+d_[3]+d_[4]+d_[5]+d_[7]+d_[9], vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1+d_[5]+d_[7]+d_[9]);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1+d_[7]+d_[9]);
	uint64_t out_38 = MAP_Explorer::max2(out_16 +d_[2]+d_[3]+d_[4]+d_[5]+t_3, vec_[3] +2+t_4);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_5);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +2+d_[5]+t_3);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+t_3);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[16] = out_16;
	vec_[15] = out_15;
	vec_[0] = out_0;
	vec_[3] = out_3;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_38{
    38,
    62984,
    63016,
    block_38_fn
    };

static void block_39_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[13] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
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
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_39{
    39,
    63024,
    63032,
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
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1);
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
    63796,
    63804,
    block_41_fn
    };

static void block_42_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[3]+d_[5]+d_[7], +1+t_1);
	uint64_t t_6 = MAP_Explorer::max2(+d_[7], +d_[2]);
	uint64_t t_7 = MAP_Explorer::max2(+d_[5]+d_[7], +1+t_2);
	uint64_t t_8 = MAP_Explorer::max2(+t_5, +1+t_3);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_6, +d_[2]+d_[4]);
	uint64_t t_10 = MAP_Explorer::max2(+t_7, +t_4);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7], +d_[4]);
	uint64_t t_12 = MAP_Explorer::max2(+d_[8]+t_5, +1+t_8);
	uint64_t t_13 = MAP_Explorer::max2(+d_[8]+t_6, +t_9);
	uint64_t t_14 = MAP_Explorer::max2(+d_[8]+t_7, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[7]+d_[8], +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+t_12, +d_[6]+t_3);
	uint64_t t_17 = MAP_Explorer::max2(+2+t_13, +d_[2]+d_[4]+d_[6]);
	uint64_t t_18 = MAP_Explorer::max2(+1+d_[8], +d_[6]);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_14, +d_[6]+t_4);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_15, +d_[4]+d_[6]);
	uint64_t t_21 = MAP_Explorer::max2(+d_[9]+t_12, +1+t_16);
	uint64_t t_22 = MAP_Explorer::max2(+1+d_[9]+t_13, +t_17);
	uint64_t t_23 = MAP_Explorer::max2(+d_[8]+d_[9], +t_18);
	uint64_t t_24 = MAP_Explorer::max2(+d_[9]+t_14, +t_19);
	uint64_t t_25 = MAP_Explorer::max2(+d_[9]+t_15, +t_20);
	uint64_t t_26 = MAP_Explorer::max2(+d_[9]+d_[10]+t_12, +1+t_21);
	uint64_t t_27 = MAP_Explorer::max2(+d_[9]+d_[10]+t_13, +t_22);
	uint64_t t_28 = MAP_Explorer::max2(+d_[8]+d_[9]+d_[10], +1+t_23);
	uint64_t t_29 = MAP_Explorer::max2(+d_[9]+d_[10]+t_14, +1+t_24);
	uint64_t t_30 = MAP_Explorer::max2(+d_[9]+d_[10]+t_15, +1+t_25);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_26, +2+t_16);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_27, +t_17);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+t_28, +1+t_18);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_29, +1+t_19);
	uint64_t t_35 = MAP_Explorer::max2(+d_[11]+t_30, +1+t_20);

	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_21, vec_[1] +2+d_[1]+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_22);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_23);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_21);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_24);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_25);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_21);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+t_16, vec_[1] +3+d_[1]+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +3+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +1+t_17);
	out_19 = MAP_Explorer::max2(out_19, vec_[5] +2+t_18);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +3+t_16);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+t_19);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+t_20);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +3+d_[0]+d_[1]+t_16);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_26, vec_[1] +1+d_[1]+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_27);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_28);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_26);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+t_29);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_30);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_26);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_31, vec_[1] +2+d_[1]+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_32);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_33);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_31);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_34);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_35);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+d_[11]);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_31);
	uint64_t out_3 = out_19;
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[11], vec_[15] );
	uint64_t out_12 = MAP_Explorer::max2(out_37 +1, vec_[15] +1);


	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[12] = out_12;
}

extern const MAP_Explorer::Block block_42{
    42,
    76500,
    76532,
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
    block_43_fn
    };

static void block_44_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[1], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[1]+d_[2], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[2], +2);

	uint64_t out_0 = MAP_Explorer::max2(vec_[0] +d_[0]+t_1, vec_[1] +t_1);
	out_0 = MAP_Explorer::max2(out_0, vec_[2] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[3] +1);
	out_0 = MAP_Explorer::max2(out_0, vec_[12] +t_2);
	out_0 = MAP_Explorer::max2(out_0, vec_[36] +d_[0]+t_1);
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
	uint64_t out_38 = MAP_Explorer::max2(out_0 +2, vec_[4] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[0] = out_0;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_44{
    44,
    76544,
    76552,
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
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[17] = out_17;
	vec_[37] = out_37;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_46{
    46,
    76700,
    76708,
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
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[13] +1);
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_38 +1;
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_5 -2;


	vec_[15] = out_15;
	vec_[37] = out_37;
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
    block_47_fn
    };


} // namespace CV32E40P_DSE