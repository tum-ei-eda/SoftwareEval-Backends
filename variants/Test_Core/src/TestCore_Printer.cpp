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

#include "TestCore_Printer.h"

#include "TestCore_Channel.h"

#include "CVA6_Printer.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* CVA6_InstrPrinterSet; // use printer of CVA6

TestCore_Printer::TestCore_Printer() : 
    Printer("TestCores_Printer", CVA6_InstrPrinterSet)
{}

void 
TestCore_Printer::connectChannel(Channel* ch_)
{
  auto* channel = static_cast<TestCore_Channel*>(ch_);

  rs1_ptr = channel->rs1;
  rs2_ptr = channel->rs2;
  rd_ptr = channel->rd;
  pc_ptr = channel->pc;
  brTarget_ptr = channel->brTarget;
  memAddr_ptr = channel->memAddr;
  rs1_data_ptr = channel->rs1_data;
  rs2_data_ptr = channel->rs2_data;
}

std::string
TestCore_Printer::getPrintHeader(void)
{
    std::stringstream caption_strs;
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs1" << " | ";
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs2" << " | ";
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rd" << " | ";
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "pc" << " | ";
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "brTarget" << " | ";
    caption_strs << std::setfill(' ') << std::setw(10) << std::left << "memAddr" << " | ";
    caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs1_data" << " | ";
    caption_strs << std::setfill(' ') << std::setw(18) << std::left << "rs2_data" << " | ";
    caption_strs << std::endl;
    
    return caption_strs.str();
}
