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

static void block_304_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[6], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[5]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[5]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+1+t_5, +d_[5]+t_2);
	uint64_t t_9 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6]+d_[8], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[8], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+t_12, +t_8);
	uint64_t t_16 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_9);
	uint64_t t_17 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_18 = MAP_Explorer::max2(+t_13, +d_[7]+t_6);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_14, +d_[7]+t_7);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_15, +d_[7]+t_8);
	uint64_t t_21 = MAP_Explorer::max2(+t_16, +d_[7]+t_9);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_17, +d_[5]+d_[7]);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+t_10, +1+t_13);
	uint64_t t_24 = MAP_Explorer::max2(+d_[10]+t_11, +t_14);
	uint64_t t_25 = MAP_Explorer::max2(+d_[10]+t_12, +1+t_15);
	uint64_t t_26 = MAP_Explorer::max2(+d_[6]+d_[8]+d_[10], +1+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_17);
	uint64_t t_28 = MAP_Explorer::max2(+t_23, +1+t_18);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +t_19);
	uint64_t t_30 = MAP_Explorer::max2(+t_25, +t_20);
	uint64_t t_31 = MAP_Explorer::max2(+t_26, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+t_27, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_23, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+d_[11]+t_24, +t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[11]+t_25, +1+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[11]+t_26, +1+t_31);
	uint64_t t_38 = MAP_Explorer::max2(+d_[11]+t_27, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[10]+d_[11], +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +d_[9]+t_18);
	uint64_t t_41 = MAP_Explorer::max2(+2+t_35, +d_[9]+t_19);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[9]+t_20);
	uint64_t t_43 = MAP_Explorer::max2(+t_37, +d_[9]+t_21);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[9]+t_22);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[7]+d_[9]);
	uint64_t t_46 = MAP_Explorer::max2(+1+d_[11], +d_[9]);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+t_34, +1+t_40);
	uint64_t t_48 = MAP_Explorer::max2(+1+d_[13]+t_35, +t_41);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+t_36, +t_42);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+t_37, +1+t_43);
	uint64_t t_51 = MAP_Explorer::max2(+d_[13]+t_38, +t_44);
	uint64_t t_52 = MAP_Explorer::max2(+d_[13]+t_39, +t_45);
	uint64_t t_53 = MAP_Explorer::max2(+d_[11]+d_[13], +t_46);
	uint64_t t_54 = MAP_Explorer::max2(+t_47, +d_[12]+t_40);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_48, +d_[12]+t_41);
	uint64_t t_56 = MAP_Explorer::max2(+1+t_49, +d_[12]+t_42);
	uint64_t t_57 = MAP_Explorer::max2(+t_50, +d_[12]+t_43);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_51, +d_[12]+t_44);
	uint64_t t_59 = MAP_Explorer::max2(+1+t_52, +d_[12]+t_45);
	uint64_t t_60 = MAP_Explorer::max2(+1+t_53, +d_[12]+t_46);
	uint64_t t_61 = MAP_Explorer::max2(+d_[13]+d_[15]+t_34, +1+t_47);
	uint64_t t_62 = MAP_Explorer::max2(+d_[13]+d_[15]+t_35, +t_48);
	uint64_t t_63 = MAP_Explorer::max2(+d_[13]+d_[15]+t_36, +1+t_49);
	uint64_t t_64 = MAP_Explorer::max2(+d_[13]+d_[15]+t_37, +1+t_50);
	uint64_t t_65 = MAP_Explorer::max2(+d_[13]+d_[15]+t_38, +1+t_51);
	uint64_t t_66 = MAP_Explorer::max2(+d_[13]+d_[15]+t_39, +1+t_52);
	uint64_t t_67 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15], +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+t_61, +1+t_54);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_62, +t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_71 = MAP_Explorer::max2(+t_63, +t_56);
	uint64_t t_72 = MAP_Explorer::max2(+t_64, +1+t_57);
	uint64_t t_73 = MAP_Explorer::max2(+t_65, +t_58);
	uint64_t t_74 = MAP_Explorer::max2(+t_66, +t_59);
	uint64_t t_75 = MAP_Explorer::max2(+t_67, +t_60);
	uint64_t t_76 = MAP_Explorer::max2(+t_68, +d_[14]+t_54);
	uint64_t t_77 = MAP_Explorer::max2(+1+t_69, +d_[14]+t_55);
	uint64_t t_78 = MAP_Explorer::max2(+1+t_70, +d_[12]+d_[14]);
	uint64_t t_79 = MAP_Explorer::max2(+1+t_71, +d_[14]+t_56);
	uint64_t t_80 = MAP_Explorer::max2(+t_72, +d_[14]+t_57);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_73, +d_[14]+t_58);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_74, +d_[14]+t_59);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[14]+t_60);
	uint64_t t_84 = MAP_Explorer::max2(+d_[17]+t_61, +1+t_68);
	uint64_t t_85 = MAP_Explorer::max2(+d_[17]+t_62, +t_69);
	uint64_t t_86 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_70);
	uint64_t t_87 = MAP_Explorer::max2(+d_[17]+t_63, +1+t_71);
	uint64_t t_88 = MAP_Explorer::max2(+d_[17]+t_64, +1+t_72);
	uint64_t t_89 = MAP_Explorer::max2(+d_[17]+t_65, +1+t_73);
	uint64_t t_90 = MAP_Explorer::max2(+d_[17]+t_66, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[17]+t_67, +1+t_75);
	uint64_t t_92 = MAP_Explorer::max2(+t_84, +1+t_76);
	uint64_t t_93 = MAP_Explorer::max2(+t_92, +1+d_[3]);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_85, +t_77);
	uint64_t t_95 = MAP_Explorer::max2(+t_86, +t_78);
	uint64_t t_96 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_97 = MAP_Explorer::max2(+t_87, +t_79);
	uint64_t t_98 = MAP_Explorer::max2(+t_88, +1+t_80);
	uint64_t t_99 = MAP_Explorer::max2(+t_89, +t_81);
	uint64_t t_100 = MAP_Explorer::max2(+t_90, +t_82);
	uint64_t t_101 = MAP_Explorer::max2(+t_91, +t_83);
	uint64_t t_102 = MAP_Explorer::max2(+d_[18]+t_84, +1+t_93);
	uint64_t t_103 = MAP_Explorer::max2(+d_[18]+t_85, +t_94);
	uint64_t t_104 = MAP_Explorer::max2(+d_[18]+t_86, +1+t_95);
	uint64_t t_105 = MAP_Explorer::max2(+d_[17]+d_[18], +1+t_96);
	uint64_t t_106 = MAP_Explorer::max2(+d_[18]+t_87, +1+t_97);
	uint64_t t_107 = MAP_Explorer::max2(+d_[18]+t_88, +1+t_98);
	uint64_t t_108 = MAP_Explorer::max2(+d_[18]+t_89, +1+t_99);
	uint64_t t_109 = MAP_Explorer::max2(+d_[18]+t_90, +1+t_100);
	uint64_t t_110 = MAP_Explorer::max2(+d_[18]+t_91, +1+t_101);
	uint64_t t_111 = MAP_Explorer::max2(+d_[19]+t_102, +1+t_28);
	uint64_t t_112 = MAP_Explorer::max2(+d_[19]+t_103, +t_29);
	uint64_t t_113 = MAP_Explorer::max2(+d_[19]+t_106, +1+t_30);
	uint64_t t_114 = MAP_Explorer::max2(+d_[19]+t_107, +1+t_31);
	uint64_t t_115 = MAP_Explorer::max2(+d_[19]+t_108, +1+t_32);
	uint64_t t_116 = MAP_Explorer::max2(+d_[19]+t_109, +1+t_33);
	uint64_t t_117 = MAP_Explorer::max2(+d_[19]+d_[20]+t_102, +1+t_111);
	uint64_t t_118 = MAP_Explorer::max2(+d_[19]+d_[20]+t_103, +1+t_112);
	uint64_t t_119 = MAP_Explorer::max2(+d_[19]+d_[20]+t_106, +1+t_113);
	uint64_t t_120 = MAP_Explorer::max2(+d_[19]+d_[20]+t_107, +1+t_114);
	uint64_t t_121 = MAP_Explorer::max2(+d_[19]+d_[20]+t_108, +1+t_115);
	uint64_t t_122 = MAP_Explorer::max2(+d_[19]+d_[20]+t_109, +1+t_116);
	uint64_t t_123 = MAP_Explorer::max2(+d_[21]+t_117, +1+t_93);
	uint64_t t_124 = MAP_Explorer::max2(+d_[21]+t_118, +t_94);
	uint64_t t_125 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_104, +1+t_95);
	uint64_t t_126 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_105, +1+t_96);
	uint64_t t_127 = MAP_Explorer::max2(+d_[21]+t_119, +1+t_97);
	uint64_t t_128 = MAP_Explorer::max2(+d_[21]+t_120, +1+t_98);
	uint64_t t_129 = MAP_Explorer::max2(+d_[21]+t_121, +1+t_99);
	uint64_t t_130 = MAP_Explorer::max2(+d_[21]+t_122, +1+t_100);
	uint64_t t_131 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_110, +1+t_101);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[16]+t_76, vec_[1] +2+d_[1]+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[16]+t_77);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[16]+t_78);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[14]+d_[16]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[16]+t_79);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[16]+t_80);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[16]+t_81);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[16]+t_82);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[16]+t_83);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[16]);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[16]+t_76);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_93, vec_[1] +2+d_[1]+t_93);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_93);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +1+t_94);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+t_95);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_93);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+t_96);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_97);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +2+t_98);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_99);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_100);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2+t_101);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_93);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_111, vec_[1] +2+d_[1]+t_111);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_111);
	out_23 = MAP_Explorer::max2(out_23, vec_[3] +2+t_112);
	out_23 = MAP_Explorer::max2(out_23, vec_[5] +2+d_[19]+t_104);
	out_23 = MAP_Explorer::max2(out_23, vec_[6] +2+t_111);
	out_23 = MAP_Explorer::max2(out_23, vec_[12] +2+d_[19]+t_105);
	out_23 = MAP_Explorer::max2(out_23, vec_[13] +2+t_113);
	out_23 = MAP_Explorer::max2(out_23, vec_[14] +2+t_114);
	out_23 = MAP_Explorer::max2(out_23, vec_[15] +2);
	out_23 = MAP_Explorer::max2(out_23, vec_[22] +2+t_115);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_116);
	out_23 = MAP_Explorer::max2(out_23, vec_[24] +2+d_[19]+t_110);
	out_23 = MAP_Explorer::max2(out_23, vec_[25] +2+d_[18]+d_[19]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+t_111);
	uint64_t out_24 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_102, vec_[1] +2+d_[1]+t_102);
	out_24 = MAP_Explorer::max2(out_24, vec_[2] +2+t_102);
	out_24 = MAP_Explorer::max2(out_24, vec_[3] +2+t_103);
	out_24 = MAP_Explorer::max2(out_24, vec_[5] +2+t_104);
	out_24 = MAP_Explorer::max2(out_24, vec_[6] +2+t_102);
	out_24 = MAP_Explorer::max2(out_24, vec_[12] +2+t_105);
	out_24 = MAP_Explorer::max2(out_24, vec_[13] +2+t_106);
	out_24 = MAP_Explorer::max2(out_24, vec_[14] +2+t_107);
	out_24 = MAP_Explorer::max2(out_24, vec_[15] +1);
	out_24 = MAP_Explorer::max2(out_24, vec_[22] +2+t_108);
	out_24 = MAP_Explorer::max2(out_24, vec_[23] +2+t_109);
	out_24 = MAP_Explorer::max2(out_24, vec_[24] +2+t_110);
	out_24 = MAP_Explorer::max2(out_24, vec_[25] +2+d_[18]);
	out_24 = MAP_Explorer::max2(out_24, vec_[36] +2+d_[0]+d_[1]+t_102);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_117, vec_[1] +1+d_[1]+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_118);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[19]+d_[20]+t_104);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[19]+d_[20]+t_105);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_119);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_120);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[20]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_121);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_122);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[19]+d_[20]+t_110);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[18]+d_[19]+d_[20]);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_117);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_123, vec_[1] +2+d_[1]+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_124);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_125);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_126);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_127);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_128);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[20]+d_[21]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_129);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_130);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+t_131);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+d_[18]+d_[19]+d_[20]+d_[21]);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_123);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_22 = out_37 +1;
	uint64_t out_0 = out_22 -2+d_[21];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[22] = out_22;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_304{
    304,
    17992,
    18048,
    block_304_fn
    };

