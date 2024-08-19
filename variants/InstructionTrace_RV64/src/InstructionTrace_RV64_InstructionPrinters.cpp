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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/

#include "Printer.h"
#include "Channel.h"

#include "InstructionTrace_RV64_Printer.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *InstructionTrace_RV64_InstrPrinterSet = new InstructionPrinterSet("InstructionTrace_RV64_InstrPrinterSet");

static InstructionPrinter *instrPrinter_Arith_R_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Arith_R_Type",
  0,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Arith_I_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Arith_I_Type",
  1,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Arith_Imm_R_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Arith_Imm_R_Type",
  2,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Arith_Imm_R_W_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Arith_Imm_R_W_Type",
  3,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Load_I_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Load_I_Type",
  4,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_mem_addr() << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Store_S_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Store_S_Type",
  5,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_mem_addr() << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_I_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "CSR_I_Type",
  6,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_csr() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_Imm_I_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "CSR_Imm_I_Type",
  7,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_csr() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Branch_B_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "Branch_B_Type",
  8,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_jump_pc() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_RegLoad_U_Type = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "RegLoad_U_Type",
  9,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "_def",
  10,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "jal",
  11,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_jump_pc() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  InstructionTrace_RV64_InstrPrinterSet,
  "jalr",
  12,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64_Printer* printer = static_cast<InstructionTrace_RV64_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_jump_pc() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    return ret_strs.str();
  }
);
