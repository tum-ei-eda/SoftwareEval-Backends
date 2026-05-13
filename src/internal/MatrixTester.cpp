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
    
    //return getCode_CVA6_pyGen();

    // TODO: Re-enable code below
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

std::string NodeTable::getCode_CVA6_pyGen(void){

    std::string code = "";

    //code += "// Sub rows\n";
    code += "int t0 = temp[0];\n";
    code += "int x_2 = max2(2+arr[4], t0+arr[10]);\n";
    code += "x_2 = max2(x_2, 2+arr[13]);\n";
    code += "x_2 = max2(x_2, 1+arr[14]);\n";
    code += "x_2 = max2(x_2, arr[15]);\n";
    code += "x_2 = max2(x_2, arr[26]);\n";
    code += "int t1 = temp[1];\n";
    code += "int t2 = temp[2];\n";
    code += "int t3 = temp[3];\n";
    code += "int x_4 = max2(t1+arr[0], t2+arr[1]);\n";
    code += "x_4 = max2(x_4, t3+arr[2]);\n";
    code += "x_4 = max2(x_4, 1+arr[3]);\n";
    code += "x_4 = max2(x_4, arr[4]);\n";
    code += "x_4 = max2(x_4, t2+arr[12]);\n";
    code += "x_4 = max2(x_4, arr[13]);\n";
    code += "int t4 = temp[4];\n";
    code += "int t5 = temp[5];\n";
    code += "int t6 = temp[6];\n";
    code += "int t7 = temp[7];\n";
    code += "int t8 = temp[8];\n";
    code += "int x_5 = max2(t4+arr[0], t5+arr[1]);\n";
    code += "x_5 = max2(x_5, t6+arr[2]);\n";
    code += "x_5 = max2(x_5, t7+arr[3]);\n";
    code += "x_5 = max2(x_5, t8+arr[11]);\n";
    code += "x_5 = max2(x_5, t5+arr[12]);\n";
    code += "int t9 = temp[9];\n";
    code += "int t10 = temp[10];\n";
    code += "int t11 = temp[11];\n";
    code += "int t12 = temp[12];\n";
    code += "int t13 = temp[13];\n";
    code += "int x_6 = max2(t9+arr[4], t9+arr[13]);\n";
    code += "x_6 = max2(x_6, t10+arr[14]);\n";
    code += "x_6 = max2(x_6, t11+arr[15]);\n";
    code += "x_6 = max2(x_6, t12+arr[16]);\n";
    code += "x_6 = max2(x_6, t13+arr[17]);\n";
    code += "x_6 = max2(x_6, 2+arr[18]);\n";
    code += "x_6 = max2(x_6, 2+arr[24]);\n";
    code += "x_6 = max2(x_6, t12+arr[25]);\n";
    code += "x_6 = max2(x_6, t11+arr[26]);\n";
    code += "x_6 = max2(x_6, 1+arr[27]);\n";
    code += "int x_1 = max2(x_5, arr[10] + 1);\n";
    code += "int x_3 = max2(x_5 + 1, arr[4] + 1);\n";
    code += "x_3 = max2(x_3, arr[13] + 1);\n";
    code += "x_3 = max2(x_3, arr[14]);\n";
    code += "int t14 = temp[14];\n";
    code += "int x_7 = max2(x_6, arr[10] + t14);\n";
    code += "x_7 = max2(x_7, arr[19] + 2);\n";
    code += "x_7 = max2(x_7, arr[28] + 2);\n";
    code += "int x_0 = max2(x_1, arr[9]);\n";

    //code += "// Split rows\n";
    code += "int out_0 = x_0;\n";
    code += "int t15 = temp[15];\n";
    code += "int out_1 = max2(x_1 + t15, arr[9] + 1);\n";
    code += "int t16 = temp[16];\n";
    code += "int out_5 = max2(x_1 + t16, x_2);\n";
    code += "int out_6 = x_3;\n";
    code += "int out_7 = x_4;\n";
    code += "int t17 = temp[17];\n";
    code += "int t18 = temp[18];\n";
    code += "int t19 = temp[19];\n";
    code += "int out_27 = max2(x_5 + t17, x_6 + 1);\n";
    code += "out_27 = max2(out_27, arr[9] + t18);\n";
    code += "out_27 = max2(out_27, arr[10] + t19);\n";
    code += "out_27 = max2(out_27, arr[19] + 2);\n";
    code += "out_27 = max2(out_27, arr[23] + 2);\n";
    code += "out_27 = max2(out_27, arr[28] + 2);\n";
    code += "int t20 = temp[20];\n";
    code += "int out_28 = max2(x_5 + t20, x_7);\n";

    //code += "// Set rows\n";
    code += "int out_8 = arr[4];\n";
    code += "int out_9 = arr[5];\n";
    code += "int out_10 = arr[6];\n";
    code += "int out_11 = arr[7];\n";
    code += "int out_12 = arr[8];\n";
    code += "int out_23 = arr[19];\n";
    code += "int out_24 = arr[20];\n";
    code += "int out_25 = arr[21];\n";
    code += "int out_26 = arr[22];\n";

    //code += "// Rest rows (Identical, Offset, DimShift)\n";
    code += "int t21 = temp[21];\n";
    code += "int out_2 = out_1 + t21;\n";
    code += "int t22 = temp[22];\n";
    code += "int out_3 = out_1 + t22;\n";
    code += "int out_19 = out_27 - 1;\n";
    code += "int out_20 = out_28 - 1;\n";
    code += "int out_4 = max2(out_1 + t22, arr[4] + 3);\n";
    code += "out_4 = max2(out_4, arr[13] + 3);\n";
    code += "out_4 = max2(out_4, arr[14] + 2);\n";
    code += "out_4 = max2(out_4, arr[15] + 1);\n";
    code += "out_4 = max2(out_4, arr[16]);\n";
    code += "out_4 = max2(out_4, arr[25]);\n";
    code += "out_4 = max2(out_4, arr[26] + 1);\n";
    code += "int out_13 = max2(out_4 + 1, arr[24]);\n";
    code += "int out_15 = max2(out_13 + 2, arr[23] + 1);\n";
    code += "int out_16 = max2(out_6 + 3, arr[15] + 2);\n";
    code += "out_16 = max2(out_16, arr[16] + 1);\n";
    code += "out_16 = max2(out_16, arr[17]);\n";
    code += "out_16 = max2(out_16, arr[25] + 1);\n";
    code += "out_16 = max2(out_16, arr[26] + 2);\n";
    code += "int t23 = temp[23];\n";
    code += "int out_18 = max2(out_16 + t23, arr[18] + 1);\n";
    code += "int out_21 = max2(out_18, arr[19]);\n";
    code += "out_21 = max2(out_21, arr[27]);\n";
    code += "out_21 = max2(out_21, arr[28]);\n";
    code += "int out_22 = max2(out_7 + 3, arr[14] + 2);\n";
    code += "out_22 = max2(out_22, arr[15] + 1);\n";
    code += "out_22 = max2(out_22, arr[19]);\n";
    code += "out_22 = max2(out_22, arr[26] + 1);\n";
    code += "out_22 = max2(out_22, arr[28]);\n";
    code += "int out_14 = out_15 - 1;\n";
    code += "int out_17 = out_18 - 1;\n";

    //code += "// Assign results\n";
    code += "arr[0] = out_0;\n";
    code += "arr[1] = out_1;\n";
    code += "arr[5] = out_5;\n";
    code += "arr[6] = out_6;\n";
    code += "arr[7] = out_7;\n";
    code += "arr[27] = out_27;\n";
    code += "arr[28] = out_28;\n";
    code += "arr[8] = out_8;\n";
    code += "arr[9] = out_9;\n";
    code += "arr[10] = out_10;\n";
    code += "arr[11] = out_11;\n";
    code += "arr[12] = out_12;\n";
    code += "arr[23] = out_23;\n";
    code += "arr[24] = out_24;\n";
    code += "arr[25] = out_25;\n";
    code += "arr[26] = out_26;\n";
    code += "arr[2] = out_2;\n";
    code += "arr[3] = out_3;\n";
    code += "arr[19] = out_19;\n";
    code += "arr[20] = out_20;\n";
    code += "arr[4] = out_4;\n";
    code += "arr[13] = out_13;\n";
    code += "arr[15] = out_15;\n";
    code += "arr[16] = out_16;\n";
    code += "arr[18] = out_18;\n";
    code += "arr[21] = out_21;\n";
    code += "arr[22] = out_22;\n";
    code += "arr[14] = out_14;\n";
    code += "arr[17] = out_17;\n";

    return code;

}

