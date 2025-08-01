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

#ifndef ESP32C3_I_CACHE_MODEL_H
#define ESP32C3_I_CACHE_MODEL_H

#include <stdbool.h>
#include <cstdint>

#include "PerformanceModel.h"

namespace esp32c3{

struct ICacheEntry
{
  uint64_t tag = 0;
  bool valid = false;
  int word_loaded_up_to = -1; // Tracks how many words are accessed in this line
};

struct PrevLine
{
  int way = -1;
  uint64_t index = 0;
  int word_loaded_up_to = -1;
};

class ICacheModel : public ResourceModel
{
public:

  ICacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_), INTERNAL_DELAY(1), CACHE_DELAY(1), MEMORY_DELAY_INIT(104) , MEMORY_DELAY_ADD(32) {};
  virtual int getDelay(void);

  // Info print
  std::string getInfo_miss(void) { return std::to_string(isMiss); };
  
  // Trace value
  uint64_t* pc_ptr;
  
private:

  // Cache state
  ICacheEntry tag_cache[8][64];
  PrevLine prev_line;
  
  // Support functions
  int cacheDelay(uint64_t);
  bool isInternal(uint64_t pc_) { return ((pc_ < 0x42000000) || (pc_ >= 0x42800000)) ? true : false; };
  void updateCache(uint64_t, uint64_t);
  void prefetchNextLine(uint64_t addr);
  int lfsr(void);

  // Miss flag. Currently only used for info print
  bool isMiss = false;
  int replacement_way;
  
  // Constants
  const int INTERNAL_DELAY;
  const int CACHE_DELAY;
  const int MEMORY_DELAY_INIT;
  const int MEMORY_DELAY_ADD;

};

} // namespace esp32c3
  
#endif // ESP32C3_I_CACHE_MODEL_H
