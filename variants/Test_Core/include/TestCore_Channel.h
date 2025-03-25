/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License"Hand-written as a proof-of-concept);
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
 
#ifndef TEST_CORE_CHANNEL_H
#define TEST_CORE_CHANNEL_H

#include "Channel.h"

#include <string>
#include <stdbool.h>
#include <cstdint>

class TestCore_Channel: public Channel
{
public:

  TestCore_Channel() = default;
  ~TestCore_Channel() override = default;

  uint64_t rs1 [100];
  uint64_t rs2 [100];
  uint64_t rd [100];
  uint64_t pc [100];
  uint64_t brTarget [100];
  uint64_t memAddr [100];
  uint64_t imm [100];
  uint64_t rs1_data [100];
  uint64_t rs2_data [100];
  
  void* getTraceValueHook(std::string) override;
};

#endif // TEST_CORE_CHANNEL_H
