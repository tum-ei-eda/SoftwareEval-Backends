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

#include "Printer.h"

#include <iostream>

Printer::Printer(std::string name_, InstructionPrinterSet* instrPrinterSet_) : name(name_), instrPrinterSet(instrPrinterSet_)
{
  //std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
  //std::cout << "Creating printer: " << name << "\n";
  //std::cout << " - Creating printer-function map:\n";
  
  instrPrinterSet->foreach([this](InstructionPrinter &instr)
  {

    auto it = instrPrintFunc_map.find(instr.id);
    if(it != instrPrintFunc_map.end())
    {
      //std::cout << "\tERROR: Cannot add" << instr.id << ". ID already registered.\n";
      return;
    }
    instrPrintFunc_map[instr.id] = instr.printFunc;
    //std::cout << "\tAdding instruction type " << instr.id << " to monitor-function map\n";
    
  });
  //std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}

std::string Printer::callInstrPrintFunc(int typeId_)
{
  return instrPrintFunc_map[typeId_](this);
}

void InstructionPrinterSet::addInstructionPrinter(InstructionPrinter* instrPrinter)
{
    instrPrinter_set.insert(instrPrinter);    
}

void InstructionPrinterSet::foreach(std::function<void(InstructionPrinter &)> func)
{
   for(auto it = instrPrinter_set.begin(); it != instrPrinter_set.end(); it++)
    {
       func(**it);
    }
}

InstructionPrinter::InstructionPrinter(InstructionPrinterSet* parent_, std::string type_, int id_, std::function<std::string(Printer*)> printFunc_) :
    parentSet(parent_),
    type(type_),
    id(id_),
    printFunc(printFunc_)
{
    parentSet->addInstructionPrinter(this);
}
