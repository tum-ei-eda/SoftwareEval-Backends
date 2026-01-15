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
#include <iomanip>
#include <fstream> // TODO: DEBUG
#include <string>
#include <vector> //TODO: Try-out. Still required?
#include <algorithm> //TODO: Try-out. Still required?
#include <array>

#include "JITCompiler.h"

void NodeTable::insert(Matrix& bbMatrix_, int rowIdx_){
    
    // Check if row is unit row. If it is, skip insert for this row
    bool isUnitRow = true;
    for(int j=0; j<bbMatrix_.getNumCols(); j++){
        if(j == rowIdx_){
            if(bbMatrix_(rowIdx_,j) != 0){
                isUnitRow = false;
                break;
            }
        }
        else{
            if(bbMatrix_(rowIdx_, j) != -1){
                isUnitRow = false;
                break;
            }
        }
    }
    if(isUnitRow) return;
    
    // Create a new node element
    Node node;
    node.index = rowIdx_;
    for(int j=0; j<bbMatrix_.getNumCols(); j++){
        node.coeffVector[j] = bbMatrix_(rowIdx_,j); // TODO: Possible to avoid this copy? Point to matrix?
    }

    // If the table is still empty, add node and return
    if(table.empty()){
        setBaseExpression(node);
        table.push_front(node);
        return;
    }

    for(auto rit = table.rbegin(); rit != table.rend(); ++rit){

        if(isIdentical(node, *rit)){
            node.expression = rit->getReference();
            node.assignNode = true;
            table.insert(rit.base(), node);
            return;
        }

        auto res = checkConstOffset(node, *rit);
        if(res.constOffset){
            if(res.offset > 0){
                node.expression = rit->getReference() + addConstStr(res.offset);
                node.offsetNode = true;
                table.insert(rit.base(), node);
                return;
            }
            else if(res.offset < 0){
                if(!rit->assignNode && !rit->offsetNode){
                    rit->expression = node.getReference() + addConstStr(res.offset*(-1));
                    rit->offsetNode = true;
                }   
            }
        }

        auto res2 = checkDimShift(node, *rit);
        if(res2.dimExtended){
            if(res2.dimExtended_a){ // Current node has more dimensions than *it node
                node.expression = "MAX" + std::to_string(res2.dimVector.size() + 1) + "(";
                node.expression += rit->getReference() + addConstStr(res2.offset);
                for(const auto& dim_i : res2.dimVector){
                    node.expression += ", " + inArrName + "[" + std::to_string(dim_i) + "]" + addConstStr(node.coeffVector[dim_i]);
                }
                node.expression += ")";
                node.dimShiftNode = true;
                node.dimShiftCnt = res2.dimVector.size();
                table.insert(rit.base(), node);
                return;
            }
            else if(res2.dimExtended_b){ // *it node has more dimensions than current node
                if(!rit->assignNode && !rit->offsetNode && (!rit->dimShiftNode || (rit->dimShiftCnt > res2.dimVector.size()))){
                    rit->expression = "MAX" + std::to_string(res2.dimVector.size() + 1) + "(";
                    rit->expression += node.getReference() + addConstStr(res2.offset*(-1));
                    for(const auto& dim_i : res2.dimVector){
                        rit->expression += ", " + inArrName + "[" + std::to_string(dim_i) + "]" + addConstStr(rit->coeffVector[dim_i]);
                    }
                    rit->expression += ")";
                    rit->dimShiftNode = true;
                    rit->dimShiftCnt = res2.dimVector.size();
                }
            }
        }

    }

    // Inster if row cannot be expressed as any existing node
    setBaseExpression(node);
    table.push_front(node);
}

std::string NodeTable::getCode(void){  
    std::string nodeCompute = "";
    std::string nodeAssign = "";
    for(auto& node_i : table){

        // TODO: Reconsider if we can avoid defining variables that are purely assigned / copied. If not, remove assignOnly flag!

        //nodeCompute += "int t_" + std::to_string(node_i.index) + " = " + node_i.expression + ";\n";
        //nodeAssign += outArrName + "[" + std::to_string(node_i.index) + "] = t_" + std::to_string(node_i.index) + ";\n";

        if(node_i.assignNode){
            nodeAssign += outArrName + "[" + std::to_string(node_i.index) + "] = " + node_i.expression + ";\n";
        }
        else{
            nodeCompute += "int t_" + std::to_string(node_i.index) + " = " + node_i.expression + ";\n";
            nodeAssign += outArrName + "[" + std::to_string(node_i.index) + "] = t_" + std::to_string(node_i.index) + ";\n";
        }
    }
    return nodeCompute + nodeAssign;
}

