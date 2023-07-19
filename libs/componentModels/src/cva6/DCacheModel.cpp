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

#include "models/cva6/DCacheModel.h"

int DCacheModel::getDelay(void)
{
    unsigned int addr = addr_ptr[getInstrIndex()];

    // TODO: Robert's model calculates an additional delay here if address is blocked by a preceding store!

    if(notCachable(addr))
    {
        return NOT_CACHABLE_DELAY;
    }
    if(inCache(addr))
    {
        return CACHE_DELAY;
    }
    return MEMORY_DELAY;
}

bool DCacheModel::inCache(unsigned int addr_)
{
    // tag calculation tag = addr[55:12]
    // since we only consider 32 bit addresses (int) we can just remove the 12 lower bit
    unsigned int tag = addr_ >> 12;

    // index calculation index = addr[11:4], 8 bit wide, 256 bytes addressable
    // remove the higher 21 bit, remove the lower 4 bit
    //unsigned int index = (addr_<<(32-11))>>(32-11+4);
    // TODO: Check if this line is corret!! Shouldn't it be:
    unsigned int index = (addr_<<20)>>24;

    // TODO: For DCache it seams logical to also check valid_cache. However, current model does never invalidate any index!?
    for(int way_i=0; way_i<8; way_i++)
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

bool DCacheModel::notCachable(unsigned int addr_)
{
    if((0x80000000 <= addr_) && (addr_ < 0xC0000000))
    {
        return false;
    }
    return true;
}

void DCacheModel::updateCache(unsigned int tag_, unsigned int index_)
{
    // TODO: Only 8-bit LFSR implemented
    static int lfsrState = 0xFF;
    if(lfsrState & 0x1)
    {
        lfsrState = (lfsrState >> 1) ^ 0xFA;
    }
    else
    {
        lfsrState = (lfsrState >> 1);
    }
    tag_cache[lfsrState & 0x7][index_] = tag_;
}
