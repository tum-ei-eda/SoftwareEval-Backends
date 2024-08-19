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
                   
#ifndef SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_PRINTER_H
#define SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_PRINTER_H

#include "Printer.h"

#include "Channel.h"

#include <string>
#include <cstdint>

class InstructionTrace_RV64_Printer : public Printer
{
public:

  InstructionTrace_RV64_Printer();

  virtual void connectChannel(Channel*);
  virtual std::string getPrintHeader(void);

  int get_pc(void){ return pc_ptr[instrIndex]; };
  int get_code(void){ return code_ptr[instrIndex]; };
  std::string get_assembly(void){ return assembly_ptr[instrIndex]; };
  int get_imm(void){ return imm_ptr[instrIndex]; };
  int get_rs1_data(void){ return rs1_data_ptr[instrIndex]; };
  int get_rs2_data(void){ return rs2_data_ptr[instrIndex]; };
  int get_rd_data(void){ return rd_data_ptr[instrIndex]; };
  int get_jump_pc(void){ return jump_pc_ptr[instrIndex]; };
  int get_csr(void){ return csr_ptr[instrIndex]; };
  int get_mem_addr(void){ return mem_addr_ptr[instrIndex]; };

private:

  int* pc_ptr;
  int* code_ptr;
  char (*assembly_ptr)[50];
  int* imm_ptr;
  int* rs1_data_ptr;
  int* rs2_data_ptr;
  int* rd_data_ptr;
  int* jump_pc_ptr;
  int* csr_ptr;
  int* mem_addr_ptr;
};

#endif // SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_PRINTER_H