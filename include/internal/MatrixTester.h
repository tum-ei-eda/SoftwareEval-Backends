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

#ifndef SWEVAL_BACKENDS_MATRIX_TESTER_H
#define SWEVAL_BACKENDS_MATRIX_TESTER_H

#include "Channel.h"
#include "Backend.h"

#include "Matrix.h"
#include "InstrMatrix.h"
#include "InstrMatrix_CV32E40P.h"

//#include "SchedulingGraph.h"
//#include "InstrSchedulingGraph.h"
//#include "InstrSchedulingGraphs_CV32E40P.h"

#include "JITCompiler.h"

#include "BrPredModelTest.h" // TODO: Test purposes

#include <iostream>
#include <cstdint>
#include <memory>
#include <unordered_map>
#include <queue>
#include <string>
#include <vector> // TODO: Try out. Remove?

#include <array>
#include <list>

using std::uint64_t;

class NodeTable
{
  public:
    NodeTable(std::string inArrName_, std::string outArrName_): inArrName(inArrName_), outArrName(outArrName_) {};
    ~NodeTable() {};

    void insert(Matrix&, int);
    std::string getCode(void);

  private:
    struct Node{
      public:
        int index;
        std::array<int64_t, 39> coeffVector;
        std::string expression;
        bool assignNode = false;
        bool offsetNode = false;
        bool dimShiftNode = false;
        int dimShiftCnt = 0;

        std::string getReference() const{
          if(assignNode){
            return expression;
          }
          return ("t_" + std::to_string(index));
        }
    };

    std::list<Node> table;

    void setBaseExpression(Node&);

    bool isIdentical(const Node&, const Node&);

    struct OffsetResult{
      bool constOffset = false;
      int offset = 0;
    };
    OffsetResult checkConstOffset(const Node&, const Node&);

    struct DimResult{
      bool dimExtended = false;
      bool dimExtended_a = false;
      bool dimExtended_b = false;
      int offset = 0;
      std::vector<int> dimVector;
    };
    DimResult checkDimShift(const Node&, const Node&);

    std::string addConstStr(int c) const { return c != 0 ? (" + " + std::to_string(c)) : ""; };

    //std::string addConstStr(int c) {}

    std::string inArrName;
    std::string outArrName;

    // TODO: Remove. Just for optimization testing
    std::string getCode_CVA6(void);
    std::string getCode_CVA6_opt1(void);
    std::string getCode_CVA6_opt2(void);
    std::string getCode_CVA6_opt3(void);
    std::string getCode_CVA6_opt4(void);
    std::string getCode_CVA6_opt5(void);
    std::string getCode_CVA6_pyGen(void);

    static inline constexpr std::size_t NUM_COEFFS = 39; // TODO: Need to get this information for arch-specific matrix

};

class BasicBlock
{
    public:
    BasicBlock(int id_): id(id_) { 
      jitCompiler = new JITCompiler();
    };
    ~BasicBlock() { 
      delete jitCompiler;
    };

    // Function creation
    void createFunc(Matrix&);
    JITFuncType getFunc(void);

    // TODO: For debug
    void showCode(void) { std::cout << code << std::endl; };

    private:

    JITCompiler* jitCompiler;
    JITFuncType func;

    std::string code; // TODO: Currently kept for debug

    int id = 0;

};

class MatrixTester: public Backend
{
 public:
  MatrixTester() : bbMatrix(39,39), brPredModel() {};
  ~MatrixTester() {};

  void connectChannel(Channel* channel_);
  void initialize(void);
  void execute(void);
  void finalize(void);

  uint64_t getRd(void) const { return ch_rd_ptr[curInstrIdx]; };
  uint64_t getRs1(void) const { return ch_rs1_ptr[curInstrIdx]; };
  uint64_t getRs2(void) const { return ch_rs2_ptr[curInstrIdx]; };
  uint64_t getTypeId(void) const {return ch_typeId_ptr[curInstrIdx]; };
  
  bool isFirstBBInstr(void) { return firstBBInstr; };
  bool isBranchInstr(void) { return (ch_typeId_ptr[curInstrIdx] == 43
    || ch_typeId_ptr[curInstrIdx] == 44
    || ch_typeId_ptr[curInstrIdx] == 45
    || ch_typeId_ptr[curInstrIdx] == 46
    || ch_typeId_ptr[curInstrIdx] == 47
    || ch_typeId_ptr[curInstrIdx] == 48
    || ch_typeId_ptr[curInstrIdx] == 49
    || ch_typeId_ptr[curInstrIdx] == 50
    || ch_typeId_ptr[curInstrIdx] == 52
    || ch_typeId_ptr[curInstrIdx] == 53
  ); };

  uint64_t mapTypeId(void){
    uint64_t tId = getTypeId();
    if (tId >= 0 && tId <= 9) return 1; // Arith_Xa_Xb
    if (tId >= 10 && tId <= 18) return 2; // Arith_Xa
    if (tId >= 19 && tId <= 20) return 3; // Arith_
    if (tId == 21 ) return 4; // Mul
    if (tId >= 22 && tId <= 24) return 5; // Mul_H
    if (tId >= 29 && tId <= 31) return 6; // CSR_Xa
    if (tId >= 32 && tId <= 34) return 7; // CSR_Xa
    if (tId >= 35 && tId <= 37) return 8; // Store
    if (tId >= 38 && tId <= 42) return 9; // Load
    if (tId >= 43 && tId <= 48) return 10; // Branch
    if (tId >= 49 && tId <= 50) return 11; // ExCtrl
    if (tId == 51) return 0; // Default
    if (tId == 52) return 12; // jal
    if (tId == 53) return 13; // jalr
    return 543;

  }

 private:

  InstructionMatrixDict* instrMatrixDict = new InstrMatrixDict_CV32E40P();

  // Pointer to channel content
  uint64_t* ch_typeId_ptr;
  uint64_t* ch_instrCnt_ptr;
  uint64_t* ch_pc_ptr;
  uint64_t* ch_rd_ptr;
  uint64_t* ch_rs1_ptr;
  uint64_t* ch_rs2_ptr;
  uint64_t* ch_brTarget_ptr;
  uint64_t* ch_isBranch_ptr;
    
  uint64_t globalInstrCnt = 0;
  uint64_t globalBBCnt = 0;
  uint64_t uniqueInstrCnt = 0;
  uint64_t uniqueBBCnt = 0;

  int curInstrIdx = 0;

  bool activeBB = false;
  bool knownBB = false;
  bool firstBBInstr = false;
  bool firstBB = true;

  uint64_t curPc = 0;
  uint64_t prevBrTarget = 0;
  uint64_t prevBrPc = 0;

  Matrix bbMatrix;

  BasicBlock* curBB;
  std::unordered_map<uint64_t, std::unique_ptr<BasicBlock>> bbMap;

  std::queue<JITFuncType> bbFuncQueue;

  //std::queue<bool> mispredictedQueue;  

  int bufferCnt = 0;
  //bool mispredictedBuffer[1000];
  JITFuncType bbFuncBuffer[1000];

  bool mispredictedBuffer[5][1000];

  void getCurrentBB(void);
  void updateBBMatrix(void);
  void resolveBrPrediction(void);

  void updatePerformanceData(void);
  //int performanceData[39] = {0};

  int performanceData[5][39] = {0};

  BrPredModelTest brPredModel;

  // TODO: For CVA6 performance test. Delete:
  void func_CVA6_preComp(int arr [39], int temp[30]);

};

#endif //SWEVAL_BACKENDS_MATRIX_TESTER_H