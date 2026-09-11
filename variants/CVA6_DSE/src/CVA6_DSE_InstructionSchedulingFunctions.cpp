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


#include "InstructionSchedulingFunctions.h"

#include <array>
#include <algorithm>
#include <cstdint>

namespace CVA6_DSE{

static void instr__def_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;

}

const MAP_Explorer::Instruction instr__def{
    0,
    false,
    instr__def_fn
};

static void instr_auipc_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_auipc{
    1,
    false,
    instr_auipc_fn
};

static void instr_lui_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lui{
    2,
    false,
    instr_lui_fn
};

static void instr_csrrwi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrwi{
    3,
    false,
    instr_csrrwi_fn
};

static void instr_csrrsi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrsi{
    4,
    false,
    instr_csrrsi_fn
};

static void instr_csrrci_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrci{
    5,
    false,
    instr_csrrci_fn
};

static void instr_addi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_addi{
    6,
    false,
    instr_addi_fn
};

static void instr_xori_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_xori{
    7,
    false,
    instr_xori_fn
};

static void instr_ori_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_ori{
    8,
    false,
    instr_ori_fn
};

static void instr_andi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_andi{
    9,
    false,
    instr_andi_fn
};

static void instr_slti_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_slti{
    10,
    false,
    instr_slti_fn
};

static void instr_sltiu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sltiu{
    11,
    false,
    instr_sltiu_fn
};

static void instr_slli_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_slli{
    12,
    false,
    instr_slli_fn
};

static void instr_srli_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_srli{
    13,
    false,
    instr_srli_fn
};

static void instr_srai_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_srai{
    14,
    false,
    instr_srai_fn
};

static void instr_csrrw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrw{
    15,
    false,
    instr_csrrw_fn
};

static void instr_csrrs_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrs{
    16,
    false,
    instr_csrrs_fn
};

static void instr_csrrc_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_csrrc{
    17,
    false,
    instr_csrrc_fn
};

static void instr_addiw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_addiw{
    18,
    false,
    instr_addiw_fn
};

static void instr_slliw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_slliw{
    19,
    false,
    instr_slliw_fn
};

static void instr_sraiw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sraiw{
    20,
    false,
    instr_sraiw_fn
};

static void instr_srliw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_srliw{
    21,
    false,
    instr_srliw_fn
};

static void instr_add_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_add{
    22,
    false,
    instr_add_fn
};

static void instr_sub_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sub{
    23,
    false,
    instr_sub_fn
};

static void instr_xor_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_xor{
    24,
    false,
    instr_xor_fn
};

static void instr_or_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_or{
    25,
    false,
    instr_or_fn
};

static void instr_and_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_and{
    26,
    false,
    instr_and_fn
};

static void instr_slt_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_slt{
    27,
    false,
    instr_slt_fn
};

static void instr_sltu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sltu{
    28,
    false,
    instr_sltu_fn
};

static void instr_sll_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sll{
    29,
    false,
    instr_sll_fn
};

static void instr_srl_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_srl{
    30,
    false,
    instr_srl_fn
};

static void instr_sra_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_sra{
    31,
    false,
    instr_sra_fn
};

static void instr_subw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_subw{
    32,
    false,
    instr_subw_fn
};

static void instr_addw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_addw{
    33,
    false,
    instr_addw_fn
};

static void instr_beq_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_beq{
    34,
    true,
    instr_beq_fn
};

static void instr_bne_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_bne{
    35,
    true,
    instr_bne_fn
};

static void instr_blt_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_blt{
    36,
    true,
    instr_blt_fn
};

static void instr_bge_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_bge{
    37,
    true,
    instr_bge_fn
};

static void instr_bltu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_bltu{
    38,
    true,
    instr_bltu_fn
};

static void instr_bgeu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 0] = Pc_p;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_bgeu{
    39,
    true,
    instr_bgeu_fn
};

static void instr_jal_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p_j = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;
vec_[100 + 1] = Pc_p_j;

}

