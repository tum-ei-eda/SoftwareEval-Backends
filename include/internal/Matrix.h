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

#ifndef SWEVAL_BACKENDS_MATRIX_H
#define SWEVAL_BACKENDS_MATRIX_H

#include <vector>
#include <cstdint>
#include <stdexcept>

#include <iostream>
#include <iomanip>

// TODO: Add Matrix size to the templates, to make it fixed size. Use arrays instead of vector for the data!

//T: Data type
//E: Zero element (Max-Plus: -inf / epsilon)
//U: Unit element (Max-Plus: 0)
template <typename T, T E, T U>
class MaxPlusMatrix
{
public:
    MaxPlusMatrix(size_t rows_, size_t cols_, T initValue_ = E):
        numRows(rows_), numCols(cols_), data(rows_*cols_, initValue_) {};
    ~MaxPlusMatrix() {};

    T& operator()(size_t row_, size_t col_)
    {
        return data[row_ * numCols + col_];
    };
    
    const T& operator()(size_t row_, size_t col_) const
    {
        return data[row_ * numCols + col_];
    };

    //size_t getNumRows(void) const { return numRows; };
    //size_t getNumCols(void) const { return numCols; };

    int getNumRows(void) const { return (int)numRows; };
    int getNumCols(void) const { return (int)numCols; };

    void setIdentity()
    {
        if(numRows != numCols){
            throw std::logic_error("Identity-Matrix must be square");
        }

        std::fill(data.begin(), data.end(), E);
        for(size_t i = 0; i < numRows; i++){
            operator()(i,i) = U;
        }
    };

    void setAsymIdentity()
    {
        size_t I;
        if (numRows > numCols){
            I = numCols;
        }
        else{
            I = numRows;
        }

        std::fill(data.begin(), data.end(), E);
        for(size_t i = 0; i < I; i++){
            operator()(i,i) = U;
        }
    }

    // this = other_(*)this
    void mpMultiply(const MaxPlusMatrix<T, E, U>& other_)
    {
        if(other_.numCols != numRows)
        {
            throw std::logic_error("MaxPlusMatrix-Multiplication: Number of rows and columns does not match");
        }

        MaxPlusMatrix<T, E, U> result(other_.numRows, numCols);
        for(size_t i = 0; i < other_.numRows; i++){
            for(size_t j = 0; j < numCols; j++){
                T res = E;
                for(size_t k = 0; k < numRows; k++){
                    res = std::max(res, mpMul(other_(i,k), operator()(k,j)));
                }
                result(i,j) = res;
            }
        }
        *this = std::move(result);
    }

    // this = otherA_(*)otherB_
    void mpProduct(const MaxPlusMatrix<T, E, U>& otherA_, const MaxPlusMatrix<T, E, U>& otherB_){

        if(numRows != otherA_.numRows){
            throw std::logic_error("MaxPlusMatrix-Product: Row dimensions are misaligned");
        }
        if(numCols != otherB_.numCols){
            throw std::logic_error("MaxPlusMatrix-Product: Column dimensions are misaligned");
        }
        if(otherA_.numCols != otherB_.numRows){
            throw std::logic_error("MaxPlusMatrix-Product: Number of rows and columns does not match");
        }

        for(size_t i = 0; i < numRows; i++){
            for(size_t j = 0; j < numCols; j++){
                T res = E;
                for(size_t k = 0; k < otherA_.numCols; k++){
                    res = std::max(res, mpMul(otherA_(i,k), otherB_(k,j)));
                }
                operator()(i,j) = res;
            }
        }
    }

    T mpMul(T a_, T b_) {
        if (a_ == E || b_ == E){
            return E;
        }
        return a_ + b_;
    }

    void print(void)
    {
        for(size_t i = 0; i < numRows; i++){
            std::cout << std::setw(3) << i << ": ";
            for(size_t j = 0; j < numCols; j++){
                std::cout << std::setw(3) << operator()(i,j) << " | ";
            }
            std::cout << std::endl;
        }
    }

private:
    size_t numRows;
    size_t numCols;
    std::vector<T> data;

};

using Matrix = MaxPlusMatrix<int64_t, -1, 0>;

#endif //SWEVAL_BACKENDS_MATRIX_H
