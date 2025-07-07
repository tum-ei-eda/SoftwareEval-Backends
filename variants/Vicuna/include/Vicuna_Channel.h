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

#ifndef SWEVAL_BACKENDS_VICUNA_CHANNEL_H
#define SWEVAL_BACKENDS_VICUNA_CHANNEL_H

#include "Channel.h"

#include <string>
#include <stdbool.h>
#include <cstdint>

class Vicuna_Channel: public Channel
{
public:

  Vicuna_Channel() {};
  ~Vicuna_Channel() {};

  uint64_t rs1 [100];
  uint64_t rs2 [100];
  uint64_t rd [100];
  uint64_t vs1 [100];
  uint64_t vs2 [100];
  uint64_t vs3 [100];
  uint64_t vd [100];
  uint64_t vtype [100];
  uint64_t width [100];
  uint64_t pc [100];
  uint64_t brTarget [100];
  uint64_t vl [100];
  uint64_t rs2_data [100];

  virtual void *getTraceValueHook(std::string);
};

#endif // SWEVAL_BACKENDS_VICUNA_CHANNEL_H