std::string NodeTable::getCode_CVA6(void){
    // TODO: Testcode to check complexity of JIT-Functions for CVA6-like core

    std::string compute = "";
    std::string assign = "";

    /*DIRECT SETS*/
    compute += "int o_10 = arr[4];\n" ;
    compute += "int o_11 = arr[5];\n" ;
    compute += "int o_12 = arr[6];\n" ;
    compute += "int o_25 = arr[19];\n" ;
    compute += "int o_26 = arr[20];\n" ;

    /*COMPLEX*/
    // o_0
    compute += "int t_1 = d[0] + d[3] + d[5] + d[6];\n" ; // adfg
    compute += "int t_2 = d[0] + d[3] + d[5];\n" ; // adf
    compute += "int t_3 = d[0] + d[3];\n" ; // ad
    compute += "int o_0 = MAX10(2+t_1+arr[0], 1+t_1+arr[1], t_1+arr[2], t_2+arr[3], arr[7], 1+arr[8], 1+d[0]+arr[9], 1+t_3+arr[10], 1+t_2+arr[11], 1+t_1+arr[12]);\n" ;
    //compute += "int o_0 = MAX10(arr[0], arr[1], arr[2], arr[3], arr[7], arr[8], arr[9], arr[10], arr[11], arr[12]);\n" ;
    // o_1
    compute += "int t_4 = t_1 + d[1];\n" ; // abdfg
    compute += "int t_5 = t_2 + d[1];\n" ; // abdf
    compute += "int t_6 = d[0] + d[1];\n" ; // ab
    compute += "int t_7 = t_3 + d[1];\n" ; // abd
    compute += "int o_1 = MAX10(2+t_4+arr[0], 1+t_4+arr[1], t_4+arr[2], t_5+arr[3], 1+arr[7], 1+d[1]+arr[8], 1+t_6+arr[9], 1+t_7+arr[10], 1+t_5+arr[11], 1+t_4+arr[12]);\n" ;
    // o_5
    compute += "int o_5 = MAX17(3+t_4+arr[0], 2+t_4+arr[1], 1+t_4+arr[2], 1+t_5+arr[3], 4+arr[4], 2+d[1]+arr[8], 2+t_6+arr[9], 2+t_7+arr[10], 2+t_5+arr[11], 2+t_4+arr[12], 4+arr[13], 3+arr[14], 2+arr[15], arr[16], arr[24], 1+arr[25], 2+arr[26]);\n";
    // o_6
    compute += "int o_6 = MAX14(3+t_1+arr[0], 2+t_1+arr[1], 1+t_1+arr[2], 1+t_2+arr[3], 3+arr[4], 2+d[0]+arr[9], 2+t_3+arr[10], 2+t_2+arr[11], 2+t_1+arr[12], 3+arr[13], 2+arr[14], 1+arr[15], arr[25], 1+arr[26]);\n" ;
    // o_7
    compute += "int t_8 = d[3] + d[5] + d[6];\n" ; // dfg
    compute += "int t_9 = d[3] + d[5];\n" ; //df
    compute += "int o_7 = MAX12(3+t_8+arr[0], 2+t_8+arr[1], 1+t_8+arr[2], 1+t_9+arr[3], 2+arr[4], 2+d[3]+arr[10], 2+t_9+arr[11], 2+t_8+arr[12], 2+arr[13], 1+arr[14], arr[15], arr[26]);\n" ;
    // o_8
    compute += "int t_10 = d[5] + d[6];\n" ; // fg
    compute += "int o_8 = MAX9(3+t_10+arr[0], 2+t_10+arr[1], 1+t_10+arr[2], 1+d[5]+arr[3], 1+arr[4], 2+d[5]+arr[11], 2+t_10+arr[12], 1+arr[13], arr[14]);\n" ;
    // o_9
    compute += "int o_9 = MAX7(3+d[6]+arr[0], 2+d[6]+arr[1], 1+d[6]+arr[2], 1+arr[3], arr[4], 2+d[6]+arr[12], arr[13]);\n" ;
    // o_19
    compute += "int t_21 = d[0] + d[1] + d[2];\n" ; // abc
    compute += "int t_11 = MAX2(t_21, 2+d[4]);\n" ; // (abc + 2e)
    compute += "int t_12 = t_8 + t_11;\n" ; // dfg(abc + 2e)
    compute += "int t_13 = t_9 + t_11;\n" ; // df(abc + 2e)
    compute += "int t_20 = d[1] + d[2];\n" ; // bc
    //compute += "int d2 = d[2];\n" ;
    //compute += "int d3 = d[3];\n" ;
    //compute += "int d4 = d[4];\n" ;
    //compute += "int o_19 = MAX26(6+t_12+arr[0], 5+t_12+arr[1], 4+t_12+arr[2], 4+t_13+arr[3], 7+d4+arr[4], 5+d2+arr[7], 5+t_20+arr[8], 5+t_21+arr[9], 5+d3+t_11+arr[10], 5+t_13+arr[11], 5+t_12+arr[12], 7+d4+arr[13], 6+d4+arr[14], 5+d4+arr[15], 3+d4+arr[16], 2+d4+arr[17], 2+arr[18], 2+arr[19], 1+arr[21], 2+arr[22], 3+arr[23], 3+d4+arr[24], 4+d4+arr[25], 5+d4+arr[26], 2+arr[27], 2+arr[28]);\n" ; 
    compute += "int o_19 = MAX26(6+t_12+arr[0], 5+t_12+arr[1], 4+t_12+arr[2], 4+t_13+arr[3], 7+d[4]+arr[4], 5+d[2]+arr[7], 5+t_20+arr[8], 5+t_21+arr[9], 5+d[3]+t_11+arr[10], 5+t_13+arr[11], 5+t_12+arr[12], 7+d[4]+arr[13], 6+d[4]+arr[14], 5+d[4]+arr[15], 3+d[4]+arr[16], 2+d[4]+arr[17], 2+arr[18], 2+arr[19], 1+arr[21], 2+arr[22], 3+arr[23], 3+d[4]+arr[24], 4+d[4]+arr[25], 5+d[4]+arr[26], 2+arr[27], 2+arr[28]);\n" ; 
    // o_20
    compute += "int t_14 = MAX2(t_6, 2+d[4]);\n" ; // (ab + 2e)
    compute += "int t_15 = t_8 + t_14;\n" ; // dfg(ab + 2e)
    compute += "int t_16 = t_9 + t_14;\n" ; // df(ab + 2e)
    compute += "int o_20 = MAX24(6+t_15+arr[0], 5+t_15+arr[1], 4+t_15+arr[2], 3+t_16+arr[3], 7+d[4]+arr[4], 5+d[2]+arr[8], 5+t_20+arr[9], 5+d[3]+t_14+arr[10], 5+t_16+arr[11], 5+t_15+arr[12], 7+d[4]+arr[13], 6+d[4]+arr[14], 5+d[4]+arr[15], 3+d[4]+arr[16], 2+d[4]+arr[17], 2+arr[18], 2+arr[19], 1+arr[22], 2+arr[23], 3+d[4]+arr[24], 4+d[4]+arr[25], 5+d[4]+arr[26], 1+arr[27], 2+arr[28]);\n" ;
    // o_21
    compute += "int t_17 = MAX2(d[0], 1+d[4]);\n" ; //(a + 1e)
    compute += "int t_18 = t_8 + t_17;\n" ; // dfg(a + 1e)
    compute += "int t_19 = t_9 + t_17;\n" ; // df(a + 1e)
    compute += "int o_21 = MAX22(6+t_18+arr[0], 5+t_18+arr[1], 4+t_18+arr[2], 4+t_19+arr[3], 6+d[4]+arr[4], 5+d[0]+arr[9], 5+d[3]+t_17+arr[10], 5+t_19+arr[11], 5+t_18+arr[12], 6+d[4]+arr[13], 5+d[4]+arr[14], 4+d[4]+arr[15], 2+d[4]+arr[16], 1+d[4]+arr[17], 1+arr[18], 1+arr[19], 1+arr[23], 2+d[4]+arr[24], 3+d[4]+arr[25], 4+d[4]+arr[26], 1+arr[27], 1+arr[28]);\n" ;

    /*OFFSET + DIM-SHIFT*/
    compute += "int o_2 = o_1 + d[2];\n" ; 
    compute += "int o_3 = o_2 + 1;\n" ;
    compute += "int o_4 = MAX10(o_3, 5+arr[4], 5+arr[13], 4+arr[14], 3+arr[15], 1+arr[16], arr[23], 1+arr[24], 2+arr[25], 3+arr[26]);\n" ;
    compute += "int o_13 = MAX2(o_4, arr[22]);\n" ;
    compute += "int o_14 = MAX2(1+o_13, arr[21]);\n" ;
    compute += "int o_15 = o_14 + 1;\n" ;
    compute += "int o_16 = MAX4(3+o_7, arr[17], 1+arr[24], 2+arr[25]);\n" ;
    compute += "int o_17 = MAX2(d[4]+o_16, arr[18]);\n" ;
    compute += "int o_18 = o_17 + 1;\n" ;
    compute += "int o_22 = MAX4(o_18, 1+arr[19], arr[27], 1+arr[28]);\n" ;
    compute += "int o_23 = MAX7(3+o_8, 2+arr[15], arr[19], 1+arr[25], 2+arr[26], arr[27], arr[28]);\n" ;
    compute += "int o_24 = MAX6(3+o_9, 2+arr[14], 1+arr[15], arr[19], 1+arr[26], arr[28]);\n" ;
    compute += "int o_27 = o_19 + 1;\n" ;
    compute += "int o_28 = o_20 + 1;\n" ;
    
    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
}

