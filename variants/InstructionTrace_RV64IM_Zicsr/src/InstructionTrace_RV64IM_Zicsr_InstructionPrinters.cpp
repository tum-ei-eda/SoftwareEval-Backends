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

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#include "Printer.h"
#include "Channel.h"

#include "InstructionTrace_RV64IM_Zicsr_Printer.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *InstructionTrace_RV64IM_Zicsr_InstrPrinterSet = new InstructionPrinterSet("InstructionTrace_RV64IM_Zicsr_InstrPrinterSet");

static InstructionPrinter *instrPrinter_Reg_Reg_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "Reg_Reg_Type",
  0,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Reg_Imm_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "Reg_Imm_Type",
  1,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Load_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "Load_Type",
  2,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_mem_addr() << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Store_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "Store_Type",
  3,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_imm() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_mem_addr() << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "CSR_Type",
  4,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_code() << " , ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << printer->get_assembly() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd_data() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_csr() << " , ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_csr_reg() << " , ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_Imm_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "CSR_Imm_Type",
  5,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Branch_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "Branch_Type",
  6,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_RegLoad_U_Type = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "RegLoad_U_Type",
  7,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__DEF = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "_DEF",
  8,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_JAL = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "JAL",
  9,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_JALR = new InstructionPrinter(
  InstructionTrace_RV64IM_Zicsr_InstrPrinterSet,
  "JALR",
  10,
  [](Printer* printer_){
    std::stringstream ret_strs;
    InstructionTrace_RV64IM_Zicsr_Printer* printer = static_cast<InstructionTrace_RV64IM_Zicsr_Printer*>(printer_);
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
    ret_strs << std::setfill('-') << std::setw(18) << "" << " , ";
    ret_strs << std::endl;
    return ret_strs.str();
  }
);
