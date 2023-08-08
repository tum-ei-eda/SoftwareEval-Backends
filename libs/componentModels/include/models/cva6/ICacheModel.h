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

// TODO: nail preliminary model

#ifndef I_CACHE_MODEL_H
#define I_CACHE_MODEL_H

//#include <stdbool.h>

#include "PerformanceModel.h"

class ICacheModel : public ResourceModel
{
    public:

    ICacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_) {};
    virtual int getDelay(void);

    // Trace value
    uint64_t* pc_ptr;

    private:

    bool cacheable();
    bool tag_cmp();
    short lfsr();
    void main();

    uint64_t pc = 0;
    uint64_t tag = 0;
    int index = 0;
    int tag_ram[256][4] = {0}; // 256 lines, 4-way associative, line size = 16byte, total size = 16 kbyte
    bool miss = false;

};

#endif // I_CACHE_MODEL_H
