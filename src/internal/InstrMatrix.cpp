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

#include "InstrMatrix.h"
#include "MatrixTester.h"

#include <iostream>

void InstructionMatrixGenerator::addInstructionFunction(InstructionFunction* instrFunc_)
{
    auto mapResponse = instrFuncMap.emplace(instrFunc_->typeId, instrFunc_);
    bool inserted = mapResponse.second;
    if(!inserted)
    {
        std::cout << "Failed to insert instruction-function for instruction type " << instrFunc_->name << std::endl;
    }
}

std::unique_ptr<Matrix> InstructionMatrixGenerator::getInstructionMatrix(MatrixTester* parent_)
{
    return instrFuncMap[parent_->getTypeId()]->instrFunc(parent_);
}

InstructionFunction::InstructionFunction(InstructionMatrixGenerator* parent_, std::string name_, int typeId_, std::function<std::unique_ptr<Matrix>(MatrixTester*)> func_) :
    typeId(typeId_),
    name(name_),
    parentGenerator(parent_),
    instrFunc(func_)
{
    parentGenerator->addInstructionFunction(this);
}