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
    block_263_fn
    };

static void block_264_fn(uint64_t* vec_, uint8_t* d_){
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
	uint64_t t_12 = MAP_Explorer::max2(+t_8, +d_[6]+t_3);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_9, +d_[2]+d_[4]+d_[6]);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_10, +d_[6]+t_4);
	uint64_t t_15 = MAP_Explorer::max2(+1+t_11, +d_[4]+d_[6]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[9]+t_5, +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+d_[9]+t_6, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+d_[9]+t_7, +1+t_10);
	uint64_t t_19 = MAP_Explorer::max2(+d_[7]+d_[9], +1+t_11);
	uint64_t t_20 = MAP_Explorer::max2(+t_16, +1+t_12);
	uint64_t t_21 = MAP_Explorer::max2(+1+t_17, +t_13);
	uint64_t t_22 = MAP_Explorer::max2(+t_18, +t_14);
	uint64_t t_23 = MAP_Explorer::max2(+t_19, +t_15);
	uint64_t t_24 = MAP_Explorer::max2(+d_[9], +d_[6]);
	uint64_t t_25 = MAP_Explorer::max2(+t_20, +d_[8]+t_12);
	uint64_t t_26 = MAP_Explorer::max2(+1+t_21, +d_[8]+t_13);
	uint64_t t_27 = MAP_Explorer::max2(+1+t_22, +d_[8]+t_14);
	uint64_t t_28 = MAP_Explorer::max2(+1+t_23, +d_[8]+t_15);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +d_[6]+d_[8]);
	uint64_t t_30 = MAP_Explorer::max2(+d_[11]+t_16, +1+t_20);
	uint64_t t_31 = MAP_Explorer::max2(+d_[11]+t_17, +t_21);
	uint64_t t_32 = MAP_Explorer::max2(+d_[11]+t_18, +1+t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[11]+t_19, +1+t_23);
	uint64_t t_34 = MAP_Explorer::max2(+d_[9]+d_[11], +1+t_24);
	uint64_t t_35 = MAP_Explorer::max2(+t_30, +1+t_25);
	uint64_t t_36 = MAP_Explorer::max2(+1+t_31, +t_26);
	uint64_t t_37 = MAP_Explorer::max2(+t_32, +t_27);
	uint64_t t_38 = MAP_Explorer::max2(+t_33, +t_28);
	uint64_t t_39 = MAP_Explorer::max2(+t_34, +t_29);
	uint64_t t_40 = MAP_Explorer::max2(+d_[11], +d_[8]);
	uint64_t t_41 = MAP_Explorer::max2(+t_35, +d_[10]+t_25);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[10]+t_26);
	uint64_t t_43 = MAP_Explorer::max2(+1+t_37, +d_[10]+t_27);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[10]+t_28);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[10]+t_29);
	uint64_t t_46 = MAP_Explorer::max2(+1+t_40, +d_[8]+d_[10]);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+t_30, +1+t_35);
	uint64_t t_48 = MAP_Explorer::max2(+d_[13]+t_31, +t_36);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+t_32, +1+t_37);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+t_33, +1+t_38);
	uint64_t t_51 = MAP_Explorer::max2(+d_[13]+t_34, +1+t_39);
	uint64_t t_52 = MAP_Explorer::max2(+d_[11]+d_[13], +1+t_40);
	uint64_t t_53 = MAP_Explorer::max2(+t_47, +1+t_41);
	uint64_t t_54 = MAP_Explorer::max2(+1+t_48, +t_42);
	uint64_t t_55 = MAP_Explorer::max2(+t_49, +t_43);
	uint64_t t_56 = MAP_Explorer::max2(+t_50, +t_44);
	uint64_t t_57 = MAP_Explorer::max2(+t_51, +t_45);
	uint64_t t_58 = MAP_Explorer::max2(+t_52, +t_46);
	uint64_t t_59 = MAP_Explorer::max2(+d_[13], +d_[10]);
	uint64_t t_60 = MAP_Explorer::max2(+t_53, +d_[12]+t_41);
	uint64_t t_61 = MAP_Explorer::max2(+1+t_54, +d_[12]+t_42);
	uint64_t t_62 = MAP_Explorer::max2(+1+t_55, +d_[12]+t_43);
	uint64_t t_63 = MAP_Explorer::max2(+1+t_56, +d_[12]+t_44);
	uint64_t t_64 = MAP_Explorer::max2(+1+t_57, +d_[12]+t_45);
	uint64_t t_65 = MAP_Explorer::max2(+1+t_58, +d_[12]+t_46);
	uint64_t t_66 = MAP_Explorer::max2(+1+t_59, +d_[10]+d_[12]);
	uint64_t t_67 = MAP_Explorer::max2(+d_[15]+t_47, +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+d_[15]+t_48, +t_54);
	uint64_t t_69 = MAP_Explorer::max2(+d_[15]+t_49, +1+t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[15]+t_50, +1+t_56);
	uint64_t t_71 = MAP_Explorer::max2(+d_[15]+t_51, +1+t_57);
	uint64_t t_72 = MAP_Explorer::max2(+d_[15]+t_52, +1+t_58);
	uint64_t t_73 = MAP_Explorer::max2(+d_[13]+d_[15], +1+t_59);
	uint64_t t_74 = MAP_Explorer::max2(+t_67, +1+t_60);
	uint64_t t_75 = MAP_Explorer::max2(+1+t_68, +t_61);
	uint64_t t_76 = MAP_Explorer::max2(+t_69, +t_62);
	uint64_t t_77 = MAP_Explorer::max2(+t_70, +t_63);
	uint64_t t_78 = MAP_Explorer::max2(+t_71, +t_64);
	uint64_t t_79 = MAP_Explorer::max2(+t_72, +t_65);
	uint64_t t_80 = MAP_Explorer::max2(+t_73, +t_66);
	uint64_t t_81 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_82 = MAP_Explorer::max2(+t_74, +d_[14]+t_60);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[14]+t_61);
	uint64_t t_84 = MAP_Explorer::max2(+1+t_76, +d_[14]+t_62);
	uint64_t t_85 = MAP_Explorer::max2(+1+t_77, +d_[14]+t_63);
	uint64_t t_86 = MAP_Explorer::max2(+1+t_78, +d_[14]+t_64);
	uint64_t t_87 = MAP_Explorer::max2(+1+t_79, +d_[14]+t_65);
	uint64_t t_88 = MAP_Explorer::max2(+1+t_80, +d_[14]+t_66);
	uint64_t t_89 = MAP_Explorer::max2(+1+t_81, +d_[12]+d_[14]);
	uint64_t t_90 = MAP_Explorer::max2(+d_[17]+t_67, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[17]+t_68, +t_75);
	uint64_t t_92 = MAP_Explorer::max2(+d_[17]+t_69, +1+t_76);
	uint64_t t_93 = MAP_Explorer::max2(+d_[17]+t_70, +1+t_77);
	uint64_t t_94 = MAP_Explorer::max2(+d_[17]+t_71, +1+t_78);
	uint64_t t_95 = MAP_Explorer::max2(+d_[17]+t_72, +1+t_79);
	uint64_t t_96 = MAP_Explorer::max2(+d_[17]+t_73, +1+t_80);
	uint64_t t_97 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_81);
	uint64_t t_98 = MAP_Explorer::max2(+t_90, +1+t_82);
	uint64_t t_99 = MAP_Explorer::max2(+1+t_91, +t_83);
	uint64_t t_100 = MAP_Explorer::max2(+t_92, +t_84);
	uint64_t t_101 = MAP_Explorer::max2(+t_93, +t_85);
	uint64_t t_102 = MAP_Explorer::max2(+t_94, +t_86);
	uint64_t t_103 = MAP_Explorer::max2(+t_95, +t_87);
	uint64_t t_104 = MAP_Explorer::max2(+t_96, +t_88);
	uint64_t t_105 = MAP_Explorer::max2(+t_97, +t_89);
	uint64_t t_106 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_107 = MAP_Explorer::max2(+d_[18]+t_90, +1+t_98);
	uint64_t t_108 = MAP_Explorer::max2(+d_[18]+t_91, +t_99);
	uint64_t t_109 = MAP_Explorer::max2(+d_[18]+t_92, +1+t_100);
	uint64_t t_110 = MAP_Explorer::max2(+d_[18]+t_93, +1+t_101);
	uint64_t t_111 = MAP_Explorer::max2(+d_[18]+t_94, +1+t_102);
	uint64_t t_112 = MAP_Explorer::max2(+d_[18]+t_95, +1+t_103);
	uint64_t t_113 = MAP_Explorer::max2(+d_[18]+t_96, +1+t_104);
	uint64_t t_114 = MAP_Explorer::max2(+d_[18]+t_97, +1+t_105);
	uint64_t t_115 = MAP_Explorer::max2(+d_[17]+d_[18], +1+t_106);
	uint64_t t_116 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_107, +d_[16]+t_82);
	uint64_t t_117 = MAP_Explorer::max2(+2+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_108, +d_[16]+t_83);
	uint64_t t_118 = MAP_Explorer::max2(+1+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31], +d_[16]);
	uint64_t t_119 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_109, +d_[16]+t_84);
	uint64_t t_120 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_110, +d_[16]+t_85);
	uint64_t t_121 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_111, +d_[16]+t_86);
	uint64_t t_122 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_112, +d_[16]+t_87);
	uint64_t t_123 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_113, +d_[16]+t_88);
	uint64_t t_124 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_114, +d_[16]+t_89);
	uint64_t t_125 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_115, +d_[14]+d_[16]);
	uint64_t t_126 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_107, +1+t_116);
	uint64_t t_127 = MAP_Explorer::max2(+1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_108, +t_117);
	uint64_t t_128 = MAP_Explorer::max2(+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33], +t_118);
	uint64_t t_129 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_109, +t_119);
	uint64_t t_130 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_110, +t_120);
	uint64_t t_131 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_111, +t_121);
	uint64_t t_132 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_112, +t_122);
	uint64_t t_133 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_113, +t_123);
	uint64_t t_134 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_114, +t_124);
	uint64_t t_135 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+t_115, +t_125);
	uint64_t t_136 = MAP_Explorer::max2(+t_126, +d_[32]+t_116);
	uint64_t t_137 = MAP_Explorer::max2(+1+t_127, +d_[32]+t_117);
	uint64_t t_138 = MAP_Explorer::max2(+d_[33], +d_[32]);
	uint64_t t_139 = MAP_Explorer::max2(+1+t_128, +d_[32]+t_118);
	uint64_t t_140 = MAP_Explorer::max2(+1+t_129, +d_[32]+t_119);
	uint64_t t_141 = MAP_Explorer::max2(+1+t_130, +d_[32]+t_120);
	uint64_t t_142 = MAP_Explorer::max2(+1+t_131, +d_[32]+t_121);
	uint64_t t_143 = MAP_Explorer::max2(+1+t_132, +d_[32]+t_122);
	uint64_t t_144 = MAP_Explorer::max2(+1+t_133, +d_[32]+t_123);
	uint64_t t_145 = MAP_Explorer::max2(+1+t_134, +d_[32]+t_124);
	uint64_t t_146 = MAP_Explorer::max2(+1+t_135, +d_[32]+t_125);
	uint64_t t_147 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_107, +1+t_126);
	uint64_t t_148 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_108, +t_127);
	uint64_t t_149 = MAP_Explorer::max2(+d_[18]+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35], +1+t_128);
	uint64_t t_150 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_109, +1+t_129);
	uint64_t t_151 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_110, +1+t_130);
	uint64_t t_152 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_111, +1+t_131);
	uint64_t t_153 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_112, +1+t_132);
	uint64_t t_154 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_113, +1+t_133);
	uint64_t t_155 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_114, +1+t_134);
	uint64_t t_156 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]+t_115, +1+t_135);
	uint64_t t_157 = MAP_Explorer::max2(+t_147, +1+t_136);
	uint64_t t_158 = MAP_Explorer::max2(+1+t_148, +t_137);
	uint64_t t_159 = MAP_Explorer::max2(+d_[33]+d_[35], +1+t_138);
	uint64_t t_160 = MAP_Explorer::max2(+t_149, +t_139);
	uint64_t t_161 = MAP_Explorer::max2(+t_150, +t_140);
	uint64_t t_162 = MAP_Explorer::max2(+t_151, +t_141);
	uint64_t t_163 = MAP_Explorer::max2(+t_152, +t_142);
	uint64_t t_164 = MAP_Explorer::max2(+t_153, +t_143);
	uint64_t t_165 = MAP_Explorer::max2(+t_154, +t_144);
	uint64_t t_166 = MAP_Explorer::max2(+t_155, +t_145);
	uint64_t t_167 = MAP_Explorer::max2(+t_156, +t_146);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[34]+t_136, vec_[1] +2+d_[1]+d_[34]+t_136);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[34]+t_136);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[34]+t_137);
	out_3 = MAP_Explorer::max2(out_3, vec_[4] +2+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[34]+t_138);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[34]+t_139);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[34]+t_136);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[34]+t_140);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[34]+t_141);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[34]+t_142);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[34]+t_143);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[34]+t_144);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[34]+t_145);
	out_3 = MAP_Explorer::max2(out_3, vec_[26] +1+d_[34]+t_146);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[34]+t_136);
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_157, vec_[1] +2+d_[1]+t_157);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_157);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+t_158);
	out_5 = MAP_Explorer::max2(out_5, vec_[4] +2+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+t_159);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_160);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_157);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +2+t_161);
	out_5 = MAP_Explorer::max2(out_5, vec_[13] +2+t_162);
	out_5 = MAP_Explorer::max2(out_5, vec_[22] +2+t_163);
	out_5 = MAP_Explorer::max2(out_5, vec_[23] +2+t_164);
	out_5 = MAP_Explorer::max2(out_5, vec_[24] +2+t_165);
	out_5 = MAP_Explorer::max2(out_5, vec_[25] +2+t_166);
	out_5 = MAP_Explorer::max2(out_5, vec_[26] +2+t_167);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+d_[1]+t_157);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_98, vec_[1] +2+d_[1]+t_98);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_98);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_99);
	out_13 = MAP_Explorer::max2(out_13, vec_[4] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_98);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_100);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_101);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_102);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_103);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2+t_104);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+t_105);
	out_13 = MAP_Explorer::max2(out_13, vec_[26] +2+t_106);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_98);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[19]+t_107, vec_[1] +2+d_[1]+d_[19]+t_107);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+d_[19]+t_107);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +2+d_[19]+t_108);
	out_22 = MAP_Explorer::max2(out_22, vec_[4] +2+d_[19]);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+d_[18]+d_[19]);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+d_[19]+t_107);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+d_[19]+t_109);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+d_[19]+t_110);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+d_[19]+t_111);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2+d_[19]+t_112);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2+d_[19]+t_113);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +2+d_[19]+t_114);
	out_22 = MAP_Explorer::max2(out_22, vec_[26] +2+d_[19]+t_115);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+d_[19]+t_107);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_147, vec_[1] +1+d_[1]+t_147);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1+t_147);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +1+t_148);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1+d_[19]+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33]+d_[35]);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+t_149);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+t_147);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +1+t_150);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +1+t_151);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +1+t_152);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1+t_153);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +1+t_154);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +1+t_155);
	out_38 = MAP_Explorer::max2(out_38, vec_[26] +1+t_156);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +1+d_[0]+d_[1]+t_147);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_12 = out_22 +d_[20]+d_[21]+d_[22]+d_[23];
	uint64_t out_15 = out_22 +d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29];
	uint64_t out_23 = out_22 +d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28];
	uint64_t out_24 = out_22 +d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26];
	uint64_t out_25 = out_22 +d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25];
	uint64_t out_26 = out_22 +d_[20]+d_[21];
	uint64_t out_37 = out_22 -1+d_[20]+d_[21]+d_[22]+d_[23]+d_[24]+d_[25]+d_[26]+d_[27]+d_[28]+d_[29]+d_[30]+d_[31]+d_[33];
	uint64_t out_14 = out_15 +d_[30];


	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[12] = out_12;
	vec_[15] = out_15;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[37] = out_37;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_264{
    264,
    21032,
    21132,
    block_264_fn
    };

