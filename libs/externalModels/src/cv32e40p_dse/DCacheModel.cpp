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

#include "models/cv32e40p_dse/DCacheModel.h"

#include <iostream>

namespace cv32e40p_dse{

int DCacheModel::getDelay() {
    uint64_t addr = addr_ptr[getInstrIndex()];

    if(!isCacheable(addr)){
        return MEMORY_DELAY;
    }

    // Check if cache hit
    uint64_t tag = getTag(addr);
    int index = getIndex(addr);
    int replaceWay = -1;
    for(int way_i=0; way_i<NUM_WAYS; way_i++){
        auto& entry = cache[accessCache(way_i, index)];
        if(entry.valid & (entry.tag == tag)){
            return CACHE_DELAY; // Cache hit
        }
        if((replaceWay == -1) & !entry.valid){
            replaceWay = way_i;
        }
    }

    // Cache miss -> update cache
    if (replaceWay == -1){
        if(NUM_WAYS <= 1){
            replaceWay = 0;
        }
        else{
            replaceWay = lfsr();
        }
    }
    auto& replaceEntry = cache[accessCache(replaceWay, index)];
    replaceEntry.tag = tag;
    replaceEntry.valid = true;

    return MEMORY_DELAY;
}

int DCacheModel::lfsr(void) const {
    uint8_t shift_in = ~(((lfsr_shiftState & 0x80) >> 7) ^ ((lfsr_shiftState & 0x08) >> 3) ^ ((lfsr_shiftState & 0x04) >> 2) ^ ((lfsr_shiftState & 0x02) >> 1));
    lfsr_shiftState = (lfsr_shiftState << 1) | (shift_in & 0x01);
    return (lfsr_shiftState & ((1ULL << NUM_WAY_BITS)-1));
}

} // namespace cv32e40p_dse