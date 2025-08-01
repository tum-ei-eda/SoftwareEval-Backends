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

#include "models/esp32c3/ICacheModel.h"

#include <cstdint>

namespace esp32c3{

int ICacheModel::getDelay(void)
{
    uint64_t pc = pc_ptr[getInstrIndex()];
    isMiss = false;
    int delay = 0;
    if(isInternal(pc))
    {
    	
    	//printf("PC internal 0x%lx\n", pc);
        delay = INTERNAL_DELAY;
    }
    else
    {
        delay = cacheDelay(pc);
    }
    return delay;
}

int ICacheModel::cacheDelay(uint64_t addr_)
{
    uint64_t tag = (addr_ & 0x00000000FFFFF800) >> 11;  // pc_[31:11]
    uint64_t index = (addr_ & 0x00000000000007E0) >> 5; // pc_[10:5]
    int word_idx = (addr_ & 0x000000000000001C) >> 2; // pc_[4:2]
    int delay = 0;
    
	
    for(int way_i=0; way_i<8; way_i++)
    {
      ICacheEntry entry = tag_cache[way_i][index];
      if(entry.tag == tag && entry.valid)
      {
        // Cache hit
        // Check if word was accessed already
        if (word_idx <= entry.word_loaded_up_to) 
        {
        	// Word was already accessed
        	//printf("PC already accessed 0x%lx\n", addr_);
        	return CACHE_DELAY;
        }
        else
        {
        	// Cache line loaded, but word not accessed
        	// Give the delay for loading up to the requested word
        	delay = MEMORY_DELAY_ADD * (word_idx - entry.word_loaded_up_to);
        	// Update the cache entry
        	tag_cache[way_i][index].word_loaded_up_to = word_idx;
        	
        	if(prev_line.way != -1)
        	{
        		// Add additional delay if a new cache line is accessed while another was previously loading
        		if(prev_line.way != way_i || prev_line.index != index)
        		{
              delay += MEMORY_DELAY_ADD * (7 - prev_line.word_loaded_up_to);
              tag_cache[prev_line.way][prev_line.index].word_loaded_up_to = 7;
        		}
        	}
        	prev_line.way = way_i;
        	prev_line.index = index;
        	prev_line.word_loaded_up_to = word_idx;
        	//printf("PC Mem Del ADD 0x%lx\n", addr_);
        	return delay;
        }
      }
    }

    // Cache miss
    isMiss = true;
    updateCache(tag, index);
    tag_cache[replacement_way][index].word_loaded_up_to = word_idx;
    delay = MEMORY_DELAY_INIT + MEMORY_DELAY_ADD * word_idx;
    // Add additional delay if a new cache line is accessed while another was previously loading
    if(prev_line.way != -1)
    {
      if(prev_line.word_loaded_up_to != 7)
      {
        delay += MEMORY_DELAY_ADD * (7 - prev_line.word_loaded_up_to);
        tag_cache[prev_line.way][prev_line.index].word_loaded_up_to = 7;
      }
    }
    prev_line.way = replacement_way;
    prev_line.index = index;
    prev_line.word_loaded_up_to = word_idx;
    //printf("PC initial access 0x%lx\n", addr_);
    return delay;
}

void ICacheModel::updateCache(uint64_t tag_, uint64_t index_)
{
    int way = -1;

    for(int way_i=0; way_i<8; way_i++)
    {
      if(!tag_cache[way_i][index_].valid)
      {
        way = way_i;
        break;
      }
    }

    if(way == -1)
    {
      way = lfsr();
    }

    tag_cache[way][index_].tag = tag_;
    tag_cache[way][index_].valid = true;
    tag_cache[way][index_].word_loaded_up_to = -1;
    
    replacement_way = way;
}

int ICacheModel::lfsr(void)
{
    static uint8_t shift_state = 0;
    uint8_t shift_in = ~(((shift_state & 0x80) >> 7) ^ ((shift_state & 0x08) >> 3) ^ ((shift_state & 0x04) >> 2) ^ ((shift_state & 0x02) >> 1));
    shift_state = (shift_state << 1) | (shift_in & 0x01);
    return (shift_state & 0x07);
}

} // namespace esp32c3
