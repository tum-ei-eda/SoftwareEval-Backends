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

#include "Printer.h"
#include "Channel.h"

#include "CVA6_Printer.h"
   
#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *CVA6_InstrPrinterSet = new InstructionPrinterSet("CVA6_InstrPrinterSet");

static InstructionPrinter *instrPrinter_add = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "add",
  0,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sub = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sub",
  1,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xor = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "xor",
  2,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_or = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "or",
  3,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_and = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "and",
  4,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slt = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slt",
  5,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sltu",
  6,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sll = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sll",
  7,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srl = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srl",
  8,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sra = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sra",
  9,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_addi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "addi",
  10,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xori = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "xori",
  11,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_ori = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "ori",
  12,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_andi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "andi",
  13,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slti = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slti",
  14,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltiu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sltiu",
  15,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slli = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slli",
  16,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srli = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srli",
  17,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srai = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srai",
  18,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_auipc = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "auipc",
  19,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lui = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lui",
  20,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mul = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mul",
  21,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulh",
  22,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulhu",
  23,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhsu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulhsu",
  24,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_div = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "div",
  25,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_divu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "divu",
  26,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_rem = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "rem",
  27,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_remu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "remu",
  28,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrw",
  29,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrs = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrs",
  30,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrc = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrc",
  31,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrwi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrwi",
  32,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrsi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrsi",
  33,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrci = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrci",
  34,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sb = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sb",
  35,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sh",
  36,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sw",
  37,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lw",
  38,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lh",
  39,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lhu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lhu",
  40,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lb = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lb",
  41,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lbu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lbu",
  42,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_beq = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "beq",
  43,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bne = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bne",
  44,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_blt = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "blt",
  45,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bge = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bge",
  46,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bltu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bltu",
  47,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bgeu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bgeu",
  48,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "_def",
  49,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "jal",
  50,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "jalr",
  51,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_brTarget() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);


// TODO / NOTE: Manually added instructions

static InstructionPrinter *instrPrinter_ld = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "ld",
  52,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_lwu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lwu",
  53,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_sd = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sd",
  54,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_memAddr() << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_addiw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "addiw",
  55,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);    
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_subw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "subw",
  56,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_addw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "addw",
  57,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_slliw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slliw",
  58,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_sraiw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sraiw",
  59,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_divw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "divw",
  60,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_mulw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulw",
  61,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_divuw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "divuw",
  62,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_remw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "remw",
  63,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_remuw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "remuw",
  64,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs2() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs1_data() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(16) << std::right << std::hex << printer->get_rs2_data() << " | ";
    return ret_strs.str();
  }
);

static InstructionPrinter *instrPrinter_srliw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srliw",
  65,
  [](Printer* printer_){
    std::stringstream ret_strs;
    CVA6_Printer* printer = static_cast<CVA6_Printer*>(printer_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rs1() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_rd() << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << printer->get_pc() << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(18) << "" << " | ";
    return ret_strs.str();
  }
);