void NodeTable::setBaseExpression(Node& node_){
    std::string exps = "";
    int coeffCnt = 0;
    for(int i=0; i<NUM_COEFFS; i++){
        if(node_.coeffVector[i] != -1){
            if(coeffCnt != 0){
                exps += ", ";
            }
            exps += inArrName + "[" + std::to_string(i) + "] + " + std::to_string(node_.coeffVector[i]);
            coeffCnt++;
        }
    }   
    exps = "MAX" + std::to_string(coeffCnt) + "(" + exps + ")";
    node_.expression = exps;
}

bool NodeTable::isIdentical(const Node& nodeA_, const Node& nodeB_){
    for(int i=0; i<NUM_COEFFS; i++){
        if(nodeA_.coeffVector[i] != nodeB_.coeffVector[i]){
            return false;
        }
    }
    return true;
}

NodeTable::OffsetResult NodeTable::checkConstOffset(const Node& nodeA_, const Node& nodeB_){
    
    OffsetResult res;
    res.constOffset = false;
    
    int prevOffset = 0;
    bool firstOffset = true;

    for(int i=0; i<NUM_COEFFS; i++){
        if(nodeA_.coeffVector[i] == -1){
            if(nodeB_.coeffVector[i] != -1) return res;
            continue; // both coeffs are -1 -> ignore
        }
        else{
            if(nodeB_.coeffVector[i] == -1) return res;

            res.offset = nodeA_.coeffVector[i] - nodeB_.coeffVector[i];
            if(firstOffset){
                firstOffset = false;
            }
            else{
                if(prevOffset != res.offset) return res;
            }
            prevOffset = res.offset;
        }
    }

    res.constOffset = true;
    return res;

}

NodeTable::DimResult NodeTable::checkDimShift(const Node& nodeA_, const Node& nodeB_){
    DimResult res;
    res.dimExtended = false;

    bool firstOffset = true;
    int prevOffset = 0;

    for(int i=0; i<NUM_COEFFS; i++){
    
        if(nodeA_.coeffVector[i] == -1){
            if(nodeB_.coeffVector[i] != -1){
                res.dimExtended_b = true;
                res.dimVector.push_back(i);
            }
        }

        else{ // nodeA_.coeffVector[i] != -1
            if(nodeB_.coeffVector[i] == -1){
                res.dimExtended_a = true;
                res.dimVector.push_back(i);
            }

            else{
                res.offset = nodeA_.coeffVector[i] - nodeB_.coeffVector[i];
                if(firstOffset){
                    firstOffset = false;
                }
                else if(prevOffset != res.offset) return res;
                prevOffset = res.offset;
            }
        }

        if(res.dimExtended_a && res.dimExtended_b) return res;
    }

    res.dimExtended = res.dimExtended_a || res.dimExtended_b;
    return res;
}

void BasicBlock::createFunc(Matrix& bbMatrix_){
    std::string arrName = "arr";

    auto nodeTab = std::make_unique<NodeTable>(arrName, arrName);

    for(int i=0; i<bbMatrix_.getNumRows(); i++){
        nodeTab->insert(bbMatrix_, i);
    }

    // TODO: Need to make the array size dependent on the current architecture!
    std::string c = "";
    c += "#include \"MyHeader.h\"\n";
    c += "void func_" + std::to_string(id) + "(int " + arrName + "[39]){\n";
    c += nodeTab->getCode();
    c += "}\n";

    func = jitCompiler->compileFunction(c, id);

}

JITFuncType BasicBlock::getFunc(void){
    return func;
}

void MatrixTester::connectChannel(Channel* channel_){
  // Connect own pointers
  ch_typeId_ptr = channel_->typeId;
  ch_instrCnt_ptr = &(channel_->instrCnt);

  CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
  ch_pc_ptr = channel->pc;
  ch_rd_ptr = channel->rd;
  ch_rs1_ptr = channel->rs1;
  ch_rs2_ptr = channel->rs2;
  ch_brTarget_ptr = channel->brTarget;

  ch_isBranch_ptr = channel->isBranch;
}

void MatrixTester::initialize(void){
  std::cout << "MatrixTester initialized!" << std::endl;
}

