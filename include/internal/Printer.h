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

#ifndef SWEVAL_BACKENDS_PRINTER_H
#define SWEVAL_BACKENDS_PRINTER_H

#include "Channel.h"

#include <string>
#include <map>
#include <functional>
#include <set>

class InstructionPrinterSet;

class Printer
{
 public:
  Printer(std::string, InstructionPrinterSet*);
  virtual ~Printer()=default;

  const std::string name;

  virtual void connectChannel(Channel*)=0;

  std::string callInstrPrintFunc(int);
  void newTraceBlock(void) { instrIndex = 0; };
  void update(void) { instrIndex++; };

  virtual std::string getPrintHeader(void)=0;
  
 private:
  InstructionPrinterSet* const instrPrinterSet;
  std::map<int, std::function<std::string(Printer*)>> instrPrintFunc_map;
 protected:
  int instrIndex;
  
};

class InstructionPrinter;

class InstructionPrinterSet
{
 public:
  InstructionPrinterSet(std::string name_) : name(name_) {};
  ~InstructionPrinterSet()=default; // TODO: Remove InstructionPrinters?
  const std::string name;
  void addInstructionPrinter(InstructionPrinter*);
  void foreach(std::function<void(InstructionPrinter &)>);
 private:
  std::set<InstructionPrinter*> instrPrinter_set;
};

class InstructionPrinter
{
 public:
  InstructionPrinter(InstructionPrinterSet*, std::string, int, std::function<std::string(Printer*)>);
  ~InstructionPrinter()=default;

  const std::string type;
  const int id;
  const std::function<std::string(Printer*)> printFunc;

 private:
  InstructionPrinterSet* const parentSet;
};

#endif // SWEVAL_BACKENDS_PRINTER_H

