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

#ifndef SWEVAL_BACKENDS_CVA6_PRINTER_H
#define SWEVAL_BACKENDS_CVA6_PRINTER_H

#include "Printer.h"

#include "Channel.h"

#include <string>

class CVA6_Printer : public Printer
{
public:

  CVA6_Printer();

  virtual void connectChannel(Channel*);
  
  virtual std::string getPrintHeader(void);

  int get_rs1(void){ return rs1_ptr[instrIndex]; };
  int get_rs2(void){ return rs2_ptr[instrIndex]; };
  int get_rd(void){ return rd_ptr[instrIndex]; };
  int get_pc(void){ return pc_ptr[instrIndex]; };
  int get_brTarget(void){ return brTarget_ptr[instrIndex]; };
  int get_memAddr(void){ return memAddr_ptr[instrIndex]; };

private:
  int* rs1_ptr;
  int* rs2_ptr;
  int* rd_ptr;
  int* pc_ptr;
  int* brTarget_ptr;
  int* memAddr_ptr;
};

#endif // SWEVAL_BACKENDS_CVA6_PRINTER_H
