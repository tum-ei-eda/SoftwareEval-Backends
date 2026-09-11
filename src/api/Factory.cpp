
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

#include "CV32E40P_DSE_MAPExplorer.h"
#include "CV32E40P_DSE_Printer.h"
#include "CV32E40P_DSE_MAPExplorer_BACKUP.h"
#include "CV32E40P_DSE_BlockExtractor.h"
#include "CV32E40P_DSE_Channel.h"
#include "CV32E40P_DSE_BlockInstructionGenerator.h"
#include "CV32E40P_DSE_PerformanceModel.h"
#include "CV32E40P_DSE_BlockSchedulingFunctions.h"

#include "CV32E40P_Channel.h"
#include "CV32E40P_PerformanceModel.h"
#include "CV32E40P_BlockExtractor.h"
#include "CV32E40P_Printer.h"
//#include "CV32E40P_BlockInstructionGenerator.h"

#include "CVA6_DSE_PerformanceModel.h"
#include "CVA6_DSE_Channel.h"
#include "CVA6_DSE_Printer.h"
#include "CVA6_DSE_BlockExtractor.h"
#include "CVA6_DSE_MAPExplorer.h"

#include "AssemblyTrace_RV32_Channel.h"
#include "AssemblyTrace_RV32_Printer.h"

#include "InstructionTrace_RV32IM_Zicsr_Channel.h"
#include "InstructionTrace_RV32IM_Zicsr_Printer.h"

#include "AssemblyTrace_RV64_Channel.h"
#include "AssemblyTrace_RV64_Printer.h"

//#include "CVA6_BlockInstructionGenerator.h"
//#include "CVA6_BlockExtractor.h"
#include "CVA6_Channel.h"
#include "CVA6_Printer.h"
#include "CVA6_PerformanceModel.h"

#include "InstructionTrace_RV64IMF_Zicsr_Printer.h"
#include "InstructionTrace_RV64IMF_Zicsr_Channel.h"

#include <iostream>

namespace SwEvalBackends
{

int Factory::getVariantHandle(std::string varName_)
{
    	if(varName_ == "CV32E40P_DSE"){ return CV32E40P_DSE; }
	if(varName_ == "CV32E40P"){ return CV32E40P_DSE; } // <-HACK: quickly select CV32E40P_DSE (TODO)
	//if(varName_ == "CV32E40P"){ return CV32E40P; }
	if(varName_ == "CVA6_DSE"){ return CVA6_DSE; }
	if(varName_ == "AssemblyTrace_RV32"){ return AssemblyTrace_RV32; }
	if(varName_ == "InstructionTrace_RV32IM_Zicsr"){ return InstructionTrace_RV32IM_Zicsr; }
	if(varName_ == "AssemblyTrace_RV64"){ return AssemblyTrace_RV64; }
	//if(varName_ == "CVA6"){ return CVA6; }
	if(varName_ == "CVA6"){ return CVA6_DSE; } // <-HACK: quickly select CVA6_DSE (TODO)
	if(varName_ == "InstructionTrace_RV64IMF_Zicsr"){ return InstructionTrace_RV64IMF_Zicsr; }

    return -1;
}

Channel* Factory::getChannel(int var_)
{
  switch((var_t)var_)
  {
    	case CV32E40P_DSE: return new CV32E40P_DSE_Channel();
	case CV32E40P: return new CV32E40P_Channel();
	case CVA6_DSE: return new CVA6_DSE_Channel();
	case AssemblyTrace_RV32: return new AssemblyTrace_RV32_Channel();
	case InstructionTrace_RV32IM_Zicsr: return new InstructionTrace_RV32IM_Zicsr_Channel();
	case AssemblyTrace_RV64: return new AssemblyTrace_RV64_Channel();
	case CVA6: return new CVA6_Channel();
	case InstructionTrace_RV64IMF_Zicsr: return new InstructionTrace_RV64IMF_Zicsr_Channel();

    default: return nullptr;
  }
}

Backend* Factory::getPerformanceEstimator(int var_)
{
  // Get performance model
  PerformanceModel* perfModel;
  switch((var_t)var_)
  {
    case CV32E40P_DSE:
		//return new CV32E40P_DSE::CV32E40P_DSE_MAPExplorer();
		//return new CV32E40P_DSE::CV32E40P_DSE_BlockExtractor();
		perfModel = new CV32E40P_DSE::CV32E40P_DSE_PerformanceModel();
		break;
	case CV32E40P:
		perfModel = new CV32E40P::CV32E40P_PerformanceModel();
		break;
	case CVA6_DSE:
		//return new CVA6_DSE::CVA6_DSE_MAPExplorer();
		//return new CVA6_DSE::CVA6_DSE_BlockExtractor();
		perfModel = new CVA6_DSE::CVA6_DSE_PerformanceModel();
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

Backend* Factory::getMAPExplorer(int var_)
{
  switch((var_t)var_)
  {
    case CV32E40P_DSE: return new CV32E40P_DSE::CV32E40P_DSE_MAPExplorer<true>();
	case CVA6_DSE: return new CVA6_DSE::CVA6_DSE_MAPExplorer<true>();
    default: return nullptr;
  }
}

Backend* Factory::getMAPExplorer_InstructionScheduling(int var_)
{
  switch((var_t)var_)
  {
    case CV32E40P_DSE: return new CV32E40P_DSE::CV32E40P_DSE_MAPExplorer<false>();
	case CVA6_DSE: return new CVA6_DSE::CVA6_DSE_MAPExplorer<false>();
    default: return nullptr;
  }
}

Backend* Factory::getBlockExtractor(int var_)
{	
  switch((var_t)var_)
  {
    case CV32E40P_DSE: return new CV32E40P_DSE::CV32E40P_DSE_BlockExtractor();
	case CVA6_DSE: return new CVA6_DSE::CVA6_DSE_BlockExtractor();
    default: return nullptr;
  }
}

Backend* Factory::getTracePrinter(int var_)
{
  // Get variant specific printer
  Printer* printer;
  switch((var_t)var_)
  {
    	case CV32E40P_DSE:
		printer = new CV32E40P_DSE_Printer();
		break;
	case CV32E40P:
		printer = new CV32E40P_Printer();
		break;
	case CVA6_DSE:
		printer = new CVA6_DSE_Printer();
		break;
	case AssemblyTrace_RV32:
		printer = new AssemblyTrace_RV32_Printer();
		break;
	case InstructionTrace_RV32IM_Zicsr:
		printer = new InstructionTrace_RV32IM_Zicsr_Printer();
		break;
	case AssemblyTrace_RV64:
		printer = new AssemblyTrace_RV64_Printer();
		break;
	case CVA6:
		printer = new CVA6_Printer();
		break;
	case InstructionTrace_RV64IMF_Zicsr:
		printer = new InstructionTrace_RV64IMF_Zicsr_Printer();
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
