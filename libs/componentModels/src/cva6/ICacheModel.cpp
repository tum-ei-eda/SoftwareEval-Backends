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

#include "models/cva6/ICacheModel.h"

int ICacheModel::getDelay(void)
{
    unsigned int pc = pc_ptr[getInstrIndex()];

    if(notCachable(pc) | !inCache(pc))
    {
        return MEMORY_DELAY;
    }
    return CACHE_DELAY;
}

bool ICacheModel::inCache(unsigned int pc_)
{
    // tag calculation tag = addr[55:12]
    // since we only consider 32 bit addresses (int) we can just remove the 12 lower bit
    unsigned int tag = pc_ >> 12;

    // index calculation index = addr[11:4], 8 bit wide, 256 bytes addressable
    // remove the higher 21 bit, remove the lower 4 bit
    //unsigned int index = (pc_<<(32-11))>>(32-11+4);
    // TODO: Check if this line is corret!! Shouldn't it be:
    unsigned int index = (pc_<<20)>>24;

    for(int way_i=0; way_i<4; way_i++)
    {
        if(tag_cache[way_i][index] == tag)
        {
            // Cache hit
            return true;
        }
    }

    // Cache miss
    updateCache(tag, index);
    return false;
}

bool ICacheModel::notCachable(unsigned int pc_)
{
    if((0x80000000 <= pc_) && (pc_ < 0xC0000000))
    {
        return false;
    }
    return true;
}

void ICacheModel::updateCache(unsigned int tag_, unsigned int index_)
{
    // TODO: Only 4-bit LFSR implemented
    static int lfsrState = 0xF;
    if(lfsrState & 0x1)
    {
        lfsrState = (lfsrState >> 1) ^ 0xC;
    }
    else
    {
        lfsrState = (lfsrState >> 1);
    }
    tag_cache[lfsrState & 0x3][index_] = tag_;
}
