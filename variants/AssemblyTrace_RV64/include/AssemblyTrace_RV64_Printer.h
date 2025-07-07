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
                   
#ifndef SWEVAL_BACKENDS_ASSEMBLYTRACE_RV64_PRINTER_H
#define SWEVAL_BACKENDS_ASSEMBLYTRACE_RV64_PRINTER_H

#include "Printer.h"

#include "Channel.h"

#include <string>
#include <cstdint>

class AssemblyTrace_RV64_Printer : public Printer
{
public:

  AssemblyTrace_RV64_Printer();

  virtual void connectChannel(Channel*);
  virtual std::string getPrintHeader(void);

  int get_pc(void){ return pc_ptr[instrIndex]; };
  std::string get_assembly(void){ return assembly_ptr[instrIndex]; };

private:

  int* pc_ptr;
  char (*assembly_ptr)[150];
};

#endif // SWEVAL_BACKENDS_ASSEMBLYTRACE_RV64_PRINTER_H