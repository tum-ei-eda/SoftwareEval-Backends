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

#ifndef SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_CHANNEL_H
#define SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_CHANNEL_H

#include "Channel.h"

#include <string>
#include <stdbool.h>
#include <cstdint>

class InstructionTrace_RV64_Channel: public Channel
{
public:

  InstructionTrace_RV64_Channel() {};
  ~InstructionTrace_RV64_Channel() {};

  int pc [100];
  int code [100];
  char assembly [100] [50];
  int imm [100];
  int rs1_data [100];
  int rs2_data [100];
  int rd_data [100];
  int jump_pc [100];
  int csr [100];
  int mem_addr [100];

  virtual void *getTraceValueHook(std::string);
};

#endif // SWEVAL_BACKENDS_INSTRUCTIONTRACE_RV64_CHANNEL_H