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

#include "InstrMatrix_CV32E40P.h"
#include "InstrMatrix.h"
#include "Matrix.h"
#include "MatrixTester.h"
#include <iostream>

InstructionMatrixGenerator* InstrMatrixGen_CV32E40P = new InstructionMatrixGenerator();

static InstructionFunction *instrFunction_Default = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Default",
    0,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_Arith_Ra_Rb = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Arith_Ra_Rb",
    1,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(rdIdx,rs1Idx) = 1;

        // Source Register (RS2)
        auto rs2Idx = (size_t)parent_->getRs2() + 4;
        (*P)(1,rs2Idx) = 0;
        (*P)(2,rs2Idx) = 1;
        (*P)(rdIdx,rs2Idx) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_Arith_Ra = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Arith_Ra",
    2,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(rdIdx,rs1Idx) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_Arith_X = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Arith_X",
    3,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        return P;
    }
);

static InstructionFunction *instrFunction_Mul_Ra_Rb = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Mul_Ra_Rb",
    4,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(rdIdx,rs1Idx) = 1;

        // Source Register (RS2)
        auto rs2Idx = (size_t)parent_->getRs2() + 4;
        (*P)(1,rs2Idx) = 0;
        (*P)(2,rs2Idx) = 1;
        (*P)(rdIdx,rs2Idx) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_MulH_Ra_Rb = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "MulH_Ra_Rb",
    5,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 7;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 7; (*P)(2,1) = 6; (*P)(2,2) = 5;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 7; (*P)(rdIdx,1) = 6; (*P)(rdIdx,2) = 5; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 7;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 5;
        (*P)(rdIdx,rs1Idx) = 5;

        // Source Register (RS2)
        auto rs2Idx = (size_t)parent_->getRs2() + 4;
        (*P)(1,rs2Idx) = 0;
        (*P)(2,rs2Idx) = 5;
        (*P)(rdIdx,rs2Idx) = 5;

        return P;
    }
);

static InstructionFunction *instrFunction_Csr_Ra = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Csr_Ra",
    6,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(rdIdx,rs1Idx) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_Csr_X = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Csr_X",
    7,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        return P;
    }
);

static InstructionFunction *instrFunction_Store = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Store",
    8,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
            (*P)(3,36) = 4;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1; (*P)(2,3) = 0;
        (*P)(3,0) = 4; (*P)(3,1) = 3; (*P)(3,2) = 2; (*P)(3,3) = 1;

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(3,rs1Idx) = 2;

        // Source Register (RS2)
        auto rs2Idx = (size_t)parent_->getRs2() + 4;
        (*P)(1,rs2Idx) = 0;
        (*P)(2,rs2Idx) = 1;
        (*P)(3,rs2Idx) = 2;

        return P;
    }
);

static InstructionFunction *instrFunction_Load = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Load",
    9,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(36,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
            (*P)(3,36) = 4;
        }
        else{
            P = std::make_unique<Matrix>(36,36);
            P->setIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1; (*P)(2,3) = 0;
        (*P)(3,0) = 4; (*P)(3,1) = 3; (*P)(3,2) = 2; (*P)(3,3) = 1;

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 4; (*P)(rdIdx,1) = 3; (*P)(rdIdx,2) = 2; (*P)(rdIdx,3) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 4;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(3,rs1Idx) = 2;
        (*P)(rdIdx,rs1Idx) = 2;

        return P;
    }
);

static InstructionFunction *instrFunction_Branch_Ra_Rb = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "Branch_Ra_Rb",
    10,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(38,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(38,36);
            P->setAsymIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // PC_p
        (*P)(36,0) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(36,36) = 1;
        }

        // PC_np
        (*P)(37, 0) = 3; (*P)(37, 1) = 2; (*P)(37, 2) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(37,36) = 3;
        } 

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 0;
        (*P)(2,rs1Idx) = 1;
        (*P)(37,rs1Idx) = 1;

        // Source Register (RS2)
        auto rs2Idx = (size_t)parent_->getRs2() + 4;
        (*P)(1,rs2Idx) = 0;
        (*P)(2,rs2Idx) = 1;
        (*P)(37,rs2Idx) = 1;

        return P;
    }
);

static InstructionFunction *instrFunction_ExCtrl = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "ExCtrl",
    11,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // NOTE: Currently branch prediction is not modelled. Treat ExCtrl as default.

        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(38,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
        }
        else{
            P = std::make_unique<Matrix>(38,36);
            P->setAsymIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1;

        // PC_p
        (*P)(36,0) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(36,36) = 1;
        }

        // PC_np
        (*P)(37, 0) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(37,36) = 1;
        } 

        return P;
    }
);

static InstructionFunction *instrFunction_jal = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "jal",
    12,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(38,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(38,36);
            P->setAsymIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // PC_p
        (*P)(36,0) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(36,36) = 1;
        }

        // PC_np
        (*P)(37, 0) = 2; (*P)(37, 1) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(37,36) = 2;
        } 

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        return P;
    }
);

static InstructionFunction *instrFunction_jalr = new InstructionFunction(
    InstrMatrixGen_CV32E40P,
    "jalr",
    13,
    [](MatrixTester* parent_){
        std::unique_ptr<Matrix> P;
        
        // Add PC column if first instr in BB
        if(parent_->isFirstBBInstr()){
            P = std::make_unique<Matrix>(38,37);
            P->setAsymIdentity();
            (*P)(0,36) = 1;
            (*P)(1,36) = 2;
            (*P)(2,36) = 3;
        }
        else{
            P = std::make_unique<Matrix>(38,36);
            P->setAsymIdentity();
        }

        // Pipeline Structure
        (*P)(0,0) = 1; (*P)(0,1) = 0;
        (*P)(1,0) = 2; (*P)(1,1) = 1; (*P)(1,2) = 0;
        (*P)(2,0) = 3; (*P)(2,1) = 2; (*P)(2,2) = 1;

        // PC_p
        (*P)(36,0) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(36,36) = 1;
        }

        // PC_np
        (*P)(37, 0) = 2; (*P)(37, 1) = 1;
        if(parent_->isFirstBBInstr()){
            (*P)(37,36) = 2;
        } 

        // Target-Register (RD)
        auto rdIdx = (size_t)parent_->getRd() + 4;
        (*P)(rdIdx,0) = 3; (*P)(rdIdx,1) = 2; (*P)(rdIdx,2) = 1; (*P)(rdIdx,rdIdx) = -1; 
        if(parent_->isFirstBBInstr()){
            (*P)(rdIdx, 36) = 3;
        }

        // Source Register (RS1)
        auto rs1Idx = (size_t)parent_->getRs1() + 4;
        (*P)(1,rs1Idx) = 1;
        (*P)(2,rs1Idx) = 2;
        (*P)(rdIdx,rs1Idx) = 2;
        (*P)(37,rs1Idx) = 1;

        return P;
    }
);