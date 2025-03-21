/*
* Copyright 2025 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#ifndef SWEVAL_BACKENDS_CVA6_CHANNEL_H
#define SWEVAL_BACKENDS_CVA6_CHANNEL_H

#include "Channel.h"

#include <string>
#include <stdbool.h>
#include <cstdint>

class CVA6_Channel: public Channel
{
public:

  CVA6_Channel() {};
  ~CVA6_Channel() {};

  uint64_t rs1 [100];
  uint64_t rs2 [100];
  uint64_t rd [100];
  uint64_t pc [100];
  uint64_t brTarget [100];
  uint64_t imm [100];
  uint64_t rs1_data [100];
  uint64_t rs2_data [100];
  uint64_t addr [100];

  virtual void *getTraceValueHook(std::string);
};

#endif // SWEVAL_BACKENDS_CVA6_CHANNEL_H