const MAP_Explorer::Instruction instr_jal{
    40,
    true,
    instr_jal_fn
};

static void instr_jalr_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p_jr = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
uint64_t Xd = n_ALU;
uint64_t Pc_c = n_ALU;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;
vec_[100 + 2] = Pc_p_jr;
vec_[100 + 3] = Pc_c;

}

const MAP_Explorer::Instruction instr_jalr{
    41,
    true,
    instr_jalr_fn
};

static void instr_mret_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p_j = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 1] = Pc_p_j;

}

const MAP_Explorer::Instruction instr_mret{
    42,
    true,
    instr_mret_fn
};

static void instr_ecall_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
uint64_t Pc_p_j = n_IScan;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,EX_stage__8,EX_substage_alu,EX_substage_mul_o,EX_substage_div});
IS_stage = n_IS_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_IS_stage + 1;
// EX_substage_alu
uint64_t n_EX_substage_alu = n_ALU;
EX_substage_alu = n_EX_substage_alu;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_alu,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[100 + 1] = Pc_p_j;

}

const MAP_Explorer::Instruction instr_ecall{
    43,
    true,
    instr_ecall_fn
};

static void instr_mul_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_mul_i,EX_substage_div});
IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I,EX_substage_mul_o});
EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
uint64_t Xd = n_MUL_O;
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_mul{
    44,
    false,
    instr_mul_fn
};

static void instr_mulh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_mul_i,EX_substage_div});
IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I,EX_substage_mul_o});
EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
uint64_t Xd = n_MUL_O;
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_mulh{
    45,
    false,
    instr_mulh_fn
};

static void instr_mulhu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_mul_i,EX_substage_div});
IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I,EX_substage_mul_o});
EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
uint64_t Xd = n_MUL_O;
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_mulhu{
    46,
    false,
    instr_mulhu_fn
};

static void instr_mulhsu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_mul_i,EX_substage_div});
IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I,EX_substage_mul_o});
EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
uint64_t Xd = n_MUL_O;
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_mulhsu{
    47,
    false,
    instr_mulhsu_fn
};

static void instr_mulw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_mul_i,EX_substage_div});
IS_stage = n_IS_stage;
// MUL_I
uint64_t n_MUL_I;
n_MUL_I = n_IS_stage + 1;
// EX_substage_mul_i
uint64_t n_EX_substage_mul_i;
n_EX_substage_mul_i = std::max({n_MUL_I,EX_substage_mul_o});
EX_substage_mul_i = n_EX_substage_mul_i;
// MUL_O
uint64_t n_MUL_O;
n_MUL_O = n_EX_substage_mul_i + 1;
uint64_t Xd = n_MUL_O;
// EX_substage_mul_o
uint64_t n_EX_substage_mul_o = n_MUL_O;
EX_substage_mul_o = n_EX_substage_mul_o;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_mul_o,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_mulw{
    48,
    false,
    instr_mulw_fn
};

static void instr_div_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + d_1;
uint64_t Xd = n_DIV;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_div{
    49,
    false,
    instr_div_fn
};

static void instr_rem_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + d_1;
uint64_t Xd = n_DIV;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_rem{
    50,
    false,
    instr_rem_fn
};

static void instr_divw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + d_1;
uint64_t Xd = n_DIV;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_divw{
    51,
    false,
    instr_divw_fn
};

static void instr_remw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_IS_stage + d_1;
uint64_t Xd = n_DIV;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIV;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_remw{
    52,
    false,
    instr_remw_fn
};

static void instr_divu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_divu{
    53,
    false,
    instr_divu_fn
};

static void instr_remu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_remu{
    54,
    false,
    instr_remu_fn
};

static void instr_divuw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_divuw{
    55,
    false,
    instr_divuw_fn
};

static void instr_remuw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_div});
IS_stage = n_IS_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_IS_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_substage_div
uint64_t n_EX_substage_div = n_DIVU;
EX_substage_div = n_EX_substage_div;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_div,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_remuw{
    56,
    false,
    instr_remuw_fn
};