static void block_729_fn(uint64_t* vec_, uint8_t* d_){
    
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
	uint64_t out_22 = out_13 +d_[3];
	uint64_t out_23 = out_13 +d_[3]+d_[4];
	uint64_t out_24 = out_13 +d_[3]+d_[4]+d_[5];
	uint64_t out_25 = out_13 +d_[3]+d_[4]+d_[5]+d_[6];
	uint64_t out_26 = out_13 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7];
	uint64_t out_14 = MAP_Explorer::max2(out_13 -1+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +1);
	uint64_t out_37 = MAP_Explorer::max2(out_13 -2+d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +1);
	uint64_t out_3 = out_26;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[10];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[10];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[26] = out_26;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_729{
    729,
    21188,
    21228,
    block_729_fn
    };

static void block_730_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +d_[1]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[3], +d_[1]);

	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +2+d_[0]+t_1, vec_[1] +2+t_1);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[14] +2+t_2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +2+d_[0]+t_1);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +3+d_[0]+t_0, vec_[1] +3+t_0);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +3+d_[0]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[2], vec_[1] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[2]);
	uint64_t out_3 = out_14;
	uint64_t out_2 = out_5;
	uint64_t out_1 = out_5 -1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[3], vec_[3] +1);
	uint64_t out_0 = out_38 -1;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[38] = out_38;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_730{
    730,
    49608,
    49616,
    block_730_fn
    };

