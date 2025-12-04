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
#include <string>
#include <vector> //TODO: Try-out. Still required
#include <algorithm> //TODO: Try-out. Still required

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

void BasicBlock::createFunc(void)
{
    bool rowHandled[38] = {false};

    std::string code_upShifted = "";
    std::string code_equivalent = "";

    bool isUsedForEquivalent[38] = {false};
    for(int i=(matrix->getNumRows()-1); i>=0; i--){

        // Check if row is unit-row, i.e. value unchanged
        if(rowIsUnchanged(i)){
            rowHandled[i] = true;
            continue;
        }

        // Check if row has an equivalent
        for(int ii=i-1; ii>=0; ii--){
            if(rowsIsEquivalent(i, ii)){
                rowHandled[i] = true;
                isUsedForEquivalent[ii] = true;
                std::string line_equivalent = "arr[" + std::to_string(i) + "] = arr[" + std::to_string(ii) + "];\n";
                if(isUsedForEquivalent[i]){
                    code_equivalent = line_equivalent + code_equivalent;
                }
                else{
                    code_equivalent += line_equivalent;
                }
                break;
            }
        }
    }

    // Check if row is up-shifted
    bool isUsedForUpShift[38] = {false};
    for(int i=0; i<matrix->getNumRows(); i++){
        if(rowHandled[i]) continue;
        for(int ii=0; ii<matrix->getNumRows(); ii++){
            if(rowHandled[ii] | (i==ii)) continue;
            if(rowsIsUpShifted(i, ii)){
                isUsedForUpShift[ii] = true;
                int upShift = getShift(i, ii);
                rowHandled[i] = true;
                std::string line_upShifted = "arr[" + std::to_string(i) + "] = arr[" + std::to_string(ii) + "] + " + std::to_string(upShift) + ";\n";
                if(isUsedForUpShift[i]){
                    code_upShifted = line_upShifted + code_upShifted; // Append at the begining
                }
                else{
                    code_upShifted += line_upShifted; // Append at the end
                }
                break;
            }
        }
    }

    // Handle dim-shifted rows
    int remainingRowCnt = 0;
    for(int i=0; i<matrix->getNumRows(); i++){
        if(!rowHandled[i]) remainingRowCnt++;
    }

    struct RowInfo{
        int idx;
        int dim;
    };
    std::vector<RowInfo> rows;

    for(int i=0; i<matrix->getNumRows(); i++){
        if(rowHandled[i]) continue;
        int dimCnt = getDimCnt(i);
        rows.push_back({i, dimCnt});
    }

    std::sort(rows.begin(), rows.end(),
        [](const RowInfo& a, const RowInfo& b){
            return a.dim > b.dim;
    });

    std::string code_dimShifted = "";
    std::string code_dimShifted_assign = "";
    for(int i=0; i<rows.size()-1; i++){
        if(rowHandled[rows[i].idx]) continue;

        for(int ii=i+1; ii<rows.size(); ii++){
            if(rowIsDimShifted(rows[i].idx, rows[ii].idx)){
                int shift = getShift(rows[i].idx, rows[ii].idx);
                int dimDiff = getDimCnt(rows[i].idx) - getDimCnt(rows[ii].idx);
                auto dims = getDimsCompare(rows[i].idx, rows[ii].idx);
                std::string line_dimShifted = "int n_" + std::to_string(rows[i].idx) + " = ";
                line_dimShifted += "MAX" + std::to_string(dimDiff + 1) + "(";
                line_dimShifted += "n_" + std::to_string(rows[ii].idx) + " + " + std::to_string(shift);
                for(int dim_i : dims){
                    line_dimShifted += ", arr[" + std::to_string(dim_i) + "] + " + std::to_string((*matrix)(rows[i].idx, dim_i));
                }
                line_dimShifted += ");\n";
                code_dimShifted = line_dimShifted + code_dimShifted;
                code_dimShifted_assign += "arr[" + std::to_string(rows[i].idx) + "] = n_" + std::to_string(rows[i].idx) + ";\n";
                rowHandled[rows[i].idx] = true;
                break;
            }
        }
    }

    // Handle un-handled row
    std::string code_unique = "";
    std::string code_unique_assign = "";
    bool handledUniqueRow = false; // TODO: For debug/trouble shooting
    for(int i=0; i<matrix->getNumRows(); i++){
        if(!rowHandled[i]){
            code_unique += "int n_" + std::to_string(i) + " = ";
            code_unique += "MAX" + std::to_string(getDimCnt(i)) + "(";
            auto dims = getDims(i);
            bool isFirst = true;
            for(int dim_i : dims){
                if(isFirst){
                    isFirst = false;
                }
                else{
                    code_unique += ", ";
                }
                code_unique += "arr[" + std::to_string(dim_i) + "] + " + std::to_string((*matrix)(i, dim_i));
            }
            code_unique += ");\n";
            code_unique_assign += "arr[" + std::to_string(i) + "] = n_" + std::to_string(i) + ";\n";

            if(!handledUniqueRow) handledUniqueRow = true;
            else std::cout << "MORE THAN ONE UNIQUE ROW....THIS IS A PROBLEM!!!" << std::endl;
        }
    }

    // Put code together
    code = "";
    code += "#include \"MyHeader.h\"\n";
    code += "void func_" + std::to_string(id) + "(int arr[38]){\n";
    code += code_unique;
    code += code_dimShifted;
    code += code_dimShifted_assign;
    code += code_unique_assign;
    code += code_upShifted;
    code += code_equivalent;
    code += "}\n";

    func = jitCompiler->compileFunction(code, id);
}

