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

#include "JITCompiler.h"

#include "etiss/Misc.h" // TODO: Get rid of this dependency

#include <iostream>
#include <stdexcept>

JITCompiler::JITCompiler()
{
    tcc = tcc_new();
    if(!tcc){
        throw std::runtime_error("Failed to create TCC context");
    }

    tcc_set_lib_path(tcc, (etiss::jitFiles() + "/tcc").c_str());
    
    tcc_set_output_type(tcc, TCC_OUTPUT_MEMORY);

#ifdef JIT_INCLUDE_PATH
    tcc_add_include_path(tcc, JIT_INCLUDE_PATH);
#else
    #error "JIT_INCLUDE_PATH is not defined!"
#endif // JIT_INCLUDE_PATH

}

JITFuncType JITCompiler::compileFunction(const std::string& code_, int symbolId_)
{
    
    if(tcc_compile_string(tcc, code_.c_str()) == -1){
        std::cout << code_ << std::endl;
        throw std::runtime_error("Compilation failed");
    }

    if(tcc_relocate(tcc) < 0){
        throw std::runtime_error("Relocation failed");
    }

    std::string symbolName;
    if(symbolId_ == -1){
        symbolName = "funcX";
    } else{
        symbolName = "func_" + std::to_string(symbolId_);
    }
    
    JITFuncType func = reinterpret_cast<JITFuncType>(tcc_get_symbol(tcc, symbolName.c_str()));
    if(!func){
        throw std::runtime_error("Functional symbol not found");
    }

    return func;
}

void JITCompiler::getJitIncludeDir(void)
{
    std::cout << "COFO was here!" << std::endl;
    std::cout << JIT_INCLUDE_PATH << std::endl;
}