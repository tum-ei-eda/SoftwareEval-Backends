/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
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

#include "AssemblyTrace_Printer.h"

#include "Printer.h"

#include "AssemblyTrace_Channel.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* AssemblyTrace_InstrPrinterSet;

AssemblyTrace_Printer::AssemblyTrace_Printer(): Printer("AssemblyTrace_Printer", AssemblyTrace_InstrPrinterSet)
{}

void AssemblyTrace_Printer::connectChannel(Channel* ch_)
{
  AssemblyTrace_Channel* channel = static_cast<AssemblyTrace_Channel*>(ch_);

  pc_ptr = channel->pc;
  assembly_ptr = channel->assembly;
  
}

std::string AssemblyTrace_Printer::getPrintHeader(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "pc" << " ; ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "assembly" << " ; ";
  caption_strs << std::endl;
  
  return caption_strs.str();
}