static void block_307_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_307{
    307,
    18104,
    18108,
    block_307_fn
    };

static void block_308_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(out_12 +d_[3]+d_[4]+d_[5], vec_[4] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +1);
	out_13 = MAP_Explorer::max2(out_13, vec_[19] +2+d_[5]);
	uint64_t out_18 = MAP_Explorer::max2(out_12 +d_[3]+d_[4], vec_[4] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2);
	uint64_t out_19 = MAP_Explorer::max2(out_12 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +2+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[5]+d_[6]+d_[7]+d_[8]);
	out_19 = MAP_Explorer::max2(out_19, vec_[25] +2+d_[8]);
	uint64_t out_38 = MAP_Explorer::max2(out_19 +d_[9]+d_[10]+d_[11], vec_[22] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_16 = out_19 +d_[9];
	uint64_t out_37 = out_19 -1+d_[9]+d_[10];
	uint64_t out_17 = MAP_Explorer::max2(out_19 +d_[9]+d_[10], vec_[22] +1);
	out_17 = MAP_Explorer::max2(out_17, vec_[24] +1);
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[13] = out_13;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[16] = out_16;
	vec_[37] = out_37;
	vec_[17] = out_17;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_308{
    308,
    18112,
    18156,
    block_308_fn
    };

static void block_305_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_305{
    305,
    18052,
    18056,
    block_305_fn
    };

static void block_306_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2], vec_[1] +2+d_[1]+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+d_[2]);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+d_[2]);
	uint64_t out_13 = MAP_Explorer::max2(out_23 +d_[3], vec_[13] +1);
	uint64_t out_19 = MAP_Explorer::max2(out_23 +d_[3]+d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +2+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[13] +2+d_[5]+d_[6]+d_[7]);
	out_19 = MAP_Explorer::max2(out_19, vec_[24] +2+d_[7]);
	uint64_t out_25 = MAP_Explorer::max2(out_23 +d_[3]+d_[4], vec_[4] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2);
	uint64_t out_12 = out_19 +d_[8];
	uint64_t out_24 = out_19 +d_[8]+d_[9];
	uint64_t out_37 = out_19 -1+d_[8]+d_[9];
	uint64_t out_38 = out_19 +d_[8]+d_[9]+d_[10];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_12 -1+d_[9]+d_[10];
	uint64_t out_0 = out_1 -1;


	vec_[23] = out_23;
	vec_[13] = out_13;
	vec_[19] = out_19;
	vec_[25] = out_25;
	vec_[12] = out_12;
	vec_[24] = out_24;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_306{
    306,
    18060,
    18100,
    block_306_fn
    };

