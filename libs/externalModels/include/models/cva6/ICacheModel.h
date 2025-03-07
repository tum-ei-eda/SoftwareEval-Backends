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

// TODO: Proof-of-concept model, taken from Robert (more or less)!

#ifndef CVA6_I_CACHE_MODEL_H
#define CVA6_I_CACHE_MODEL_H

#include <stdbool.h>
#include <cstdint>

#include "PerformanceModel.h"

namespace cva6{

struct ICacheEntry
{
  uint64_t tag = 0;
  bool valid = false;
};

class ICacheModel : public ResourceModel
{
public:

  ICacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_), CACHE_DELAY(1), MEMORY_DELAY(5) {};
  virtual int getDelay(void);
  
  void setIc_in(uint64_t c_) { t_ic = isMiss ? c_ : 0; };
  uint64_t getIc_out(void) { return t_ic; };

  std::string getInfo_miss(void) { return std::to_string(isMiss); };
  
  // Trace value
  uint64_t* pc_ptr;

private:
  
  // Cache state
  // TODO: Associativity hard-coded to 4
  ICacheEntry tag_cache[4][256];
  //bool valid_cache[4][256]= {false};
  bool isMiss = false;

  // Time when ICache relaeses block on miss
  uint64_t t_ic = 0;
  
  // Constants
  const int CACHE_DELAY;
  const int MEMORY_DELAY;

  // Support functions
  bool inCache(uint64_t);
  bool cachable(uint64_t pc_) { return ((0x80000000 <= pc_) && (pc_ < 0xC0000000)) ? true : false; };
  void updateCache(uint64_t, uint64_t);
  int lfsr(void);
};

} // namespace cva6  
  
#endif // CVA6_I_CACHE_MODEL_H