std::string NodeTable::getCode_CVA6_opt1(void){
    // + Use inline max-func instead of macros

    std::string compute = "";
    std::string assign = "";

    /*DIRECT SETS*/
    compute += "int o_10 = arr[4];\n" ;
    compute += "int o_11 = arr[5];\n" ;
    compute += "int o_12 = arr[6];\n" ;
    compute += "int o_25 = arr[19];\n" ;
    compute += "int o_26 = arr[20];\n" ;

    /*COMPLEX*/
    // o_0
    compute += "int t_1 = d[0] + d[3] + d[5] + d[6];\n" ; // adfg
    compute += "int t_2 = d[0] + d[3] + d[5];\n" ; // adf
    compute += "int t_3 = d[0] + d[3];\n" ; // ad
    compute += "int o_0 = max2(2+t_1+arr[0], 1+t_1+arr[1]);" ; 
    compute += "o_0 = max2(o_0, t_1+arr[2]);\n" ;
    compute += "o_0 = max2(o_0, t_2+arr[3]);\n" ;
    compute += "o_0 = max2(o_0, arr[7]);\n" ;
    compute += "o_0 = max2(o_0, 1+arr[8]);\n" ;
    compute += "o_0 = max2(o_0, 1+d[0]+arr[9]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_3+arr[10]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_2+arr[11]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_1+arr[12]);\n" ;
    // o_1
    compute += "int t_4 = t_1 + d[1];\n" ; // abdfg
    compute += "int t_5 = t_2 + d[1];\n" ; // abdf
    compute += "int t_6 = d[0] + d[1];\n" ; // ab
    compute += "int t_7 = t_3 + d[1];\n" ; // abd
    compute += "int o_1 = max2(2+t_4+arr[0], 1+t_4+arr[1]);\n" ;
    compute += "o_1 = max2(o_1, t_4+arr[2]);\n" ;
    compute += "o_1 = max2(o_1, t_5+arr[3]);\n" ;
    compute += "o_1 = max2(o_1, 1+arr[7]);\n" ;
    compute += "o_1 = max2(o_1, 1+d[1]+arr[8]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_6+arr[9]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_7+arr[10]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_5+arr[11]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_4+arr[12]);\n" ;
    // o_5
    compute += "int o_5 = max2(3+t_4+arr[0], 2+t_4+arr[1]);\n" ;
    compute += "o_5 = max2(o_5, 1+t_4+arr[2]);\n" ;
    compute += "o_5 = max2(o_5, 1+t_5+arr[3]);\n" ;
    compute += "o_5 = max2(o_5, 4+arr[4]);\n" ;
    compute += "o_5 = max2(o_5, 2+d[1]+arr[8]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_6+arr[9]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_7+arr[10]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_5+arr[11]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_4+arr[12]);\n" ;
    compute += "o_5 = max2(o_5, 4+arr[13]);\n" ;
    compute += "o_5 = max2(o_5, 3+arr[14]);\n" ;
    compute += "o_5 = max2(o_5, 2+arr[15]);\n" ;
    compute += "o_5 = max2(o_5, arr[16]);\n" ;
    compute += "o_5 = max2(o_5, arr[24]);\n" ;
    compute += "o_5 = max2(o_5, 1+arr[25]);\n" ;
    compute += "o_5 = max2(o_5, 2+arr[26]);\n";
    // o_6
    compute += "int o_6 = max2(3+t_1+arr[0], 2+t_1+arr[1]);\n" ;
    compute += "o_6 = max2(o_6, 1+t_1+arr[2]);\n" ;
    compute += "o_6 = max2(o_6, 1+t_2+arr[3]);\n" ;
    compute += "o_6 = max2(o_6, 3+arr[4]);\n" ;
    compute += "o_6 = max2(o_6, 2+d[0]+arr[9]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_3+arr[10]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_2+arr[11]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_1+arr[12]);\n" ;
    compute += "o_6 = max2(o_6, 3+arr[13]);\n" ;
    compute += "o_6 = max2(o_6, 2+arr[14]);\n" ;
    compute += "o_6 = max2(o_6, 1+arr[15]);\n" ;
    compute += "o_6 = max2(o_6, arr[25]);\n" ;
    compute += "o_6 = max2(o_6, 1+arr[26]);\n" ;
    // o_7
    compute += "int t_8 = d[3] + d[5] + d[6];\n" ; // dfg
    compute += "int t_9 = d[3] + d[5];\n" ; //df
    compute += "int o_7 = max2(3+t_8+arr[0], 2+t_8+arr[1]);\n" ;
    compute += "o_7 = max2(o_7, 1+t_8+arr[2]);\n" ;
    compute += "o_7 = max2(o_7, 1+t_9+arr[3]);\n" ;
    compute += "o_7 = max2(o_7, 2+arr[4]);\n" ;
    compute += "o_7 = max2(o_7, 2+d[3]+arr[10]);\n" ;
    compute += "o_7 = max2(o_7, 2+t_9+arr[11]);\n" ;
    compute += "o_7 = max2(o_7, 2+t_8+arr[12]);\n" ;
    compute += "o_7 = max2(o_7, 2+arr[13]);\n" ;
    compute += "o_7 = max2(o_7, 1+arr[14]);\n" ;
    compute += "o_7 = max2(o_7, arr[15]);\n" ;
    compute += "o_7 = max2(o_7, arr[26]);\n" ;
    // o_8
    compute += "int t_10 = d[5] + d[6];\n" ; // fg
    compute += "int o_8 = max2(3+t_10+arr[0], 2+t_10+arr[1]);\n" ;
    compute += "o_8 = max2(o_8, 1+t_10+arr[2]);\n" ;
    compute += "o_8 = max2(o_8, 1+d[5]+arr[3]);\n" ;
    compute += "o_8 = max2(o_8, 1+arr[4]);\n" ;
    compute += "o_8 = max2(o_8, 2+d[5]+arr[11]);\n" ;
    compute += "o_8 = max2(o_8, 2+t_10+arr[12]);\n" ;
    compute += "o_8 = max2(o_8, 1+arr[13]);\n" ;
    compute += "o_8 = max2(o_8, arr[14]);\n" ;
    // o_9
    compute += "int o_9 = max2(3+d[6]+arr[0], 2+d[6]+arr[1]);\n" ;
    compute += "o_9 = max2(o_9, 1+d[6]+arr[2]);\n" ;
    compute += "o_9 = max2(o_9, 1+arr[3]);\n" ;
    compute += "o_9 = max2(o_9, arr[4]);\n" ;
    compute += "o_9 = max2(o_9, 2+d[6]+arr[12]);\n" ;
    compute += "o_9 = max2(o_9, arr[13]);\n" ;
    // o_19
    compute += "int t_21 = d[0] + d[1] + d[2];\n" ; // abc
    compute += "int t_11 = max2(t_21, 2+d[4]);\n" ; // (abc + 2e)
    compute += "int t_12 = t_8 + t_11;\n" ; // dfg(abc + 2e)
    compute += "int t_13 = t_9 + t_11;\n" ; // df(abc + 2e)
    compute += "int t_20 = d[1] + d[2];\n" ; // bc
    compute += "int o_19 = max2(6+t_12+arr[0], 5+t_12+arr[1]);\n" ;
    compute += "o_19 = max2(o_19, 4+t_12+arr[2]);\n" ;
    compute += "o_19 = max2(o_19, 4+t_13+arr[3]);\n" ;
    compute += "o_19 = max2(o_19, 7+d[4]+arr[4]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[2]+arr[7]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_20+arr[8]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_21+arr[9]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[3]+t_11+arr[10]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_13+arr[11]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_12+arr[12]);\n" ;
    compute += "o_19 = max2(o_19, 7+d[4]+arr[13]);\n" ;
    compute += "o_19 = max2(o_19, 6+d[4]+arr[14]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[4]+arr[15]);\n" ;
    compute += "o_19 = max2(o_19, 3+d[4]+arr[16]);\n" ;
    compute += "o_19 = max2(o_19, 2+d[4]+arr[17]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[18]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[19]);\n" ;
    compute += "o_19 = max2(o_19, 1+arr[21]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[22]);\n" ;
    compute += "o_19 = max2(o_19, 3+arr[23]);\n" ;
    compute += "o_19 = max2(o_19, 3+d[4]+arr[24]);\n" ;
    compute += "o_19 = max2(o_19, 4+d[4]+arr[25]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[4]+arr[26]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[27]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[28]);\n" ; 
    // o_20
    compute += "int t_14 = max2(t_6, 2+d[4]);\n" ; // (ab + 2e)
    compute += "int t_15 = t_8 + t_14;\n" ; // dfg(ab + 2e)
    compute += "int t_16 = t_9 + t_14;\n" ; // df(ab + 2e)
    compute += "int o_20 = max2(6+t_15+arr[0], 5+t_15+arr[1]);\n" ;
    compute += "o_20 = max2(o_20, 4+t_15+arr[2]);\n" ;
    compute += "o_20 = max2(o_20, 3+t_16+arr[3]);\n" ;
    compute += "o_20 = max2(o_20, 7+d[4]+arr[4]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[2]+arr[8]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_20+arr[9]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[3]+t_14+arr[10]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_16+arr[11]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_15+arr[12]);\n" ;
    compute += "o_20 = max2(o_20, 7+d[4]+arr[13]);\n" ;
    compute += "o_20 = max2(o_20, 6+d[4]+arr[14]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[4]+arr[15]);\n" ;
    compute += "o_20 = max2(o_20, 3+d[4]+arr[16]);\n" ;
    compute += "o_20 = max2(o_20, 2+d[4]+arr[17]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[18]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[19]);\n" ;
    compute += "o_20 = max2(o_20, 1+arr[22]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[23]);\n" ;
    compute += "o_20 = max2(o_20, 3+d[4]+arr[24]);\n" ;
    compute += "o_20 = max2(o_20, 4+d[4]+arr[25]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[4]+arr[26]);\n" ;
    compute += "o_20 = max2(o_20, 1+arr[27]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[28]);\n" ;
    // o_21
    compute += "int t_17 = max2(d[0], 1+d[4]);\n" ; //(a + 1e)
    compute += "int t_18 = t_8 + t_17;\n" ; // dfg(a + 1e)
    compute += "int t_19 = t_9 + t_17;\n" ; // df(a + 1e)
    compute += "int o_21 = max2(6+t_18+arr[0], 5+t_18+arr[1]);\n" ;
    compute += "o_21 = max2(o_21, 4+t_18+arr[2]);\n" ;
    compute += "o_21 = max2(o_21, 4+t_19+arr[3]);\n" ;
    compute += "o_21 = max2(o_21, 6+d[4]+arr[4]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[0]+arr[9]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[3]+t_17+arr[10]);\n" ;
    compute += "o_21 = max2(o_21, 5+t_19+arr[11]);\n" ;
    compute += "o_21 = max2(o_21, 5+t_18+arr[12]);\n" ;
    compute += "o_21 = max2(o_21, 6+d[4]+arr[13]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[4]+arr[14]);\n" ;
    compute += "o_21 = max2(o_21, 4+d[4]+arr[15]);\n" ;
    compute += "o_21 = max2(o_21, 2+d[4]+arr[16]);\n" ;
    compute += "o_21 = max2(o_21, 1+d[4]+arr[17]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[18]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[19]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[23]);\n" ;
    compute += "o_21 = max2(o_21, 2+d[4]+arr[24]);\n" ;
    compute += "o_21 = max2(o_21, 3+d[4]+arr[25]);\n" ;
    compute += "o_21 = max2(o_21, 4+d[4]+arr[26]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[27]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[28]);\n" ;

    /*OFFSET + DIM-SHIFT*/
    compute += "int o_2 = o_1 + d[2];\n" ; 
    compute += "int o_3 = o_2 + 1;\n" ;
    compute += "int o_4 = max2(o_3, 5+arr[4]);\n" ;
    compute += "o_4 = max2(o_4, 5+arr[13]);\n" ;
    compute += "o_4 = max2(o_4, 4+arr[14]);\n" ;
    compute += "o_4 = max2(o_4, 3+arr[15]);\n" ;
    compute += "o_4 = max2(o_4, 1+arr[16]);\n" ;
    compute += "o_4 = max2(o_4, arr[23]);\n" ;
    compute += "o_4 = max2(o_4, 1+arr[24]);\n" ;
    compute += "o_4 = max2(o_4, 2+arr[25]);\n" ;
    compute += "o_4 = max2(o_4, 3+arr[26]);\n" ;
    compute += "int o_13 = max2(o_4, arr[22]);\n" ;
    compute += "int o_14 = max2(1+o_13, arr[21]);\n" ;
    compute += "int o_15 = o_14 + 1;\n" ;
    compute += "int o_16 = max2(3+o_7, arr[17]);\n" ;
    compute += "o_16 = max2(o_16, 1+arr[24]);\n" ;
    compute += "o_16 = max2(o_16, 2+arr[25]);\n" ;
    compute += "int o_17 = max2(d[4]+o_16, arr[18]);\n" ;
    compute += "int o_18 = o_17 + 1;\n" ;
    compute += "int o_22 = max2(o_18, 1+arr[19]);\n" ;
    compute += "o_22 = max2(o_22, arr[27]);\n" ;
    compute += "o_22 = max2(o_22, 1+arr[28]);\n" ;
    compute += "int o_23 = max2(3+o_8, 2+arr[15]);\n" ;
    compute += "o_23 = max2(o_23, arr[19]);\n" ;
    compute += "o_23 = max2(o_23, 1+arr[25]);\n" ;
    compute += "o_23 = max2(o_23, 2+arr[26]);\n" ;
    compute += "o_23 = max2(o_23, arr[27]);\n" ;
    compute += "o_23 = max2(o_23, arr[28]);\n" ;
    compute += "int o_24 = max2(3+o_9, 2+arr[14]);\n" ;
    compute += "o_24 = max2(o_24, 1+arr[15]);\n" ;
    compute += "o_24 = max2(o_24, arr[19]);\n" ;
    compute += "o_24 = max2(o_24, 1+arr[26]);\n" ;
    compute += "o_24 = max2(o_24, arr[28]);\n" ;
    compute += "int o_27 = o_19 + 1;\n" ;
    compute += "int o_28 = o_20 + 1;\n" ;
    
    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
}