static void instr_lw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lw{
    57,
    false,
    instr_lw_fn
};

static void instr_lh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lh{
    58,
    false,
    instr_lh_fn
};

static void instr_lhu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lhu{
    59,
    false,
    instr_lhu_fn
};

static void instr_lb_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lb{
    60,
    false,
    instr_lb_fn
};

static void instr_lbu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lbu{
    61,
    false,
    instr_lbu_fn
};

static void instr_ld_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_ld{
    62,
    false,
    instr_ld_fn
};

static void instr_lwu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Cb_out = ( rd_ == 0 ) ? 0 : vec_[66 + rd_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_Clobber
uint64_t n_uA_Clobber;
n_uA_Clobber = std::max({n_ID_stage,Cb_out});
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_Clobber,n_uA_OF_A,EX_stage__8,EX_substage_lCtrl});
IS_stage = n_IS_stage;
// LCtrl
uint64_t n_LCtrl;
n_LCtrl = n_IS_stage + 1;
// EX_substage_lCtrl
uint64_t n_EX_substage_lCtrl;
n_EX_substage_lCtrl = std::max({n_LCtrl,EX_substage_dCache});
EX_substage_lCtrl = n_EX_substage_lCtrl;
// DCache
uint64_t n_DCache;
n_DCache = n_EX_substage_lCtrl + d_1;
// EX_substage_dCache
uint64_t n_EX_substage_dCache;
n_EX_substage_dCache = std::max({n_DCache,EX_substage_lUnit});
EX_substage_dCache = n_EX_substage_dCache;
// LUnit
uint64_t n_LUnit;
n_LUnit = n_EX_substage_dCache + 1;
uint64_t Xd = n_LUnit;
// EX_substage_lUnit
uint64_t n_EX_substage_lUnit = n_LUnit;
EX_substage_lUnit = n_EX_substage_lUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_lUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
uint64_t Cb_in = n_Commit;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;
vec_[34 + rd_] = Xd;
vec_[66 + rd_] = Cb_in;

}

const MAP_Explorer::Instruction instr_lwu{
    63,
    false,
    instr_lwu_fn
};

static void instr_sb_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_sCtrl});
IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl,EX_substage_sUnit});
EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;

}

const MAP_Explorer::Instruction instr_sb{
    64,
    false,
    instr_sb_fn
};

static void instr_sh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_sCtrl});
IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl,EX_substage_sUnit});
EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;

}

const MAP_Explorer::Instruction instr_sh{
    65,
    false,
    instr_sh_fn
};

static void instr_sw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_sCtrl});
IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl,EX_substage_sUnit});
EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;

}

const MAP_Explorer::Instruction instr_sw{
    66,
    false,
    instr_sw_fn
};

