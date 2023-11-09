/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

// TODO: Hand-written as a proof of concept

#include <algorithm>
#include <cstdint>

#include "PerformanceModel.h"

#include "CVA6_PerformanceModel.h"

// -- Support Macros

#define PE_TIMEFUNC_CALL [](PerformanceModel* perfModel_)
#define PE_TIMEFUNC_INIT CVA6_Model* perfModel = static_cast<CVA6_Model*>(perfModel_);

// -- PcGen-Stage

#define PE_TIMEFUNC_PCGEN_STAGE uint64_t n_pcgen_start, n_pcgen_1, n_pcgen_2, n_pcgen_3, n_pcgen_leave; \
  n_pcgen_start = perfModel->PcGenStage.get_leaveStage();\
  n_pcgen_1 = n_pcgen_start + 1;\
  n_pcgen_2 = std::max({n_pcgen_start, perfModel->brPredModel.getPc_mp()});\
  n_pcgen_3 = std::max({n_pcgen_start, perfModel->iCacheModel.getIc()});\
  n_pcgen_leave = std::max({n_pcgen_1, n_pcgen_2, n_pcgen_3, perfModel->IfStage.get_backPressure()}); \
  perfModel->PcGenStage.set_leaveStage(n_pcgen_leave);

// -- If-Stage

#define PE_TIMEFUNC_IF_STAGE_ENTER uint64_t n_if_1, n_if_2, n_if_3, n_if_4, n_if_5, n_if_6, n_if_leave;\
  n_if_1 = n_pcgen_leave + 1;\
  n_if_2 = std::max({n_pcgen_leave, perfModel->brPredModel.getPc_pt()});\
  n_if_3 = std::max({n_if_1, n_if_2, perfModel->IfStage.get_leaveICache()});\
  perfModel->IfStage.set_leaveICacheIn(n_if_3);\
  n_if_4 = n_if_3 + perfModel->iCacheModel.getDelay();\
  perfModel->iCacheModel.setIc(n_if_4);\
  perfModel->IfStage.set_leaveICache(n_if_4);\
  n_if_5 = std::max({n_if_4, perfModel->IfStage.get_leaveStage()});\
  n_if_6 = n_if_5 + 1;

#define PE_TIMEFUNC_IF_STAGE_LEAVE n_if_leave = std::max({n_if_6, perfModel->IqStage.get_backPressure()});\
  perfModel->IfStage.set_leaveStage(n_if_leave);

#define PE_TIMEFUNC_IF_STAGE PE_TIMEFUNC_IF_STAGE_ENTER\
  PE_TIMEFUNC_IF_STAGE_LEAVE

#define PE_TIMEFUNC_IF_STAGE_BRANCH PE_TIMEFUNC_IF_STAGE_ENTER\
  perfModel->brPredModel.setPc_p(n_if_6);\
  PE_TIMEFUNC_IF_STAGE_LEAVE

#define PE_TIMEFUNC_IF_STAGE_JUMP PE_TIMEFUNC_IF_STAGE_ENTER\
  perfModel->brPredModel.setPc_p_j(n_if_6);\
  PE_TIMEFUNC_IF_STAGE_LEAVE

#define PE_TIMEFUNC_IF_STAGE_JUMPR PE_TIMEFUNC_IF_STAGE_ENTER\
  perfModel->brPredModel.setPc_p_jr(n_if_6);\
  PE_TIMEFUNC_IF_STAGE_LEAVE

// -- Iq-Stage

#define PE_TIMEFUNC_IQ_STAGE uint64_t n_iq_1, n_iq_leave;\
  n_iq_1 = n_if_leave + 1;\
  perfModel->IqStage.set_leaveInsert(n_iq_1);\
  n_iq_leave = std::max({n_iq_1, perfModel->IdStage.get_backPressure()});\
  perfModel->IqStage.set_leaveStage(n_iq_leave);

// -- Id-Stage

