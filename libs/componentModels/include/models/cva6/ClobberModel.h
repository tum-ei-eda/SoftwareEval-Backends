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

#ifndef CLOBBER_MODEL_H
#define CLOBBER_MODEL_H

#include "PerformanceModel.h"

class ClobberModel : public ConnectorModel
{
public:
  ClobberModel(PerformanceModel* parent_) : ConnectorModel("ClobberModel", parent_) {};

  int* rd_ptr;

  // TODO: Consider corner-case rd = 0?
  
  int getCb_Is(void){ return registerModel[rd_ptr[getInstrIndex()]]; };
  void setCb_Com(int xd_){ registerModel[rd_ptr[getInstrIndex()]] = xd_; };

private:
  int registerModel [64] = {0};
};

#endif //CLOBBER_MODEL_H