static void instr_sd_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t PC_stage = vec_[0];
uint64_t IF_stage__1 = vec_[1];
uint64_t IF_stage__2 = vec_[2];
uint64_t IF_stage__3 = vec_[3];
uint64_t IF_stage__4 = vec_[4];
uint64_t IF_stage__5 = vec_[5];
uint64_t IF_stage__6 = vec_[6];
uint64_t IF_stage__7 = vec_[7];
uint64_t IF_stage__8 = vec_[8];
uint64_t IF_stage__9 = vec_[9];
uint64_t IF_substage_0 = vec_[10];
uint64_t IF_substage_1 = vec_[11];
uint64_t IF_substage_2 = vec_[12];
uint64_t ID_stage = vec_[13];
uint64_t IS_stage = vec_[14];
uint64_t EX_stage__1 = vec_[15];
uint64_t EX_stage__2 = vec_[16];
uint64_t EX_stage__3 = vec_[17];
uint64_t EX_stage__4 = vec_[18];
uint64_t EX_stage__5 = vec_[19];
uint64_t EX_stage__6 = vec_[20];
uint64_t EX_stage__7 = vec_[21];
uint64_t EX_stage__8 = vec_[22];
uint64_t EX_substage_alu = vec_[23];
uint64_t EX_substage_mul_i = vec_[24];
uint64_t EX_substage_mul_o = vec_[25];
uint64_t EX_substage_div = vec_[26];
uint64_t EX_substage_lCtrl = vec_[27];
uint64_t EX_substage_dCache = vec_[28];
uint64_t EX_substage_lUnit = vec_[29];
uint64_t EX_substage_sCtrl = vec_[30];
uint64_t EX_substage_sUnit = vec_[31];
uint64_t COM_stage__1 = vec_[32];
uint64_t COM_stage__2 = vec_[33];
uint64_t Xa = vec_[34 + rs1_];
uint64_t Xb = vec_[34 + rs2_];
uint64_t Pc_mp = vec_[98 + 0];
uint64_t Pc_pt = vec_[98 + 1];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = PC_stage;
// PCGen
uint64_t n_PCGen;
n_PCGen = n_Enter + 1;
// uA_PcCorrect
uint64_t n_uA_PcCorrect;
n_uA_PcCorrect = std::max({n_Enter,Pc_mp});
// PC_stage
uint64_t n_PC_stage;
n_PC_stage = std::max({n_PCGen,n_uA_PcCorrect,IF_stage__9,IF_substage_0});
PC_stage = n_PC_stage;
// ICacheCtrl
uint64_t n_ICacheCtrl;
n_ICacheCtrl = n_PC_stage + 1;
// uA_PcPredict
uint64_t n_uA_PcPredict;
n_uA_PcPredict = std::max({n_PC_stage,Pc_pt});
// IF_substage_0
uint64_t n_IF_substage_0;
n_IF_substage_0 = std::max({n_ICacheCtrl,n_uA_PcPredict,IF_substage_1});
IF_substage_0 = n_IF_substage_0;
// ICache
uint64_t n_ICache;
n_ICache = n_IF_substage_0 + d_0;
// IF_substage_1
uint64_t n_IF_substage_1;
n_IF_substage_1 = std::max({n_ICache,IF_substage_2});
IF_substage_1 = n_IF_substage_1;
// IScan
uint64_t n_IScan;
n_IScan = n_IF_substage_1 + 1;
// IF_substage_2
uint64_t n_IF_substage_2 = n_IScan;
IF_substage_2 = n_IF_substage_2;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IF_substage_2,IF_stage__1,ID_stage});
IF_stage__1 = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,IS_stage});
ID_stage = n_ID_stage;
// Issue
uint64_t n_Issue;
n_Issue = n_ID_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_ID_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_ID_stage,Xb});
// IS_stage
uint64_t n_IS_stage;
n_IS_stage = std::max({n_Issue,n_uA_OF_A,n_uA_OF_B,EX_stage__8,EX_substage_sCtrl});
IS_stage = n_IS_stage;
// SCtrl
uint64_t n_SCtrl;
n_SCtrl = n_IS_stage + 1;
// EX_substage_sCtrl
uint64_t n_EX_substage_sCtrl;
n_EX_substage_sCtrl = std::max({n_SCtrl,EX_substage_sUnit});
EX_substage_sCtrl = n_EX_substage_sCtrl;
// SUnit
uint64_t n_SUnit;
n_SUnit = n_EX_substage_sCtrl + 1;
// EX_substage_sUnit
uint64_t n_EX_substage_sUnit = n_SUnit;
EX_substage_sUnit = n_EX_substage_sUnit;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_EX_substage_sUnit,EX_stage__1,COM_stage__2});
EX_stage__1 = n_EX_stage;
// Commit
uint64_t n_Commit;
n_Commit = n_EX_stage + 1;
// COM_stage
uint64_t n_COM_stage;
n_COM_stage = std::max({n_Commit,COM_stage__1});
COM_stage__1 = n_COM_stage;

