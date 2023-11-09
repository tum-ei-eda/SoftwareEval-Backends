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

#include "CV32E40P_Printer.h"

#include "Printer.h"

#include "CV32E40P_Channel.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* CV32E40P_InstrPrinterSet;

CV32E40P_Printer::CV32E40P_Printer(): Printer("CV32E40P_Printer", CV32E40P_InstrPrinterSet)
{}

void CV32E40P_Printer::connectChannel(Channel* ch_)
{
  CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(ch_);
  
  rs1_ptr = channel->rs1;
  rs2_ptr = channel->rs2;
  rd_ptr = channel->rd;
  pc_ptr = channel->pc;
  brTarget_ptr = channel->brTarget;
  rs2_data_ptr = channel->rs2_data;
}

std::string CV32E40P_Printer::getPrintHeader(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs1" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rd" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "pc" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "brTarget" << " | ";
  caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2_data" << " | ";
  caption_strs << std::endl;
  
  return caption_strs.str();
}
