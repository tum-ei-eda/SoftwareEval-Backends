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


#include "InstructionTrace_RV64IMF_Zicsr_Printer.h"

#include "Printer.h"

#include "InstructionTrace_RV64IMF_Zicsr_Channel.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* InstructionTrace_RV64IMF_Zicsr_InstrPrinterSet;

InstructionTrace_RV64IMF_Zicsr_Printer::InstructionTrace_RV64IMF_Zicsr_Printer(): Printer("InstructionTrace_RV64IMF_Zicsr_Printer", InstructionTrace_RV64IMF_Zicsr_InstrPrinterSet)
{}

void InstructionTrace_RV64IMF_Zicsr_Printer::connectChannel(Channel* ch_)
{
  InstructionTrace_RV64IMF_Zicsr_Channel* channel = static_cast<InstructionTrace_RV64IMF_Zicsr_Channel*>(ch_);
  
  pc_ptr = channel->pc;
  code_ptr = channel->code;
  assembly_ptr = channel->assembly;
  imm_ptr = channel->imm;
  rs1_data_ptr = channel->rs1_data;
  rs2_data_ptr = channel->rs2_data;
  rs3_data_ptr = channel->rs3_data;
  rd_data_ptr = channel->rd_data;
  jump_pc_ptr = channel->jump_pc;
  csr_ptr = channel->csr;
  csr_reg_ptr = channel->csr_reg;
  mem_addr_ptr = channel->mem_addr;
}

std::string InstructionTrace_RV64IMF_Zicsr_Printer::getPrintHeader(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "pc" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "code" << " , ";
  caption_strs << std::setfill(' ') << std::setw(75) << std::left << "assembly" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "imm" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs1_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs3_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rd_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "jump_pc" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "csr" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "csr_reg" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "mem_addr" << " , ";
  caption_strs << std::endl;

  return caption_strs.str();
}