static void block_309_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_16 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_16 = MAP_Explorer::max2(out_16, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[16] = out_16;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_309{
    309,
    18316,
    18320,
    block_309_fn
    };

static void block_312_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[5], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[5], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+t_1, +d_[4]+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+t_2, +d_[2]+d_[4]);
	uint64_t t_5 = MAP_Explorer::max2(+d_[6]+t_1, +1+t_3);
	uint64_t t_6 = MAP_Explorer::max2(+d_[6]+t_2, +t_4);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_6, +d_[2]);
	uint64_t t_8 = MAP_Explorer::max2(+d_[7]+t_6, +t_7);
	uint64_t t_9 = MAP_Explorer::max2(+d_[7]+t_5, +d_[4]+t_0);
	uint64_t t_10 = MAP_Explorer::max2(+1+t_8, +d_[2]+d_[4]);
	uint64_t t_11 = MAP_Explorer::max2(+d_[7]+d_[8]+t_5, +1+t_9);
	uint64_t t_12 = MAP_Explorer::max2(+d_[8]+t_8, +t_10);

	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +1+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[14] +1+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[15] +d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +1+d_[2]);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_3, vec_[1] +2+d_[1]+t_3);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +2+t_3);
	out_15 = MAP_Explorer::max2(out_15, vec_[14] +2+t_3);
	out_15 = MAP_Explorer::max2(out_15, vec_[15] +1+t_4);
	out_15 = MAP_Explorer::max2(out_15, vec_[19] +2+t_3);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]+d_[1]+t_3);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_5, vec_[1] +2+d_[1]+t_5);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+t_5);
	out_18 = MAP_Explorer::max2(out_18, vec_[14] +2+t_5);
	out_18 = MAP_Explorer::max2(out_18, vec_[15] +1+t_7);
	out_18 = MAP_Explorer::max2(out_18, vec_[18] +1);
	out_18 = MAP_Explorer::max2(out_18, vec_[19] +2+t_5);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+t_5);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_9, vec_[1] +2+d_[1]+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[14] +2+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +1+t_10);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+t_9);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+t_9);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[7]+t_5, vec_[1] +1+d_[1]+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+t_8);
	out_37 = MAP_Explorer::max2(out_37, vec_[18] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+d_[7]+t_5);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+d_[7]+t_5);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_11, vec_[1] +2+d_[1]+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+t_12);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +2+d_[8]);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+t_11);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_11);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_312{
    312,
    18404,
    18428,
    block_312_fn
    };

static void block_313_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+d_[2]+d_[3]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[4] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +2+d_[2]+d_[3]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[15] +2+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[18] +2+d_[3]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +2+d_[3]+d_[4]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[2]+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[19] +2+d_[3]);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_37 = out_12 -1+d_[5];
	uint64_t out_18 = MAP_Explorer::max2(out_12 +d_[5], vec_[13] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_12 +d_[5]+d_[6], vec_[13] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_0 = out_1 -1;


	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[18] = out_18;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_313{
    313,
    18464,
    18488,
    block_313_fn
    };

static void block_314_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[12] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_314{
    314,
    18492,
    18496,
    block_314_fn
    };

static void block_316_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_19 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[19] = out_19;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_316{
    316,
    18540,
    18544,
    block_316_fn
    };

static void block_317_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_5 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1], vec_[1] +3+d_[1]);
	out_5 = MAP_Explorer::max2(out_5, vec_[2] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[3] +1);
	out_5 = MAP_Explorer::max2(out_5, vec_[6] +2);
	out_5 = MAP_Explorer::max2(out_5, vec_[12] +3);
	out_5 = MAP_Explorer::max2(out_5, vec_[36] +3+d_[0]+d_[1]);
	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +3+d_[0]+d_[1]+d_[2], vec_[1] +3+d_[1]+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[3] +2);
	out_12 = MAP_Explorer::max2(out_12, vec_[6] +3);
	out_12 = MAP_Explorer::max2(out_12, vec_[12] +3+d_[2]);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +3+d_[0]+d_[1]+d_[2]);
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5], vec_[1] +2+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[3] +2+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[6] +2+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[12] +2+d_[2]+d_[3]+d_[4]+d_[5]);
	out_19 = MAP_Explorer::max2(out_19, vec_[18] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]+d_[4]+d_[5]);
	uint64_t out_18 = out_19 +d_[6];
	uint64_t out_13 = MAP_Explorer::max2(out_19 +1+d_[6]+d_[7]+d_[8], vec_[17] +3);
	uint64_t out_6 = out_13 -1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_14 = out_13 -1+d_[9]+d_[10]+d_[11]+d_[12]+d_[13];
	uint64_t out_22 = out_13 +d_[9];
	uint64_t out_23 = out_13 +d_[9]+d_[10];
	uint64_t out_24 = out_13 +d_[9]+d_[10]+d_[11];
	uint64_t out_25 = out_13 +d_[9]+d_[10]+d_[11]+d_[12];
	uint64_t out_37 = out_13 -2+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14];
	uint64_t out_38 = out_13 -2+d_[9]+d_[10]+d_[11]+d_[12]+d_[13]+d_[14]+d_[15];
	uint64_t out_3 = out_25;
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_6 +d_[15];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[5] = out_5;
	vec_[12] = out_12;
	vec_[19] = out_19;
	vec_[18] = out_18;
	vec_[13] = out_13;
	vec_[6] = out_6;
	vec_[14] = out_14;
	vec_[22] = out_22;
	vec_[23] = out_23;
	vec_[24] = out_24;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[3] = out_3;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_317{
    317,
    18548,
    18608,
    block_317_fn
    };

