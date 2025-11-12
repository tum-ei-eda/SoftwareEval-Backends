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

#include "MatrixTester.h"

#include "CV32E40P_Channel.h"

#include "Matrix.h"

#include <iostream>
#include <fstream> // TODO: DEBUG

// #include <libtcc.h>
//#include "TCCJIT.h"
#include "JITCompiler.h"

void BasicBlock::setMatrix(const Matrix& other_)
{
    size_t numRows = other_.getNumRows();
    size_t numCols = other_.getNumCols();
    matrix = std::make_unique<Matrix>(numRows, numCols);
    for(size_t i = 0; i < numRows; i++){
        for(size_t j = 0; j < numCols; j++){
            (*matrix)(i,j) = other_(i,j);
        }
    }
}

void BasicBlock::finalize(void)
{
    bool rowHandled[38] = {false}; 
    
    for(int i=(matrix->getNumRows()-1); i>=0; i--){
        
        // Check if row is unit-row, i.e. value unchanged
        if(rowIsUnchanged(i)){
            unchangedCnt++;
            unchangedRows.push(i);
            rowHandled[i] = true;
            continue;
        }

        // Check if row has an equivalent
        for(int ii=i-1; ii>=0; ii--){
            if(rowsIsEquivalent(i, ii)){
                equivalentCnt++;
                equivalentRows.push(i);
                rowHandled[i] = true;
                break;
            }
        }
    }

    for(int i=0; i<matrix->getNumRows(); i++){
        if(rowHandled[i]) continue;
        for(int ii=0; ii<matrix->getNumRows(); ii++){
            if(rowHandled[ii] | (i==ii)) continue;
            if(rowsIsUpShifted(i,ii)){
                upShiftCnt++;
                upShiftRows.push(i);
                rowHandled[i] = true;
                break;
            }
        }
    }

    for(int i=0; i<matrix->getNumRows(); i++){
        if(rowHandled[i]) continue;
        for(int ii=0; ii<matrix->getNumRows(); ii++){
            if(rowHandled[ii] | (i==ii)) continue;
            if(rowIsDimShifted(i,ii)){
                dimShiftCnt++;
                dimShiftRows.push(i);
                rowHandled[i] = true;
                break;
            }
        }
    }

    for(int i=0; i<38; i++){
        if(!rowHandled[i]){
            uniqueCnt++;
            uniqueRows.push(i);
        }
    }

    /*for(int i=(matrix->getNumRows()-1); i>=0; i--){
 
        bool done = false;

        if(rowIsUnchanged(i)){
            unchangedCnt++;
            unchangedRows.push(i);
            continue;
        }

        for(int ii=i-1; ii>=0; ii--){
            if(rowsAreEquivalent(i, ii)){
                equivalentCnt++;
                equivalentRows.push(i);
                done = true;
                break;
            }
        }
        if(done){
            continue;
        }

        for(int ii=i-1; ii>=0; ii--){
            if(rowsAreShifted(i, ii)){
                shiftCnt++;
                shiftRows.push(i);
                break;
            }
        }

    }*/
}

void BasicBlock::analyze(void)
{

    std::cout << "Unchaned rows: ";
    while(!unchangedRows.empty()){
        std::cout << unchangedRows.front() << " | ";
        unchangedRows.pop();
    }
    std::cout << std::endl;

    std::cout << "Equivalent rows: ";
    while(!equivalentRows.empty()){
        std::cout << equivalentRows.front() << " | ";
        equivalentRows.pop();
    }
    std::cout << std::endl;

    std::cout << "Up-Shift rows: ";
    while(!upShiftRows.empty()){
        std::cout << upShiftRows.front() << " | ";
        upShiftRows.pop();
    }
    std::cout << std::endl;

    std::cout << "Dim-Shift rows: ";
    while(!dimShiftRows.empty()){
        std::cout << dimShiftRows.front() << " | ";
        dimShiftRows.pop();
    }
    std::cout << std::endl;

    std::cout << "Unique rows: ";
    while(!uniqueRows.empty()){
        std::cout << uniqueRows.front() << " | ";
        uniqueRows.pop();
    }
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "Num unchanged rows: " << unchangedCnt << std::endl;
    std::cout << "Num equivalent rows: " << equivalentCnt << std::endl;
    std::cout << "Num up-shifted rows: " << upShiftCnt << std::endl;
    std::cout << "Num dim-shifted rows: " << dimShiftCnt << std::endl;
    std::cout << "Num unique rows: " << uniqueCnt << std::endl;

}

