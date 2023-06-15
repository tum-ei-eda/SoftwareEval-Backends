/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
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

#include "CV32E40P_Channel.h"

bool CV32E40P_Channel::hookTraceValue(std::string trVal_, int*& ptr_)
{
    if(trVal_ == "rs1")
    {
        ptr_ = rs1;
        return true;
    }
    if(trVal_ == "rs2")
    {
        ptr_ = rs2;
        return true;
    }
    if(trVal_ == "rd")
    {
        ptr_ = rd;
        return true;
    }
    if(trVal_ == "pc")
    {
        ptr_ = pc;
        return true;
    }
    if(trVal_ == "brTarget")
    {
        ptr_ = brTarget;
        return true;
    }
    ptr_ = nullptr;
    return false;
}