#define PE_TIMEFUNC_ID_STAGE uint64_t n_id_1, n_id_leave;\
  n_id_1 = n_iq_leave + 1;\
  n_id_leave = std::max({n_id_1, perfModel->IsStage.get_backPressure()});\
  perfModel->IdStage.set_leaveStage(n_id_leave);

// -- Is-Stage

#define PE_TIMEFUNC_IS_STAGE_DELAY n_is_1 = n_id_leave + 0;
#define PE_TIMEFUNC_IS_STAGE_LEAVE perfModel->IsStage.set_leaveStage(n_is_leave);

#define PE_TIMEFUNC_IS_STAGE_BP_ALU n_is_leave = std::max({n_is_done, perfModel->ExStage.get_backPressure_arith()});

#define PE_TIMEFUNC_IS_STAGE_DEF uint64_t n_is_1, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_done = n_is_1;\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_ALU uint64_t n_is_1, n_is_2, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2});\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_ALU_RS1 uint64_t n_is_1, n_is_2, n_is_3, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3});\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_ALU_RS2 uint64_t n_is_1, n_is_2, n_is_3, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXb();\
  n_is_3 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3});\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_ALU_RS1_RS2 uint64_t n_is_1, n_is_2, n_is_3, n_is_4, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->regModel.getXb();\
  n_is_4 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3, n_is_4});\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_BRANCH uint64_t n_is_1, n_is_2, n_is_3, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->regModel.getXb();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3});\
  PE_TIMEFUNC_IS_STAGE_BP_ALU\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_JUMP PE_TIMEFUNC_IS_STAGE_ALU

#define PE_TIMEFUNC_IS_STAGE_JUMPR PE_TIMEFUNC_IS_STAGE_ALU_RS1

#define PE_TIMEFUNC_IS_STAGE_MUL uint64_t n_is_1, n_is_2, n_is_3, n_is_4, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->regModel.getXb();\
  n_is_4 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3, n_is_4});\
  n_is_leave = std::max({n_is_done, perfModel->ExStage.get_backPressure_mul()});\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_DIV uint64_t n_is_1, n_is_2, n_is_3, n_is_4, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->regModel.getXb();\
  n_is_4 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3, n_is_4});\
  n_is_leave = std::max({n_is_done, perfModel->ExStage.get_backPressure_div()});\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_LOAD uint64_t n_is_1, n_is_2, n_is_3, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->cbModel.getCb_Is();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3});\
  n_is_leave = std::max({n_is_done, perfModel->ExStage.get_backPressure_load()});\
  PE_TIMEFUNC_IS_STAGE_LEAVE

#define PE_TIMEFUNC_IS_STAGE_STORE uint64_t n_is_1, n_is_2, n_is_3, n_is_done, n_is_leave;\
  PE_TIMEFUNC_IS_STAGE_DELAY\
  n_is_2 = perfModel->regModel.getXa();\
  n_is_3 = perfModel->regModel.getXb();\
  n_is_done = std::max({n_is_1, n_is_2, n_is_3});\
  n_is_leave = std::max({n_is_done, perfModel->ExStage.get_backPressure_store()});\
  PE_TIMEFUNC_IS_STAGE_LEAVE

// -- Ex-Stage

#define PE_TIMEFUNC_EX_STAGE_LEAVE n_ex_leave = std::max({n_ex_done, perfModel->ExStage.get_transGuard(), perfModel->ComStage.get_backPressure()});\
  perfModel->ExStage.set_leaveStage(n_ex_leave);

