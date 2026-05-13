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

#ifndef MAP_MODEL_MODELS_H
#define MAP_MODEL_MODELS_H

#include <cstdint>

#include <iostream>

namespace map_models{

class BaseModel{

public:
    inline void connectInstrIdx(int* instrIdxPtr_) { instrIdx_ptr = instrIdxPtr_; };

protected:
    BaseModel() {};
    virtual ~BaseModel() = default;
    inline int getInstrIdx() const { return *instrIdx_ptr; };

private:
    int* instrIdx_ptr = nullptr;

};

class ResourceModel: public BaseModel{

public:
    ResourceModel() {};
    virtual ~ResourceModel() = default;

    //virtual uint64_t getDelay() const = 0;

    void update() {
        updateDelay();
    }

    uint64_t getDelay() {
        updateDelay();
        return delayBuffer;
    }

    inline uint8_t* connectBuffer() { return &delayBuffer; };

protected:
    
    virtual void updateDelay() = 0;
    uint8_t delayBuffer = 0;

};

class BranchModel: public BaseModel{

public:
    BranchModel() {};
    virtual ~BranchModel() = default;

    virtual void catchBranch() const = 0;
    virtual void evaluate() const = 0;
    virtual void shiftVector(uint64_t*) const = 0;

};

} // namespace map_models

#endif // MAP_MODEL_MODELS_H