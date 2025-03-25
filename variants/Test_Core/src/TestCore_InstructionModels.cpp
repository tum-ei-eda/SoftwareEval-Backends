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

/// Test core based on CVA6 for configurable memory model (hand written)
/// TODO: remove me

#include <algorithm>
#include <cstdint>

#include "TestCore_PerformanceModel.h"

// -- Support Macros

#define PE_TIMEFUNC_CALL [](PerformanceModel* perfModel_)
#define PE_TIMEFUNC_INIT TestCore_PerformanceModel* perfModel = static_cast<TestCore_PerformanceModel*>(perfModel_);

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

inline void
initInstructionSet(InstructionModelSet* instrSet)
{
    static InstructionModel instrModel_add(
                instrSet,
                "add",
                0,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_sub(
                instrSet,
                "sub",
                1,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_xor(
                instrSet,
                "xor",
                2,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_or(
                instrSet,
                "or",
                3,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_and(
                instrSet,
                "and",
                4,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_slt(
                instrSet,
                "slt",
                5,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_sltu(
                instrSet,
                "sltu",
                6,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_sll(
                instrSet,
                "sll",
                7,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_srl(
                instrSet,
                "srl",
                8,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_sra(
                instrSet,
                "sra",
                9,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_addi(
                instrSet,
                "addi",
                10,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_xori(
                instrSet,
                "xori",
                11,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_ori(
                instrSet,
                "ori",
                12,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_andi(
                instrSet,
                "andi",
                13,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_slti(
                instrSet,
                "slti",
                14,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_sltiu(
                instrSet,
                "sltiu",
                15,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_slli(
                instrSet,
                "slli",
                16,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_srli(
                instrSet,
                "srli",
                17,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_srai(
                instrSet,
                "srai",
                18,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_auipc(
                instrSet,
                "auipc",
                19,
                PE_TIMEFUNC_ARITH_0
                );

    static InstructionModel instrModel_lui(
                instrSet,
                "lui",
                20,
                PE_TIMEFUNC_ARITH_0
                );

    static InstructionModel instrModel_mul(
                instrSet,
                "mul",
                21,
                PE_TIMEFUNC_MUL
                );

    static InstructionModel instrModel_mulh(
                instrSet,
                "mulh",
                22,
                PE_TIMEFUNC_MUL
                );

    static InstructionModel instrModel_mulhu(
                instrSet,
                "mulhu",
                23,
                PE_TIMEFUNC_MUL
                );

    static InstructionModel instrModel_mulhsu(
                instrSet,
                "mulhsu",
                24,
                PE_TIMEFUNC_MUL
                );

    static InstructionModel instrModel_div(
                instrSet,
                "div",
                25,
                PE_TIMEFUNC_DIV
                );

    static InstructionModel instrModel_divu(
                instrSet,
                "divu",
                26,
                PE_TIMEFUNC_DIVU
                );

    static InstructionModel instrModel_rem(
                instrSet,
                "rem",
                27,
                PE_TIMEFUNC_DIV
                );

    static InstructionModel instrModel_remu(
                instrSet,
                "remu",
                28,
                PE_TIMEFUNC_DIVU
                );

    static InstructionModel instrModel_csrrw(
                instrSet,
                "csrrw",
                29,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_csrrs(
                instrSet,
                "csrrs",
                30,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_csrrc(
                instrSet,
                "csrrc",
                31,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_csrrwi(
                instrSet,
                "csrrwi",
                32,
                PE_TIMEFUNC_ARITH_0
                );

    static InstructionModel instrModel_csrrsi(
                instrSet,
                "csrrsi",
                33,
                PE_TIMEFUNC_ARITH_0
                );

    static InstructionModel instrModel_csrrci(
                instrSet,
                "csrrci",
                34,
                PE_TIMEFUNC_ARITH_0
                );

    static InstructionModel instrModel_sb(
                instrSet,
                "sb",
                35,
                PE_TIMEFUNC_STORE
                );

    static InstructionModel instrModel_sh(
                instrSet,
                "sh",
                36,
                PE_TIMEFUNC_STORE
                );

    static InstructionModel instrModel_sw(
                instrSet,
                "sw",
                37,
                PE_TIMEFUNC_STORE
                );

    static InstructionModel instrModel_lw(
                instrSet,
                "lw",
                38,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_lh(
                instrSet,
                "lh",
                39,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_lhu(
                instrSet,
                "lhu",
                40,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_lb(
                instrSet,
                "lb",
                41,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_lbu(
                instrSet,
                "lbu",
                42,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_beq(
                instrSet,
                "beq",
                43,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel_bne(
                instrSet,
                "bne",
                44,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel_blt(
                instrSet,
                "blt",
                45,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel_bge(
                instrSet,
                "bge",
                46,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel_bltu(
                instrSet,
                "bltu",
                47,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel_bgeu(
                instrSet,
                "bgeu",
                48,
                PE_TIMEFUNC_BRANCH
                );

    static InstructionModel instrModel__def(
                instrSet,
                "_def",
                49,
                PE_TIMEFUNC_DEF
                );

    static InstructionModel instrModel_jal(
                instrSet,
                "jal",
                50,
                PE_TIMEFUNC_JUMP
                );

    static InstructionModel instrModel_jalr(
                instrSet,
                "jalr",
                51,
                PE_TIMEFUNC_JUMPR
                );

    // TODO / NOTE: Manually added instructions

    static InstructionModel instrModel_ld(
                instrSet,
                "ld",
                52,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_lwu(
                instrSet,
                "lwu",
                53,
                PE_TIMEFUNC_LOAD
                );

    static InstructionModel instrModel_sd(
                instrSet,
                "sd",
                54,
                PE_TIMEFUNC_STORE
                );

    static InstructionModel instrModel_addiw(
                instrSet,
                "addiw",
                55,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_subw(
                instrSet,
                "subw",
                56,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_addw(
                instrSet,
                "addw",
                57,
                PE_TIMEFUNC_ARITH_RS1_RS2
                );

    static InstructionModel instrModel_slliw(
                instrSet,
                "slliw",
                58,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_sraiw(
                instrSet,
                "sraiw",
                59,
                PE_TIMEFUNC_ARITH_RS1
                );

    static InstructionModel instrModel_divw(
                instrSet,
                "divw",
                60,
                PE_TIMEFUNC_DIV
                );

    static InstructionModel instrModel_mulw(
                instrSet,
                "mulw",
                61,
                PE_TIMEFUNC_MUL
                );

    static InstructionModel instrModel_divuw(
                instrSet,
                "divuw",
                62,
                PE_TIMEFUNC_DIVU
                );

    static InstructionModel instrModel_remw(
                instrSet,
                "remw",
                63,
                PE_TIMEFUNC_DIV
                );

    static InstructionModel instrModel_remuw(
                instrSet,
                "remuw",
                64,
                PE_TIMEFUNC_DIVU
                );

    static InstructionModel instrModel_srliw(
                instrSet,
                "srliw",
                65,
                PE_TIMEFUNC_ARITH_RS1
                );
}
