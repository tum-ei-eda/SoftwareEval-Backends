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


#include <sstream>
#include <string>
#include <cstdint>


#include "CV32E40P_PerformanceModel.h"

namespace CV32E40P{

SchedulingPrinterSet* CV32E40P_SchedulingPrinterSet = new SchedulingPrinterSet("CV32E40P_SchedulingPrinterSet");

static SchedulingPrinter *schedulingPrinter_add = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "add",
  0,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sub = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sub",
  1,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_xor = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "xor",
  2,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_or = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "or",
  3,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_and = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "and",
  4,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_slt = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "slt",
  5,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sltu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sltu",
  6,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sll = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sll",
  7,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_srl = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "srl",
  8,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sra = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sra",
  9,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_addi = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "addi",
  10,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_xori = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "xori",
  11,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_ori = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "ori",
  12,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_andi = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "andi",
  13,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_slti = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "slti",
  14,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sltiu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sltiu",
  15,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_slli = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "slli",
  16,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_srli = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "srli",
  17,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_srai = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "srai",
  18,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_auipc = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "auipc",
  19,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lui = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lui",
  20,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_mul = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "mul",
  21,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_mulh = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "mulh",
  22,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_mulhu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "mulhu",
  23,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_mulhsu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "mulhsu",
  24,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_div = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "div",
  25,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_rem = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "rem",
  26,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_divu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "divu",
  27,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_remu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "remu",
  28,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrw = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrw",
  29,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrs = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrs",
  30,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrc = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrc",
  31,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrwi = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrwi",
  32,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrsi = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrsi",
  33,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_csrrci = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "csrrci",
  34,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sb = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sb",
  35,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sh = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sh",
  36,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_sw = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "sw",
  37,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lw = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lw",
  38,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lh = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lh",
  39,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lhu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lhu",
  40,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lb = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lb",
  41,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_lbu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "lbu",
  42,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << "," << pm->WB_stage;
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_beq = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "beq",
  43,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_bne = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "bne",
  44,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_blt = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "blt",
  45,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_bge = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "bge",
  46,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_bltu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "bltu",
  47,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_bgeu = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "bgeu",
  48,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter__def = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "_def",
  49,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << ",";  // empty for ID_stage
    ss << ",";  // empty for EX_stage
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_jal = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "jal",
  50,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});

static SchedulingPrinter *schedulingPrinter_jalr = new SchedulingPrinter(
  CV32E40P_SchedulingPrinterSet,
  "jalr",
  51,
  [](PerformanceModel* pm_) -> std::string{
    auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
    std::stringstream ss;
    // TODO: printing rule (entrancePoint, stages, branch pred, ...)
    ss << pm->entrancePoint;
    
    ss << "," << pm->IF_stage;
    ss << "," << pm->ID_stage;
    ss << "," << pm->EX_stage;
    ss << ",";  // empty for WB_stage
    ss << "," << pm->staBranchPredModel.getInfoStream();
    ss << "\n";
    return ss.str();
});


} // namespace CV32E40P