/* Buffer-Shifting */
IF_stage__2 = vec_[1];
IF_stage__3 = vec_[2];
IF_stage__4 = vec_[3];
IF_stage__5 = vec_[4];
IF_stage__6 = vec_[5];
IF_stage__7 = vec_[6];
IF_stage__8 = vec_[7];
IF_stage__9 = vec_[8];
EX_stage__2 = vec_[15];
EX_stage__3 = vec_[16];
EX_stage__4 = vec_[17];
EX_stage__5 = vec_[18];
EX_stage__6 = vec_[19];
EX_stage__7 = vec_[20];
EX_stage__8 = vec_[21];
COM_stage__2 = vec_[32];

/* Output Alignment */
vec_[0] = PC_stage;
vec_[1] = IF_stage__1;
vec_[2] = IF_stage__2;
vec_[3] = IF_stage__3;
vec_[4] = IF_stage__4;
vec_[5] = IF_stage__5;
vec_[6] = IF_stage__6;
vec_[7] = IF_stage__7;
vec_[8] = IF_stage__8;
vec_[9] = IF_stage__9;
vec_[10] = IF_substage_0;
vec_[11] = IF_substage_1;
vec_[12] = IF_substage_2;
vec_[13] = ID_stage;
vec_[14] = IS_stage;
vec_[15] = EX_stage__1;
vec_[16] = EX_stage__2;
vec_[17] = EX_stage__3;
vec_[18] = EX_stage__4;
vec_[19] = EX_stage__5;
vec_[20] = EX_stage__6;
vec_[21] = EX_stage__7;
vec_[22] = EX_stage__8;
vec_[23] = EX_substage_alu;
vec_[24] = EX_substage_mul_i;
vec_[25] = EX_substage_mul_o;
vec_[26] = EX_substage_div;
vec_[27] = EX_substage_lCtrl;
vec_[28] = EX_substage_dCache;
vec_[29] = EX_substage_lUnit;
vec_[30] = EX_substage_sCtrl;
vec_[31] = EX_substage_sUnit;
vec_[32] = COM_stage__1;
vec_[33] = COM_stage__2;

}

const MAP_Explorer::Instruction instr_sd{
    67,
    false,
    instr_sd_fn
};


const std::array<const MAP_Explorer::Instruction*, 68> CVA6_DSE_instructions{{
    &instr__def,
    &instr_auipc,
    &instr_lui,
    &instr_csrrwi,
    &instr_csrrsi,
    &instr_csrrci,
    &instr_addi,
    &instr_xori,
    &instr_ori,
    &instr_andi,
    &instr_slti,
    &instr_sltiu,
    &instr_slli,
    &instr_srli,
    &instr_srai,
    &instr_csrrw,
    &instr_csrrs,
    &instr_csrrc,
    &instr_addiw,
    &instr_slliw,
    &instr_sraiw,
    &instr_srliw,
    &instr_add,
    &instr_sub,
    &instr_xor,
    &instr_or,
    &instr_and,
    &instr_slt,
    &instr_sltu,
    &instr_sll,
    &instr_srl,
    &instr_sra,
    &instr_subw,
    &instr_addw,
    &instr_beq,
    &instr_bne,
    &instr_blt,
    &instr_bge,
    &instr_bltu,
    &instr_bgeu,
    &instr_jal,
    &instr_jalr,
    &instr_mret,
    &instr_ecall,
    &instr_mul,
    &instr_mulh,
    &instr_mulhu,
    &instr_mulhsu,
    &instr_mulw,
    &instr_div,
    &instr_rem,
    &instr_divw,
    &instr_remw,
    &instr_divu,
    &instr_remu,
    &instr_divuw,
    &instr_remuw,
    &instr_lw,
    &instr_lh,
    &instr_lhu,
    &instr_lb,
    &instr_lbu,
    &instr_ld,
    &instr_lwu,
    &instr_sb,
    &instr_sh,
    &instr_sw,
    &instr_sd
}};

extern const MAP_Explorer::InstructionDictionary CVA6_DSE_instrDict{CVA6_DSE_instructions.data(), CVA6_DSE_instructions.size()};

} // namespace CVA6_DSE