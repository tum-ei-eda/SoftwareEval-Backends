/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
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

#ifndef CVA6_DIVIDER_UNSIGNED_MODEL_H
#define CVA6_DIVIDER_UNSIGNED_MODEL_H

#include <cstdint>

#include "PerformanceModel.h"

namespace cva6{

class DividerUnsignedModel : public ResourceModel
{
public:
  DividerUnsignedModel(PerformanceModel* parent_) : ResourceModel("CVA6_DividerUnsignedModel", parent_) {};
  
  virtual int getDelay(void);

  // Trace values
  uint64_t* rs1_data_ptr;
  uint64_t* rs2_data_ptr;

private:
  int findLeadingZeroCnt(uint64_t);
};

} // namespace cva6
  
#endif // CVA6_DIVIDER_UNSIGNED_MODEL_H
