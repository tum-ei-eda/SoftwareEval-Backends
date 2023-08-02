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

#ifndef I_CACHE_MODEL_H
#define I_CACHE_MODEL_H

#include <stdbool.h>

#include "PerformanceModel.h"

class ICacheModel : public ResourceModel
{
    public:

    ICacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_), CACHE_DELAY(2), MEMORY_DELAY(5) {};
    virtual int getDelay(void);

    // Trace value
    uint64_t* pc_ptr;

    private:

    // Support functions
    bool inCache(unsigned int);
    bool notCachable(unsigned int);
    void updateCache(unsigned int,  unsigned int);

    // Cache state
    // TODO: Associativity hard-coded to 4
    unsigned int tag_cache[4][256] = {0};
    //bool valid_cache[4][256]= {false};

    // Constants
    const int CACHE_DELAY;
    const int MEMORY_DELAY;

};

#endif // I_CACHE_MODEL_H
