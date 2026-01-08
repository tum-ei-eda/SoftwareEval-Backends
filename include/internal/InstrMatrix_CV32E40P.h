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

#ifndef SWEVAL_BACKENDS_INSTR_MATRIX_CV32E40P_H
#define SWEVAL_BACKENDS_INSTR_MATRIX_CV32E40P_H

#include "InstrMatrix.h"

#include <array>

extern InstructionMatrixGenerator* InstrMatrixGen_CV32E40P; // TODO: REMVOE

class InstrMatrix_CV32E40P : public InstructionMatrix {

public:
    InstrMatrix_CV32E40P(std::string name_, uint64_t id_) : InstructionMatrix(name_, id_) {};

protected:
    std::array<int64_t, 39> tempCol;

    static inline constexpr std::size_t NUM_TIME_VARS = 4;
    static inline constexpr std::size_t NUM_REG_CONS = 32;

    static inline constexpr std::size_t IN_CON_COL_PC = 36;
    static inline constexpr std::size_t OUT_CON_COL_PC_P = 37;
    static inline constexpr std::size_t OUT_CON_COL_PC_NP = 38;

};

class InstrMatrix_Default : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Default() : InstrMatrix_CV32E40P("Default", 0){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix= {{
        { 1, -1, -1, -1},
        {-1,  0, -1, -1},
        {-1, -1,  0, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, -1, -1, -1}};
};

class InstrMatrix_Arith_Ra_Rb : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Arith_Ra_Rb() : InstrMatrix_CV32E40P("Arith_Ra_Rb", 1){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs2Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_RS2 = 1;
    static inline constexpr std::size_t CROSS_ID_PC = 2;

    static inline constexpr std::array<std::array<int64_t,3>, 1> conCrossMatrix = {{
        //rs1, rs2, pc
        {1, 1, 3} // rd
    }};    

};

class InstrMatrix_Arith_Ra : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Arith_Ra() : InstrMatrix_CV32E40P("Arith_Ra", 2){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 1;

    static inline constexpr std::array<std::array<int64_t,2>, 1> conCrossMatrix = {{
        // rs1, pc
        {1, 3} // rd
    }};

};

class InstrMatrix_Arith_X : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Arith_X() : InstrMatrix_CV32E40P("Arith_X", 3){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 0;

    static inline constexpr std::array<std::array<int64_t,2>, 1> conCrossMatrix = {{
        // pc
        {3} // rd
    }};

};

class InstrMatrix_Mul_Ra_Rb : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Mul_Ra_Rb() : InstrMatrix_CV32E40P("Mul_Ra_Rb", 4){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs2Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_RS2 = 1;
    static inline constexpr std::size_t CROSS_ID_PC = 2;

    static inline constexpr std::array<std::array<int64_t,3>, 1> conCrossMatrix = {{
        //rs1, rs2, pc
        {1, 1, 3} // rd
    }};    

};

class InstrMatrix_MulH_Ra_Rb : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_MulH_Ra_Rb() : InstrMatrix_CV32E40P("MulH_Ra_Rb", 5){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 7,  6,  5, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 7, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 5, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs2Vector = {{-1, 0, 5, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{7, 6, 5, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_RS2 = 1;
    static inline constexpr std::size_t CROSS_ID_PC = 2;

    static inline constexpr std::array<std::array<int64_t,3>, 1> conCrossMatrix = {{
        //rs1, rs2, pc
        {5, 5, 7} // rd
    }};    

};

class InstrMatrix_Csr_Ra : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Csr_Ra() : InstrMatrix_CV32E40P("Csr_Ra", 6){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 1;

    static inline constexpr std::array<std::array<int64_t,2>, 1> conCrossMatrix = {{
        //rs1, pc
        {1, 3} // rd
    }};    

};

class InstrMatrix_Csr_X : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Csr_X() : InstrMatrix_CV32E40P("Csr_X", 7){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 0;

    static inline constexpr std::array<std::array<int64_t,1>, 1> conCrossMatrix = {{
        //rs1, pc
        {3} // rd
    }};    

};

class InstrMatrix_Store : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Store() : InstrMatrix_CV32E40P("Store", 8){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1,  0},
        { 4,  3,  2,  1}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, 4}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, 2}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs2Vector = {{-1, 0, 1, 2}};    

};

class InstrMatrix_Load : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Load() : InstrMatrix_CV32E40P("Load", 9){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1,  0},
        { 4,  3,  2,  1}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, 4}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, 2}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{4, 3, 2, 1}};

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 1;

    static inline constexpr std::array<std::array<int64_t,2>, 1> conCrossMatrix = {{
        // rs1, pc
        {2, 4} // rd
    }};

};