std::string NodeTable::getCode_CVA6_opt2(void){
    // + Use inline max-func instead of macros
    // + Sorted temp variables -> Little to no effect

    std::string compute = "";
    std::string assign = "";

    /*DIRECT SETS*/
    compute += "int o_10 = arr[4];\n" ;
    compute += "int o_11 = arr[5];\n" ;
    compute += "int o_12 = arr[6];\n" ;
    compute += "int o_25 = arr[19];\n" ;
    compute += "int o_26 = arr[20];\n" ;

    /*SYMBOLS*/
    compute += "int a = d[0];\n" ;
    compute += "int b = d[1];\n" ;
    compute += "int c = d[2];\n" ;
    compute += "int d = d[3];\n" ;
    compute += "int e = d[4];\n" ;
    compute += "int f = d[5];\n" ;
    compute += "int g = d[6];\n" ;

    /*TEMPS*/
    compute += "int t_6 = a + b;\n" ; // ab
    compute += "int t_3 = a + d;\n" ; // ad
    compute += "int t_20 = b + c;\n" ; // bc
    compute += "int t_9 = d + f;\n" ; //df
    compute += "int t_10 = f + g;\n" ; // fg
    compute += "int t_21 = t_6 + c;\n" ; // abc
    compute += "int t_7 = t_3 + b;\n" ; // abd
    compute += "int t_2 = t_3 + f;\n" ; // adf
    compute += "int t_8 = t_9 + g;\n" ; // dfg
    compute += "int t_1 = t_2 + g;\n" ; // adfg
    compute += "int t_5 = t_2 + b;\n" ; // abdf
    compute += "int t_4 = t_1 + b;\n" ; // abdfg
    compute += "int t_11 = max2(t_21, 2+e);\n" ; // (abc + 2e)
    compute += "int t_12 = t_8 + t_11;\n" ; // dfg(abc + 2e)
    compute += "int t_13 = t_9 + t_11;\n" ; // df(abc + 2e)
    compute += "int t_14 = max2(t_6, 2+e);\n" ; // (ab + 2e)
    compute += "int t_15 = t_8 + t_14;\n" ; // dfg(ab + 2e)
    compute += "int t_16 = t_9 + t_14;\n" ; // df(ab + 2e)
    compute += "int t_17 = max2(a, 1+e);\n" ; //(a + 1e)
    compute += "int t_18 = t_8 + t_17;\n" ; // dfg(a + 1e)
    compute += "int t_19 = t_9 + t_17;\n" ; // df(a + 1e)

    /*COMPLEX*/
    // o_0
    compute += "int o_0 = max2(2+t_1+arr[0], 1+t_1+arr[1]);" ; 
    compute += "o_0 = max2(o_0, t_1+arr[2]);\n" ;
    compute += "o_0 = max2(o_0, t_2+arr[3]);\n" ;
    compute += "o_0 = max2(o_0, arr[7]);\n" ;
    compute += "o_0 = max2(o_0, 1+arr[8]);\n" ;
    compute += "o_0 = max2(o_0, 1+d[0]+arr[9]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_3+arr[10]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_2+arr[11]);\n" ;
    compute += "o_0 = max2(o_0, 1+t_1+arr[12]);\n" ;
    // o_1 
    compute += "int o_1 = max2(2+t_4+arr[0], 1+t_4+arr[1]);\n" ;
    compute += "o_1 = max2(o_1, t_4+arr[2]);\n" ;
    compute += "o_1 = max2(o_1, t_5+arr[3]);\n" ;
    compute += "o_1 = max2(o_1, 1+arr[7]);\n" ;
    compute += "o_1 = max2(o_1, 1+d[1]+arr[8]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_6+arr[9]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_7+arr[10]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_5+arr[11]);\n" ;
    compute += "o_1 = max2(o_1, 1+t_4+arr[12]);\n" ;
    // o_5
    compute += "int o_5 = max2(3+t_4+arr[0], 2+t_4+arr[1]);\n" ;
    compute += "o_5 = max2(o_5, 1+t_4+arr[2]);\n" ;
    compute += "o_5 = max2(o_5, 1+t_5+arr[3]);\n" ;
    compute += "o_5 = max2(o_5, 4+arr[4]);\n" ;
    compute += "o_5 = max2(o_5, 2+d[1]+arr[8]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_6+arr[9]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_7+arr[10]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_5+arr[11]);\n" ;
    compute += "o_5 = max2(o_5, 2+t_4+arr[12]);\n" ;
    compute += "o_5 = max2(o_5, 4+arr[13]);\n" ;
    compute += "o_5 = max2(o_5, 3+arr[14]);\n" ;
    compute += "o_5 = max2(o_5, 2+arr[15]);\n" ;
    compute += "o_5 = max2(o_5, arr[16]);\n" ;
    compute += "o_5 = max2(o_5, arr[24]);\n" ;
    compute += "o_5 = max2(o_5, 1+arr[25]);\n" ;
    compute += "o_5 = max2(o_5, 2+arr[26]);\n";
    // o_6
    compute += "int o_6 = max2(3+t_1+arr[0], 2+t_1+arr[1]);\n" ;
    compute += "o_6 = max2(o_6, 1+t_1+arr[2]);\n" ;
    compute += "o_6 = max2(o_6, 1+t_2+arr[3]);\n" ;
    compute += "o_6 = max2(o_6, 3+arr[4]);\n" ;
    compute += "o_6 = max2(o_6, 2+d[0]+arr[9]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_3+arr[10]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_2+arr[11]);\n" ;
    compute += "o_6 = max2(o_6, 2+t_1+arr[12]);\n" ;
    compute += "o_6 = max2(o_6, 3+arr[13]);\n" ;
    compute += "o_6 = max2(o_6, 2+arr[14]);\n" ;
    compute += "o_6 = max2(o_6, 1+arr[15]);\n" ;
    compute += "o_6 = max2(o_6, arr[25]);\n" ;
    compute += "o_6 = max2(o_6, 1+arr[26]);\n" ;
    // o_7
    compute += "int o_7 = max2(3+t_8+arr[0], 2+t_8+arr[1]);\n" ;
    compute += "o_7 = max2(o_7, 1+t_8+arr[2]);\n" ;
    compute += "o_7 = max2(o_7, 1+t_9+arr[3]);\n" ;
    compute += "o_7 = max2(o_7, 2+arr[4]);\n" ;
    compute += "o_7 = max2(o_7, 2+d[3]+arr[10]);\n" ;
    compute += "o_7 = max2(o_7, 2+t_9+arr[11]);\n" ;
    compute += "o_7 = max2(o_7, 2+t_8+arr[12]);\n" ;
    compute += "o_7 = max2(o_7, 2+arr[13]);\n" ;
    compute += "o_7 = max2(o_7, 1+arr[14]);\n" ;
    compute += "o_7 = max2(o_7, arr[15]);\n" ;
    compute += "o_7 = max2(o_7, arr[26]);\n" ;
    // o_8
    compute += "int o_8 = max2(3+t_10+arr[0], 2+t_10+arr[1]);\n" ;
    compute += "o_8 = max2(o_8, 1+t_10+arr[2]);\n" ;
    compute += "o_8 = max2(o_8, 1+d[5]+arr[3]);\n" ;
    compute += "o_8 = max2(o_8, 1+arr[4]);\n" ;
    compute += "o_8 = max2(o_8, 2+d[5]+arr[11]);\n" ;
    compute += "o_8 = max2(o_8, 2+t_10+arr[12]);\n" ;
    compute += "o_8 = max2(o_8, 1+arr[13]);\n" ;
    compute += "o_8 = max2(o_8, arr[14]);\n" ;
    // o_9
    compute += "int o_9 = max2(3+d[6]+arr[0], 2+d[6]+arr[1]);\n" ;
    compute += "o_9 = max2(o_9, 1+d[6]+arr[2]);\n" ;
    compute += "o_9 = max2(o_9, 1+arr[3]);\n" ;
    compute += "o_9 = max2(o_9, arr[4]);\n" ;
    compute += "o_9 = max2(o_9, 2+d[6]+arr[12]);\n" ;
    compute += "o_9 = max2(o_9, arr[13]);\n" ;
    // o_19
    compute += "int o_19 = max2(6+t_12+arr[0], 5+t_12+arr[1]);\n" ;
    compute += "o_19 = max2(o_19, 4+t_12+arr[2]);\n" ;
    compute += "o_19 = max2(o_19, 4+t_13+arr[3]);\n" ;
    compute += "o_19 = max2(o_19, 7+d[4]+arr[4]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[2]+arr[7]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_20+arr[8]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_21+arr[9]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[3]+t_11+arr[10]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_13+arr[11]);\n" ;
    compute += "o_19 = max2(o_19, 5+t_12+arr[12]);\n" ;
    compute += "o_19 = max2(o_19, 7+d[4]+arr[13]);\n" ;
    compute += "o_19 = max2(o_19, 6+d[4]+arr[14]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[4]+arr[15]);\n" ;
    compute += "o_19 = max2(o_19, 3+d[4]+arr[16]);\n" ;
    compute += "o_19 = max2(o_19, 2+d[4]+arr[17]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[18]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[19]);\n" ;
    compute += "o_19 = max2(o_19, 1+arr[21]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[22]);\n" ;
    compute += "o_19 = max2(o_19, 3+arr[23]);\n" ;
    compute += "o_19 = max2(o_19, 3+d[4]+arr[24]);\n" ;
    compute += "o_19 = max2(o_19, 4+d[4]+arr[25]);\n" ;
    compute += "o_19 = max2(o_19, 5+d[4]+arr[26]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[27]);\n" ;
    compute += "o_19 = max2(o_19, 2+arr[28]);\n" ; 
    // o_20
    compute += "int o_20 = max2(6+t_15+arr[0], 5+t_15+arr[1]);\n" ;
    compute += "o_20 = max2(o_20, 4+t_15+arr[2]);\n" ;
    compute += "o_20 = max2(o_20, 3+t_16+arr[3]);\n" ;
    compute += "o_20 = max2(o_20, 7+d[4]+arr[4]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[2]+arr[8]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_20+arr[9]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[3]+t_14+arr[10]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_16+arr[11]);\n" ;
    compute += "o_20 = max2(o_20, 5+t_15+arr[12]);\n" ;
    compute += "o_20 = max2(o_20, 7+d[4]+arr[13]);\n" ;
    compute += "o_20 = max2(o_20, 6+d[4]+arr[14]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[4]+arr[15]);\n" ;
    compute += "o_20 = max2(o_20, 3+d[4]+arr[16]);\n" ;
    compute += "o_20 = max2(o_20, 2+d[4]+arr[17]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[18]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[19]);\n" ;
    compute += "o_20 = max2(o_20, 1+arr[22]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[23]);\n" ;
    compute += "o_20 = max2(o_20, 3+d[4]+arr[24]);\n" ;
    compute += "o_20 = max2(o_20, 4+d[4]+arr[25]);\n" ;
    compute += "o_20 = max2(o_20, 5+d[4]+arr[26]);\n" ;
    compute += "o_20 = max2(o_20, 1+arr[27]);\n" ;
    compute += "o_20 = max2(o_20, 2+arr[28]);\n" ;
    // o_21
    compute += "int o_21 = max2(6+t_18+arr[0], 5+t_18+arr[1]);\n" ;
    compute += "o_21 = max2(o_21, 4+t_18+arr[2]);\n" ;
    compute += "o_21 = max2(o_21, 4+t_19+arr[3]);\n" ;
    compute += "o_21 = max2(o_21, 6+d[4]+arr[4]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[0]+arr[9]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[3]+t_17+arr[10]);\n" ;
    compute += "o_21 = max2(o_21, 5+t_19+arr[11]);\n" ;
    compute += "o_21 = max2(o_21, 5+t_18+arr[12]);\n" ;
    compute += "o_21 = max2(o_21, 6+d[4]+arr[13]);\n" ;
    compute += "o_21 = max2(o_21, 5+d[4]+arr[14]);\n" ;
    compute += "o_21 = max2(o_21, 4+d[4]+arr[15]);\n" ;
    compute += "o_21 = max2(o_21, 2+d[4]+arr[16]);\n" ;
    compute += "o_21 = max2(o_21, 1+d[4]+arr[17]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[18]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[19]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[23]);\n" ;
    compute += "o_21 = max2(o_21, 2+d[4]+arr[24]);\n" ;
    compute += "o_21 = max2(o_21, 3+d[4]+arr[25]);\n" ;
    compute += "o_21 = max2(o_21, 4+d[4]+arr[26]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[27]);\n" ;
    compute += "o_21 = max2(o_21, 1+arr[28]);\n" ;

    /*OFFSET + DIM-SHIFT*/
    compute += "int o_2 = o_1 + d[2];\n" ; 
    compute += "int o_3 = o_2 + 1;\n" ;
    compute += "int o_4 = max2(o_3, 5+arr[4]);\n" ;
    compute += "o_4 = max2(o_4, 5+arr[13]);\n" ;
    compute += "o_4 = max2(o_4, 4+arr[14]);\n" ;
    compute += "o_4 = max2(o_4, 3+arr[15]);\n" ;
    compute += "o_4 = max2(o_4, 1+arr[16]);\n" ;
    compute += "o_4 = max2(o_4, arr[23]);\n" ;
    compute += "o_4 = max2(o_4, 1+arr[24]);\n" ;
    compute += "o_4 = max2(o_4, 2+arr[25]);\n" ;
    compute += "o_4 = max2(o_4, 3+arr[26]);\n" ;
    compute += "int o_13 = max2(o_4, arr[22]);\n" ;
    compute += "int o_14 = max2(1+o_13, arr[21]);\n" ;
    compute += "int o_15 = o_14 + 1;\n" ;
    compute += "int o_16 = max2(3+o_7, arr[17]);\n" ;
    compute += "o_16 = max2(o_16, 1+arr[24]);\n" ;
    compute += "o_16 = max2(o_16, 2+arr[25]);\n" ;
    compute += "int o_17 = max2(d[4]+o_16, arr[18]);\n" ;
    compute += "int o_18 = o_17 + 1;\n" ;
    compute += "int o_22 = max2(o_18, 1+arr[19]);\n" ;
    compute += "o_22 = max2(o_22, arr[27]);\n" ;
    compute += "o_22 = max2(o_22, 1+arr[28]);\n" ;
    compute += "int o_23 = max2(3+o_8, 2+arr[15]);\n" ;
    compute += "o_23 = max2(o_23, arr[19]);\n" ;
    compute += "o_23 = max2(o_23, 1+arr[25]);\n" ;
    compute += "o_23 = max2(o_23, 2+arr[26]);\n" ;
    compute += "o_23 = max2(o_23, arr[27]);\n" ;
    compute += "o_23 = max2(o_23, arr[28]);\n" ;
    compute += "int o_24 = max2(3+o_9, 2+arr[14]);\n" ;
    compute += "o_24 = max2(o_24, 1+arr[15]);\n" ;
    compute += "o_24 = max2(o_24, arr[19]);\n" ;
    compute += "o_24 = max2(o_24, 1+arr[26]);\n" ;
    compute += "o_24 = max2(o_24, arr[28]);\n" ;
    compute += "int o_27 = o_19 + 1;\n" ;
    compute += "int o_28 = o_20 + 1;\n" ;
    
    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
}