static void block_731_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[15], +d_[14]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+t_1, +d_[16]+t_0);
	uint64_t t_3 = MAP_Explorer::max2(+d_[15]+d_[17]+d_[19], +1+t_1);
	uint64_t t_4 = MAP_Explorer::max2(+t_3, +1+t_2);
	uint64_t t_5 = MAP_Explorer::max2(+d_[19], +d_[16]);
	uint64_t t_6 = MAP_Explorer::max2(+t_4, +d_[18]+t_2);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_5, +d_[16]+d_[18]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[21]+t_3, +1+t_4);
	uint64_t t_9 = MAP_Explorer::max2(+d_[19]+d_[21], +1+t_5);
	uint64_t t_10 = MAP_Explorer::max2(+t_8, +1+t_6);
	uint64_t t_11 = MAP_Explorer::max2(+t_9, +t_7);
	uint64_t t_12 = MAP_Explorer::max2(+t_10, +d_[20]+t_6);
	uint64_t t_13 = MAP_Explorer::max2(+1+t_11, +d_[20]+t_7);
	uint64_t t_14 = MAP_Explorer::max2(+d_[23]+t_8, +1+t_10);
	uint64_t t_15 = MAP_Explorer::max2(+d_[23]+t_9, +1+t_11);
	uint64_t t_16 = MAP_Explorer::max2(+t_14, +1+t_12);
	uint64_t t_17 = MAP_Explorer::max2(+t_15, +t_13);
	uint64_t t_18 = MAP_Explorer::max2(+t_16, +d_[22]+t_12);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_17, +d_[22]+t_13);
	uint64_t t_20 = MAP_Explorer::max2(+d_[25]+t_14, +1+t_16);
	uint64_t t_21 = MAP_Explorer::max2(+d_[25]+t_15, +1+t_17);
	uint64_t t_22 = MAP_Explorer::max2(+t_20, +1+t_18);
	uint64_t t_23 = MAP_Explorer::max2(+t_21, +t_19);
	uint64_t t_24 = MAP_Explorer::max2(+t_22, +d_[24]+t_18);
	uint64_t t_25 = MAP_Explorer::max2(+1+t_23, +d_[24]+t_19);
	uint64_t t_26 = MAP_Explorer::max2(+d_[27]+t_20, +1+t_22);
	uint64_t t_27 = MAP_Explorer::max2(+d_[27]+t_21, +1+t_23);
	uint64_t t_28 = MAP_Explorer::max2(+t_26, +1+t_24);
	uint64_t t_29 = MAP_Explorer::max2(+t_27, +t_25);

	uint64_t out_10 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_10 = MAP_Explorer::max2(out_10, vec_[2] +3+d_[2]);
	out_10 = MAP_Explorer::max2(out_10, vec_[3] +1);
	out_10 = MAP_Explorer::max2(out_10, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +3+d_[1]+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +3+d_[2]+d_[3]+d_[4]);
	out_20 = MAP_Explorer::max2(out_20, vec_[3] +3);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_21 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +3+d_[1]+d_[2]+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[2] +3+d_[2]+d_[3]);
	out_21 = MAP_Explorer::max2(out_21, vec_[3] +2);
	out_21 = MAP_Explorer::max2(out_21, vec_[36] +3+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_17 = out_20 +d_[5];
	uint64_t out_18 = out_20 +d_[5]+d_[6];
	uint64_t out_19 = out_20 +d_[5]+d_[6]+d_[7];
	uint64_t out_3 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[26]+t_24, vec_[4] +2+d_[11]+d_[12]+d_[13]+d_[26]+t_24);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[26]+t_25);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[10]+d_[11]+d_[12]+d_[13]+d_[26]+t_24);
	uint64_t out_5 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+t_28, vec_[4] +2+d_[11]+d_[12]+d_[13]+t_28);
	out_5 = MAP_Explorer::max2(out_5, vec_[5] +2+t_29);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2+d_[10]+d_[11]+d_[12]+d_[13]+t_28);
	uint64_t out_6 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8], vec_[6] +1);
	uint64_t out_15 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10], vec_[4] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[6] +2+d_[10]);
	uint64_t out_16 = MAP_Explorer::max2(out_20 -1+d_[5]+d_[6]+d_[7]+d_[8]+d_[9], vec_[4] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[6] +2);
	uint64_t out_37 = MAP_Explorer::max2(out_20 -2+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+t_20, vec_[4] +1+d_[11]+d_[12]+d_[13]+t_20);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+t_21);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[10]+d_[11]+d_[12]+d_[13]+t_20);
	uint64_t out_38 = MAP_Explorer::max2(out_20 -2+d_[5]+d_[6]+d_[7]+d_[8]+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+t_26, vec_[4] +1+d_[11]+d_[12]+d_[13]+t_26);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +1+t_27);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +1+d_[10]+d_[11]+d_[12]+d_[13]+t_26);
	uint64_t out_2 = out_5;
	uint64_t out_0 = out_38 -1;
	uint64_t out_1 = out_5 -1;
	uint64_t out_14 = out_15 +1+d_[11]+d_[12];


	vec_[10] = out_10;
	vec_[20] = out_20;
	vec_[21] = out_21;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[3] = out_3;
	vec_[5] = out_5;
	vec_[6] = out_6;
	vec_[15] = out_15;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[0] = out_0;
	vec_[1] = out_1;
	vec_[14] = out_14;
}