static void block_310_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_19 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[2] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[23] +1);
	out_19 = MAP_Explorer::max2(out_19, vec_[36] +2+d_[0]);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1], vec_[1] +1+d_[1]);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]);
	uint64_t out_23 = out_37 +1;
	uint64_t out_38 = out_37 +d_[2];
	uint64_t out_1 = out_38;
	uint64_t out_4 = out_23 +d_[2];
	uint64_t out_2 = out_4;
	uint64_t out_0 = out_4 -2;


	vec_[19] = out_19;
	vec_[37] = out_37;
	vec_[23] = out_23;
	vec_[38] = out_38;
	vec_[1] = out_1;
	vec_[4] = out_4;
	vec_[2] = out_2;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_310{
    310,
    18612,
    18620,
    block_310_fn
    };

static void block_311_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+d_[3]+d_[4], +1+t_0);
	uint64_t t_2 = MAP_Explorer::max2(+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[9], +d_[8]);
	uint64_t t_4 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+t_1+t_3, +d_[2]);
	uint64_t t_5 = MAP_Explorer::max2(+1+d_[5]+d_[6]+d_[7]+t_2+t_3, +d_[2]);
	uint64_t t_6 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[9]+d_[10]+t_1, +1+t_4);
	uint64_t t_7 = MAP_Explorer::max2(+d_[9]+d_[10], +1+t_3);
	uint64_t t_8 = MAP_Explorer::max2(+d_[5]+d_[6]+d_[7]+d_[9]+d_[10]+t_2, +t_5);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_8, +d_[2]);
	uint64_t t_10 = MAP_Explorer::max2(+d_[11]+t_8, +t_9);
	uint64_t t_11 = MAP_Explorer::max2(+d_[11]+t_6, +d_[5]+d_[6]+d_[7]+d_[8]+t_1);
	uint64_t t_12 = MAP_Explorer::max2(+d_[11]+t_7, +d_[8]);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +d_[5]+d_[6]+d_[7]+d_[8]+t_2);
	uint64_t t_14 = MAP_Explorer::max2(+d_[11]+d_[12]+t_6, +1+t_11);
	uint64_t t_15 = MAP_Explorer::max2(+d_[11]+d_[12]+t_7, +1+t_12);
	uint64_t t_16 = MAP_Explorer::max2(+d_[12]+t_10, +1+t_13);
	uint64_t t_17 = MAP_Explorer::max2(+d_[13]+t_14, +1+t_6);
	uint64_t t_18 = MAP_Explorer::max2(+d_[13]+t_15, +1+t_7);
	uint64_t t_19 = MAP_Explorer::max2(+d_[13]+t_16, +t_9);

	uint64_t out_12 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_4, vec_[1] +2+d_[1]+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[2] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[16] +2+t_4);
	out_12 = MAP_Explorer::max2(out_12, vec_[19] +2+t_3);
	out_12 = MAP_Explorer::max2(out_12, vec_[23] +1+t_5);
	out_12 = MAP_Explorer::max2(out_12, vec_[36] +2+d_[0]+d_[1]+t_4);
	uint64_t out_14 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_6, vec_[1] +2+d_[1]+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[2] +2+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[16] +2+t_6);
	out_14 = MAP_Explorer::max2(out_14, vec_[19] +2+t_7);
	out_14 = MAP_Explorer::max2(out_14, vec_[23] +1+t_9);
	out_14 = MAP_Explorer::max2(out_14, vec_[36] +2+d_[0]+d_[1]+t_6);
	uint64_t out_15 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_15 = MAP_Explorer::max2(out_15, vec_[2] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[16] +1);
	out_15 = MAP_Explorer::max2(out_15, vec_[36] +2+d_[0]);
	uint64_t out_18 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[5]+t_1, vec_[1] +2+d_[1]+d_[5]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[2] +2+d_[5]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[16] +2+d_[5]+t_1);
	out_18 = MAP_Explorer::max2(out_18, vec_[23] +2+d_[5]+t_2);
	out_18 = MAP_Explorer::max2(out_18, vec_[36] +2+d_[0]+d_[1]+d_[5]+t_1);
	uint64_t out_20 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+d_[2], vec_[1] +1+d_[1]+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[2] +1+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[16] +1+d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[23] +d_[2]);
	out_20 = MAP_Explorer::max2(out_20, vec_[36] +1+d_[0]+d_[1]+d_[2]);
	uint64_t out_23 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_11, vec_[1] +2+d_[1]+t_11);
	out_23 = MAP_Explorer::max2(out_23, vec_[2] +2+t_11);
	out_23 = MAP_Explorer::max2(out_23, vec_[16] +2+t_11);
	out_23 = MAP_Explorer::max2(out_23, vec_[19] +2+t_12);
	out_23 = MAP_Explorer::max2(out_23, vec_[23] +2+t_13);
	out_23 = MAP_Explorer::max2(out_23, vec_[36] +2+d_[0]+d_[1]+t_11);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_14, vec_[1] +1+d_[1]+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[16] +1+t_14);
	out_37 = MAP_Explorer::max2(out_37, vec_[19] +1+t_15);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_16);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_14);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_17, vec_[1] +2+d_[1]+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[16] +2+t_17);
	out_38 = MAP_Explorer::max2(out_38, vec_[19] +2+t_18);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_19);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_17);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_19 = out_37 +1;
	uint64_t out_0 = out_19 -2+d_[13];


	vec_[12] = out_12;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[18] = out_18;
	vec_[20] = out_20;
	vec_[23] = out_23;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[19] = out_19;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_311{
    311,
    18332,
    18376,
    block_311_fn
    };

