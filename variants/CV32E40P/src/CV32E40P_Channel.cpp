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


#include "CV32E40P_Channel.h"

void *CV32E40P_Channel::getTraceValueHook(std::string trVal_)
{
  if(trVal_ == "rs1")
  {
    return rs1;
  }
  if(trVal_ == "rs2")
  {
    return rs2;
  }
  if(trVal_ == "rd")
  {
    return rd;
  }
  if(trVal_ == "pc")
  {
    return pc;
  }
  if(trVal_ == "brTarget")
  {
    return brTarget;
  }
  if(trVal_ == "rs2_data")
  {
    return rs2_data;
  }
  
  if(trVal_ == "isBranch")
  {
    return isBranch;
  }

  return nullptr;
}