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

#ifndef MAP_MODEL_DIVIDER_CV32E40P_H
#define MAP_MODEL_DIVIDER_CV32E40P_H

#include "Models.h"

#include <cstdint>

namespace map_models{

class Divider_CV32E40P: public ResourceModel {

public:
  Divider_CV32E40P() {};
  ~Divider_CV32E40P() = default;

  uint64_t* rs2_data_ptr = nullptr;
  
  //uint64_t getDelay() const;

protected:
  void updateDelay();

private:
  int findReverseOneIndex(uint64_t) const;

};

} // namespace map_models
  
#endif // MAP_MODEL_DIVIDER_CV32E40P_H