class InstrMatrix_Branch_Ra_Rb : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_Branch_Ra_Rb() : InstrMatrix_CV32E40P("Branch_Ra_Rb", 10){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs2Vector = {{-1, 0, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_pVector = {{1, -1, -1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_npVector = {{3, 2, 1, -1}};

    static inline constexpr std::size_t CROSS_ID_PC_P = 0;
    static inline constexpr std::size_t CROSS_ID_PC_NP = 1;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_RS2 = 1;
    static inline constexpr std::size_t CROSS_ID_PC = 2;

    static inline constexpr std::array<std::array<int64_t,3>, 2> conCrossMatrix = {{
        //rs1, rs2, pc
        {-1, -1, 1}, // pc_p
        {1, 1, 3} // pc_np
    }};    

};

class InstrMatrix_ExCtrl : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_ExCtrl() : InstrMatrix_CV32E40P("ExCtrl", 11){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1, -1, -1, -1},
        {-1,  0, -1, -1},
        {-1, -1,  0, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, -1, -1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_pVector = {{1, -1, -1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_npVector = {{1, -1, -1, -1}};

    static inline constexpr std::size_t CROSS_ID_PC_P = 0;
    static inline constexpr std::size_t CROSS_ID_PC_NP = 1;
    static inline constexpr std::size_t CROSS_ID_PC = 0;

    static inline constexpr std::array<std::array<int64_t,1>, 2> conCrossMatrix = {{
        //pc
        {1}, // pc_p
        {1} // pc_np
    }};    

};

class InstrMatrix_jal : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_jal() : InstrMatrix_CV32E40P("jal", 12){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_pVector = {{1, -1, -1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_npVector = {{2, 1, -1, -1}};
    

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_PC_P = 1;
    static inline constexpr std::size_t CROSS_ID_PC_NP = 2;
    static inline constexpr std::size_t CROSS_ID_PC = 0;

    static inline constexpr std::array<std::array<int64_t,1>, 3> conCrossMatrix = {{
        //pc
        {3}, // rd
        {1}, // pc_p
        {2} // pc_np
    }};    

};

class InstrMatrix_jalr : public InstrMatrix_CV32E40P {

public:
    InstrMatrix_jalr() : InstrMatrix_CV32E40P("jalr", 13){};

    void assign(Matrix&, const MatrixTester&) override;
    void mpMultiply(Matrix&, const MatrixTester&) override;

private:

    static inline constexpr std::array<std::array<int64_t, NUM_TIME_VARS>, NUM_TIME_VARS> timeVarMatrix = {{
        { 1,  0, -1, -1},
        { 2,  1,  0, -1},
        { 3,  2,  1, -1},
        {-1, -1, -1,  0}
    }};

    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pcVector = {{1, 2, 3, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rs1Vector = {{-1, 1, 2, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> rdVector = {{3, 2, 1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_pVector = {{1, -1, -1, -1}};
    static inline constexpr std::array<int64_t, NUM_TIME_VARS> pc_npVector = {{2, 1, -1, -1}};
    

    static inline constexpr std::size_t CROSS_ID_RD = 0;
    static inline constexpr std::size_t CROSS_ID_PC_P = 1;
    static inline constexpr std::size_t CROSS_ID_PC_NP = 2;
    static inline constexpr std::size_t CROSS_ID_RS1 = 0;
    static inline constexpr std::size_t CROSS_ID_PC = 1;

    static inline constexpr std::array<std::array<int64_t,2>, 3> conCrossMatrix = {{
        //rs1, pc
        { 2, 3}, // rd
        {-1, 1}, // pc_p
        { 1, 2} // pc_np
    }};    

};

class InstrMatrixDict_CV32E40P : public InstructionMatrixDict {

public:
    InstrMatrixDict_CV32E40P() : InstructionMatrixDict(){
        registerInstrMatrix<InstrMatrix_Default>();
        registerInstrMatrix<InstrMatrix_Arith_Ra_Rb>();
        registerInstrMatrix<InstrMatrix_Arith_Ra>();
        registerInstrMatrix<InstrMatrix_Arith_X>();
        registerInstrMatrix<InstrMatrix_Mul_Ra_Rb>();
        registerInstrMatrix<InstrMatrix_MulH_Ra_Rb>();
        registerInstrMatrix<InstrMatrix_Csr_Ra>();
        registerInstrMatrix<InstrMatrix_Csr_X>();
        registerInstrMatrix<InstrMatrix_Store>();
        registerInstrMatrix<InstrMatrix_Load>();
        registerInstrMatrix<InstrMatrix_Branch_Ra_Rb>();
        registerInstrMatrix<InstrMatrix_ExCtrl>();
        registerInstrMatrix<InstrMatrix_jal>();
        registerInstrMatrix<InstrMatrix_jalr>();
    };

};


#endif //SWEVAL_BACKENDS_INSTR_MATRIX_CV32E40P_H