/*
* Copyright 2025 Chair of EDA, Technical University of Munich
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

#include "CV32E40PXCFU0_Printer.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *CV32E40PXCFU0_InstrPrinterSet = new InstructionPrinterSet("CV32E40PXCFU0_InstrPrinterSet");

static InstructionPrinter *instrPrinter_add = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "add",
  0,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sub = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sub",
  1,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xor = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "xor",
  2,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_or = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "or",
  3,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_and = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "and",
  4,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slt = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "slt",
  5,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sltu",
  6,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sll = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sll",
  7,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srl = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "srl",
  8,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sra = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sra",
  9,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_addi = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "addi",
  10,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xori = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "xori",
  11,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_ori = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "ori",
  12,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_andi = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "andi",
  13,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slti = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "slti",
  14,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltiu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sltiu",
  15,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slli = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "slli",
  16,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srli = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "srli",
  17,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srai = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "srai",
  18,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_auipc = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "auipc",
  19,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lui = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lui",
  20,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mul = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "mul",
  21,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulh = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "mulh",
  22,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "mulhu",
  23,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhsu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "mulhsu",
  24,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_div = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "div",
  25,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_rem = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "rem",
  26,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_divu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "divu",
  27,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_remu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "remu",
  28,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_push_weights = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_push_weights",
  29,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_push_weights_4b = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_push_weights_4b",
  30,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_set_codebook_2b = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_set_codebook_2b",
  31,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_set_codebook_4b = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_set_codebook_4b",
  32,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_set_codebook_16b_lo = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_set_codebook_16b_lo",
  33,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_set_codebook_16b_hi = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_set_codebook_16b_hi",
  34,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_alu_mac = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_alu_mac",
  35,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cfu0_alu_rst = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "cfu0_alu_rst",
  36,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrw = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrw",
  37,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrs = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrs",
  38,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrc = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrc",
  39,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrwi = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrwi",
  40,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrsi = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrsi",
  41,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrci = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "csrrci",
  42,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sb = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sb",
  43,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sh = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sh",
  44,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sw = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "sw",
  45,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lw = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lw",
  46,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lh = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lh",
  47,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lhu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lhu",
  48,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lb = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lb",
  49,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lbu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "lbu",
  50,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_beq = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "beq",
  51,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bne = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "bne",
  52,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_blt = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "blt",
  53,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bge = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "bge",
  54,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bltu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "bltu",
  55,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bgeu = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "bgeu",
  56,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "_def",
  57,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "jal",
  58,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  CV32E40PXCFU0_InstrPrinterSet,
  "jalr",
  59,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CV32E40PXCFU0_Printer* printer = static_cast<CV32E40PXCFU0_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    // ret_strs << std::endl;
    return ret_strs.str();
  }
);