static void block_266_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_16 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[2]+d_[3], vec_[1] +2+d_[1]+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[2] +2+d_[2]+d_[3]);
	out_16 = MAP_Explorer::max2(out_16, vec_[14] +2);
	out_16 = MAP_Explorer::max2(out_16, vec_[36] +2+d_[0]+d_[1]+d_[2]+d_[3]);
	uint64_t out_17 = out_16 +d_[4]+d_[5];
	uint64_t out_18 = out_16 +d_[4];
	uint64_t out_19 = MAP_Explorer::max2(out_16 +d_[4]+d_[5]+d_[6]+d_[7]+d_[8], vec_[4] +2);
	out_19 = MAP_Explorer::max2(out_19, vec_[15] +2+d_[8]);
	uint64_t out_20 = MAP_Explorer::max2(out_16 +d_[4]+d_[5]+d_[6]+d_[7], vec_[4] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[15] +2);
	uint64_t out_14 = out_19 +d_[9];
	uint64_t out_15 = out_19 +d_[9]+d_[10];
	uint64_t out_37 = out_19 -1+d_[9]+d_[10];
	uint64_t out_38 = out_19 +d_[9]+d_[10]+d_[11];
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_14 -1+d_[10]+d_[11];
	uint64_t out_0 = out_1 -1;


	vec_[16] = out_16;
	vec_[17] = out_17;
	vec_[18] = out_18;
	vec_[19] = out_19;
	vec_[20] = out_20;
	vec_[14] = out_14;
	vec_[15] = out_15;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_266{
    266,
    18912,
    18956,
    block_266_fn
    };

static void block_267_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_20 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_20 = MAP_Explorer::max2(out_20, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[20] = out_20;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_267{
    267,
    18964,
    18968,
    block_267_fn
    };

static void block_268_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1, vec_[36] +1);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[0], vec_[1] );
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[0], vec_[1] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[17] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_268{
    268,
    18976,
    18976,
    block_268_fn
    };

static void block_269_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_269{
    269,
    19060,
    19060,
    block_269_fn
    };

static void block_270_fn(uint64_t* vec_, uint8_t* d_){
    
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

extern const MAP_Explorer::Block block_270{
    270,
    19064,
    19064,
    block_270_fn
    };

static void block_271_fn(uint64_t* vec_, uint8_t* d_){
    
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0], vec_[1] +1);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]);
	uint64_t out_0 = MAP_Explorer::max2(out_37 -1+d_[1], vec_[2] );
	out_0 = MAP_Explorer::max2(out_0, vec_[4] );
	uint64_t out_14 = MAP_Explorer::max2(out_37 +1, vec_[2] +1);
	out_14 = MAP_Explorer::max2(out_14, vec_[4] +1);
	uint64_t out_38 = MAP_Explorer::max2(out_37 +1+d_[1], vec_[2] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +2);
	out_38 = MAP_Explorer::max2(out_38, vec_[18] +1);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;


	vec_[37] = out_37;
	vec_[0] = out_0;
	vec_[14] = out_14;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
}

extern const MAP_Explorer::Block block_271{
    271,
    19068,
    19072,
    block_271_fn
    };

