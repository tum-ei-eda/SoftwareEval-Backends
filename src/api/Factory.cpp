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
#include "Printer.h"

#include "CV32E40P_Channel.h"
#include "CV32E40P_PerformanceModel.h"
#include "CV32E40P_Printer.h"

namespace SwEvalBackends
{

int Factory::getVariantHandle(std::string var_)
{
    if(var_ == "CV32E40P")
    {
        return CV32E40P;
    }
    return -1;
}

Channel* Factory::getChannel(int var_)
{
  switch((var_t)var_)
  {
    case CV32E40P: return new CV32E40P_Channel();
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
      perfModel = new CV32E40P_Model();
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
  
//PerformanceEstimator* Factory::getPerformanceEstimator(int var_)
//{
//  PerformanceModel* perfModel = getPerformanceModel(var_);
//  if(perfModel != nullptr)
//  {
//    return new PerformanceEstimator(perfModel);
//  }
//  else
//  {
//    return nullptr;
//  }
//}

//PerformanceModel* Factory::getPerformanceModel(int var_)
//{
//  switch((var_t)var_)
//  {
//    case CV32E40P: return new CV32E40P_Model();
//    default: return nullptr;
//  }
//}

//Backend* Factory::getPrinter(int var_)
//{
//  switch((var_t)var_)
//  {
//    case CV32E40P: return new CV32E40P_Printer();
//    default: return nullptr;
//  }
//}

} // namespace SwEvalBackends
