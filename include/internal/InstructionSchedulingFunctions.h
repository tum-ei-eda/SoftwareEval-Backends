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

#ifndef SWEVAL_BACKENDS_INSTRUCTION_SCHEDULING_FUNCTIONS_H
#define SWEVAL_BACKENDS_INSTRUCTION_SCHEDULING_FUNCTIONS_H

#include <stdint.h>
#include <unordered_map>

namespace MAP_Explorer{

struct Instruction{
    using SchedFuncPtr = void(*)(uint64_t*, uint8_t*, uint64_t, uint64_t, uint64_t);

    uint64_t typeId;
    bool isBranch;
    SchedFuncPtr scheduleFunction;

    SchedFuncPtr getScheduleFunction() const { return scheduleFunction; };
};

class InstructionDictionary{

public:
    InstructionDictionary(const MAP_Explorer::Instruction* const* instrs_, size_t numInstrs_):
        instructions(instrs_),
        numInstructions(numInstrs_)
    {
        instrMap.reserve(numInstructions);

        for(size_t i=0; i<numInstructions; i++){
            const Instruction* instr = instructions[i];
            instrMap.emplace(instr->typeId, instr);
        }
    }

    ~InstructionDictionary() = default;

    inline const Instruction* getInstruction(uint64_t typeId_) const{
        auto it = instrMap.find(typeId_);
        if(it != instrMap.end()){
            return it->second;
        }
        return nullptr;
    }

private:
    const Instruction* const* instructions;
    size_t numInstructions;

    std::unordered_map<uint64_t, const Instruction*> instrMap;

};

} // namespace MAP_Explorer

#endif // SWEVAL_BACKENDS_INSTRUCTION_SCHEDULING_FUNCTIONS_H