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

#ifndef MAP_MODEL_I_CACHE_MODEL_H
#define MAP_MODEL_I_CACHE_MODEL_H

#include "Models.h"

#include <vector>

namespace map_models{

struct ICacheModel_Config {
    int CACHE_DELAY = 1;
    int MEMORY_DELAY = 5;
    int NUM_WAYS = 4;
    int NUM_ROWS = 256;
    int TAG_SIZE = 11;
};

struct ICacheEntry{
    uint64_t tag = 0;
    bool valid = false;
};

class ICacheModel : public ResourceModel{

public:
    ICacheModel(const ICacheModel_Config& cfg_):
        CACHE_DELAY(cfg_.CACHE_DELAY), 
        MEMORY_DELAY(cfg_.MEMORY_DELAY),
        NUM_WAYS(cfg_.NUM_WAYS),
        NUM_WAY_BITS(__builtin_ctzll(NUM_WAYS)),
        NUM_ROWS(cfg_.NUM_ROWS),
        NUM_ROW_BITS(__builtin_ctzll(NUM_ROWS)),
        NUM_TAG_BITS(cfg_.TAG_SIZE),
        cache(cfg_.NUM_WAYS * cfg_.NUM_ROWS)
        {};
    ~ICacheModel() = default;

    //uint64_t getDelay() const;

    // Trace value
    uint64_t* pc_ptr;

protected:

    void updateDelay();

private:

    const int CACHE_DELAY;
    const int MEMORY_DELAY;
    const int NUM_WAYS;
    const int NUM_WAY_BITS;
    const int NUM_ROWS;
    const int NUM_ROW_BITS;
    const int NUM_TAG_BITS;

    mutable std::vector<ICacheEntry> cache;

    int getIndex(uint64_t pc_) const { return (int)((pc_ >> 4) & ((1ULL << NUM_ROW_BITS) -1)); };
    uint64_t getTag(uint64_t pc_) const { return (pc_ >> (4 + NUM_ROW_BITS)) & ((1ULL << NUM_TAG_BITS) -1); };
    int accessCache(int way_, int idx_) const { return way_*NUM_ROWS + idx_; };

    bool isCacheable(uint64_t pc_) const { return ((0x00000000 <= pc_) && (pc_ < 0xC0000000)) ? true : false; };

    // Replacement-strategies:
    int lfsr() const;
    mutable uint8_t lfsr_shiftState = 0;

};

} // namespace map_models

#endif // MAP_MODEL_I_CACHE_MODEL_H