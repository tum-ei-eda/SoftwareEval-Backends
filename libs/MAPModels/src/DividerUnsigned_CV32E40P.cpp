/*
 * Copyright 2026 Chair of EDA, Technical University of Munich
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

#include "map_models/DividerUnsigned_CV32E40P.h"

#include <cstdint>
#include <stdbool.h>

namespace map_models{

//uint64_t DividerUnsigned_CV32E40P::getDelay() const {
void DividerUnsigned_CV32E40P::updateDelay() {  

  //return 1;
  
  uint64_t operand = rs2_data_ptr[getInstrIdx()];

  uint64_t delay = 0;
  if(!operand)
  {
    delay = 31;
  }
  else
  {
    int index = findReverseOneIndex(operand);
    delay = (index != 0) ? (index-1) : 31;
  }
  delay += 1;
  delay += 3;

  delayBuffer = delay;
  //return delay;
}

int DividerUnsigned_CV32E40P::findReverseOneIndex(uint64_t op_) const {
  uint32_t op = op_;
  int index = 0;
  for(int i=0; i<32; i++)
  {
    op = op >> 1;
    if(!op)
    {
      index = i;
      break;
    }
  }
  return (31 - index);
}

} //namespace map_models
