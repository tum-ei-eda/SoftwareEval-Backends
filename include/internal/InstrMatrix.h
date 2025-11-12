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

#ifndef SWEVAL_BACKENDS_INSTR_MATRIX_H
#define SWEVAL_BACKENDS_INSTR_MATRIX_H

#include "Matrix.h"

#include <unordered_map>
#include <functional>
#include <memory>
#include <iostream>

class InstructionFunction;
class MatrixTester;

class InstructionMatrixGenerator
{
public:
    InstructionMatrixGenerator() {};
    ~InstructionMatrixGenerator() {};
    void addInstructionFunction(InstructionFunction*);
    std::unique_ptr<Matrix> getInstructionMatrix(MatrixTester*);
private:
    std::unordered_map<uint64_t, InstructionFunction*> instrFuncMap;
};

class InstructionFunction
{
public:
    InstructionFunction(InstructionMatrixGenerator*, std::string, int, std::function<std::unique_ptr<Matrix>(MatrixTester*)>);

    const int typeId;
    const std::string name;
    const std::function<std::unique_ptr<Matrix>(MatrixTester*)> instrFunc;

private:
    InstructionMatrixGenerator* const parentGenerator;
};

#endif // SWEVAL_BACKENDS_INSTR_MATRIX_H