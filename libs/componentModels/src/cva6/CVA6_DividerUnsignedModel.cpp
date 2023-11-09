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

#include "models/cva6/CVA6_DividerUnsignedModel.h"

#include <cstdint>

int CVA6_DividerUnsignedModel::getDelay(void)
{
  int delay = 0;

  uint64_t op_a = rs1_data_ptr[getInstrIndex()];
  uint64_t op_b = rs2_data_ptr[getInstrIndex()];

  //std::cout << "---" << std::endl;
  //std::cout << "Op_a : " << std::hex << op_a << std::endl;
  //std::cout << "Op_b : " << std::hex << op_b << std::endl;
  
  if(!op_b)
  {
    //return 64;
    delay = 64;
  }
  else
  {
    int lzc_a = findLeadingZeroCnt(op_a);
    int lzc_b = findLeadingZeroCnt(op_b);
    //int shift = lzc_b - (!op_a ? 64 : findLeadingZeroCnt(op_a));
    
    int shift = lzc_b - (!op_a ? 64 : lzc_a);
    //return (shift < 0) ? 2 : shift + 3;

    //std::cout << "lza_a: " << std::dec << lzc_a << std::endl;
    //std::cout << "lza_b: " << std::dec << lzc_b << std::endl;
    //std::cout << "shift: " << std::dec << shift << std::endl;
    
    delay = (shift < 0) ? 2 : shift + 3;
  }

  //std::cout << "Delay: " << std::dec << delay << std::endl;
  //std::cout << "---" << std::endl;
  
  return delay;
}

int CVA6_DividerUnsignedModel::findLeadingZeroCnt(uint64_t op_)
{
  uint64_t op_shift = op_;
  //std::cout << "findLeadingZeroCnt( " << std::hex << op_shift << " )" << std::endl;
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
