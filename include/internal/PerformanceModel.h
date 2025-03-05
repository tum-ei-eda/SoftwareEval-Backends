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

#ifndef SWEVAL_BACKENDS_PERFORMANCE_MODEL_H
#define SWEVAL_BACKENDS_PERFORMANCE_MODEL_H

#include "Channel.h"

#include <string>
#include <set>
#include <map>
#include <list>
#include <functional>
#include <stdbool.h>
#include <cstdint>

#include <iostream> // TODO: For debug. Remove

class MultiElementTimingVariable
{
public:
  MultiElementTimingVariable(int,int);
  ~MultiElementTimingVariable() { delete[]  fifo; };

  void set(uint64_t);
  uint64_t get(int);
    
private:
  const int NUM_ELEMENTS;

  uint64_t* fifo; //Pointer to dynamically allocated array (circular buffer)
  int ptr = 0;    //Points to newest element's index
};

class SchedulingFunctionSet;

class PerformanceModel
{
public:
    PerformanceModel(std::string, SchedulingFunctionSet*);
    virtual ~PerformanceModel() = default;

    const std::string name;

    virtual void connectChannel(Channel*) = 0;

    void callSchedulingFunction(int);
    void update(void) { instrIndex++; };
    void newTraceBlock(void) { instrIndex = 0; };
    
    virtual uint64_t getCycleCount(void) = 0;
    virtual std::string getPipelineStream(void) = 0;
    virtual std::string getPrintHeader(void) = 0; 
  
    int instrIndex; // TODO: Make protected, with ConnectorModel as a friend?

private:
    SchedulingFunctionSet* const schedulingFunctionSet;
    std::map<int, std::function<void(PerformanceModel*)>> schedulingFunction_map;

};

class SchedulingFunction;

class SchedulingFunctionSet
{
public:
    SchedulingFunctionSet(std::string name_) : name(name_) {};
    const std::string name;
    void addSchedulingFunction(SchedulingFunction*);
    void foreach(std::function<void(SchedulingFunction &)>);
private:
    std::set<SchedulingFunction*> schedulingFunction_set;
};

class SchedulingFunction
{
public:
    SchedulingFunction(SchedulingFunctionSet*, std::string, int, std::function<void(PerformanceModel*)>);
    ~SchedulingFunction();

    const int typeId;
    const std::string name;
    const std::function<void(PerformanceModel*)> schedulingFunction;

private:
    SchedulingFunctionSet* const parentSet;
};

class ConnectorModel
{
public:
    ConnectorModel(std::string name_, PerformanceModel* parent_) : name(name_), parentModel(parent_) {};
    virtual ~ConnectorModel() = default;
    const std::string name;
protected:
    int getInstrIndex() { return parentModel->instrIndex; };
private:
    PerformanceModel* const parentModel;
};

// TODO: Merge ConnectorModel and ResourceModel base-classes? Not possible because of virtual getDelay function (needed by DynamicSharedResourceModel)?
class ResourceModel
{
public:
    ResourceModel(std::string name_, PerformanceModel* parent_) : name(name_), parentModel(parent_) {};
    virtual ~ResourceModel() = default;
    virtual int getDelay() = 0;
    const std::string name;
protected:
    int getInstrIndex() { return parentModel->instrIndex; };
private:
    PerformanceModel* const parentModel;
};

//struct ResourceBlockEntry
//{
//    int start = 0;
//    int end = 0;
//    ResourceBlockEntry(int start_, int end_, std::string info_) : start(start_), end(end_) {};
//};
//
//class SharedResourceModel
//{
//public:
//    virtual ~SharedResourceModel() = default;
//
//    virtual int getDelayFromResource() = 0;
//    int getDelay(int);
//    
//private:
//    std::list<ResourceBlockEntry*> blockList;
//    bool isLastEntry(std::list<ResourceBlockEntry*>::iterator);
//};
//
//class StaticSharedResourceModel : public SharedResourceModel
//{
//public:
//    StaticSharedResourceModel(int delay_) : delay(delay_) {};
//    virtual int getDelayFromResource() { return delay; };
//
//private:
//    const int delay;
//};
//
//class DynamicSharedResourceModel : public SharedResourceModel
//{
//public:
//    DynamicSharedResourceModel(ResourceModel* resModel_) : resModel(resModel_) {};
//    virtual int getDelayFromResource() { return resModel->getDelay(); };
//
//private:
//    ResourceModel* const resModel;
//};

#endif // SWEVAL_BACKENDS_PERFORMANCE_MODEL_H
