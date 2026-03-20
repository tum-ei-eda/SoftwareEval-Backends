/*
* Copyright 2026 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/


#ifndef SWEVAL_BACKENDS_CV32E40P_BLOCK_INSTRUCTION_GENERATOR_H
#define SWEVAL_BACKENDS_CV32E40P_BLOCK_INSTRUCTION_GENERATOR_H

#include "BlockInstructionGenerator.h"

#include "CV32E40P_Channel.h"

#include <sstream>

namespace CV32E40P{

class BlockInstruction_add : public BlockInstruction{

public:
    BlockInstruction_add(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_add() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_sub : public BlockInstruction{

public:
    BlockInstruction_sub(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_sub() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_xor : public BlockInstruction{

public:
    BlockInstruction_xor(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_xor() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_or : public BlockInstruction{

public:
    BlockInstruction_or(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_or() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_and : public BlockInstruction{

public:
    BlockInstruction_and(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_and() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_slt : public BlockInstruction{

public:
    BlockInstruction_slt(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_slt() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_sltu : public BlockInstruction{

public:
    BlockInstruction_sltu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_sltu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_sll : public BlockInstruction{

public:
    BlockInstruction_sll(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_sll() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_srl : public BlockInstruction{

public:
    BlockInstruction_srl(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_srl() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_sra : public BlockInstruction{

public:
    BlockInstruction_sra(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_sra() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_addi : public BlockInstruction{

public:
    BlockInstruction_addi(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_addi() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_xori : public BlockInstruction{

public:
    BlockInstruction_xori(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_xori() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_ori : public BlockInstruction{

public:
    BlockInstruction_ori(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_ori() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_andi : public BlockInstruction{

public:
    BlockInstruction_andi(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_andi() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_slti : public BlockInstruction{

public:
    BlockInstruction_slti(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_slti() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_sltiu : public BlockInstruction{

public:
    BlockInstruction_sltiu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_sltiu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_slli : public BlockInstruction{

public:
    BlockInstruction_slli(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_slli() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_srli : public BlockInstruction{

public:
    BlockInstruction_srli(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_srli() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_srai : public BlockInstruction{

public:
    BlockInstruction_srai(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_srai() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_auipc : public BlockInstruction{

public:
    BlockInstruction_auipc(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_auipc() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_lui : public BlockInstruction{

public:
    BlockInstruction_lui(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lui() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_mul : public BlockInstruction{

public:
    BlockInstruction_mul(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_mul() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_mulh : public BlockInstruction{

public:
    BlockInstruction_mulh(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_mulh() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_mulhu : public BlockInstruction{

public:
    BlockInstruction_mulhu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_mulhu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_mulhsu : public BlockInstruction{

public:
    BlockInstruction_mulhsu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_mulhsu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_div : public BlockInstruction{

public:
    BlockInstruction_div(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_div() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_rem : public BlockInstruction{

public:
    BlockInstruction_rem(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_rem() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_divu : public BlockInstruction{

public:
    BlockInstruction_divu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_divu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_remu : public BlockInstruction{

public:
    BlockInstruction_remu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_remu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;
    uint64_t rd;

};

class BlockInstruction_csrrw : public BlockInstruction{

public:
    BlockInstruction_csrrw(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrw() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_csrrs : public BlockInstruction{

public:
    BlockInstruction_csrrs(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrs() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_csrrc : public BlockInstruction{

public:
    BlockInstruction_csrrc(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrc() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_csrrwi : public BlockInstruction{

public:
    BlockInstruction_csrrwi(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrwi() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_csrrsi : public BlockInstruction{

public:
    BlockInstruction_csrrsi(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrsi() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_csrrci : public BlockInstruction{

public:
    BlockInstruction_csrrci(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_csrrci() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_sb : public BlockInstruction{

public:
    BlockInstruction_sb(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
    };
    ~BlockInstruction_sb() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_sh : public BlockInstruction{

public:
    BlockInstruction_sh(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
    };
    ~BlockInstruction_sh() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_sw : public BlockInstruction{

public:
    BlockInstruction_sw(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
    };
    ~BlockInstruction_sw() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_lw : public BlockInstruction{

public:
    BlockInstruction_lw(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lw() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_lh : public BlockInstruction{

public:
    BlockInstruction_lh(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lh() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_lhu : public BlockInstruction{

public:
    BlockInstruction_lhu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lhu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_lb : public BlockInstruction{

public:
    BlockInstruction_lb(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lb() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_lbu : public BlockInstruction{

public:
    BlockInstruction_lbu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
    };
    ~BlockInstruction_lbu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};

class BlockInstruction_beq : public BlockInstruction{

public:
    BlockInstruction_beq(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_beq() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_bne : public BlockInstruction{

public:
    BlockInstruction_bne(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_bne() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_blt : public BlockInstruction{

public:
    BlockInstruction_blt(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_blt() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_bge : public BlockInstruction{

public:
    BlockInstruction_bge(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_bge() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_bltu : public BlockInstruction{

public:
    BlockInstruction_bltu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_bltu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_bgeu : public BlockInstruction{

public:
    BlockInstruction_bgeu(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rs2 = channel->rs2[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_bgeu() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << rs2;
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rs2;

};

class BlockInstruction_mret : public BlockInstruction{

public:
    BlockInstruction_mret(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        isBranch = true;
    };
    ~BlockInstruction_mret() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:

};

class BlockInstruction_ecall : public BlockInstruction{

public:
    BlockInstruction_ecall(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        isBranch = true;
    };
    ~BlockInstruction_ecall() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:

};

class BlockInstruction__def : public BlockInstruction{

public:
    BlockInstruction__def(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    };
    ~BlockInstruction__def() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << "null";
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:

};

class BlockInstruction_jal : public BlockInstruction{

public:
    BlockInstruction_jal(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rd = channel->rd[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_jal() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rd;

};

class BlockInstruction_jalr : public BlockInstruction{

public:
    BlockInstruction_jalr(Channel* channel_, uint64_t instrCnt_): BlockInstruction(channel_, instrCnt_) {
        CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
        rs1 = channel->rs1[instrCnt_];
        rd = channel->rd[instrCnt_];
        isBranch = true;
    };
    ~BlockInstruction_jalr() = default;

    std::string getJsonStr(std::string offset_){
        std::stringstream ret_strs;
        ret_strs << offset_ << "{\n";
        ret_strs << offset_ << "\t\"typeId\": " << typeId;
        ret_strs << ",\n" << offset_ << "\t\"rs1\": " << rs1;
        ret_strs << ",\n" << offset_ << "\t\"rs2\": " << "null";
        ret_strs << ",\n" << offset_ << "\t\"rd\": " << rd;
        ret_strs << "\n" << offset_ << "}";
        return ret_strs.str();
    };

private:
    uint64_t rs1;
    uint64_t rd;

};


class CV32E40P_BlockInstructionGenerator : public BlockInstructionGenerator{

public:
    CV32E40P_BlockInstructionGenerator(){
        ctorMap[0] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_add>(channel_, instrCnt_); };
        ctorMap[1] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sub>(channel_, instrCnt_); };
        ctorMap[2] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_xor>(channel_, instrCnt_); };
        ctorMap[3] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_or>(channel_, instrCnt_); };
        ctorMap[4] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_and>(channel_, instrCnt_); };
        ctorMap[5] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_slt>(channel_, instrCnt_); };
        ctorMap[6] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sltu>(channel_, instrCnt_); };
        ctorMap[7] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sll>(channel_, instrCnt_); };
        ctorMap[8] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_srl>(channel_, instrCnt_); };
        ctorMap[9] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sra>(channel_, instrCnt_); };
        ctorMap[10] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_addi>(channel_, instrCnt_); };
        ctorMap[11] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_xori>(channel_, instrCnt_); };
        ctorMap[12] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_ori>(channel_, instrCnt_); };
        ctorMap[13] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_andi>(channel_, instrCnt_); };
        ctorMap[14] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_slti>(channel_, instrCnt_); };
        ctorMap[15] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sltiu>(channel_, instrCnt_); };
        ctorMap[16] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_slli>(channel_, instrCnt_); };
        ctorMap[17] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_srli>(channel_, instrCnt_); };
        ctorMap[18] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_srai>(channel_, instrCnt_); };
        ctorMap[19] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_auipc>(channel_, instrCnt_); };
        ctorMap[20] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lui>(channel_, instrCnt_); };
        ctorMap[21] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_mul>(channel_, instrCnt_); };
        ctorMap[22] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_mulh>(channel_, instrCnt_); };
        ctorMap[23] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_mulhu>(channel_, instrCnt_); };
        ctorMap[24] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_mulhsu>(channel_, instrCnt_); };
        ctorMap[25] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_div>(channel_, instrCnt_); };
        ctorMap[26] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_rem>(channel_, instrCnt_); };
        ctorMap[27] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_divu>(channel_, instrCnt_); };
        ctorMap[28] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_remu>(channel_, instrCnt_); };
        ctorMap[29] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrw>(channel_, instrCnt_); };
        ctorMap[30] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrs>(channel_, instrCnt_); };
        ctorMap[31] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrc>(channel_, instrCnt_); };
        ctorMap[32] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrwi>(channel_, instrCnt_); };
        ctorMap[33] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrsi>(channel_, instrCnt_); };
        ctorMap[34] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_csrrci>(channel_, instrCnt_); };
        ctorMap[35] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sb>(channel_, instrCnt_); };
        ctorMap[36] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sh>(channel_, instrCnt_); };
        ctorMap[37] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_sw>(channel_, instrCnt_); };
        ctorMap[38] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lw>(channel_, instrCnt_); };
        ctorMap[39] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lh>(channel_, instrCnt_); };
        ctorMap[40] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lhu>(channel_, instrCnt_); };
        ctorMap[41] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lb>(channel_, instrCnt_); };
        ctorMap[42] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_lbu>(channel_, instrCnt_); };
        ctorMap[43] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_beq>(channel_, instrCnt_); };
        ctorMap[44] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_bne>(channel_, instrCnt_); };
        ctorMap[45] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_blt>(channel_, instrCnt_); };
        ctorMap[46] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_bge>(channel_, instrCnt_); };
        ctorMap[47] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_bltu>(channel_, instrCnt_); };
        ctorMap[48] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_bgeu>(channel_, instrCnt_); };
        ctorMap[49] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_mret>(channel_, instrCnt_); };
        ctorMap[50] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_ecall>(channel_, instrCnt_); };
        ctorMap[51] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction__def>(channel_, instrCnt_); };
        ctorMap[52] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_jal>(channel_, instrCnt_); };
        ctorMap[53] = [](Channel* channel_, uint64_t instrCnt_){ return std::make_unique<BlockInstruction_jalr>(channel_, instrCnt_); };
    };
    ~CV32E40P_BlockInstructionGenerator() = default;

};

} // namespace CV32E40P

#endif // SWEVAL_BACKENDS_CV32E40P_BLOCK_INSTRUCTION_GENERATOR_H