std::string NodeTable::getCode_CVA6_opt3(void){
    
    // Divide Matrix cols into blocks

    std::string compute = "";
    std::string assign = "";

    /*BLOCK_0 [PCG, IF0, IF1, IF2]*/
    // o_9_0
    compute += "int g = d[6];\n";
    compute += "int o_9_0 = max2(3+g+arr[0], 2+g+arr[1]);\n" ;
    compute += "o_9_0 = max2(o_9_0, 1+g+arr[2]);\n" ;
    compute += "o_9_0 = max2(o_9_0, 1+arr[3]);\n" ;
    // temps
    compute += "int a = d[0];\n" ; // a
    compute += "int t1 = a + d[1];\n" ; // ab
    compute += "int t2 = t1 + d[2];\n" ; // abc
    compute += "int t3 = d[3] + d[5];\n" ; // df
    compute += "int t4 = t3 + d[6];\n" ; // dfg
    compute += "int e = d[4];\n" ; // e
    compute += "int t5 = 2 + e;\n" ; // 2e
    compute += "int t6 = max2(a, 1+e);\n" ; // (a + 1e)
    compute += "int t7 = max2(t1, t5);\n" ; // (ab + 2e)
    compute += "int t8 = max2(t2, t5);\n" ; // (abc + 2e)

    /* v COMMENT OUT FOR ALTERNATIVE APPROACH [BUT NEED THIS TEMPS LATER] V */
    compute += "int t9 = t4 + t8;\n" ; // dfg(abc + 2e)
    compute += "int t10 = t3 + t8;\n" ; // df(abc + 2e)
    compute += "int t11 = t4 + t7;\n" ; // dfg(ab + 2e)
    compute += "int t12 = t3 + t7;\n" ; // df(ab + 2e)
    compute += "int t13 = t4 + t6;\n" ; // dfg(a + 1e)
    compute += "int t14 = t3 + t6;\n" ; // df(a + 1e)
    /* ^ COMMENT OUT FOR ALTERNATIVE APPROACH ^*/

    /* v COMMENT OUT FOR ALTERNATIVE APPROACH [BUT NEED THIS TEMPS LATER] V */
    // o_19_0
    compute += "int o_19_0 = max2(6+t9+arr[0], 5+t9+arr[1]);\n" ;
    compute += "o_19_0 = max2(o_19_0, 4+t9+arr[2]);\n" ;
    compute += "o_19_0 = max2(o_19_0, 4+t10+arr[3]);\n" ;
    // o_20_0
    compute += "int o_20_0 = max2(6+t11+arr[0], 5+t11+arr[1]);\n" ;
    compute += "o_20_0 = max2(o_20_0, 4+t11+arr[2]);\n" ;
    compute += "o_20_0 = max2(o_20_0, 4+t12+arr[3]);\n" ;
    // o_21_0
    compute += "int o_21_0 = max2(6+t13+arr[0], 5+t13+arr[1]);\n" ;
    compute += "o_21_0 = max2(o_21_0, 4+t13+arr[2]);\n" ;
    compute += "o_21_0 = max2(o_21_0, 4+t14+arr[3]);\n" ;
    /* ^ COMMENT OUT FOR ALTERNATIVE APPROACH ^*/

    /* ALTERNATIVE APPROACH */
    //compute += "int x1 = max2(6+t4+arr[0], 5+t4+arr[1]);\n" ;
    //compute += "x1 = max2(x1, 4+t4+arr[2]);\n" ;
    //compute += "x1 = max2(x1, 4+t3+arr[3]);\n" ;
    //compute += "int o_19_0 = x1 + t8;\n" ;
    //compute += "int o_20_0 = x1 + t7;\n" ;
    //compute += "int o_21_0 = x1 + t6;\n" ;
    
    compute += "int o_8_0 = o_9_0 + d[5];\n" ;
    compute += "int o_7_0 = o_8_0 + d[3];\n" ;
    compute += "int o_6_0 = o_7_0 + a;\n" ;
    compute += "int o_5_0 = o_6_0 + d[1];\n" ;
    compute += "int o_4_0 = o_4_0 + d[2];\n" ;
    //compute += "int o_3_0 = o_4_0;\n" ;
    //compute += "int o_2_0 = o_3_0 - 1;\n" ;
    compute += "int o_1_0 = o_5_0 - 1;\n" ;
    compute += "int o_0_0 = o_6_0 - 1;\n" ;
    compute += "int o_13_0 = o_4_0 + 1;\n" ;//compute += "int o_13_0 = o_3_0 + 1;\n" ;
    compute += "int o_14_0 = o_13_0 + 1;\n" ;
    //compute += "int o_15_0 = o_14_0 + 1;\n" ;
    compute += "int o_16_0 = o_7_0 + 3;\n" ;
    compute += "int o_17_0 = o_16_0 + e;\n" ;
    //compute += "int o_18_0 = o_17_0 + 1;\n" ;
    compute += "int o_22_0 = o_17_0 + 1;\n" ;//compute += "int o_22_0 = o_18_0;\n" ;
    compute += "int o_23_0 = o_8_0 + 3;\n" ;
    compute += "int o_24_0 = o_9_0 + 3;\n" ;
    //compute += "int o_27_0 = o_19_0 + 1;\n" ;
    //compute += "int o_28_0 = o_20_0 + 1;\n" ;

    /*BLOCK_1 IF[1..9]*/
    compute += "int dd = d[3];\n" ; //d
    compute += "int t21 = a + dd;\n" ; // ad
    compute += "int f = d[5];\n" ; // f
    compute += "int t22 = t21 + f;\n" ; // adf
    compute += "int t23 = t22 + g;\n" ; // adfg
    compute += "int o_0_1 = max2(arr[7], 1+arr[8]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+a+arr[9]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t21+arr[10]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t22+arr[11]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t23+arr[12]);\n" ;

    compute += "int b = d[1];\n" ; // b
    compute += "int t24 = t21 + b;\n" ; // abd
    compute += "int t25 = t22 + b;\n" ; // abdf
    compute += "int t26 = t23 + b;\n" ; // abdfg
    compute += "int o_1_1 = max2(1+arr[7], 1+b+arr[8]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t1+arr[9]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t24+arr[10]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t25+arr[11]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t26+arr[12]);\n" ;
    compute += "int o_5_1 = max2(4+arr[4], 2+b+arr[8]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t1+arr[9]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t24+arr[10]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t25+arr[11]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t26+arr[12]);\n" ;
    compute += "int o_6_1 = max2(3+arr[4], 2+a+arr[9]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t21+arr[10]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t22+arr[11]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t23+arr[12]);\n" ;
    compute += "int o_7_1 = max2(2+arr[4], 2+dd+arr[10]);\n" ;
    compute += "o_7_1 = max2(o_7_1, 2+t3+arr[11]);\n" ;
    compute += "o_7_1 = max2(o_7_1, 2+t4+arr[12]);\n" ;
    compute += "int t27 = f + g;\n" ; // fg
    compute += "int o_8_1 = max2(1+arr[4], 2+f+arr[11]);\n" ;
    compute += "o_8_1 = max2(o_8_1, 2+t27+arr[12]);\n" ;
    compute += "int o_9_1 = max2(arr[4], 2+g+arr[12]);\n" ;

    compute += "int c = d[2];\n" ; // c
    compute += "int t16 = b + c;\n" ; // bc
    compute += "int t17 = dd + t8;\n" ; // d(abc + 2e)
    compute += "int o_19_1 = max2(7+e+arr[4], 5+c+arr[7]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t16+arr[8]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t2+arr[9]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t17+arr[10]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t10+arr[11]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t9+arr[12]);\n" ;
    compute += "int t18 = dd + t7;\n" ; // d(ab + 2e)
    compute += "int o_20_1 = max2(7+e+arr[4], 5+b+arr[8]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t1+arr[9]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t18+arr[10]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t12+arr[11]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t11+arr[12]);\n" ;
    compute += "int t20 = dd + t6;\n" ;
    compute += "int o_21_1 = max2(6+e+arr[4], 5+a+arr[9]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t20+arr[10]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t14+arr[11]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t13+arr[12]);\n" ;

    //compute += "int o_10_1 = arr[4];\n" ;
    //compute += "int o_11_1 = arr[5];\n" ;
    //compute += "int o_12_1 = arr[6];\n" ;

    //compute += "int o_2_1 = o_1_1 + c;\n" ;
    //compute += "int o_3_1 = o_2_1 + 1;\n" ;
    compute += "int o_4_1 = max2(o_1_1+1+c, 5+arr[4]);\n" ; //compute += "int o_4_1 = max2(o_3_1, 5+arr[4]);\n" ;
    compute += "int o_13_1 = o_4_1 + 1;\n" ;
    compute += "int o_14_1 = o_13_1 + 1;\n" ;
    //compute += "int o_15_1 = o_14_1 + 1;\n" ;
    compute += "int o_16_1 = o_7_1 + 3;\n" ;
    compute += "int o_17_1 = o_16_1 + e;\n" ;
    //compute += "int o_18_1 = o_17_1 + 1;\n";
    compute += "int o_22_1 = o_17_1 + 1;\n" ;//compute += "int o_22_1 = o_18_1;\n" ;
    compute += "int o_23_1 = o_8_1 + 3;\n" ;
    compute += "int o_24_1 = o_9_1 + 3;\n" ;
    //compute += "int o_27_1 = o_19_1 + 1;\n" ;
    //compute += "int o_28_1 = o_20_1 + 1;\n" ;

    /*BLOCK_2 [ID, IS, ALU, L1, L2, L3]*/
    compute += "int o_9_2 = arr[13];\n" ;
    compute += "int o_8_2 = max2(o_9_2 + 1, arr[14]);\n" ;
    compute += "int o_7_2 = max2(o_8_2 + 1, arr[15]);\n" ;
    compute += "int o_6_2 = o_7_2 + 1;\n" ;
    compute += "int o_5_2 = max2(o_6_2 + 1, arr[16]);\n" ;
    compute += "int o_4_2 = o_5_2 + 1;\n" ;
    compute += "int o_13_2 = o_4_2 + 1;\n" ;
    compute += "int o_14_2 = o_13_2 + 1;\n" ;
    //compute += "int o_15_2 = o_14_2 + 1;\n" ;
    compute += "int o_16_2 = max2(o_4_2, arr[17]);\n" ;
    compute += "int o_17_2 = max2(o_16_2 + e, arr[18]);\n" ;
    //compute += "int o_18_2 = o_17_2 + 1;\n" ;
    compute += "int o_19_2 = o_17_2 + 1;\n" ;//compute += "int o_19_2 = o_18_2 + 1;\n" ;
    compute += "int o_20_2 = o_19_2;\n" ;
    compute += "int o_21_2 = o_17_2 + 1;\n" ;//compute += "int o_21_2 = o_18_2;\n" ;
    compute += "int o_22_2 = o_21_2;\n" ;
    compute += "int o_23_2 = o_6_2 + 1;\n" ;
    compute += "int o_24_2 = o_6_2;\n" ;
    //compute += "int o_27_2 = o_20_2 + 1;\n" ;
    //compute += "int o_28_2 = o_27_2;\n" ;

    /*BLOCK_3 [Ex[1..8]]*/
    compute += "int o_7_3 = arr[26];\n" ;
    compute += "int o_6_3 = max2(o_7_3 + 1, arr[25]);\n" ;
    compute += "int o_5_3 = max2(o_6_3 + 1, arr[24]);\n" ;
    compute += "int o_4_3 = max2(o_5_3 + 1, arr[23]);\n" ;
    compute += "int o_13_3 = max2(o_4_3 + 1, arr[22]);\n" ;
    compute += "int o_14_3 = max2(o_13_3 + 1, arr[21]);\n" ;
    //compute += "int o_15_3 = o_14_3 + 1;\n" ;
    compute += "int o_16_3 = o_5_3 + 1;\n" ;
    compute += "int o_17_3 = o_16_3 + e;\n" ;
    //compute += "int o_18_3 = o_17_3 + 1;\n" ;
    compute += "int o_22_3 = max2(o_17_3+1, 1+arr[19]);\n" ;//compute += "int o_22_3 = max2(o_18_3, 1+arr[19]);\n" ;
    compute += "int o_21_3 = max2(o_22_3, 1+arr[23]);\n" ;
    compute += "int o_20_3 = max2(1+o_21_3, 1+arr[22]);\n" ;
    compute += "int o_19_3 = max2(o_17_3+2, 2+arr[19]);\n" ;//compute += "int o_19_3 = max2(o_18_3+1, 2+arr[19]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 1+arr[21]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 2+arr[22]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 3+arr[23]);\n" ;
    compute += "int o_23_3 = max2(o_6_3+1, arr[19]);\n" ;
    compute += "int o_24_3 = max2(o_7_3+1, arr[19]);\n" ;
    //compute += "int o_25_3 = arr[19];\n" ;
    //compute += "int o_26_3 = arr[20];\n" ;
    //compute += "int o_27_3 = o_19_3 + 1;\n" ;
    //compute += "int o_28_3 = o_20_3 + 1;\n" ;

    /*BLOCK_4 [COM[1,2], PCs]*/
    compute += "int o_24_4 = arr[28];\n" ;
    compute += "int o_23_4 = max2(o_24_4, arr[27]);\n" ;
    compute += "int o_22_4 = max2(o_24_4+1, arr[27]);\n" ;
    compute += "int o_21_4 = o_23_4 + 1;\n" ;
    compute += "int o_20_4 = o_22_4 + 1;\n" ;
    compute += "int o_19_4 = o_21_4 + 1;\n" ;
    //compute += "int o_27_4 = o_19_4 + 1;\n" ;
    //compute += "int o_28_4 = o_20_4 + 1;\n" ;

    /*MERGE BLOCKS*/
    compute += "int o_0 = max2(o_0_0, o_0_1);\n" ;
    compute += "int o_1 = max2(o_1_0, o_1_1);\n" ;
    //compute += "int o_2 = max2(o_2_0, o_2_1);\n" ;
    //compute += "int o_3 = max2(o_3_0, o_3_1);\n" ;
    compute += "int o_4 = max2(o_4_0, o_4_1);\n" ;
    compute += "o_4 = max2(o_4, o_4_2);\n" ;
    compute += "o_4 = max2(o_4, o_4_3);\n" ;
    compute += "int o_5 = max2(o_5_0, o_5_1);\n" ;
    compute += "o_5 = max2(o_5, o_5_2);\n" ;
    compute += "o_5 = max2(o_5, o_5_3);\n" ;
    compute += "int o_6 = max2(o_6_0, o_6_1);\n" ;
    compute += "o_6 = max2(o_6, o_6_2);\n" ;
    compute += "o_6 = max2(o_6, o_6_3);\n" ;
    compute += "int o_7 = max2(o_7_0, o_7_1);\n" ;
    compute += "o_7 = max2(o_7, o_7_2);\n" ;
    compute += "o_7 = max2(o_7, o_7_3);\n" ;
    compute += "int o_8 = max2(o_8_0, o_8_1);\n" ;
    compute += "o_8 = max2(o_8, o_8_2);\n" ;
    compute += "int o_9 = max2(o_9_0, o_9_1);\n" ;
    compute += "o_9 = max2(o_9, o_9_2);\n" ;
    //compute += "int o_10 = o_10_1;\n" ;
    //compute += "int o_11 = o_11_1;\n" ;
    //compute += "int o_12 = o_12_1;\n" ;
    compute += "int o_13 = max2(o_13_0, o_13_1);\n" ;
    compute += "o_13 = max2(o_13, o_13_2);\n" ;
    compute += "o_13 = max2(o_13, o_13_3);\n" ;
    compute += "int o_14 = max2(o_14_0, o_14_1);\n" ;
    compute += "o_14 = max2(o_14, o_14_2);\n" ;
    compute += "o_14 = max2(o_14, o_14_3);\n" ;
    //compute += "int o_15 = max2(o_15_0, o_15_1);\n" ;
    //compute += "o_15 = max2(o_15, o_15_2);\n" ;
    //compute += "o_15 = max2(o_15, o_15_3);\n" ;
    compute += "int o_16 = max2(o_16_0, o_16_1);\n" ;
    compute += "o_16 = max2(o_16, o_16_2);\n" ;
    compute += "o_16 = max2(o_16, o_16_3);\n" ;
    compute += "int o_17 = max2(o_17_0, o_17_1);\n" ;
    compute += "o_17 = max2(o_17, o_17_2);\n" ;
    compute += "o_17 = max2(o_17, o_17_3);\n" ;
    //compute += "int o_18 = max2(o_18_0, o_18_1);\n" ;
    //compute += "o_18 = max2(o_18, o_18_2);\n" ;
    //compute += "o_18 = max2(o_18, o_18_3);\n" ;
    compute += "int o_19 = max2(o_19_0, o_19_1);\n" ;
    compute += "o_19 = max2(o_19, o_19_2);\n" ;
    compute += "o_19 = max2(o_19, o_19_3);\n" ;
    compute += "o_19 = max2(o_19, o_19_4);\n" ;
    compute += "int o_20 = max2(o_20_0, o_20_1);\n" ;
    compute += "o_20 = max2(o_20, o_20_2);\n" ;
    compute += "o_20 = max2(o_20, o_20_3);\n" ;
    compute += "o_20 = max2(o_20, o_20_4);\n" ;
    compute += "int o_21 = max2(o_21_0, o_21_1);\n" ;
    compute += "o_21 = max2(o_21, o_21_2);\n" ;
    compute += "o_21 = max2(o_21, o_21_3);\n" ;
    compute += "o_21 = max2(o_21, o_21_4);\n" ;
    compute += "int o_22 = max2(o_22_0, o_22_1);\n" ;
    compute += "o_22 = max2(o_22, o_22_2);\n" ;
    compute += "o_22 = max2(o_22, o_22_3);\n" ;
    compute += "o_22 = max2(o_22, o_22_4);\n" ;
    compute += "int o_23 = max2(o_23_0, o_23_1);\n" ;
    compute += "o_23 = max2(o_23, o_23_2);\n" ;
    compute += "o_23 = max2(o_23, o_23_3);\n" ;
    compute += "o_23 = max2(o_23, o_23_4);\n" ;
    compute += "int o_24 = max2(o_24_0, o_24_1);\n" ;
    compute += "o_24 = max2(o_24, o_24_2);\n" ;
    compute += "o_24 = max2(o_24, o_24_3);\n" ;
    compute += "o_24 = max2(o_24, o_24_4);\n" ;
    //compute += "int o_25 = o_25_3;\n" ;
    //compute += "int o_26 = o_26_3;\n" ;
    //compute += "int o_27 = max2(o_27_0, o_27_1);\n" ;
    //compute += "o_27 = max2(o_27, o_27_2);\n" ;
    //compute += "o_27 = max2(o_27, o_27_3);\n" ;
    //compute += "o_27 = max2(o_27, o_27_4);\n" ;
    //compute += "int o_28 = max2(o_28_0, o_28_1);\n" ;
    //compute += "o_28 = max2(o_28, o_28_2);\n" ;
    //compute += "o_28 = max2(o_28, o_28_3);\n" ;
    //compute += "o_28 = max2(o_28, o_28_4);\n" ;

    /*COMMON*/

    // Simple set
    compute += "int o_10 = arr[4];\n" ;
    compute += "int o_11 = arr[5];\n" ;
    compute += "int o_12 = arr[6];\n" ;
    compute += "int o_25 = arr[19];\n" ;
    compute += "int o_26 = arr[20];\n" ;

    // Offset
    compute += "int o_2 = o_1 + c;\n" ;
    compute += "int o_3 = o_2 + 1;\n" ;
    compute += "int o_15 = o_14 + 1;\n" ;
    compute += "int o_18 = o_17 + 1;\n" ;
    compute += "int o_27 = o_19 + 1;\n" ;
    compute += "int o_28 = o_20 + 1;\n" ;

    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
}