bool BasicBlock::rowIsUnchanged(int row_)
{
    for(int j=0; j<matrix->getNumCols(); j++){
        if(j==row_){
            if((*matrix)(row_,j) != 0){
                return false;
            }
        }
        else{
            if((*matrix)(row_,j) != -1){
                return false;
            }
        }
    }
    return true;
}

bool BasicBlock::rowsIsEquivalent(int row_1_, int row_2_){
    for(int j=0; j<matrix->getNumCols(); j++){
        if((*matrix)(row_1_,j) != (*matrix)(row_2_,j)){
            return false;
        }
    }
    return true;
}

bool BasicBlock::rowsIsUpShifted(int row_1_, int row_2_){
    int shift = -1;
    for(int j=0; j<matrix->getNumCols(); j++){
        if((*matrix)(row_1_,j) == -1){
            if((*matrix)(row_2_,j) != -1){
                return false;
            }
        }
        else{
            if((*matrix)(row_2_,j) == -1){
                return false;
            }
            else{
                if(shift == -1){
                    shift = (*matrix)(row_1_,j) - (*matrix)(row_2_,j);
                    if(shift <= 0)
                    {
                        return false;
                    }
                }
                else{
                    if(shift != (*matrix)(row_1_,j) - (*matrix)(row_2_,j)){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

bool BasicBlock::rowIsDimShifted(int row_1_, int row_2_){
    int shift = -1;

    for(int j=0; j<matrix->getNumCols(); j++){
        if((*matrix)(row_1_,j) == -1){
            if((*matrix)(row_2_,j) != -1){
                return false;
            }
        }
        else{
            if((*matrix)(row_2_,j) != -1){
                if(shift == -1){
                    shift = (*matrix)(row_1_,j) - (*matrix)(row_2_,j);
                    if(shift < 0){
                        return false;
                    }
                }
                else{
                    if(shift != (*matrix)(row_1_,j) - (*matrix)(row_2_,j)){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void MatrixTester::connectChannel(Channel* channel_)
{
  // Connect own pointers
  ch_typeId_ptr = channel_->typeId;
  ch_instrCnt_ptr = &(channel_->instrCnt);

  CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
  ch_pc_ptr = channel->pc;
  ch_rd_ptr = channel->rd;
  ch_rs1_ptr = channel->rs1;
  ch_rs2_ptr = channel->rs2;
  ch_brTarget_ptr = channel->brTarget;
}

void MatrixTester::initialize(void)
{
  std::cout << "MatrixTester initialized!" << std::endl;
}

void MatrixTester::execute(void)
{
    
    int instrCnt = *ch_instrCnt_ptr;

    for(curInstrIdx=0; curInstrIdx < instrCnt; curInstrIdx++){
        globalInstrCnt++;

        // Check if new BB starts
        if(!activeBB){
            activeBB = true;
            firstBBInstr = true;
            globalBBCnt++;
            getCurrentBB();
            //auto mapResponse = bbMap.emplace(ch_pc_ptr[curInstrIdx], std::make_unique<BasicBlock>());
            //auto& it = mapResponse.first;
            //bool inserted = mapResponse.second;
            //if(!inserted){
            //    knownBB = true;
            //}
            //else{
            //    uniqueBBCnt++;
            //}
            //curPc = ch_pc_ptr[curInstrIdx];
            //curBB = it->second.get();
            //bbQueue.push(curBB);
        }

        if(!knownBB){
            updateBBMatrix();
            uniqueInstrCnt++;
            //auto instrMatrix = instrMatrixGen->getInstructionMatrix(this); 
            //if(firstBBInstr){
            //    curBB->setMatrix(*instrMatrix);
            //}
            //else{
            //    curBB->matrix->mpMultiply(*instrMatrix);
            //}
            //
            //// DEBUG
            //curBB->update(ch_typeId_ptr[curInstrIdx]);
        }

        // Check if current instruction is a branch/jump (i.e., BB ends)
        resolveBrPrediction();
        //if(isBranchInstr()){
        //
        //    // Resolve BranchPrediction Model
        //    if(firstBB){
        //        firstBB = false;
        //    }
        //    else{
        //        mispredictedQueue.push((curPc == prevBrTarget));
        //    }
        //    
        //    prevBrTarget = ch_brTarget_ptr[curInstrIdx];
        //    
        //    activeBB = false;
        //    knownBB = false;
        //}
        firstBBInstr = false;
    }

}

void MatrixTester::finalize(void)
{
    /*
    auto x = std::make_unique<Matrix>(37,1);
    auto y = std::make_unique<Matrix>(38,1);
    
    for(size_t i=0; i<37; i++){
        (*x)(i,0) = 0;
    }

    while(!bbQueue.empty()){
        auto bb = bbQueue.front();
        y->mpProduct(*(bb->matrix),*x);

        for(size_t i=0; i<36; i++){
            (*x)(i,0) = (*y)(i,0);
        }

        bbQueue.pop();
        
        if(!bbQueue.empty()){
            bool mispredicted = mispredictedQueue.front();
            mispredictedQueue.pop();
            if(mispredicted){
                (*x)(36,0) = (*y)(37,0);
            }
            else{
                (*x)(36,0) = (*y)(36,0);
            }
        }

    }
    */

    int popCnt = 0;
    int unchangedCnt = 0;
    int equivalentCnt = 0;
    int upShiftCnt = 0;
    int dimShiftCnt = 0;
    int uniqueCnt = 0;

    int problemCnt_1 = 0;
    int problemCnt_2 = 0;

    while(!bbQueue.empty())
    {
        
        auto bb = bbQueue.front();

        unchangedCnt += bb->unchangedCnt;
        equivalentCnt += bb->equivalentCnt;
        upShiftCnt += bb->upShiftCnt;
        dimShiftCnt += bb->dimShiftCnt;
        uniqueCnt += bb->uniqueCnt;

        if(bb->uniqueCnt < 1){
            problemCnt_1++;
        }
        else if(bb->uniqueCnt > 1){
            problemCnt_2++;
            if(problemCnt_2 < 2){
                std::cout << "*****************************************************************" << std::endl;
                bb->matrix->print();
                std::cout << "\n" << std::endl;
                bb->analyze();
                std::cout << "*****************************************************************" << std::endl;
            }
        }

        /*if(popCnt < 3){
            std::cout << "*****************************************************************" << std::endl;
            bb->matrix->print();
            std::cout << "\n" << std::endl;
            bb->analyze();
            std::cout << "*****************************************************************" << std::endl;
        }*/
        
        popCnt++;
        bbQueue.pop();
    }


    /* START TCC TEST AREA*/

    // TCCState *tcc = tcc_new();
    // if(!tcc){
    //     std::cerr << "Failed to create TCC context" << std::endl;
    // }

    /* END TCC TEST AREA*/

    auto jitComp = new JITCompiler();
    jitComp->proofOfLife();

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Number of BBs: " << popCnt << std::endl;
    std::cout << "Avg. unchanged rows: " << (float(unchangedCnt) / float(popCnt)) << std::endl;
    std::cout << "Avg. equivalent rows: " << (float(equivalentCnt) / float(popCnt)) << std::endl;
    std::cout << "Avg. up-shifted rows: " << (float(upShiftCnt) / float(popCnt)) << std::endl;
    std::cout << "Avg. dim-shifted rows: " << (float(dimShiftCnt) / float(popCnt)) << std::endl;
    std::cout << "Avg. unique rows: " << (float(uniqueCnt) / float(popCnt)) << std::endl;
    std::cout << "\nProblem_1 cnt: " << problemCnt_1 << std::endl;
    std::cout << "Problem_2 cnt: " << problemCnt_2 << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    //std::cout << "Estimated cycles: " << std::max((*x)(2,0),(*x)(3,0)) << std::endl;
    std::cout << "Pop count: " << popCnt << std::endl;
    std::cout << "Number of counted instructions: " << globalInstrCnt << std::endl;
    std::cout << "Number of counted basic blocks: " << globalBBCnt << std::endl;
    std::cout << "Number of unique instructions: " << uniqueInstrCnt << std::endl;
    std::cout << "Number of unique basic blocks: " << uniqueBBCnt << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
}

/*
uint64_t MatrixTester::getGrTypeId(void)
{
    uint64_t id = getTypeId();
    
    // Arith_Ra_Rb
    //if(id == 0 || id == 1 || id == 2 || id == 3 || id == 4  || id == 5 || id == 6 || id == 7 || id == 8 || id == 9){
    if(id >= 0 && id < 10){
        return 1;
    }
    // Arith_Ra
    //else if(id == 10 || id == 11 || id == 12 || id == 13 || id == 14 || id == 15 || id == 16 || id == 17 || id == 18){
    if(id >= 10 && id < 19){
        return 2;
    }
    // Arith_X
    //else if(id == 19 || id == 20){
    if(id >= 19 && id < 21){
        return 3;
    }
    // Mul_Ra_Rb
    else if(id == 21){
        return 4;
    }
    // MulH_Ra_Rb
    //else if(id == 22 || id == 23 || id == 24){
    if(id >= 22 && id < 25){
        return 5;
    }
    // Csr_Ra
    //else if(id == 29 || id == 30 || id == 31){
    if(id >= 29 && id < 32){
        return 6;
    }
    // Csr_X
    //else if(id == 32 || id == 33 || id == 34){
    if(id >= 32 && id < 35){
        return 7;
    }
    //Store
    //else if(id == 35 || id == 36 || id == 37){
    if(id >= 35 && id < 38){
        return 8;
    }
    // Load
    //else if(id == 38 || id == 39 || id == 40 || id == 41 || id == 42){
    if(id >= 38 && id < 43){
        return 9;
    }
    // Branch_Ra_Rb
    //else if(id == 43 || id == 44 || id == 45 || id == 46 || id == 47 || id == 48){
    if(id >= 43 && id < 49){
        return 10;
    }
    //ExCtrl (mret, ecall)
    //else if(id == 49 | id == 50){
    if(id >= 49 && id < 51){
        return 11;
    }
    // jal
    else if(id == 52)
    {
        return 12;
    }
    // jalr
    else if(id == 53)
    {
        return 13;
    }

    return 0; // Default
}
*/

bool MatrixTester::isBranchInstr(void)
{
    uint64_t grType = getTypeId();
    return (grType == 10 || grType == 11 || grType == 12 || grType == 13);
}

void MatrixTester::getCurrentBB(void)
{
    curPc = ch_pc_ptr[curInstrIdx];
    auto mapResponse = bbMap.emplace(curPc, std::make_unique<BasicBlock>());
    auto& it = mapResponse.first;
    bool inserted = mapResponse.second;
    if(!inserted){
        knownBB = true;
    }
    else{
        uniqueBBCnt++;
    }
    curBB = it->second.get();
    bbQueue.push(curBB);
}

void MatrixTester::updateBBMatrix(void)
{
    auto instrMatrix = instrMatrixGen->getInstructionMatrix(this); 
    if(firstBBInstr){
        curBB->setMatrix(*instrMatrix);
    }
    else{
        curBB->matrix->mpMultiply(*instrMatrix);
    }
    
    // DEBUG
    curBB->update(ch_typeId_ptr[curInstrIdx]);
}

void MatrixTester::resolveBrPrediction(void)
{
    if(isBranchInstr()){
        // Resolve BranchPrediction Model
        if(firstBB){
            firstBB = false;
        }
        else{
            mispredictedQueue.push((curPc == prevBrTarget));
        }
        
        if(!knownBB){
            curBB->finalize();
        }

        prevBrTarget = ch_brTarget_ptr[curInstrIdx];
        
        activeBB = false;
        knownBB = false;
    }
}