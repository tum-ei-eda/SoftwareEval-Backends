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

#include "Vicuna_zvl512b_Printer.h"

#include "Printer.h"

#include "Vicuna_zvl512b_Channel.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* Vicuna_zvl512b_InstrPrinterSet;

Vicuna_zvl512b_Printer::Vicuna_zvl512b_Printer(): Printer("Vicuna_zvl512b_Printer", Vicuna_zvl512b_InstrPrinterSet)
{}

void Vicuna_zvl512b_Printer::connectChannel(Channel* ch_)
{
  Vicuna_zvl512b_Channel* channel = static_cast<Vicuna_zvl512b_Channel*>(ch_);
  
  rs1_ptr = channel->rs1;
  rs2_ptr = channel->rs2;
  rd_ptr = channel->rd;
  vs1_ptr = channel->vs1;
  vs2_ptr = channel->vs2;
  vs3_ptr = channel->vs3;
  vd_ptr = channel->vd;
  vm_ptr = channel->vm;
  vtype_ptr = channel->vtype;
  lsWidth_ptr = channel->lsWidth;
  nf_ptr = channel->nf;
  pc_ptr = channel->pc;
  brTarget_ptr = channel->brTarget;
  vl_ptr = channel->vl;
  rs2_data_ptr = channel->rs2_data;
}

std::string Vicuna_zvl512b_Printer::getPrintHeader(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs1" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rd" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vs1" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vs2" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vs3" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vd" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vm" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vtype" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "lsWidth" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "nf" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "pc" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "brTarget" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "vl" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2_data" << " | ";

  return caption_strs.str();
}