std::string NodeTable::getCode_CVA6_opt4(void){
    
    // Divide Matrix cols into blocks

    std::string compute = "";
    std::string assign = "";

    /*BLOCK_0 [PCG, IF0, IF1, IF2]*/
    // o_9_0
    compute += "int g = d[6];\n";
    compute += "int o_9_0 = max2(3+g+arr[0], 2+g+arr[1]);\n" ;
    compute += "o_9_0 = max2(o_9_0, 1+g+arr[2]);\n" ;
    compute += "o_9_0 = max2(o_9_0, 1+arr[3]);\n" ;
    // temps
    compute += "int a = d[0];\n" ; // a
    compute += "int t1 = a + d[1];\n" ; // ab
    compute += "int t2 = t1 + d[2];\n" ; // abc
    compute += "int t3 = d[3] + d[5];\n" ; // df
    compute += "int t4 = t3 + d[6];\n" ; // dfg
    compute += "int e = d[4];\n" ; // e
    compute += "int t5 = 2 + e;\n" ; // 2e
    compute += "int t6 = max2(a, 1+e);\n" ; // (a + 1e)
    compute += "int t7 = max2(t1, t5);\n" ; // (ab + 2e)
    compute += "int t8 = max2(t2, t5);\n" ; // (abc + 2e)

    /* v COMMENT OUT FOR ALTERNATIVE APPROACH [BUT NEED THIS TEMPS LATER] V */
    compute += "int t9 = t4 + t8;\n" ; // dfg(abc + 2e)
    compute += "int t10 = t3 + t8;\n" ; // df(abc + 2e)
    compute += "int t11 = t4 + t7;\n" ; // dfg(ab + 2e)
    compute += "int t12 = t3 + t7;\n" ; // df(ab + 2e)
    compute += "int t13 = t4 + t6;\n" ; // dfg(a + 1e)
    compute += "int t14 = t3 + t6;\n" ; // df(a + 1e)
    /* ^ COMMENT OUT FOR ALTERNATIVE APPROACH ^*/

    /* v COMMENT OUT FOR ALTERNATIVE APPROACH [BUT NEED THIS TEMPS LATER] V */
    // o_19_0
    compute += "int o_19_0 = max2(6+t9+arr[0], 5+t9+arr[1]);\n" ;
    compute += "o_19_0 = max2(o_19_0, 4+t9+arr[2]);\n" ;
    compute += "o_19_0 = max2(o_19_0, 4+t10+arr[3]);\n" ;
    // o_20_0
    compute += "int o_20_0 = max2(6+t11+arr[0], 5+t11+arr[1]);\n" ;
    compute += "o_20_0 = max2(o_20_0, 4+t11+arr[2]);\n" ;
    compute += "o_20_0 = max2(o_20_0, 4+t12+arr[3]);\n" ;
    // o_21_0
    compute += "int o_21_0 = max2(6+t13+arr[0], 5+t13+arr[1]);\n" ;
    compute += "o_21_0 = max2(o_21_0, 4+t13+arr[2]);\n" ;
    compute += "o_21_0 = max2(o_21_0, 4+t14+arr[3]);\n" ;
    /* ^ COMMENT OUT FOR ALTERNATIVE APPROACH ^*/

    /* ALTERNATIVE APPROACH */
    //compute += "int x1 = max2(6+t4+arr[0], 5+t4+arr[1]);\n" ;
    //compute += "x1 = max2(x1, 4+t4+arr[2]);\n" ;
    //compute += "x1 = max2(x1, 4+t3+arr[3]);\n" ;
    //compute += "int o_19_0 = x1 + t8;\n" ;
    //compute += "int o_20_0 = x1 + t7;\n" ;
    //compute += "int o_21_0 = x1 + t6;\n" ;
    
    compute += "int o_8_0 = o_9_0 + d[5];\n" ;
    compute += "int o_7_0 = o_8_0 + d[3];\n" ;
    compute += "int o_6_0 = o_7_0 + a;\n" ;
    compute += "int o_5_0 = o_6_0 + d[1];\n" ;
    compute += "int o_4_0 = o_5_0 + d[2];\n" ;
    //compute += "int o_3_0 = o_4_0;\n" ;
    //compute += "int o_2_0 = o_3_0 - 1;\n" ;
    compute += "int o_1_0 = o_5_0 - 1;\n" ;
    compute += "int o_0_0 = o_6_0 - 1;\n" ;
    //compute += "int o_13_0 = o_4_0 + 1;\n" ;//compute += "int o_13_0 = o_3_0 + 1;\n" ;
    //compute += "int o_14_0 = o_13_0 + 1;\n" ;
    //compute += "int o_15_0 = o_14_0 + 1;\n" ;
    //compute += "int o_16_0 = o_7_0 + 3;\n" ;
    //compute += "int o_17_0 = o_16_0 + e;\n" ;
    //compute += "int o_18_0 = o_17_0 + 1;\n" ;
    //compute += "int o_22_0 = o_16_0 + 1 + e;\n" ;//compute += "int o_22_0 = o_17_0 + 1;\n" ;//compute += "int o_22_0 = o_18_0;\n" ;
    //compute += "int o_23_0 = o_8_0 + 3;\n" ;
    //compute += "int o_24_0 = o_9_0 + 3;\n" ;
    //compute += "int o_27_0 = o_19_0 + 1;\n" ;
    //compute += "int o_28_0 = o_20_0 + 1;\n" ;

    /*BLOCK_1 IF[1..9]*/
    compute += "int dd = d[3];\n" ; //d
    compute += "int t21 = a + dd;\n" ; // ad
    compute += "int f = d[5];\n" ; // f
    compute += "int t22 = t21 + f;\n" ; // adf
    compute += "int t23 = t22 + g;\n" ; // adfg
    compute += "int o_0_1 = max2(arr[7], 1+arr[8]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+a+arr[9]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t21+arr[10]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t22+arr[11]);\n" ;
    compute += "o_0_1 = max2(o_0_1, 1+t23+arr[12]);\n" ;

    compute += "int b = d[1];\n" ; // b
    compute += "int t24 = t21 + b;\n" ; // abd
    compute += "int t25 = t22 + b;\n" ; // abdf
    compute += "int t26 = t23 + b;\n" ; // abdfg
    compute += "int o_1_1 = max2(1+arr[7], 1+b+arr[8]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t1+arr[9]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t24+arr[10]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t25+arr[11]);\n" ; 
    compute += "o_1_1 = max2(o_1_1, 1+t26+arr[12]);\n" ;
    compute += "int o_5_1 = max2(4+arr[4], 2+b+arr[8]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t1+arr[9]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t24+arr[10]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t25+arr[11]);\n" ;
    compute += "o_5_1 = max2(o_5_1, 2+t26+arr[12]);\n" ;
    compute += "int o_6_1 = max2(3+arr[4], 2+a+arr[9]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t21+arr[10]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t22+arr[11]);\n" ;
    compute += "o_6_1 = max2(o_6_1, 2+t23+arr[12]);\n" ;
    compute += "int o_7_1 = max2(2+arr[4], 2+dd+arr[10]);\n" ;
    compute += "o_7_1 = max2(o_7_1, 2+t3+arr[11]);\n" ;
    compute += "o_7_1 = max2(o_7_1, 2+t4+arr[12]);\n" ;
    compute += "int t27 = f + g;\n" ; // fg
    compute += "int o_8_1 = max2(1+arr[4], 2+f+arr[11]);\n" ;
    compute += "o_8_1 = max2(o_8_1, 2+t27+arr[12]);\n" ;
    compute += "int o_9_1 = max2(arr[4], 2+g+arr[12]);\n" ;

    compute += "int c = d[2];\n" ; // c
    compute += "int t16 = b + c;\n" ; // bc
    compute += "int t17 = dd + t8;\n" ; // d(abc + 2e)
    compute += "int o_19_1 = max2(7+e+arr[4], 5+c+arr[7]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t16+arr[8]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t2+arr[9]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t17+arr[10]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t10+arr[11]);\n" ;
    compute += "o_19_1 = max2(o_19_1, 5+t9+arr[12]);\n" ;
    compute += "int t18 = dd + t7;\n" ; // d(ab + 2e)
    compute += "int o_20_1 = max2(7+e+arr[4], 5+b+arr[8]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t1+arr[9]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t18+arr[10]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t12+arr[11]);\n" ;
    compute += "o_20_1 = max2(o_20_1, 5+t11+arr[12]);\n" ;
    compute += "int t20 = dd + t6;\n" ;
    compute += "int o_21_1 = max2(6+e+arr[4], 5+a+arr[9]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t20+arr[10]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t14+arr[11]);\n" ;
    compute += "o_21_1 = max2(o_21_1, 5+t13+arr[12]);\n" ;

    //compute += "int o_10_1 = arr[4];\n" ;
    //compute += "int o_11_1 = arr[5];\n" ;
    //compute += "int o_12_1 = arr[6];\n" ;

    //compute += "int o_2_1 = o_1_1 + c;\n" ;
    //compute += "int o_3_1 = o_2_1 + 1;\n" ;
    compute += "int o_4_1 = max2(o_1_1+1+c, 5+arr[4]);\n" ; //compute += "int o_4_1 = max2(o_3_1, 5+arr[4]);\n" ;
    //compute += "int o_13_1 = o_4_1 + 1;\n" ;
    //compute += "int o_14_1 = o_13_1 + 1;\n" ;
    //compute += "int o_15_1 = o_14_1 + 1;\n" ;
    //compute += "int o_16_1 = o_7_1 + 3;\n" ;
    //compute += "int o_17_1 = o_16_1 + e;\n" ;
    //compute += "int o_18_1 = o_17_1 + 1;\n";
    //compute += "int o_22_1 = o_16_1 + 1 + e;\n" ;//compute += "int o_22_1 = o_17_1 + 1;\n" ;//compute += "int o_22_1 = o_18_1;\n" ;
    //compute += "int o_23_1 = o_8_1 + 3;\n" ;
    //compute += "int o_24_1 = o_9_1 + 3;\n" ;
    //compute += "int o_27_1 = o_19_1 + 1;\n" ;
    //compute += "int o_28_1 = o_20_1 + 1;\n" ;

    /*BLOCK_2 [ID, IS, ALU, L1, L2, L3]*/
    compute += "int o_9_2 = arr[13];\n" ;
    compute += "int o_8_2 = max2(o_9_2 + 1, arr[14]);\n" ;
    compute += "int o_7_2 = max2(o_8_2 + 1, arr[15]);\n" ;
    compute += "int o_6_2 = o_7_2 + 1;\n" ;
    compute += "int o_5_2 = max2(o_6_2 + 1, arr[16]);\n" ;
    compute += "int o_4_2 = o_5_2 + 1;\n" ;
    //compute += "int o_13_2 = o_4_2 + 1;\n" ;
    //compute += "int o_14_2 = o_13_2 + 1;\n" ;
    //compute += "int o_15_2 = o_14_2 + 1;\n" ;
    //compute += "int o_16_2 = max2(o_4_2, arr[17]);\n" ;
    //compute += "int o_17_2 = max2(o_16_2 + e, arr[18]);\n" ;
    //compute += "int o_18_2 = o_17_2 + 1;\n" ;
    // moved below //compute += "int o_19_2 = o_17_2 + 1;\n" ;//compute += "int o_19_2 = o_18_2 + 1;\n" ;
    //moved below //compute += "int o_21_2 = o_17_2 + 1;\n" ;//compute += "int o_21_2 = o_18_2;\n" ;
    compute += "int o_21_2 = max2(o_4_2+1+e, 1+e+arr[17]);\n" ;//compute += "int o_21_2 = max2(o_16_2+1+e, 1+arr[18]);\n" ;
    compute += "o_21_2 = max2(o_21_2, 1+arr[18]);\n" ;
    compute += "int o_19_2 = o_21_2 + 1;\n" ;
    compute += "int o_20_2 = o_19_2;\n" ;
    //compute += "int o_22_2 = o_21_2;\n" ;
    //compute += "int o_23_2 = o_6_2 + 1;\n" ;
    //compute += "int o_24_2 = o_6_2;\n" ;
    //compute += "int o_27_2 = o_20_2 + 1;\n" ;
    //compute += "int o_28_2 = o_27_2;\n" ;

    /*BLOCK_3 [Ex[1..8]]*/
    compute += "int o_7_3 = arr[26];\n" ;
    compute += "int o_6_3 = max2(o_7_3 + 1, arr[25]);\n" ;
    compute += "int o_5_3 = max2(o_6_3 + 1, arr[24]);\n" ;
    compute += "int o_4_3 = max2(o_5_3 + 1, arr[23]);\n" ;
    //compute += "int o_13_3 = max2(o_4_3 + 1, arr[22]);\n" ;
    //compute += "int o_14_3 = max2(o_13_3 + 1, arr[21]);\n" ;
    //compute += "int o_15_3 = o_14_3 + 1;\n" ;
    //compute += "int o_16_3 = o_5_3 + 1;\n" ;
    //compute += "int o_17_3 = o_16_3 + e;\n" ;
    //compute += "int o_18_3 = o_17_3 + 1;\n" ;
    //compute += "int o_22_3 = max2(o_16_3+1+e, 1+arr[19]);\n" ;//compute += "int o_22_3 = max2(o_17_3+1, 1+arr[19]);\n" ;//compute += "int o_22_3 = max2(o_18_3, 1+arr[19]);\n" ;
    compute += "int o_21_3 = max2(o_5_3+2+e, 1+arr[19]);\n" ;//compute += "int o_21_3 = max2(o_22_3, 1+arr[23]);\n" ;
    compute += "o_21_3 = max2(o_21_3, 1+arr[23]);\n" ;
    compute += "int o_20_3 = max2(1+o_21_3, 1+arr[22]);\n" ;
    compute += "int o_19_3 = max2(o_5_3+3+e, 2+arr[19]);\n" ;//compute += "int o_19_3 = max2(o_17_3+2, 2+arr[19]);\n" ;//compute += "int o_19_3 = max2(o_18_3+1, 2+arr[19]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 1+arr[21]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 2+arr[22]);\n" ;
    compute += "o_19_3 = max2(o_19_3, 3+arr[23]);\n" ;
    //compute += "int o_23_3 = max2(o_6_3+1, arr[19]);\n" ;
    //compute += "int o_24_3 = max2(o_7_3+1, arr[19]);\n" ;
    //compute += "int o_25_3 = arr[19];\n" ;
    //compute += "int o_26_3 = arr[20];\n" ;
    //compute += "int o_27_3 = o_19_3 + 1;\n" ;
    //compute += "int o_28_3 = o_20_3 + 1;\n" ;

    /*BLOCK_4 [COM[1,2], PCs]*/
    //compute += "int o_24_4 = arr[28];\n" ;
    //compute += "int o_23_4 = max2(o_24_4, arr[27]);\n" ;
    //compute += "int o_22_4 = max2(o_24_4+1, arr[27]);\n" ;
    compute += "int o_21_4 = max2(1+arr[27], 1+arr[28]);\n" ;//compute += "int o_21_4 = o_23_4 + 1;\n" ;
    compute += "int o_20_4 = max2(1+arr[27], 2+arr[28]);\n" ;//compute += "int o_20_4 = max2(o_24_4 + 2, 1+arr[27]);\n" ;//compute += "int o_20_4 = o_22_4 + 1;\n" ;
    compute += "int o_19_4 = o_21_4 + 1;\n" ;
    //compute += "int o_27_4 = o_19_4 + 1;\n" ;
    //compute += "int o_28_4 = o_20_4 + 1;\n" ;

    /*MERGE BLOCKS*/
    compute += "int o_0 = max2(o_0_0, o_0_1);\n" ;
    compute += "int o_1 = max2(o_1_0, o_1_1);\n" ;
    //compute += "int o_2 = max2(o_2_0, o_2_1);\n" ;
    //compute += "int o_3 = max2(o_3_0, o_3_1);\n" ;
    compute += "int o_4 = max2(o_4_0, o_4_1);\n" ;
    compute += "o_4 = max2(o_4, o_4_2);\n" ;
    compute += "o_4 = max2(o_4, o_4_3);\n" ;
    compute += "int o_5 = max2(o_5_0, o_5_1);\n" ;
    compute += "o_5 = max2(o_5, o_5_2);\n" ;
    compute += "o_5 = max2(o_5, o_5_3);\n" ;
    compute += "int o_6 = max2(o_6_0, o_6_1);\n" ;
    compute += "o_6 = max2(o_6, o_6_2);\n" ;
    compute += "o_6 = max2(o_6, o_6_3);\n" ;
    compute += "int o_7 = max2(o_7_0, o_7_1);\n" ;
    compute += "o_7 = max2(o_7, o_7_2);\n" ;
    compute += "o_7 = max2(o_7, o_7_3);\n" ;
    compute += "int o_8 = max2(o_8_0, o_8_1);\n" ;
    compute += "o_8 = max2(o_8, o_8_2);\n" ;
    compute += "int o_9 = max2(o_9_0, o_9_1);\n" ;
    compute += "o_9 = max2(o_9, o_9_2);\n" ;
    //compute += "int o_10 = o_10_1;\n" ;
    //compute += "int o_11 = o_11_1;\n" ;
    //compute += "int o_12 = o_12_1;\n" ;
    //compute += "int o_13 = max2(o_13_0, o_13_1);\n" ;
    //compute += "o_13 = max2(o_13, o_13_2);\n" ;
    //compute += "o_13 = max2(o_13, o_13_3);\n" ;
    //compute += "int o_14 = max2(o_14_0, o_14_1);\n" ;
    //compute += "o_14 = max2(o_14, o_14_2);\n" ;
    //compute += "o_14 = max2(o_14, o_14_3);\n" ;
    //compute += "int o_15 = max2(o_15_0, o_15_1);\n" ;
    //compute += "o_15 = max2(o_15, o_15_2);\n" ;
    //compute += "o_15 = max2(o_15, o_15_3);\n" ;
    //compute += "int o_16 = max2(o_16_0, o_16_1);\n" ;
    //compute += "o_16 = max2(o_16, o_16_2);\n" ;
    //compute += "o_16 = max2(o_16, o_16_3);\n" ;
    //compute += "int o_17 = max2(o_17_0, o_17_1);\n" ;
    //compute += "o_17 = max2(o_17, o_17_2);\n" ;
    //compute += "o_17 = max2(o_17, o_17_3);\n" ;
    //compute += "int o_18 = max2(o_18_0, o_18_1);\n" ;
    //compute += "o_18 = max2(o_18, o_18_2);\n" ;
    //compute += "o_18 = max2(o_18, o_18_3);\n" ;
    compute += "int o_19 = max2(o_19_0, o_19_1);\n" ;
    compute += "o_19 = max2(o_19, o_19_2);\n" ;
    compute += "o_19 = max2(o_19, o_19_3);\n" ;
    compute += "o_19 = max2(o_19, o_19_4);\n" ;
    compute += "int o_20 = max2(o_20_0, o_20_1);\n" ;
    compute += "o_20 = max2(o_20, o_20_2);\n" ;
    compute += "o_20 = max2(o_20, o_20_3);\n" ;
    compute += "o_20 = max2(o_20, o_20_4);\n" ;
    compute += "int o_21 = max2(o_21_0, o_21_1);\n" ;
    compute += "o_21 = max2(o_21, o_21_2);\n" ;
    compute += "o_21 = max2(o_21, o_21_3);\n" ;
    compute += "o_21 = max2(o_21, o_21_4);\n" ;
    //compute += "int o_22 = max2(o_22_0, o_22_1);\n" ;
    //compute += "o_22 = max2(o_22, o_22_2);\n" ;
    //compute += "o_22 = max2(o_22, o_22_3);\n" ;
    //compute += "o_22 = max2(o_22, o_22_4);\n" ;
    //compute += "int o_23 = max2(o_23_0, o_23_1);\n" ;
    //compute += "o_23 = max2(o_23, o_23_2);\n" ;
    //compute += "o_23 = max2(o_23, o_23_3);\n" ;
    //compute += "o_23 = max2(o_23, o_23_4);\n" ;
    //compute += "int o_24 = max2(o_24_0, o_24_1);\n" ;
    //compute += "o_24 = max2(o_24, o_24_2);\n" ;
    //compute += "o_24 = max2(o_24, o_24_3);\n" ;
    //compute += "o_24 = max2(o_24, o_24_4);\n" ;
    //compute += "int o_25 = o_25_3;\n" ;
    //compute += "int o_26 = o_26_3;\n" ;
    //compute += "int o_27 = max2(o_27_0, o_27_1);\n" ;
    //compute += "o_27 = max2(o_27, o_27_2);\n" ;
    //compute += "o_27 = max2(o_27, o_27_3);\n" ;
    //compute += "o_27 = max2(o_27, o_27_4);\n" ;
    //compute += "int o_28 = max2(o_28_0, o_28_1);\n" ;
    //compute += "o_28 = max2(o_28, o_28_2);\n" ;
    //compute += "o_28 = max2(o_28, o_28_3);\n" ;
    //compute += "o_28 = max2(o_28, o_28_4);\n" ;

    /*COMMON*/

    // Simple set
    compute += "int o_10 = arr[4];\n" ;
    compute += "int o_11 = arr[5];\n" ;
    compute += "int o_12 = arr[6];\n" ;
    compute += "int o_25 = arr[19];\n" ;
    compute += "int o_26 = arr[20];\n" ;

    // Dim-Shift
    compute += "int o_13 = max2(o_4, arr[22]);\n" ;
    compute += "int o_14 = max2(o_13+1, arr[21]);\n" ;
    compute += "int o_16 = max2(3+o_7, arr[17]);\n" ;
    compute += "o_16 = max2(o_16, 1+arr[24]);\n" ;
    compute += "o_16 = max2(o_16, 2+arr[25]);\n" ;
    compute += "int o_17 = max2(o_16+e, arr[18]);\n" ;

    // Offset
    compute += "int o_2 = o_1 + c;\n" ;
    compute += "int o_3 = o_2 + 1;\n" ;
    compute += "int o_15 = o_14 + 1;\n" ;
    compute += "int o_18 = o_17 + 1;\n" ;
    compute += "int o_27 = o_19 + 1;\n" ;
    compute += "int o_28 = o_20 + 1;\n" ;

    // Dim-Shifts (cont.)
    compute += "int o_22 = max2(o_18, 1+arr[19]);\n" ;
    compute += "o_22 = max2(o_22, arr[27]);\n" ;
    compute += "o_22 = max2(o_22, 1+arr[28]);\n" ;

    compute += "int o_23 = max2(3+o_3, 2+arr[15]);\n" ;
    compute += "o_23 = max2(o_23, arr[19]);\n" ;
    compute += "o_23 = max2(o_23, 1+arr[25]);\n" ;
    compute += "o_23 = max2(o_23, 2+arr[26]);\n" ;
    compute += "o_23 = max2(o_23, arr[27]);\n" ;
    compute += "o_23 = max2(o_23, arr[28]);\n" ;

    compute += "int o_24 = max2(3+o_9, 2+arr[14]);\n" ;
    compute += "o_9 = max2(o_9, 1+arr[15]);\n" ;
    compute += "o_9 = max2(o_9, arr[19]);\n" ;
    compute += "o_9 = max2(o_9, 1+arr[26]);\n" ;
    compute += "o_9 = max2(o_9, arr[28]);\n" ;


    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
}

