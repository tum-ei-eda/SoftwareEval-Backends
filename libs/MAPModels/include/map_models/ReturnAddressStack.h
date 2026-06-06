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

#ifndef MAP_MODEL_RETURN_ADDRESS_STACK_H
#define MAP_MODEL_RETURN_ADDRESS_STACK_H

#include <vector>
#include <cstdint>  

namespace map_models{

class ReturnAddressStack{

public:

    ReturnAddressStack(int size_):
        stack(size_)
    {};
    ~ReturnAddressStack() = default;

    void push(uint64_t addr_){
        stack[top] = addr_;
        top = (top + 1) % stack.size();
        if (count < stack.size()){
            count++;
        }
    };

    uint64_t pop(){
        if(count == 0){
            return INVALID_BRANCH_ADDRESS;
        }

        top = (top + stack.size() -1) % stack.size();
        --count;

        return stack[top];
    };

private:
    std::vector<uint64_t> stack;
    int top = 0;
    int count = 0;

    uint64_t const INVALID_BRANCH_ADDRESS = 0xFFFFFFFFFFFFFFFF;
};

} // namespace map_models

#endif // MAP_MODEL_RETURN_ADDRESS_STACK_H