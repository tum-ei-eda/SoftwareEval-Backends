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

#include "TracePrinter.h"

TracePrinter::~TracePrinter()
{
  delete printer_ptr;
}

void TracePrinter::connectChannel(Channel* channel_)
{
  // Connect own pointers
  ch_typeId_ptr = channel_->typeId;
  ch_instrCnt_ptr = &(channel_->instrCnt);

  // Forward channel to perfModel
  printer_ptr->connectChannel(channel_);
  
}

void TracePrinter::initialize(void)
{
  streamer.setPrintHeader(printer_ptr->getPrintHeader());
  streamer.openStream();
}

void TracePrinter::execute(void)
{
  int instrCnt = *ch_instrCnt_ptr;
  
  printer_ptr->newTraceBlock();
  
  for(int instr_i=0; instr_i < instrCnt; instr_i++)
  {
    streamer.stream(printer_ptr->callInstrPrintFunc(ch_typeId_ptr[instr_i]));
    streamer.stream("\n"); // TODO: Move line break to instruction printer?

    printer_ptr->update();
  }

}

void TracePrinter::finalize(void)
{
  streamer.closeStream();
}
