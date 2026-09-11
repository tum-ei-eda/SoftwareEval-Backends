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

namespace CV32E40P_DSE{

static void instr_add_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_add{
    0,
    false,
    instr_add_fn
};

static void instr_sub_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sub{
    1,
    false,
    instr_sub_fn
};

static void instr_xor_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_xor{
    2,
    false,
    instr_xor_fn
};

static void instr_or_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_or{
    3,
    false,
    instr_or_fn
};

static void instr_and_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_and{
    4,
    false,
    instr_and_fn
};

static void instr_slt_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_slt{
    5,
    false,
    instr_slt_fn
};

static void instr_sltu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sltu{
    6,
    false,
    instr_sltu_fn
};

static void instr_sll_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sll{
    7,
    false,
    instr_sll_fn
};

static void instr_srl_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_srl{
    8,
    false,
    instr_srl_fn
};

static void instr_sra_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sra{
    9,
    false,
    instr_sra_fn
};

static void instr_addi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_addi{
    10,
    false,
    instr_addi_fn
};

static void instr_xori_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_xori{
    11,
    false,
    instr_xori_fn
};

static void instr_ori_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_ori{
    12,
    false,
    instr_ori_fn
};

static void instr_andi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_andi{
    13,
    false,
    instr_andi_fn
};

static void instr_slti_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_slti{
    14,
    false,
    instr_slti_fn
};

static void instr_sltiu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sltiu{
    15,
    false,
    instr_sltiu_fn
};

static void instr_slli_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_slli{
    16,
    false,
    instr_slli_fn
};

static void instr_srli_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_srli{
    17,
    false,
    instr_srli_fn
};

static void instr_srai_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_srai{
    18,
    false,
    instr_srai_fn
};

static void instr_auipc_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_auipc{
    19,
    false,
    instr_auipc_fn
};

static void instr_lui_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lui{
    20,
    false,
    instr_lui_fn
};

static void instr_mul_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// MUL
uint64_t n_MUL;
n_MUL = n_ID_stage + 1;
uint64_t Xd = n_MUL;
// EX_stage
uint64_t n_EX_stage = n_MUL;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_mul{
    21,
    false,
    instr_mul_fn
};

static void instr_mulh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
uint64_t Xd = n_MULH;
// EX_stage
uint64_t n_EX_stage = n_MULH;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_mulh{
    22,
    false,
    instr_mulh_fn
};

static void instr_mulhu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
uint64_t Xd = n_MULH;
// EX_stage
uint64_t n_EX_stage = n_MULH;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_mulhu{
    23,
    false,
    instr_mulhu_fn
};

static void instr_mulhsu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// MULH
uint64_t n_MULH;
n_MULH = n_ID_stage + 5;
uint64_t Xd = n_MULH;
// EX_stage
uint64_t n_EX_stage = n_MULH;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_mulhsu{
    24,
    false,
    instr_mulhsu_fn
};

static void instr_div_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + d_1;
uint64_t Xd = n_DIV;
// EX_stage
uint64_t n_EX_stage = n_DIV;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_div{
    25,
    false,
    instr_div_fn
};

static void instr_rem_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// DIV
uint64_t n_DIV;
n_DIV = n_ID_stage + d_1;
uint64_t Xd = n_DIV;
// EX_stage
uint64_t n_EX_stage = n_DIV;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_rem{
    26,
    false,
    instr_rem_fn
};

static void instr_divu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_stage
uint64_t n_EX_stage = n_DIVU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_divu{
    27,
    false,
    instr_divu_fn
};

static void instr_remu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// DIVU
uint64_t n_DIVU;
n_DIVU = n_ID_stage + d_1;
uint64_t Xd = n_DIVU;
// EX_stage
uint64_t n_EX_stage = n_DIVU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_remu{
    28,
    false,
    instr_remu_fn
};

static void instr_csrrw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrw{
    29,
    false,
    instr_csrrw_fn
};

static void instr_csrrs_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrs{
    30,
    false,
    instr_csrrs_fn
};

static void instr_csrrc_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrc{
    31,
    false,
    instr_csrrc_fn
};

static void instr_csrrwi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrwi{
    32,
    false,
    instr_csrrwi_fn
};

static void instr_csrrsi_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrsi{
    33,
    false,
    instr_csrrsi_fn
};

static void instr_csrrci_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,EX_stage});
ID_stage = n_ID_stage;
// CSR
uint64_t n_CSR;
n_CSR = n_ID_stage + 1;
uint64_t Xd = n_CSR;
// EX_stage
uint64_t n_EX_stage = n_CSR;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_csrrci{
    34,
    false,
    instr_csrrci_fn
};

