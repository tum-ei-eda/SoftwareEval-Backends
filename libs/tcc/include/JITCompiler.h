/*
 * Copyright 2025 Chair of EDA, Technical University of Munich
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

#ifndef SWEVAL_BACKENDS_JIT_COMPILER_H
#define SWEVAL_BACKENDS_JIT_COMPILER_H

#include "libtcc.h"

#include <iostream>
#include <functional>
#include <string>

//using JITFuncType = int(*)(int, int);
using JITFuncType = void(*)(int[32], int[30]);

class JITCompiler
{
public:
    JITCompiler();
    ~JITCompiler() { if(tcc) tcc_delete(tcc); };

    JITFuncType compileFunction(const std::string&, int);

    void getJitIncludeDir(void); // TODO: DEBUG. Delete

private:
    TCCState* tcc;

};

#endif // SWEVAL_BACKENDS_JIT_COMPILER_H