std::string NodeTable::getCode_CVA6_opt5(void){
    
    // Divide Matrix cols into blocks

    std::string compute = "";
    std::string assign = "";

    for(int i=0; i<29; i++){
        compute += "int a_" + std::to_string(i) + " = arr[" + std::to_string(i) + "];\n";
        //compute += "int d_" + std::to_string(i) + " = d[" + std::to_string(i) + "];\n";
    }

    for(int i=0; i<29; i++){
        compute += "int o_" + std::to_string(i) + " = max2(3 + a_0, a_" + std::to_string(i) + " + 5);\n";
        //compute += "int o_" + std::to_string(i) + " = max2(2+a_0, 1+d_" + std::to_string(i) + "+a_1);\n";
        compute += "o_" + std::to_string(i) + " = max2(o_" + std::to_string(i) + ", " + std::to_string(i) + "+a_" + std::to_string(i) + ");\n";
        //compute += "o_" + std::to_string(i) + " = max2(o_" + std::to_string(i) + ", " + std::to_string(i) + "+d_" + std::to_string(i) + "+a_" + std::to_string(i) + ");\n";
    }

    for(int i=0; i<29; i++){
        assign += "arr[" + std::to_string(i) + "] = o_" + std::to_string(i) + ";\n" ;
    }

    return compute + assign;
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
    c += "void func_" + std::to_string(id) + "(int " + arrName + "[39], int temp[30]){\n"; // TODO: Change "temp" back to "d"?
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

  //ch_isBranch_ptr = channel->isBranch;
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
    auto instrMatrix = instrMatrixDict->getInstructionMatrix(mapTypeId());
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

    int delayVector[30] = {0};

    // TODO: Set i limit back to 5 to enable multiple br.pred. models
    for(int i=0; i<5; i++){
        for(int j=0; j < bufferCnt; j++){

            bool mispredicted = mispredictedBuffer[i][j];
            if(mispredicted){
                performanceData[i][36] = performanceData[i][38];
            }
            else{
                performanceData[i][36] = performanceData[i][37];
            }

            // TODO: Re-enable function look-up
            auto func = bbFuncBuffer[j];
            func(performanceData[i], delayVector);
            //func_CVA6_preComp(performanceData[i], delayVector);

            if(i==1){
                for(int n=0; n<4; n++){
                    file << performanceData[i][n] << ", ";
                }
                file << std::endl;
            }

            

        }
    }

}

