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

InstructionMatrixGenerator* InstrMatrixGen_CV32E40P = new InstructionMatrixGenerator(); // TODO: Remove

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

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> NEW APPROACH <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 

void InstrMatrix_Default::assign(Matrix& inMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!

    for(int i=0; i<inMatrix_.getNumRows(); i++){
        for(int j=0; j<inMatrix_.getNumCols(); j++){
            // TIMING VARIABLES
            if(i<NUM_TIME_VARS){
                // Assigne timing-variable sub-matrix
                if(j<NUM_TIME_VARS){
                    inMatrix_(i,j) = timeVarMatrix[i][j];
                }
                // Assigne PC (in connector) sub-vector
                else if(j==IN_CON_COL_PC){
                    inMatrix_(i,j) = pcVector[i];
                }
                else{
                    inMatrix_(i,j) = -1;
                }
            }

            else{
                if(i==j){
                    inMatrix_(i,j) = 0;
                }
                else{
                    inMatrix_(i,j) = -1;
                }   
            }
        }
    }

};

void InstrMatrix_Default::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
    
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
    
        // TODO: Can avoid long for loop over i? Simply loop over NUM_TIMING VAR and then explicitly go to out connector rows?

        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Arith_Ra_Rb::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne RS2 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = rs2Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Arith_Ra_Rb::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(rs2Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Arith_Ra::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Arith_Ra::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Arith_X::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Arith_X::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Mul_Ra_Rb::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne RS2 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = rs2Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Mul_Ra_Rb::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(rs2Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_MulH_Ra_Rb::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne RS2 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = rs2Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_MulH_Ra_Rb::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(rs2Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS2], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Csr_Ra::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Csr_Ra::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Csr_X::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Csr_X::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Store::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne RS2 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = rs2Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Store::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(rs2Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Load::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                // RD REGISTER CONNECTOR
                else if(i == (NUM_TIME_VARS + environment_.getRd())){

                    // Assigne xd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRd())){
                        inMatrix_(i,j) = -1;
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Load::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }
        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_Branch_Ra_Rb::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne RS2 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = rs2Vector[i];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else if(i == OUT_CON_COL_PC_P){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_pVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS2];
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_P){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else if(i == OUT_CON_COL_PC_NP){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_npVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS1];
                    }
                    else if(j == (NUM_TIME_VARS + environment_.getRs2())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS2];
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_NP){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_Branch_Ra_Rb::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(rs2Vector[i], bbMatrix_(k,j)));
                    }
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_P){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_pVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS2], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_NP){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_npVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs2()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS2], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_P){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_NP){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_ExCtrl::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else if(i == OUT_CON_COL_PC_P){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_pVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_P){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else if(i == OUT_CON_COL_PC_NP){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_npVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_NP){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_ExCtrl::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_P){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_pVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_NP){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_npVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_P){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_NP){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_jal::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else if(i == NUM_TIME_VARS + environment_.getRd()){

                    // Assigen rd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else if(j == NUM_TIME_VARS + environment_.getRd()){
                        inMatrix_(i,j) = -1; // TODO: This is not required. All other elements are set to -1 anyway!
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }


                }

                else if(i == OUT_CON_COL_PC_P){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_pVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_P){
                        inMatrix_(i,j) = -1; // TODO: This is not required. All other elements are set to -1 anyway!
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else if(i == OUT_CON_COL_PC_NP){

                    // Assigne pc_np sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_npVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_NP){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_jal::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_P){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_pVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_NP){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_npVector[k], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_P){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_NP){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};

void InstrMatrix_jalr::assign(Matrix& inMatrix_, const MatrixTester& environment_){

        for(int i=0; i<inMatrix_.getNumRows(); i++){
            for(int j=0; j<inMatrix_.getNumCols(); j++){
                // TIMING VARIABLES
                if(i<NUM_TIME_VARS){
                    // Assigne timing-variable sub-matrix
                    if(j<NUM_TIME_VARS){
                        inMatrix_(i,j) = timeVarMatrix[i][j];
                    }
                    
                    // Assigne RS1 sub-vector
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = rs1Vector[i];
                    }

                    // Assigne PC (in connector) sub-vector
                    else if(j==IN_CON_COL_PC){
                        inMatrix_(i,j) = pcVector[i];
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }
                }

                else if(i == NUM_TIME_VARS + environment_.getRd()){

                    // Assigen rd sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = rdVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1];
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_RD][CROSS_ID_PC];
                    }

                    else if(j == NUM_TIME_VARS + environment_.getRd()){
                        inMatrix_(i,j) = -1; // TODO: This is not required. All other elements are set to -1 anyway!
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }


                }

                else if(i == OUT_CON_COL_PC_P){

                    // Assigne pc_p sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_pVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS1];
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_P){
                        inMatrix_(i,j) = -1; // TODO: This is not required. All other elements are set to -1 anyway!
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else if(i == OUT_CON_COL_PC_NP){

                    // Assigne pc_np sub-vector
                    if(j < NUM_TIME_VARS){
                        inMatrix_(i,j) = pc_npVector[j];
                    }

                    // Assigne connector-crossing
                    else if(j == (NUM_TIME_VARS + environment_.getRs1())){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS1];
                    }
                    else if(j == IN_CON_COL_PC){
                        inMatrix_(i,j) = conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_PC];
                    }
                    else if(j == OUT_CON_COL_PC_NP){
                        inMatrix_(i,j) = -1;
                    }

                    else{
                        inMatrix_(i,j) = -1;
                    }

                }

                else{
                    if(i==j){
                        inMatrix_(i,j) = 0;
                    }
                    else{
                        inMatrix_(i,j) = -1;
                    }   
                }
            }
        }

};

void InstrMatrix_jalr::mpMultiply(Matrix& bbMatrix_, const MatrixTester& environment_){

    // TODO: Replace getNumCols + getNumRows with fixed (CV32E40P specific size?). Or at least make sure to imply that matrices must be NxN!
        
    for(int j=0; j < bbMatrix_.getNumCols(); j++){
            
        // Compute results and store in tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                int64_t res = -1;
                for(int k=0; k < bbMatrix_.getNumRows(); k++){

                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(timeVarMatrix[i][k], bbMatrix_(k,j))); // TODO: Move the mpMul function out of the class so it is generally accesable
                    }

                    // TODO: Use else-if!
                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(rs1Vector[i], bbMatrix_(k,j)));
                    }

                }
                tempCol[i] = res;
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(rdVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_RD][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_P){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_pVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_P][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

            if(i == OUT_CON_COL_PC_NP){
                int64_t res = -1;
                for (int k=0; k < bbMatrix_.getNumRows(); k++){
                
                    if(k < NUM_TIME_VARS){
                        res = std::max(res, bbMatrix_.mpMul(pc_npVector[k], bbMatrix_(k,j)));
                    }

                    if(k == NUM_TIME_VARS + environment_.getRs1()){
                        res = std::max(res, bbMatrix_.mpMul(conCrossMatrix[CROSS_ID_PC_NP][CROSS_ID_RS1], bbMatrix_(k,j)));
                    }
                
                }
                tempCol[i] = res;
            }

        }

        // Assign tempCol
        for(int i=0; i < bbMatrix_.getNumRows(); i++){

            if(i < NUM_TIME_VARS){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == NUM_TIME_VARS + environment_.getRd()){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_P){
                bbMatrix_(i,j) = tempCol[i];
            }

            if(i == OUT_CON_COL_PC_NP){
                bbMatrix_(i,j) = tempCol[i];
            }

        }
    }
};