static void instr_sb_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + d_1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sb{
    35,
    false,
    instr_sb_fn
};

static void instr_sh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + d_1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sh{
    36,
    false,
    instr_sh_fn
};

static void instr_sw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];
uint8_t d_1 = d_[1];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_W
uint64_t n_DPort_W;
n_DPort_W = n_EX_stage + d_1;
// WB_stage
uint64_t n_WB_stage = n_DPort_W;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_sw{
    37,
    false,
    instr_sw_fn
};

static void instr_lw_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
uint64_t Xd = n_DPort_R;
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lw{
    38,
    false,
    instr_lw_fn
};

static void instr_lh_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
uint64_t Xd = n_DPort_R;
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lh{
    39,
    false,
    instr_lh_fn
};

static void instr_lhu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
uint64_t Xd = n_DPort_R;
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lhu{
    40,
    false,
    instr_lhu_fn
};

static void instr_lb_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
uint64_t Xd = n_DPort_R;
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lb{
    41,
    false,
    instr_lb_fn
};

static void instr_lbu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,EX_stage});
ID_stage = n_ID_stage;
// LSU
uint64_t n_LSU;
n_LSU = n_ID_stage + 1;
// EX_stage
uint64_t n_EX_stage;
n_EX_stage = std::max({n_LSU,WB_stage});
EX_stage = n_EX_stage;
// DPort_R
uint64_t n_DPort_R;
n_DPort_R = n_EX_stage + 1;
uint64_t Xd = n_DPort_R;
// WB_stage
uint64_t n_WB_stage = n_DPort_R;
WB_stage = n_WB_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr_lbu{
    42,
    false,
    instr_lbu_fn
};

static void instr_beq_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_beq{
    43,
    true,
    instr_beq_fn
};

static void instr_bne_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_bne{
    44,
    true,
    instr_bne_fn
};

static void instr_blt_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_blt{
    45,
    true,
    instr_blt_fn
};

static void instr_bge_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_bge{
    46,
    true,
    instr_bge_fn
};

static void instr_bltu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_bltu{
    47,
    true,
    instr_bltu_fn
};

static void instr_bgeu_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Xb = vec_[4 + rs2_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// Decoder
uint64_t n_Decoder;
n_Decoder = n_IF_stage + 1;
// uA_OF_A
uint64_t n_uA_OF_A;
n_uA_OF_A = std::max({n_IF_stage,Xa});
// uA_OF_B
uint64_t n_uA_OF_B;
n_uA_OF_B = std::max({n_IF_stage,Xb});
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_Decoder,n_uA_OF_A,n_uA_OF_B,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Pc_np = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_bgeu{
    48,
    true,
    instr_bgeu_fn
};

static void instr_mret_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
n_JumpDecoder = n_IF_stage + 1;
uint64_t Pc_np = n_JumpDecoder;
// ID_stage
uint64_t n_ID_stage = n_JumpDecoder;
ID_stage = n_ID_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_mret{
    49,
    true,
    instr_mret_fn
};

static void instr_ecall_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
n_JumpDecoder = n_IF_stage + 1;
uint64_t Pc_np = n_JumpDecoder;
// ID_stage
uint64_t n_ID_stage = n_JumpDecoder;
ID_stage = n_ID_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_ecall{
    50,
    true,
    instr_ecall_fn
};

static void instr__def_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen});
IF_stage = n_IF_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[37 + 0] = Pc_p;

}

