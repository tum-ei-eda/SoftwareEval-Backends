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

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#include "InstructionTrace_RV64_Printer.h"

#include "Printer.h"

#include "InstructionTrace_RV64_Channel.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* InstructionTrace_RV64_InstrPrinterSet;

InstructionTrace_RV64_Printer::InstructionTrace_RV64_Printer(): Printer("InstructionTrace_RV64_Printer", InstructionTrace_RV64_InstrPrinterSet)
{}

void InstructionTrace_RV64_Printer::connectChannel(Channel* ch_)
{
  InstructionTrace_RV64_Channel* channel = static_cast<InstructionTrace_RV64_Channel*>(ch_);
  
  pc_ptr = channel->pc;
  code_ptr = channel->code;
  assembly_ptr = channel->assembly;
  imm_ptr = channel->imm;
  rs1_data_ptr = channel->rs1_data;
  rs2_data_ptr = channel->rs2_data;
  rd_data_ptr = channel->rd_data;
  jump_pc_ptr = channel->jump_pc;
  csr_ptr = channel->csr;
  mem_addr_ptr = channel->mem_addr;
}

std::string InstructionTrace_RV64_Printer::getPrintHeader(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "pc" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "code" << " , ";
  caption_strs << std::setfill(' ') << std::setw(50) << std::left << "assembly" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "imm" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs1_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rd_data" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "jump_pc" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "csr" << " , ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "mem_addr" << " , ";
  caption_strs << std::endl;
  
  return caption_strs.str();
}
