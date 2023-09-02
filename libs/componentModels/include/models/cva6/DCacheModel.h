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

#ifndef D_CACHE_MODEL_H
#define D_CACHE_MODEL_H

#include <stdbool.h>
#include <cstdint>

#include "PerformanceModel.h"

struct DCacheEntry
{
  uint64_t tag = 0;
  bool valid = false;
};

class DCacheModel : public ResourceModel
{
public:

  // TODO: Check if delays are matching observations!
  DCacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_), CACHE_DELAY(1), MEMORY_DELAY(7), NOT_CACHABLE_DELAY(9) {};
  virtual int getDelay(void);
  
  // Trace value
  uint64_t* addr_ptr;

private:

  // Cache state
  DCacheEntry tag_cache[8][256];
  
  // Support functions
  bool inCache(uint64_t);
  bool cachable(uint64_t addr_) { return ((0x80000000 <= addr_) && (addr_ < 0xC0000000)) ? true : false; };
  void updateCache(uint64_t, uint64_t);
  int lfsr(void);

  // Constants
  const int CACHE_DELAY;
  const int MEMORY_DELAY;
  const int NOT_CACHABLE_DELAY;

};

#endif // D_CACHE_MODEL_H