const MAP_Explorer::Instruction instr__def{
    51,
    false,
    instr__def_fn
};

static void instr_jal_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
n_JumpDecoder = n_IF_stage + 1;
uint64_t Pc_np = n_JumpDecoder;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_jal{
    52,
    true,
    instr_jal_fn
};

static void instr_jalr_fn(uint64_t* vec_, uint8_t* d_, uint64_t rs1_, uint64_t rs2_, uint64_t rd_){
    
/* Input Alignment */
uint64_t IF_stage = vec_[0];
uint64_t ID_stage = vec_[1];
uint64_t EX_stage = vec_[2];
uint64_t WB_stage = vec_[3];
uint64_t Xa = vec_[4 + rs1_];
uint64_t Pc = vec_[36 + 0];

uint8_t d_0 = d_[0];

/* Compute body */
// Enter
uint64_t n_Enter = IF_stage;
// IPort_R
uint64_t n_IPort_R;
uint64_t n_IPort_R_max;
n_IPort_R_max = std::max({n_Enter,Pc});
n_IPort_R = n_IPort_R_max + d_0;
// PCGen
uint64_t n_PCGen;
uint64_t n_PCGen_max;
n_PCGen_max = std::max({n_Enter,Pc});
n_PCGen = n_PCGen_max + 1;
uint64_t Pc_p = n_PCGen;
// IF_stage
uint64_t n_IF_stage;
n_IF_stage = std::max({n_IPort_R,n_PCGen,ID_stage});
IF_stage = n_IF_stage;
// JumpDecoder
uint64_t n_JumpDecoder;
uint64_t n_JumpDecoder_max;
n_JumpDecoder_max = std::max({n_IF_stage,Xa});
n_JumpDecoder = n_JumpDecoder_max + 1;
uint64_t Pc_np = n_JumpDecoder;
// ID_stage
uint64_t n_ID_stage;
n_ID_stage = std::max({n_JumpDecoder,EX_stage});
ID_stage = n_ID_stage;
// ALU
uint64_t n_ALU;
n_ALU = n_ID_stage + 1;
uint64_t Xd = n_ALU;
// EX_stage
uint64_t n_EX_stage = n_ALU;
EX_stage = n_EX_stage;

/* Buffer-Shifting */

/* Output Alignment */
vec_[0] = IF_stage;
vec_[1] = ID_stage;
vec_[2] = EX_stage;
vec_[3] = WB_stage;
vec_[4 + rd_] = Xd;
vec_[37 + 0] = Pc_p;
vec_[37 + 1] = Pc_np;

}

const MAP_Explorer::Instruction instr_jalr{
    53,
    true,
    instr_jalr_fn
};


const std::array<const MAP_Explorer::Instruction*, 54> CV32E40P_DSE_instructions{{
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
    &instr_addi,
    &instr_xori,
    &instr_ori,
    &instr_andi,
    &instr_slti,
    &instr_sltiu,
    &instr_slli,
    &instr_srli,
    &instr_srai,
    &instr_auipc,
    &instr_lui,
    &instr_mul,
    &instr_mulh,
    &instr_mulhu,
    &instr_mulhsu,
    &instr_div,
    &instr_rem,
    &instr_divu,
    &instr_remu,
    &instr_csrrw,
    &instr_csrrs,
    &instr_csrrc,
    &instr_csrrwi,
    &instr_csrrsi,
    &instr_csrrci,
    &instr_sb,
    &instr_sh,
    &instr_sw,
    &instr_lw,
    &instr_lh,
    &instr_lhu,
    &instr_lb,
    &instr_lbu,
    &instr_beq,
    &instr_bne,
    &instr_blt,
    &instr_bge,
    &instr_bltu,
    &instr_bgeu,
    &instr_mret,
    &instr_ecall,
    &instr__def,
    &instr_jal,
    &instr_jalr
}};

extern const MAP_Explorer::InstructionDictionary CV32E40P_DSE_instrDict{CV32E40P_DSE_instructions.data(), CV32E40P_DSE_instructions.size()};

} // namespace CV32E40P_DSE