#define PE_TIMEFUNC_EX_STAGE_DEF uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave +1;\
  perfModel->ExStage.set_leaveAlu(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_ARITH uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave +1;\
  perfModel->ExStage.set_leaveAlu(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_BRANCH uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave +1;\
  perfModel->ExStage.set_leaveAlu(n_ex_done);\
  perfModel->brPredModel.setPc_c(n_ex_done); \
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_JUMP PE_TIMEFUNC_EX_STAGE_ARITH

#define PE_TIMEFUNC_EX_STAGE_JUMPR uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave + 1;\
  perfModel->ExStage.set_leaveAlu(n_ex_done);\
  perfModel->brPredModel.setPc_c(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

//#define PE_TIMEFUNC_EX_STAGE_MUL uint64_t n_ex_done, n_ex_leave;\
//  n_ex_done = n_is_leave +2;\
//  perfModel->ExStage.set_leaveMul(n_ex_done);\
//  perfModel->regModel.setXd(n_ex_done);\
//  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_MUL uint64_t n_ex_1, n_ex_done, n_ex_leave;\
  n_ex_1 = n_is_leave +1;\
  perfModel->ExStage.set_leaveMulI(n_ex_1);\
  n_ex_done = n_is_leave +1;\
  perfModel->ExStage.set_leaveMulO(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_DIV uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave + perfModel->divModel.getDelay();\
  perfModel->ExStage.set_leaveDiv(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_DIVU uint64_t n_ex_done, n_ex_leave;\
  n_ex_done = n_is_leave + perfModel->divUModel.getDelay();\
  perfModel->ExStage.set_leaveDiv(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_LOAD uint64_t n_ex_1, n_ex_2, n_ex_3, n_ex_4, n_ex_done, n_ex_leave;\
  n_ex_1 = n_is_leave +1;\
  n_ex_2 = std::max({n_ex_1, perfModel->ExStage.get_leaveDCache()});\
  perfModel->ExStage.set_leaveLCtrl(n_ex_2);\
  n_ex_3 = n_ex_2 + perfModel->dCacheModel.getDelay();\
  n_ex_4 = std::max({n_ex_3, perfModel->ExStage.get_leaveLUnit()});\
  perfModel->ExStage.set_leaveDCache(n_ex_4);\
  n_ex_done = n_ex_4 + 1;\
  perfModel->ExStage.set_leaveLUnit(n_ex_done);\
  perfModel->regModel.setXd(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

#define PE_TIMEFUNC_EX_STAGE_STORE uint64_t n_ex_1, n_ex_2, n_ex_done, n_ex_leave;\
  n_ex_1 = n_is_leave +1;\
  n_ex_2 = std::max({n_ex_1, perfModel->ExStage.get_leaveSUnit()});\
  perfModel->ExStage.set_leaveSCtrl(n_ex_2);\
  n_ex_done = n_ex_2 + 1;\
  perfModel->ExStage.set_leaveSUnit(n_ex_done);\
  PE_TIMEFUNC_EX_STAGE_LEAVE

// -- Com-Stage

#define PE_TIMEFUNC_COM_STAGE uint64_t n_com_leave;\
  n_com_leave = n_ex_leave + 1;\
  perfModel->ComStage.set_leaveStage(n_com_leave);

#define PE_TIMEFUNC_COM_STAGE_CB PE_TIMEFUNC_COM_STAGE\
  perfModel->cbModel.setCb_Com(n_com_leave);

// -- TimeFunction definitions

#define PE_TIMEFUNC_DEF PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_DEF\
  PE_TIMEFUNC_EX_STAGE_DEF\
  PE_TIMEFUNC_COM_STAGE\
}

#define PE_TIMEFUNC_ARITH_0 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_ALU\
  PE_TIMEFUNC_EX_STAGE_ARITH\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_ARITH_RS1 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_ALU_RS1\
  PE_TIMEFUNC_EX_STAGE_ARITH\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_ARITH_RS2 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_ALU_RS2\
  PE_TIMEFUNC_EX_STAGE_ARITH\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_ARITH_RS1_RS2 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_ALU_RS1_RS2\
  PE_TIMEFUNC_EX_STAGE_ARITH\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_BRANCH PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE_BRANCH\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_BRANCH\
  PE_TIMEFUNC_EX_STAGE_BRANCH\
  PE_TIMEFUNC_COM_STAGE\
}

#define PE_TIMEFUNC_JUMP PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE_JUMP\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_JUMP\
  PE_TIMEFUNC_EX_STAGE_JUMP\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_JUMPR PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE_JUMPR\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_JUMPR\
  PE_TIMEFUNC_EX_STAGE_JUMPR\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_MUL PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_MUL\
  PE_TIMEFUNC_EX_STAGE_MUL\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_DIV PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_DIV\
  PE_TIMEFUNC_EX_STAGE_DIV\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_DIVU PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_DIV\
  PE_TIMEFUNC_EX_STAGE_DIVU\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_LOAD PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_LOAD\
  PE_TIMEFUNC_EX_STAGE_LOAD\
  PE_TIMEFUNC_COM_STAGE_CB\
}

#define PE_TIMEFUNC_STORE PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN_STAGE\
  PE_TIMEFUNC_IF_STAGE\
  PE_TIMEFUNC_IQ_STAGE\
  PE_TIMEFUNC_ID_STAGE\
  PE_TIMEFUNC_IS_STAGE_STORE\
  PE_TIMEFUNC_EX_STAGE_STORE\
  PE_TIMEFUNC_COM_STAGE\
}

InstructionModelSet* CVA6_InstrModelSet = new InstructionModelSet("CVA6_InstrModelSet");

static InstructionModel *instrModel_add = new InstructionModel(
  CVA6_InstrModelSet,
  "add",
  0,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_sub = new InstructionModel(
  CVA6_InstrModelSet,
  "sub",
  1,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_xor = new InstructionModel(
  CVA6_InstrModelSet,
  "xor",
  2,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_or = new InstructionModel(
  CVA6_InstrModelSet,
  "or",
  3,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_and = new InstructionModel(
  CVA6_InstrModelSet,
  "and",
  4,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_slt = new InstructionModel(
  CVA6_InstrModelSet,
  "slt",
  5,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_sltu = new InstructionModel(
  CVA6_InstrModelSet,
  "sltu",
  6,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_sll = new InstructionModel(
  CVA6_InstrModelSet,
  "sll",
  7,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_srl = new InstructionModel(
  CVA6_InstrModelSet,
  "srl",
  8,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_sra = new InstructionModel(
  CVA6_InstrModelSet,
  "sra",
  9,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_addi = new InstructionModel(
  CVA6_InstrModelSet,
  "addi",
  10,
  PE_TIMEFUNC_ARITH_RS1
); 

static InstructionModel *instrModel_xori = new InstructionModel(
  CVA6_InstrModelSet,
  "xori",
  11,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_ori = new InstructionModel(
  CVA6_InstrModelSet,
  "ori",
  12,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_andi = new InstructionModel(
  CVA6_InstrModelSet,
  "andi",
  13,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_slti = new InstructionModel(
  CVA6_InstrModelSet,
  "slti",
  14,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_sltiu = new InstructionModel(
  CVA6_InstrModelSet,
  "sltiu",
  15,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_slli = new InstructionModel(
  CVA6_InstrModelSet,
  "slli",
  16,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_srli = new InstructionModel(
  CVA6_InstrModelSet,
  "srli",
  17,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_srai = new InstructionModel(
  CVA6_InstrModelSet,
  "srai",
  18,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_auipc = new InstructionModel(
  CVA6_InstrModelSet,
  "auipc",
  19,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_lui = new InstructionModel(
  CVA6_InstrModelSet,
  "lui",
  20,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_mul = new InstructionModel(
  CVA6_InstrModelSet,
  "mul",
  21,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulh = new InstructionModel(
  CVA6_InstrModelSet,
  "mulh",
  22,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulhu = new InstructionModel(
  CVA6_InstrModelSet,
  "mulhu",
  23,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulhsu = new InstructionModel(
  CVA6_InstrModelSet,
  "mulhsu",
  24,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_div = new InstructionModel(
  CVA6_InstrModelSet,
  "div",
  25,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_divu = new InstructionModel(
  CVA6_InstrModelSet,
  "divu",
  26,
  PE_TIMEFUNC_DIVU
);

static InstructionModel *instrModel_rem = new InstructionModel(
  CVA6_InstrModelSet,
  "rem",
  27,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_remu = new InstructionModel(
  CVA6_InstrModelSet,
  "remu",
  28,
  PE_TIMEFUNC_DIVU
);

static InstructionModel *instrModel_csrrw = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrw",
  29,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_csrrs = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrs",
  30,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_csrrc = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrc",
  31,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_csrrwi = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrwi",
  32,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_csrrsi = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrsi",
  33,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_csrrci = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrci",
  34,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_sb = new InstructionModel(
  CVA6_InstrModelSet,
  "sb",
  35,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_sh = new InstructionModel(
  CVA6_InstrModelSet,
  "sh",
  36,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_sw = new InstructionModel(
  CVA6_InstrModelSet,
  "sw",
  37,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_lw = new InstructionModel(
  CVA6_InstrModelSet,
  "lw",
  38,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lh = new InstructionModel(
  CVA6_InstrModelSet,
  "lh",
  39,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lhu = new InstructionModel(
  CVA6_InstrModelSet,
  "lhu",
  40,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lb = new InstructionModel(
  CVA6_InstrModelSet,
  "lb",
  41,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lbu = new InstructionModel(
  CVA6_InstrModelSet,
  "lbu",
  42,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_beq = new InstructionModel(
  CVA6_InstrModelSet,
  "beq",
  43,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bne = new InstructionModel(
  CVA6_InstrModelSet,
  "bne",
  44,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_blt = new InstructionModel(
  CVA6_InstrModelSet,
  "blt",
  45,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bge = new InstructionModel(
  CVA6_InstrModelSet,
  "bge",
  46,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bltu = new InstructionModel(
  CVA6_InstrModelSet,
  "bltu",
  47,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bgeu = new InstructionModel(
  CVA6_InstrModelSet,
  "bgeu",
  48,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel__def = new InstructionModel(
  CVA6_InstrModelSet,
  "_def",
  49,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_jal = new InstructionModel(
  CVA6_InstrModelSet,
  "jal",
  50,
  PE_TIMEFUNC_JUMP
);

static InstructionModel *instrModel_jalr = new InstructionModel(
  CVA6_InstrModelSet,
  "jalr",
  51,
  PE_TIMEFUNC_JUMPR
);

// TODO / NOTE: Manually added instructions

static InstructionModel *instrModel_ld = new InstructionModel(
  CVA6_InstrModelSet,
  "ld",
  52,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lwu = new InstructionModel(
  CVA6_InstrModelSet,
  "lwu",
  53,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_sd = new InstructionModel(
  CVA6_InstrModelSet,
  "sd",
  54,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_addiw = new InstructionModel(
  CVA6_InstrModelSet,
  "addiw",
  55,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_subw = new InstructionModel(
  CVA6_InstrModelSet,
  "subw",
  56,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_addw = new InstructionModel(
  CVA6_InstrModelSet,
  "addw",
  57,
  PE_TIMEFUNC_ARITH_RS1_RS2
);

static InstructionModel *instrModel_slliw = new InstructionModel(
  CVA6_InstrModelSet,
  "slliw",
  58,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_sraiw = new InstructionModel(
  CVA6_InstrModelSet,
  "sraiw",
  59,
  PE_TIMEFUNC_ARITH_RS1
);

static InstructionModel *instrModel_divw = new InstructionModel(
  CVA6_InstrModelSet,
  "divw",
  60,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_mulw = new InstructionModel(
  CVA6_InstrModelSet,
  "mulw",
  61,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_divuw = new InstructionModel(
  CVA6_InstrModelSet,
  "divuw",
  62,
  PE_TIMEFUNC_DIVU
);

static InstructionModel *instrModel_remw = new InstructionModel(
  CVA6_InstrModelSet,
  "remw",
  63,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_remuw = new InstructionModel(
  CVA6_InstrModelSet,
  "remuw",
  64,
  PE_TIMEFUNC_DIVU
);

static InstructionModel *instrModel_srliw = new InstructionModel(
  CVA6_InstrModelSet,
  "srliw",
  65,
  PE_TIMEFUNC_ARITH_RS1
);
