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

#include "Factory.h"

#include "Channel.h"
#include "Backend.h"

#include "PerformanceEstimator.h"
#include "PerformanceModel.h"
#include "TracePrinter.h"
#include "Printer.h"

#include "CV32E40P_Channel.h"
#include "CV32E40P_PerformanceModel.h"
#include "CV32E40P_Printer.h"

#include "CVA6_Channel.h"
#include "CVA6_PerformanceModel.h"
#include "CVA6_Printer.h"

#include "AssemblyTrace_Channel.h"
#include "AssemblyTrace_Printer.h"

#include "InstructionTrace_RV64_Channel.h"
#include "InstructionTrace_RV64_Printer.h"

namespace SwEvalBackends
{

int Factory::getVariantHandle(std::string var_)
{
    if(var_ == "CV32E40P")
    {
        return CV32E40P;
    }
    if(var_ == "CVA6")
    {
        return CVA6;
    }
    if(var_ == "AssemblyTrace")
    {
        return AssemblyTrace;
    }
    if(var_ == "InstructionTrace_RV64")
    {
        return InstructionTrace_RV64;
    }
    return -1;
}

Channel* Factory::getChannel(int var_)
{
  switch((var_t)var_)
  {
    case CV32E40P: return new CV32E40P_Channel();
    case CVA6: return new CVA6_Channel();
    case AssemblyTrace: return new AssemblyTrace_Channel();
    case InstructionTrace_RV64: return new InstructionTrace_RV64_Channel();
    default: return nullptr;
  }
}

Backend* Factory::getPerformanceEstimator(int var_)
{
  // Get performance model
  PerformanceModel* perfModel;
  switch((var_t)var_)
  {
    case CV32E40P:
      perfModel = new CV32E40P_PerformanceModel();
      break;
    case CVA6:
      perfModel = new CVA6_PerformanceModel();
      break;
    default: perfModel = nullptr;
  }

  // Create PerformanceEstimator
  if(perfModel != nullptr)
  {
    return new PerformanceEstimator(perfModel);
  }
  else
  {
    return nullptr;
  }
}

Backend* Factory::getTracePrinter(int var_)
{
  // Get variant specific printer
  Printer* printer;
  switch((var_t)var_)
  {
    case CV32E40P:
      printer = new CV32E40P_Printer();
      break;
    case CVA6:
      printer = new CVA6_Printer();
      break;
    case AssemblyTrace:
      printer = new AssemblyTrace_Printer();
      break;
    case InstructionTrace_RV64:
      printer = new InstructionTrace_RV64_Printer();
      break;
    default: printer = nullptr;
  }

  // Create TracePrinter
  if(printer != nullptr)
  {
    return new TracePrinter(printer);
  }
  else
  {
    return nullptr;
  }
}

} // namespace SwEvalBackends