static void block_336_fn(uint64_t* vec_, uint8_t* d_){
    	uint64_t t_0 = MAP_Explorer::max2(+d_[3]+d_[4], +d_[2]);
	uint64_t t_1 = MAP_Explorer::max2(+2, +d_[2]);
	uint64_t t_2 = MAP_Explorer::max2(+1+d_[4], +d_[2]);
	uint64_t t_3 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6], +1+t_0);
	uint64_t t_4 = MAP_Explorer::max2(+1+d_[6], +t_1);
	uint64_t t_5 = MAP_Explorer::max2(+d_[4]+d_[6], +t_2);
	uint64_t t_6 = MAP_Explorer::max2(+t_3, +d_[5]+t_0);
	uint64_t t_7 = MAP_Explorer::max2(+1+t_4, +d_[5]+t_1);
	uint64_t t_8 = MAP_Explorer::max2(+d_[6], +d_[5]);
	uint64_t t_9 = MAP_Explorer::max2(+1+t_5, +d_[5]+t_2);
	uint64_t t_10 = MAP_Explorer::max2(+d_[3]+d_[4]+d_[6]+d_[8], +1+t_3);
	uint64_t t_11 = MAP_Explorer::max2(+d_[6]+d_[8], +t_4);
	uint64_t t_12 = MAP_Explorer::max2(+d_[4]+d_[6]+d_[8], +1+t_5);
	uint64_t t_13 = MAP_Explorer::max2(+t_10, +1+t_6);
	uint64_t t_14 = MAP_Explorer::max2(+1+t_11, +t_7);
	uint64_t t_15 = MAP_Explorer::max2(+d_[8], +d_[5]);
	uint64_t t_16 = MAP_Explorer::max2(+d_[6]+d_[8], +1+t_8);
	uint64_t t_17 = MAP_Explorer::max2(+t_12, +t_9);
	uint64_t t_18 = MAP_Explorer::max2(+t_13, +d_[7]+t_6);
	uint64_t t_19 = MAP_Explorer::max2(+1+t_14, +d_[7]+t_7);
	uint64_t t_20 = MAP_Explorer::max2(+1+t_15, +d_[5]+d_[7]);
	uint64_t t_21 = MAP_Explorer::max2(+t_16, +d_[7]+t_8);
	uint64_t t_22 = MAP_Explorer::max2(+1+t_17, +d_[7]+t_9);
	uint64_t t_23 = MAP_Explorer::max2(+d_[10]+t_10, +1+t_13);
	uint64_t t_24 = MAP_Explorer::max2(+d_[10]+t_11, +t_14);
	uint64_t t_25 = MAP_Explorer::max2(+d_[8]+d_[10], +1+t_15);
	uint64_t t_26 = MAP_Explorer::max2(+d_[6]+d_[8]+d_[10], +1+t_16);
	uint64_t t_27 = MAP_Explorer::max2(+d_[10]+t_12, +1+t_17);
	uint64_t t_28 = MAP_Explorer::max2(+t_23, +1+t_18);
	uint64_t t_29 = MAP_Explorer::max2(+1+t_24, +t_19);
	uint64_t t_30 = MAP_Explorer::max2(+t_25, +t_20);
	uint64_t t_31 = MAP_Explorer::max2(+t_26, +1+t_21);
	uint64_t t_32 = MAP_Explorer::max2(+t_27, +t_22);
	uint64_t t_33 = MAP_Explorer::max2(+d_[10], +d_[7]);
	uint64_t t_34 = MAP_Explorer::max2(+d_[11]+t_23, +1+t_28);
	uint64_t t_35 = MAP_Explorer::max2(+d_[11]+t_24, +t_29);
	uint64_t t_36 = MAP_Explorer::max2(+d_[11]+t_25, +1+t_30);
	uint64_t t_37 = MAP_Explorer::max2(+d_[11]+t_26, +1+t_31);
	uint64_t t_38 = MAP_Explorer::max2(+d_[11]+t_27, +1+t_32);
	uint64_t t_39 = MAP_Explorer::max2(+d_[10]+d_[11], +1+t_33);
	uint64_t t_40 = MAP_Explorer::max2(+t_34, +d_[9]+t_18);
	uint64_t t_41 = MAP_Explorer::max2(+2+t_35, +d_[9]+t_19);
	uint64_t t_42 = MAP_Explorer::max2(+1+t_36, +d_[9]+t_20);
	uint64_t t_43 = MAP_Explorer::max2(+t_37, +d_[9]+t_21);
	uint64_t t_44 = MAP_Explorer::max2(+1+t_38, +d_[9]+t_22);
	uint64_t t_45 = MAP_Explorer::max2(+1+t_39, +d_[7]+d_[9]);
	uint64_t t_46 = MAP_Explorer::max2(+1+d_[11], +d_[9]);
	uint64_t t_47 = MAP_Explorer::max2(+d_[13]+t_34, +1+t_40);
	uint64_t t_48 = MAP_Explorer::max2(+1+d_[13]+t_35, +t_41);
	uint64_t t_49 = MAP_Explorer::max2(+d_[13]+t_36, +t_42);
	uint64_t t_50 = MAP_Explorer::max2(+d_[13]+t_37, +1+t_43);
	uint64_t t_51 = MAP_Explorer::max2(+d_[13]+t_38, +t_44);
	uint64_t t_52 = MAP_Explorer::max2(+d_[13]+t_39, +t_45);
	uint64_t t_53 = MAP_Explorer::max2(+d_[11]+d_[13], +t_46);
	uint64_t t_54 = MAP_Explorer::max2(+t_47, +d_[12]+t_40);
	uint64_t t_55 = MAP_Explorer::max2(+1+t_48, +d_[12]+t_41);
	uint64_t t_56 = MAP_Explorer::max2(+1+t_49, +d_[12]+t_42);
	uint64_t t_57 = MAP_Explorer::max2(+t_50, +d_[12]+t_43);
	uint64_t t_58 = MAP_Explorer::max2(+1+t_51, +d_[12]+t_44);
	uint64_t t_59 = MAP_Explorer::max2(+1+t_52, +d_[12]+t_45);
	uint64_t t_60 = MAP_Explorer::max2(+1+t_53, +d_[12]+t_46);
	uint64_t t_61 = MAP_Explorer::max2(+d_[13]+d_[15]+t_34, +1+t_47);
	uint64_t t_62 = MAP_Explorer::max2(+d_[13]+d_[15]+t_35, +t_48);
	uint64_t t_63 = MAP_Explorer::max2(+d_[13]+d_[15]+t_36, +1+t_49);
	uint64_t t_64 = MAP_Explorer::max2(+d_[13]+d_[15]+t_37, +1+t_50);
	uint64_t t_65 = MAP_Explorer::max2(+d_[13]+d_[15]+t_38, +1+t_51);
	uint64_t t_66 = MAP_Explorer::max2(+d_[13]+d_[15]+t_39, +1+t_52);
	uint64_t t_67 = MAP_Explorer::max2(+d_[11]+d_[13]+d_[15], +1+t_53);
	uint64_t t_68 = MAP_Explorer::max2(+t_61, +1+t_54);
	uint64_t t_69 = MAP_Explorer::max2(+1+t_62, +t_55);
	uint64_t t_70 = MAP_Explorer::max2(+d_[15], +d_[12]);
	uint64_t t_71 = MAP_Explorer::max2(+t_63, +t_56);
	uint64_t t_72 = MAP_Explorer::max2(+t_64, +1+t_57);
	uint64_t t_73 = MAP_Explorer::max2(+t_65, +t_58);
	uint64_t t_74 = MAP_Explorer::max2(+t_66, +t_59);
	uint64_t t_75 = MAP_Explorer::max2(+t_67, +t_60);
	uint64_t t_76 = MAP_Explorer::max2(+t_68, +d_[14]+t_54);
	uint64_t t_77 = MAP_Explorer::max2(+1+t_69, +d_[14]+t_55);
	uint64_t t_78 = MAP_Explorer::max2(+1+t_70, +d_[12]+d_[14]);
	uint64_t t_79 = MAP_Explorer::max2(+1+t_71, +d_[14]+t_56);
	uint64_t t_80 = MAP_Explorer::max2(+t_72, +d_[14]+t_57);
	uint64_t t_81 = MAP_Explorer::max2(+1+t_73, +d_[14]+t_58);
	uint64_t t_82 = MAP_Explorer::max2(+1+t_74, +d_[14]+t_59);
	uint64_t t_83 = MAP_Explorer::max2(+1+t_75, +d_[14]+t_60);
	uint64_t t_84 = MAP_Explorer::max2(+d_[17]+t_61, +1+t_68);
	uint64_t t_85 = MAP_Explorer::max2(+d_[17]+t_62, +t_69);
	uint64_t t_86 = MAP_Explorer::max2(+d_[15]+d_[17], +1+t_70);
	uint64_t t_87 = MAP_Explorer::max2(+d_[17]+t_63, +1+t_71);
	uint64_t t_88 = MAP_Explorer::max2(+d_[17]+t_64, +1+t_72);
	uint64_t t_89 = MAP_Explorer::max2(+d_[17]+t_65, +1+t_73);
	uint64_t t_90 = MAP_Explorer::max2(+d_[17]+t_66, +1+t_74);
	uint64_t t_91 = MAP_Explorer::max2(+d_[17]+t_67, +1+t_75);
	uint64_t t_92 = MAP_Explorer::max2(+t_84, +1+t_76);
	uint64_t t_93 = MAP_Explorer::max2(+t_92, +1+d_[3]);
	uint64_t t_94 = MAP_Explorer::max2(+1+t_85, +t_77);
	uint64_t t_95 = MAP_Explorer::max2(+t_86, +t_78);
	uint64_t t_96 = MAP_Explorer::max2(+d_[17], +d_[14]);
	uint64_t t_97 = MAP_Explorer::max2(+t_87, +t_79);
	uint64_t t_98 = MAP_Explorer::max2(+t_88, +1+t_80);
	uint64_t t_99 = MAP_Explorer::max2(+t_89, +t_81);
	uint64_t t_100 = MAP_Explorer::max2(+t_90, +t_82);
	uint64_t t_101 = MAP_Explorer::max2(+t_91, +t_83);
	uint64_t t_102 = MAP_Explorer::max2(+d_[18]+t_84, +1+t_93);
	uint64_t t_103 = MAP_Explorer::max2(+d_[18]+t_85, +t_94);
	uint64_t t_104 = MAP_Explorer::max2(+d_[18]+t_86, +1+t_95);
	uint64_t t_105 = MAP_Explorer::max2(+d_[17]+d_[18], +1+t_96);
	uint64_t t_106 = MAP_Explorer::max2(+d_[18]+t_87, +1+t_97);
	uint64_t t_107 = MAP_Explorer::max2(+d_[18]+t_88, +1+t_98);
	uint64_t t_108 = MAP_Explorer::max2(+d_[18]+t_89, +1+t_99);
	uint64_t t_109 = MAP_Explorer::max2(+d_[18]+t_90, +1+t_100);
	uint64_t t_110 = MAP_Explorer::max2(+d_[18]+t_91, +1+t_101);
	uint64_t t_111 = MAP_Explorer::max2(+d_[19]+t_102, +1+t_28);
	uint64_t t_112 = MAP_Explorer::max2(+d_[19]+t_103, +t_29);
	uint64_t t_113 = MAP_Explorer::max2(+d_[19]+t_106, +1+t_30);
	uint64_t t_114 = MAP_Explorer::max2(+d_[19]+t_107, +1+t_31);
	uint64_t t_115 = MAP_Explorer::max2(+d_[19]+t_108, +1+t_32);
	uint64_t t_116 = MAP_Explorer::max2(+d_[19]+t_109, +1+t_33);
	uint64_t t_117 = MAP_Explorer::max2(+d_[19]+d_[20]+t_102, +1+t_111);
	uint64_t t_118 = MAP_Explorer::max2(+d_[19]+d_[20]+t_103, +1+t_112);
	uint64_t t_119 = MAP_Explorer::max2(+d_[19]+d_[20]+t_106, +1+t_113);
	uint64_t t_120 = MAP_Explorer::max2(+d_[19]+d_[20]+t_107, +1+t_114);
	uint64_t t_121 = MAP_Explorer::max2(+d_[19]+d_[20]+t_108, +1+t_115);
	uint64_t t_122 = MAP_Explorer::max2(+d_[19]+d_[20]+t_109, +1+t_116);
	uint64_t t_123 = MAP_Explorer::max2(+d_[21]+t_117, +1+t_93);
	uint64_t t_124 = MAP_Explorer::max2(+d_[21]+t_118, +t_94);
	uint64_t t_125 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_104, +1+t_95);
	uint64_t t_126 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_105, +1+t_96);
	uint64_t t_127 = MAP_Explorer::max2(+d_[21]+t_119, +1+t_97);
	uint64_t t_128 = MAP_Explorer::max2(+d_[21]+t_120, +1+t_98);
	uint64_t t_129 = MAP_Explorer::max2(+d_[21]+t_121, +1+t_99);
	uint64_t t_130 = MAP_Explorer::max2(+d_[21]+t_122, +1+t_100);
	uint64_t t_131 = MAP_Explorer::max2(+d_[19]+d_[20]+d_[21]+t_110, +1+t_101);

	uint64_t out_3 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+d_[16]+t_76, vec_[1] +2+d_[1]+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[2] +2+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[3] +d_[16]+t_77);
	out_3 = MAP_Explorer::max2(out_3, vec_[5] +1+d_[16]+t_78);
	out_3 = MAP_Explorer::max2(out_3, vec_[6] +2+d_[16]+t_76);
	out_3 = MAP_Explorer::max2(out_3, vec_[12] +1+d_[14]+d_[16]);
	out_3 = MAP_Explorer::max2(out_3, vec_[13] +1+d_[16]+t_79);
	out_3 = MAP_Explorer::max2(out_3, vec_[14] +2+d_[16]+t_80);
	out_3 = MAP_Explorer::max2(out_3, vec_[22] +1+d_[16]+t_81);
	out_3 = MAP_Explorer::max2(out_3, vec_[23] +1+d_[16]+t_82);
	out_3 = MAP_Explorer::max2(out_3, vec_[24] +1+d_[16]);
	out_3 = MAP_Explorer::max2(out_3, vec_[25] +1+d_[16]+t_83);
	out_3 = MAP_Explorer::max2(out_3, vec_[36] +2+d_[0]+d_[1]+d_[16]+t_76);
	uint64_t out_6 = MAP_Explorer::max2(vec_[0] +2+d_[0], vec_[1] +2);
	out_6 = MAP_Explorer::max2(out_6, vec_[2] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[6] +1);
	out_6 = MAP_Explorer::max2(out_6, vec_[36] +2+d_[0]);
	uint64_t out_13 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_111, vec_[1] +2+d_[1]+t_111);
	out_13 = MAP_Explorer::max2(out_13, vec_[2] +2+t_111);
	out_13 = MAP_Explorer::max2(out_13, vec_[3] +2+t_112);
	out_13 = MAP_Explorer::max2(out_13, vec_[5] +2+d_[19]+t_104);
	out_13 = MAP_Explorer::max2(out_13, vec_[6] +2+t_111);
	out_13 = MAP_Explorer::max2(out_13, vec_[12] +2+d_[19]+t_105);
	out_13 = MAP_Explorer::max2(out_13, vec_[13] +2+t_113);
	out_13 = MAP_Explorer::max2(out_13, vec_[14] +2+t_114);
	out_13 = MAP_Explorer::max2(out_13, vec_[15] +2);
	out_13 = MAP_Explorer::max2(out_13, vec_[22] +2+t_115);
	out_13 = MAP_Explorer::max2(out_13, vec_[23] +2+t_116);
	out_13 = MAP_Explorer::max2(out_13, vec_[24] +2+d_[18]+d_[19]);
	out_13 = MAP_Explorer::max2(out_13, vec_[25] +2+d_[19]+t_110);
	out_13 = MAP_Explorer::max2(out_13, vec_[36] +2+d_[0]+d_[1]+t_111);
	uint64_t out_22 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_93, vec_[1] +2+d_[1]+t_93);
	out_22 = MAP_Explorer::max2(out_22, vec_[2] +2+t_93);
	out_22 = MAP_Explorer::max2(out_22, vec_[3] +1+t_94);
	out_22 = MAP_Explorer::max2(out_22, vec_[5] +2+t_95);
	out_22 = MAP_Explorer::max2(out_22, vec_[6] +2+t_93);
	out_22 = MAP_Explorer::max2(out_22, vec_[12] +2+t_96);
	out_22 = MAP_Explorer::max2(out_22, vec_[13] +2+t_97);
	out_22 = MAP_Explorer::max2(out_22, vec_[14] +2+t_98);
	out_22 = MAP_Explorer::max2(out_22, vec_[22] +2+t_99);
	out_22 = MAP_Explorer::max2(out_22, vec_[23] +2+t_100);
	out_22 = MAP_Explorer::max2(out_22, vec_[24] +2);
	out_22 = MAP_Explorer::max2(out_22, vec_[25] +2+t_101);
	out_22 = MAP_Explorer::max2(out_22, vec_[36] +2+d_[0]+d_[1]+t_93);
	uint64_t out_25 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_102, vec_[1] +2+d_[1]+t_102);
	out_25 = MAP_Explorer::max2(out_25, vec_[2] +2+t_102);
	out_25 = MAP_Explorer::max2(out_25, vec_[3] +2+t_103);
	out_25 = MAP_Explorer::max2(out_25, vec_[5] +2+t_104);
	out_25 = MAP_Explorer::max2(out_25, vec_[6] +2+t_102);
	out_25 = MAP_Explorer::max2(out_25, vec_[12] +2+t_105);
	out_25 = MAP_Explorer::max2(out_25, vec_[13] +2+t_106);
	out_25 = MAP_Explorer::max2(out_25, vec_[14] +2+t_107);
	out_25 = MAP_Explorer::max2(out_25, vec_[15] +1);
	out_25 = MAP_Explorer::max2(out_25, vec_[22] +2+t_108);
	out_25 = MAP_Explorer::max2(out_25, vec_[23] +2+t_109);
	out_25 = MAP_Explorer::max2(out_25, vec_[24] +2+d_[18]);
	out_25 = MAP_Explorer::max2(out_25, vec_[25] +2+t_110);
	out_25 = MAP_Explorer::max2(out_25, vec_[36] +2+d_[0]+d_[1]+t_102);
	uint64_t out_37 = MAP_Explorer::max2(vec_[0] +1+d_[0]+d_[1]+t_117, vec_[1] +1+d_[1]+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[2] +1+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[3] +1+t_118);
	out_37 = MAP_Explorer::max2(out_37, vec_[5] +1+d_[19]+d_[20]+t_104);
	out_37 = MAP_Explorer::max2(out_37, vec_[6] +1+t_117);
	out_37 = MAP_Explorer::max2(out_37, vec_[12] +1+d_[19]+d_[20]+t_105);
	out_37 = MAP_Explorer::max2(out_37, vec_[13] +1+t_119);
	out_37 = MAP_Explorer::max2(out_37, vec_[14] +1+t_120);
	out_37 = MAP_Explorer::max2(out_37, vec_[15] +1+d_[20]);
	out_37 = MAP_Explorer::max2(out_37, vec_[22] +1+t_121);
	out_37 = MAP_Explorer::max2(out_37, vec_[23] +1+t_122);
	out_37 = MAP_Explorer::max2(out_37, vec_[24] +1+d_[18]+d_[19]+d_[20]);
	out_37 = MAP_Explorer::max2(out_37, vec_[25] +1+d_[19]+d_[20]+t_110);
	out_37 = MAP_Explorer::max2(out_37, vec_[36] +1+d_[0]+d_[1]+t_117);
	uint64_t out_38 = MAP_Explorer::max2(vec_[0] +2+d_[0]+d_[1]+t_123, vec_[1] +2+d_[1]+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[2] +2+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[3] +2+t_124);
	out_38 = MAP_Explorer::max2(out_38, vec_[4] +1);
	out_38 = MAP_Explorer::max2(out_38, vec_[5] +2+t_125);
	out_38 = MAP_Explorer::max2(out_38, vec_[6] +2+t_123);
	out_38 = MAP_Explorer::max2(out_38, vec_[12] +2+t_126);
	out_38 = MAP_Explorer::max2(out_38, vec_[13] +2+t_127);
	out_38 = MAP_Explorer::max2(out_38, vec_[14] +2+t_128);
	out_38 = MAP_Explorer::max2(out_38, vec_[15] +2+d_[20]+d_[21]);
	out_38 = MAP_Explorer::max2(out_38, vec_[22] +2+t_129);
	out_38 = MAP_Explorer::max2(out_38, vec_[23] +2+t_130);
	out_38 = MAP_Explorer::max2(out_38, vec_[24] +2+d_[18]+d_[19]+d_[20]+d_[21]);
	out_38 = MAP_Explorer::max2(out_38, vec_[25] +2+t_131);
	out_38 = MAP_Explorer::max2(out_38, vec_[36] +2+d_[0]+d_[1]+t_123);
	uint64_t out_2 = out_38;
	uint64_t out_1 = out_38 -1;
	uint64_t out_23 = out_37 +1;
	uint64_t out_0 = out_23 -2+d_[21];


	vec_[3] = out_3;
	vec_[6] = out_6;
	vec_[13] = out_13;
	vec_[22] = out_22;
	vec_[25] = out_25;
	vec_[37] = out_37;
	vec_[38] = out_38;
	vec_[2] = out_2;
	vec_[1] = out_1;
	vec_[23] = out_23;
	vec_[0] = out_0;
}

extern const MAP_Explorer::Block block_336{
    336,
    19256,
    19312,
    block_336_fn
    };


} // namespace CV32E40P_DSE