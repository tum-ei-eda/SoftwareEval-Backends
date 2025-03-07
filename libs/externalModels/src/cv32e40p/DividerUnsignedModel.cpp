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

#include "models/cv32e40p/DividerUnsignedModel.h"

#include <cstdint>
#include <stdbool.h>

namespace cv32e40p{

int DividerUnsignedModel::getDelay(void)
{
  uint64_t operand = rs2_data_ptr[getInstrIndex()];

  int delay = 0;
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
  
  return delay;
}

int DividerUnsignedModel::findReverseOneIndex(uint64_t op_)
{
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

} //namespace cv32e40p
