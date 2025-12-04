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

#include "JITCompiler.h"

#include <iostream>
#include <cstdint>
#include <memory>
#include <unordered_map>
#include <queue>
#include <string>
#include <vector> // TODO: Try out. Remove?

using std::uint64_t;

class BasicBlock
{
    public:
    BasicBlock(int id_): id(id_) { jitCompiler = new JITCompiler(); };
    ~BasicBlock() { delete jitCompiler; };

    std::unique_ptr<Matrix> matrix;

    void setMatrix(const Matrix&);

    // Function creation
    void createFunc(void);
    JITFuncType getFunc(void);


    // TODO: For debug
    void showCode(void) { std::cout << code << std::endl; };

    bool rowIsUnchanged(int);
    bool rowsIsEquivalent(int, int);
    bool rowsIsUpShifted(int, int);
    bool rowIsDimShifted(int, int);

    int getShift(int, int);
    int getDimCnt(int);
    std::vector<int> getDims(int);
    std::vector<int> getDimsCompare(int, int);

    private:

    JITCompiler* jitCompiler;
    JITFuncType func;
    std::string code; // TODO: Currently kept for debug

    int id = 0;

};

class MatrixTester: public Backend
{
 public:
  MatrixTester() {};
  ~MatrixTester() {};

  void connectChannel(Channel* channel_);
  void initialize(void);
  void execute(void);
  void finalize(void);

  uint64_t getRd(void) { return ch_rd_ptr[curInstrIdx]; };
  uint64_t getRs1(void) { return ch_rs1_ptr[curInstrIdx]; };
  uint64_t getRs2(void) { return ch_rs2_ptr[curInstrIdx]; };
  uint64_t getTypeId(void) {return ch_typeId_ptr[curInstrIdx]; };
  
  bool isFirstBBInstr(void) { return firstBBInstr; };
  bool isBranchInstr(void);

 private:
  
   InstructionMatrixGenerator* instrMatrixGen = InstrMatrixGen_CV32E40P;

  // Pointer to channel content
  uint64_t* ch_typeId_ptr;
  uint64_t* ch_instrCnt_ptr;
  uint64_t* ch_pc_ptr;
  uint64_t* ch_rd_ptr;
  uint64_t* ch_rs1_ptr;
  uint64_t* ch_rs2_ptr;
  uint64_t* ch_brTarget_ptr;
    
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

  BasicBlock* curBB;

  std::unordered_map<uint64_t, std::unique_ptr<BasicBlock>> bbMap;
  //std::queue<BasicBlock*> bbQueue; // ENABLE FOR PERF.EST. BASED ON MAX-PLUS-MATRIX

  std::queue<JITFuncType> bbFuncQueue;
  std::queue<bool> mispredictedQueue;  

  void getCurrentBB(void);
  void updateBBMatrix(void);
  void resolveBrPrediction(void);

};

#endif //SWEVAL_BACKENDS_MATRIX_TESTER_H