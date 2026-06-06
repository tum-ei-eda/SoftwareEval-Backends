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

#ifndef SWEVAL_BACKENDS_BLOCK_INSTRUCTIONS_H
#define SWEVAL_BACKENDS_BLOCK_INSTRUCTIONS_H

#include "Channel.h"

#include <unordered_map>
#include <memory>
#include <functional>
#include <stdexcept>
#include <string>
#include <sstream>

class BlockInstruction{

public:
    BlockInstruction(Channel* channel_, uint64_t instrCnt_) { typeId = channel_->typeId[instrCnt_]; };
    virtual ~BlockInstruction() = default;

    bool isBranchInstr(void) { return isBranch; };
    virtual std::string getJsonStr(std::string) = 0;

protected:
    uint64_t typeId;
    uint64_t pc;
    bool isBranch = false;
};

class BlockInstructionGenerator{

public:
    using ctorFunc = std::function<std::unique_ptr<BlockInstruction>(Channel*, uint64_t)>;

    BlockInstructionGenerator() {};
    virtual ~BlockInstructionGenerator() = default;

    ctorFunc getCtor(uint64_t typeId_) const {
        auto it = ctorMap.find(typeId_);
        if(it != ctorMap.end()){
            return it->second;
        }
        throw std::runtime_error("Failed to create a BlockInstruction object for typeId: " + std::to_string(typeId_));
    }

protected:
    std::unordered_map<uint64_t, ctorFunc> ctorMap;

};

#endif // SWEVAL_BACKENDS_BLOCK_INSTRUCTIONS_H