extern const MAP_Explorer::Block block_731{
    731,
    21460,
    21540,
    block_731_fn
    };

static void block_732_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_732{
    732,
    51732,
    51736,
    block_732_fn
    };

static void block_733_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
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

extern const MAP_Explorer::Block block_733{
    733,
    51740,
    51748,
    block_733_fn
    };

static void block_734_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_734{
    734,
    51752,
    51756,
    block_734_fn
    };

static void block_737_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[16] );
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[16] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[17] = out_17;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_737{
    737,
    51796,
    51800,
    block_737_fn
    };

static void block_738_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[17] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_17 = MAP_Explorer::max2(out_37 +1, vec_[14] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[2], vec_[14] +1);
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

extern const MAP_Explorer::Block block_738{
    738,
    51804,
    51812,
    block_738_fn
    };

static void block_741_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_741{
    741,
    51848,
    51852,
    block_741_fn
    };

static void block_742_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[2], vec_[4] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_742{
    742,
    21544,
    21552,
    block_742_fn
    };

static void block_743_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_5 = out_14 +d_[2];
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

extern const MAP_Explorer::Block block_743{
    743,
    21568,
    21576,
    block_743_fn
    };

static void block_744_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[2], +2);
	uint64_t t_1 = MAP_Explorer::max2(+d_[2]+d_[3], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +2);
	uint64_t t_3 = MAP_Explorer::max2(+d_[4]+t_1+t_2, +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+d_[4]+d_[5]+d_[6]+t_1, +1+t_3);
	uint64_t t_5 = MAP_Explorer::max2(+d_[5]+d_[6], +1+t_2);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[4]+t_1, vec_[1] +3+d_[1]+d_[4]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +3+d_[4]+t_1);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +4+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +3+d_[4]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +3+d_[0]+d_[1]+d_[4]+t_1);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_0, vec_[1] +2+d_[1]+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_0);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_0);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_4, vec_[1] +1+d_[1]+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_4);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +2+d_[4]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[4]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_4);
	uint64_t out_14 = out_37 +1;
	uint64_t out_38 = MAP_Explorer::max2(out_37 +d_[7], vec_[5] +1);
	uint64_t out_1 = out_38;
	uint64_t out_0 = out_14 -2+d_[7];
	uint64_t out_4 = out_38 +1;
	uint64_t out_2 = out_4;


	vec_[3] = out_3;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[0] = out_0;
	vec_[4] = out_4;
	vec_[2] = out_2;
}

extern const MAP_Explorer::Block block_744{
    744,
    21696,
    21724,
    block_744_fn
    };

static void block_745_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[4] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_745{
    745,
    21580,
    21592,
    block_745_fn
    };

static void block_746_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0], vec_[1] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1], vec_[1] +2+d_[1]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[3] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[6] +2);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+d_[2]);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_3 = out_5;
	uint64_t out_6 = out_37 +1;
	uint64_t out_38 = out_37 +d_[3];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[3];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[14] = out_14;
	vec_[37] = out_37;
	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_746{
    746,
    49620,
    49632,
    block_746_fn
    };


} // namespace CV32E40P_DSE