void MatrixTester::func_CVA6_preComp(int arr [39], int temp[30]){

    // Remaining rows

    // Sub rows
    int t0 = temp[0];
    int x_2 = std::max({2+arr[4], t0+arr[10], 2+arr[13], 1+arr[14], arr[15], arr[26]});
    int t1 = temp[1];
    int t2 = temp[2];
    int t3 = temp[3];
    int x_4 = std::max({t1+arr[0], t2+arr[1], t3+arr[2], 1+arr[3], arr[4], t2+arr[12], arr[13]});
    int t4 = temp[4];
    int t5 = temp[5];
    int t6 = temp[6];
    int t7 = temp[7];
    int t8 = temp[8];
    int x_5 = std::max({t4+arr[0], t5+arr[1], t6+arr[2], t7+arr[3], t8+arr[11], t5+arr[12]});
    int t9 = temp[9];
    int t10 = temp[10];
    int t11 = temp[11];
    int t12 = temp[12];
    int t13 = temp[13];
    int x_6 = std::max({t9+arr[4], t9+arr[13], t10+arr[14], t11+arr[15], t12+arr[16], t13+arr[17], 2+arr[18], 2+arr[24], t12+arr[25], t11+arr[26], 1+arr[27]});
    int x_1 = std::max({x_5, arr[10] + 1});
    int x_3 = std::max({x_5 + 1, arr[4] + 1, arr[13] + 1, arr[14]});
    int t14 = temp[14];
    int x_7 = std::max({x_6, arr[10] + t14, arr[19] + 2, arr[28] + 2});
    int x_0 = std::max({x_1, arr[9]});

    // Split rows
    int out_0 = x_0;
    int t15 = temp[15];
    int out_1 = std::max({x_1 + t15, arr[9] + 1});
    int t16 = temp[16];
    int out_5 = std::max({x_1 + t16, x_2});
    int out_6 = x_3;
    int out_7 = x_4;
    int t17 = temp[17];
    int t18 = temp[18];
    int t19 = temp[19];
    int out_27 = std::max({x_5 + t17, x_6 + 1, arr[9] + t18, arr[10] + t19, arr[19] + 2, arr[23] + 2, arr[28] + 2});
    int t20 = temp[20];
    int out_28 = std::max({x_5 + t20, x_7});

    // Set rows
    int out_8 = arr[4];
    int out_9 = arr[5];
    int out_10 = arr[6];
    int out_11 = arr[7];
    int out_12 = arr[8];
    int out_23 = arr[19];
    int out_24 = arr[20];
    int out_25 = arr[21];
    int out_26 = arr[22];

    // Rest rows (Identical, Offset, DimShift)
    int t21 = temp[21];
    int out_2 = out_1 + t21;
    int t22 = temp[22];
    int out_3 = out_1 + t22;
    int out_19 = out_27 - 1;
    int out_20 = out_28 - 1;
    int out_4 = std::max({out_1 + t22, arr[4] + 3, arr[13] + 3, arr[14] + 2, arr[15] + 1, arr[16], arr[25], arr[26] + 1});
    int out_13 = std::max({out_4 + 1, arr[24]});
    int out_15 = std::max({out_13 + 2, arr[23] + 1});
    int out_16 = std::max({out_6 + 3, arr[15] + 2, arr[16] + 1, arr[17], arr[25] + 1, arr[26] + 2});
    int t23 = temp[23];
    int out_18 = std::max({out_16 + t23, arr[18] + 1});
    int out_21 = std::max({out_18, arr[19], arr[27], arr[28]});
    int out_22 = std::max({out_7 + 3, arr[14] + 2, arr[15] + 1, arr[19], arr[26] + 1, arr[28]});
    int out_14 = out_15 - 1;
    int out_17 = out_18 - 1;

    // Assign results
    arr[0] = out_0;
    arr[1] = out_1;
    arr[5] = out_5;
    arr[6] = out_6;
    arr[7] = out_7;
    arr[27] = out_27;
    arr[28] = out_28;
    arr[8] = out_8;
    arr[9] = out_9;
    arr[10] = out_10;
    arr[11] = out_11;
    arr[12] = out_12;
    arr[23] = out_23;
    arr[24] = out_24;
    arr[25] = out_25;
    arr[26] = out_26;
    arr[2] = out_2;
    arr[3] = out_3;
    arr[19] = out_19;
    arr[20] = out_20;
    arr[4] = out_4;
    arr[13] = out_13;
    arr[15] = out_15;
    arr[16] = out_16;
    arr[18] = out_18;
    arr[21] = out_21;
    arr[22] = out_22;
    arr[14] = out_14;
    arr[17] = out_17;

}