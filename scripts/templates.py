# 
# Copyright 2024 Chair of EDA, Technical University of Munich
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#       http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# 

TEMPLATE_CMAKELIST_VARIANT = """
TARGET_SOURCES($libName PRIVATE
  $files
)

TARGET_INCLUDE_DIRECTORIES($libName PRIVATE
include
)
"""

TEMPLATE_CMAKELIST_ALL_VARIANTS = """
$subdirs
"""

TEMPLATE_FACTORY_BACKEND_HEADER = """
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

#ifndef SWEVAL_BACKENDS_FACTORY_H
#define SWEVAL_BACKENDS_FACTORY_H

#include "Channel.h"
#include "Backend.h"

#include <string>

namespace SwEvalBackends
{

class Factory
{
private:
  enum var_t { 
$variantEnums 
  };
public:
  int getVariantHandle(std::string);
  Channel* getChannel(int);
  Backend* getPerformanceEstimator(int);
  Backend* getTracePrinter(int);
};

} // namespace SwEvalBackends

#endif //SWEVAL_BACKENDS_FACTORY_H
"""

TEMPLATE_FACTORY_BACKEND_SOURCE = """
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

$includeHeaders
namespace SwEvalBackends
{

int Factory::getVariantHandle(std::string varName_)
{
    $handles
    return -1;
}

Channel* Factory::getChannel(int var_)
{
  switch((var_t)var_)
  {
    $channels
    default: return nullptr;
  }
}

Backend* Factory::getPerformanceEstimator(int var_)
{
  // Get performance model
  PerformanceModel* perfModel;
  switch((var_t)var_)
  {
    $perfModels
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
    $printers
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
"""
