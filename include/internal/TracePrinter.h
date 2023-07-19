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

#ifndef SWEVAL_BACKENDS_TRACE_PRINTER_H
#define SWEVAL_BACKENDS_TRACE_PRINTER_H

#include "Channel.h"
#include "Backend.h"
#include "Printer.h"

class TracePrinter: public Backend
{
  
public:
  TracePrinter(Printer* printer_): printer_ptr{printer_} {};
  ~TracePrinter();

  void connectChannel(Channel*);
  void initialize(void);
  void execute(void);
  void finalize(void);

private:
  Printer* printer_ptr;

  // Pointer to channel content
  int* ch_typeId_ptr;
  int* ch_instrCnt_ptr;
  
};

#endif// SWEVAL_BACKENDS_TRACE_PRINTER_H