JITFuncType BasicBlock::getFunc(void)
{
    return func;
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

int BasicBlock::getShift(int row_1_, int row_2_)
{
    int shift = -1;
    for(int j=0; j<matrix->getNumCols(); j++){
        if(((*matrix)(row_1_,j) != -1) & ((*matrix)(row_2_,j) != -1)){
            shift = (*matrix)(row_1_,j) - (*matrix)(row_2_,j);
            break;
        }
    }
    return shift;
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

int BasicBlock::getDimCnt(int row_)
{
    int dimCnt = 0;

    for(int j=0; j<matrix->getNumCols(); j++){
        if((*matrix)(row_,j) != -1){
            dimCnt++;
        }
    }

    return dimCnt;
}

std::vector<int> BasicBlock::getDims(int row_)
{
    std::vector<int> res;
    for(int j=0; j<matrix->getNumCols(); j++){
        if((*matrix)(row_, j) != -1){
            res.push_back(j);
        }
    }
    return res;
}

std::vector<int> BasicBlock::getDimsCompare(int row_1_, int row_2_)
{
    std::vector<int> res;

    for(int j=0; j<matrix->getNumCols(); j++){
        if(((*matrix)(row_1_,j) != -1) & ((*matrix)(row_2_,j) == -1)){
            res.push_back(j);
        }
    }
    return res;
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
        }

        // If BB seen for first time, build up BB-Object
        if(!knownBB){
            updateBBMatrix();
            uniqueInstrCnt++;
        }

        // Check if BB-End is reached
        resolveBrPrediction();
        firstBBInstr = false;
    }

}

void MatrixTester::finalize(void)
{
    
    // ENABLE FOR PERF.EST BASED ON MAX-PLUS-MATRIX
    /*auto x = std::make_unique<Matrix>(37,1);
    auto y = std::make_unique<Matrix>(38,1);

    for(size_t i=0; i<37; i++){
        (*x)(i,0) = 0;
    }

    while(!bbQueue.empty()){
        auto bb = bbQueue.front();
        y->mpProduct(*(bb->matrix),*x);

        for(size_t i=0; i<36; i++){
            (*x)(i,0) = (*y)(i,0);
            (*x_2)(i,0) = (*y_2)(i,0);
        }

        bbQueue.pop();

        if(!bbQueue.empty()){
            bool mispredicted = mispredictedQueue_maxplus.front();
            mispredictedQueue_maxplus.pop();
            if(mispredicted){
                (*x)(36,0) = (*y)(37,0);
            }
            else{
                (*x)(36,0) = (*y)(36,0);
            }
        }

    }*/

    int cnt = 0;
    int data[38] = {0};
    while(!bbFuncQueue.empty()){
        auto func = bbFuncQueue.front();
        func(data);
        bbFuncQueue.pop();

        if(!bbFuncQueue.empty()){
            bool mispredicted = mispredictedQueue.front();
            mispredictedQueue.pop();
            if(mispredicted){
                data[36] = data[37];
            }
        }
    }


    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    //std::cout << "Estimated cycles (Max-Plus): " << std::max((*x)(2,0),(*x)(3,0)) << std::endl;
    std::cout << "Estimated cycles (JIT-Func): " << std::max(data[2],data[3]) << std::endl;
    std::cout << "Number of counted instructions: " << globalInstrCnt << std::endl;
    std::cout << "Number of counted basic blocks: " << globalBBCnt << std::endl;
    std::cout << "Number of unique instructions: " << uniqueInstrCnt << std::endl;
    std::cout << "Number of unique basic blocks: " << uniqueBBCnt << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
}

bool MatrixTester::isBranchInstr(void)
{
    uint64_t grType = getTypeId();
    return (grType == 10 || grType == 11 || grType == 12 || grType == 13);
}

void MatrixTester::getCurrentBB(void)
{
    curPc = ch_pc_ptr[curInstrIdx];
    if(bbMap.find(curPc) != bbMap.end()){
        knownBB = true;
    }
    else{
        bbMap.emplace(curPc, std::make_unique<BasicBlock>(uniqueBBCnt));
        uniqueBBCnt++;
    }
    curBB = bbMap[curPc].get();

    // ENABLE FOR PERF.EST. BASED ON MAX-PLUS-MATRIX
    //bbQueue.push(curBB);
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
            curBB->createFunc();
        }
        bbFuncQueue.push(curBB->getFunc());

        prevBrTarget = ch_brTarget_ptr[curInstrIdx];

        activeBB = false;
        knownBB = false;
    }
}