/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

#include "PerformanceModel.h"

#include <string>
#include <set>
#include <map>
#include <list>
#include <functional>
#include <iostream> // Used for info prints in constructor. Replace with common print handling?
#include <sstream> // Used for info prints in constructor. Replace with common print handling?
#include <iomanip> // Used for info prints in constructor. Replace with common print handling?
#include <unordered_set>
MultiElementTimingVariable::MultiElementTimingVariable(int numElements_, int resetValue_) : NUM_ELEMENTS(numElements_)
{
  fifo = new uint64_t[NUM_ELEMENTS];
  for(int i = 0; i < NUM_ELEMENTS; i++){
    fifo[i] = resetValue_;
  }
}

void MultiElementTimingVariable::set(uint64_t value_)
{
  ptr = (ptr + 1) % NUM_ELEMENTS;
  fifo[ptr] = value_;
}

uint64_t MultiElementTimingVariable::get(int depth_)
{
  int index = (ptr - (depth_ - 1) + NUM_ELEMENTS) % NUM_ELEMENTS;
  return fifo[index];
}

PerformanceModel::PerformanceModel(std::string name_, SchedulingFunctionSet* schedulingFunctionSet_)
  : PerformanceModel(name_, schedulingFunctionSet_, nullptr)
{}

PerformanceModel::PerformanceModel(std::string name_, SchedulingFunctionSet* schedulingFunctionSet_, SchedulingPrinterSet* schedulingPrinterSet_) : name(name_), schedulingFunctionSet(schedulingFunctionSet_), schedulingPrinterSet(schedulingPrinterSet_)
  // :PerformanceModel(std::string name_, schedulingFunctionSet_, nullptr): name(name_), schedulingFunctionSet(schedulingFunctionSet_)
{
    schedulingFunctionSet->foreach([this](SchedulingFunction &func)
    {
        auto typeId_it = schedulingFunction_map.find(func.typeId);
        if(typeId_it != schedulingFunction_map.end())
        {
	  return;
        }
        schedulingFunction_map[func.typeId] = func.schedulingFunction;
    });

    if (schedulingPrinterSet){
      schedulingPrinterSet->foreach([this](SchedulingPrinter &pr)
      {
        auto it = printerFunction_map.find(pr.typeId);
        if (it != printerFunction_map.end())
          return;
        printerFunction_map[pr.typeId] = pr.schedulingPrinter;
      });
    }
}

void PerformanceModel::callSchedulingFunction(int typeId_)
{
  schedulingFunction_map[typeId_](this);
}

void SchedulingFunctionSet::addSchedulingFunction(SchedulingFunction* schedFunc_)
{
    schedulingFunction_set.insert(schedFunc_);
}

void SchedulingFunctionSet::foreach(std::function<void(SchedulingFunction &)> func)
{
    for(auto it = schedulingFunction_set.begin(); it != schedulingFunction_set.end(); it++)
    {
        func(**it);
    }
}

SchedulingFunction::SchedulingFunction(SchedulingFunctionSet* parent_, std::string name_, int typeId_, std::function<void(PerformanceModel*)> schedFunc_) : 
    typeId(typeId_),
    name(name_),
    parentSet(parent_),
    schedulingFunction(schedFunc_)
{
    parentSet->addSchedulingFunction(this);
}

// std::string PerformanceModel::callSchedulingPrinter(int typeId_){
//   return printerFunction_map[typeId_](this);
// }

std::string PerformanceModel::getPipelineStream(uint64_t typeId)
{

  if (printerFunction_map.empty()) {
        return getPipelineStream();
    }
  static const std::unordered_set<int> kWBTypeIds = {35, 36, 37, 38, 39, 40, 41, 42};
  static const std::unordered_set<int> kNoWBTypeIds = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34, 
                                                      43,44,45,46,47,48,49,50,51,52};

  int instrTypeId = static_cast<int>(typeId);
  // int tempTypeId = 0;

  // if (kWBTypeIds.count(instrTypeId)) {
  //     tempTypeId = 1;
  // } else if (kNoWBTypeIds.count(instrTypeId)) {
  //     tempTypeId = 0;
  // } else {
  //     tempTypeId = 0;
  // }
  return printerFunction_map[instrTypeId](this);
}

void SchedulingPrinterSet::addSchedulingPrinter(SchedulingPrinter* p) {
  schedulingPrinter_set.insert(p);
}

void SchedulingPrinterSet::foreach(std::function<void(SchedulingPrinter &)> func) {
  for (auto it = schedulingPrinter_set.begin(); it != schedulingPrinter_set.end(); it++) {
    func(**it);
  }
}

SchedulingPrinter::SchedulingPrinter(SchedulingPrinterSet* parent_, std::string name_, int typeId_, std::function<std::string(PerformanceModel*)> pr_):
  typeId(typeId_), 
  name(name_), 
  parentSet(parent_),
  schedulingPrinter(pr_)
{
  parentSet->addSchedulingPrinter(this);
}


//int SharedResourceModel::getDelay(int prev_cycle)
//{
//
//  int start = prev_cycle + 1;
//  int additionalResDelay = getDelayFromResource() - 1; // Delay -1 since first cycle is already "part of" start
//  
//  if(blockList.size() == 0)
//  {
//    blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "init"));
//    return (additionalResDelay + 1);
//  }
//
//  for(auto entry_it=blockList.begin(); entry_it != blockList.end(); entry_it++)
//  {
//
//    // Entry blocks the requested resource. Check next entry
//    if((start >= (*entry_it)->start) && (start <= (*entry_it)->end))
//    {
//      start = (*entry_it)->end + 1; 
//      if(isLastEntry(entry_it))
//      {
//	blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "Blocked"));
//	break;
//      }
//      else
//      {
//	continue;
//      }
//    }
//
//    // Entry has released the resource at the point of request. Check if there is another entry blocking the resource or claim it.
//    if(start >= (*entry_it)->end)
//    {
//      if(isLastEntry(entry_it))
//      {
//	// Create a new entry at the end
//	blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "Later"));
//	break;
//      }
//      else
//      {
//	continue;
//      }
//    }
//
//    // At the point of request, the entry has not yet blocked the resource. Resource claimed by current request
//    if(start < (*entry_it)->start)
//    {
//
//      int dummy = (*entry_it)->start;
//      
//      // Create new entry
//      blockList.insert(entry_it, new ResourceBlockEntry(start, start + additionalResDelay, "Earlier"));
//
//      // TODO: Find a method to solve conflicts
//      //// Check for conflict
//      //if((start + additionalResDelay) >= dummy)
//      //{
//      //	
//      //}
//
//      break;
//    }
//    
//  }
//  
//  // TODO: Find a reasonable buffer size here!!!
//  if(blockList.size() > 10)
//  {
//    delete blockList.front();
//    blockList.pop_front();
//  }
//  
//  return (start - prev_cycle) + additionalResDelay;
//}
//
//bool SharedResourceModel::isLastEntry(std::list<ResourceBlockEntry*>::iterator it)
//{
//  auto temp = it;
//  ++it;
//  return ((temp != blockList.end()) && (it == blockList.end()));
//}
