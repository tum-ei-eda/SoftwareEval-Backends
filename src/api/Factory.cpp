
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

#include "AssemblyTrace_Printer.h"
#include "AssemblyTrace_Channel.h"

#include "CV32E40P_Channel.h"
#include "CV32E40P_PerformanceModel.h"
#include "CV32E40P_Printer.h"

#include "InstructionTrace_RV64_Printer.h"
#include "InstructionTrace_RV64_Channel.h"

#include "CVA6_Channel.h"
#include "CVA6_Printer.h"
#include "CVA6_PerformanceModel.h"


namespace SwEvalBackends
{

int Factory::getVariantHandle(std::string varName_)
{
    	if(varName_ == "AssemblyTrace"){ return AssemblyTrace; }
	if(varName_ == "CV32E40P"){ return CV32E40P; }
	if(varName_ == "InstructionTrace_RV64"){ return InstructionTrace_RV64; }
	if(varName_ == "CVA6"){ return CVA6; }

    return -1;
}

Channel* Factory::getChannel(int var_)
{
  switch((var_t)var_)
  {
    	case AssemblyTrace: return new AssemblyTrace_Channel();
	case CV32E40P: return new CV32E40P_Channel();
	case InstructionTrace_RV64: return new InstructionTrace_RV64_Channel();
	case CVA6: return new CVA6_Channel();

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
		perfModel = new CV32E40P::CV32E40P_PerformanceModel();
		break;
	case CVA6:
		perfModel = new CVA6::CVA6_PerformanceModel();
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
    	case AssemblyTrace:
		printer = new AssemblyTrace_Printer();
		break;
	case CV32E40P:
		printer = new CV32E40P_Printer();
		break;
	case InstructionTrace_RV64:
		printer = new InstructionTrace_RV64_Printer();
		break;
	case CVA6:
		printer = new CVA6_Printer();
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