void MatrixTester::execute(void){

    int instrCnt = *ch_instrCnt_ptr;

    for(curInstrIdx=0; curInstrIdx < instrCnt; curInstrIdx++){
        globalInstrCnt++;

        // Check if new BB starts
        if(!activeBB){
            activeBB = true;
            firstBBInstr = true;
            globalBBCnt++;
            getCurrentBB();

            // Check if BB was mispredicted
            if(firstBB){

                firstBB = false;
            
                mispredictedBuffer[0][bufferCnt] = true;
                mispredictedBuffer[1][bufferCnt] = true;
                mispredictedBuffer[2][bufferCnt] = true;
                mispredictedBuffer[3][bufferCnt] = true;

                mispredictedBuffer[4][bufferCnt] = true;
            }
            else{
                
                mispredictedBuffer[0][bufferCnt] = true;
                mispredictedBuffer[1][bufferCnt] = (curPc == prevBrTarget);
                mispredictedBuffer[2][bufferCnt] = !(curPc == prevBrTarget);
                mispredictedBuffer[3][bufferCnt] = (((curPc == prevBrTarget) && (curPc > prevBrPc)) || ((curPc != prevBrTarget) && (prevBrTarget < prevBrPc)));
                
                mispredictedBuffer[4][bufferCnt] = brPredModel.isMispredicted(ch_pc_ptr[curInstrIdx]);
            }
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

void MatrixTester::finalize(void){
    
    /*int data[39] = {0};
    while(!bbFuncQueue.empty()){
        auto func = bbFuncQueue.front();
        func(data);
        bbFuncQueue.pop();

        if(!bbFuncQueue.empty()){
            bool mispredicted = mispredictedQueue.front();
            mispredictedQueue.pop();
            if(mispredicted){
                data[36] = data[38];
            }
            else{
                data[36] = data[37];
            }
        }

    }*/

    updatePerformanceData();

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    //std::cout << "Estimated cycles: " << std::max(performanceData[2],performanceData[3]) << std::endl;
    
    //std::cout << "Estimated cycles (No Br.Pred.): " << std::max(performanceData_noPred[2],performanceData_noPred[3]) << std::endl;
    //std::cout << "Estimated cycles (Static: NT): " << std::max(performanceData_staNT[2],performanceData_staNT[3]) << std::endl;
    //std::cout << "Estimated cycles (Static: T): " << std::max(performanceData_staT[2],performanceData_staT[3]) << std::endl;
    
    std::cout << "Estimated cycles (No Br.Pred.): " << std::max(performanceData[0][2],performanceData[0][3]) << std::endl;
    std::cout << "Estimated cycles (Static: NT): " << std::max(performanceData[1][2],performanceData[1][3]) << std::endl;
    std::cout << "Estimated cycles (Static: T): " << std::max(performanceData[2][2],performanceData[2][3]) << std::endl;
    std::cout << "Estimated cycles (Static: BwT/FwNT): " << std::max(performanceData[3][2],performanceData[3][3]) << std::endl;
    std::cout << "Estimated cycles (Dynamic: 2-bit): " << std::max(performanceData[4][2],performanceData[4][3]) << std::endl;

    std::cout << "Number of counted instructions: " << globalInstrCnt << std::endl;
    std::cout << "Number of counted basic blocks: " << globalBBCnt << std::endl;
    std::cout << "Number of unique instructions: " << uniqueInstrCnt << std::endl;
    std::cout << "Number of unique basic blocks: " << uniqueBBCnt << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

}

void MatrixTester::getCurrentBB(void){
    curPc = ch_pc_ptr[curInstrIdx];
    if(bbMap.find(curPc) != bbMap.end()){
        knownBB = true;
    }
    else{
        bbMap.emplace(curPc, std::make_unique<BasicBlock>(uniqueBBCnt));
        uniqueBBCnt++;
    }
    curBB = bbMap[curPc].get();
}

void MatrixTester::updateBBMatrix(void){   
    auto instrMatrix = instrMatrixDict->getInstructionMatrix(getTypeId());
    if(firstBBInstr){
        instrMatrix->assign(bbMatrix, *this);
    }
    else{
        instrMatrix->mpMultiply(bbMatrix, *this);
    }
}

void MatrixTester::resolveBrPrediction(void){
    if(isBranchInstr()){

        // Register branch with Branch-Prediction-Models
        prevBrTarget = ch_brTarget_ptr[curInstrIdx];
        prevBrPc = ch_pc_ptr[curInstrIdx];
        brPredModel.registerBranch(prevBrPc, prevBrTarget);

        if(!knownBB){
            curBB->createFunc(bbMatrix);
        }
        //bbFuncQueue.push(curBB->getFunc());
        bbFuncBuffer[bufferCnt] = curBB->getFunc();

        activeBB = false;
        knownBB = false;

        bufferCnt++;
        if(bufferCnt >= 1000){
            updatePerformanceData();
            bufferCnt = 0;
        }
    }
}

void MatrixTester::updatePerformanceData(void){

    for(int i=0; i<5; i++){
        for(int j=0; j < bufferCnt; j++){

            bool mispredicted = mispredictedBuffer[i][j];
            if(mispredicted){
                performanceData[i][36] = performanceData[i][38];
            }
            else{
                performanceData[i][36] = performanceData[i][37];
            }

            auto func = bbFuncBuffer[j];
            func(performanceData[i]);

        }
    }

}