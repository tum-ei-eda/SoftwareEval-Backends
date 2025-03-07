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

#include "models/cva6/DividerModel.h"

#include <cstdint>

namespace cva6{

int DividerModel::getDelay(void)
{
  int delay = 0;

  uint64_t op_a = rs1_data_ptr[getInstrIndex()];
  uint64_t op_b = rs2_data_ptr[getInstrIndex()];

  uint64_t op_a_inv = (op_a & 0x8000000000000000) ? ((~op_a) & 0xFFFFFFFFFFFFFFFE) : op_a;
  uint64_t op_b_inv = (op_b & 0x8000000000000000) ? ~op_b : op_b;
  
  if(!op_b_inv)
  {
    //return 64;
    delay = 64;
  }
  else
  {
    int lzc_a = findLeadingZeroCnt(op_a_inv);
    int lzc_b = findLeadingZeroCnt(op_b_inv);
    //int shift = lzc_b - (!op_a_inv ? 64 : findLeadingZeroCnt(op_a_inv));
    int shift = lzc_b - (!op_a_inv ? 64 : lzc_a);
    //return (shift < 0) ? 2 : shift + 3;
    delay = (shift < 0) ? 2 : shift + 3;
  }

  return delay;
}

int DividerModel::findLeadingZeroCnt(uint64_t op_)
{
  uint64_t op_shift = op_;
  for(int i=0; i<64; i++)
  {
    if(op_shift & 0x8000000000000000)
    {
      return i;
    }
    op_shift = op_shift << 1;
  }
  return 63;
}

} //namespace cva6
