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

#ifndef STATISTICAL_MEMORY_MODEL_H
#define STATISTICAL_MEMORY_MODEL_H

#include "PerformanceModel.h"

class StatisticalMemoryModel : public ResourceModel
{
public:
  StatisticalMemoryModel(PerformanceModel* parent_) : ResourceModel("StatisticalMemoryModel", parent_) {};

  int getDelay(void) {return ((cnt++)%100 == 0) ? 5 : 1; };
  
private:
  int cnt = 0;
};

#endif //STATISTICAL_MEMORY_MODEL_H
