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

#ifndef CVA6_CLOBBER_MODEL_H
#define CVA6_CLOBBER_MODEL_H

#include "PerformanceModel.h"
#include <cstdint>

namespace cva6{

class ClobberModel : public ConnectorModel
{
public:
  ClobberModel(PerformanceModel* parent_) : ConnectorModel("ClobberModel", parent_) {};

  uint64_t* rd_ptr;

  // TODO: Consider corner-case rd = 0?
  
  uint64_t getCb_out(void){ return (rd_ptr[getInstrIndex()] != 0) ? registerModel[rd_ptr[getInstrIndex()]] : 0; };
  void setCb_in(uint64_t xd_){ registerModel[rd_ptr[getInstrIndex()]] = xd_; };

private:
  uint64_t registerModel [64] = {0};
};

} // namespace cva6
  
#endif //CVA6_CLOBBER_MODEL_H
