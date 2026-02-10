#include <sstream>
#include <string>
#include <cstdint>

#include "CV32E40P_PerformanceModel.h"
// #include "CV32E40P_PrinterFunction.h"

namespace CV32E40P{

SchedulingPrinterSet* CV32E40P_SchedulingPrinterSet = new SchedulingPrinterSet("CV32E40P_SchedulingPrinterSet");

static SchedulingPrinter* schedulingPrinter_NoWB = new SchedulingPrinter(
      CV32E40P_SchedulingPrinterSet,
      "NoWB",
      0,
      [](PerformanceModel* pm_) -> std::string {
        auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
        std::stringstream ss;
        ss << pm->entrancePoint;
        ss << "," << pm->IF_stage;
        ss << "," << pm->ID_stage;
        ss << "," << pm->EX_stage;
        ss << "," ;
        ss << "," << pm->staBranchPredModel.getInfoStream();
        ss << "\n";
        return ss.str();
      });

static SchedulingPrinter* schedulingPrinter_WB = new SchedulingPrinter(
      CV32E40P_SchedulingPrinterSet,
      "WB",
      1,
      [](PerformanceModel* pm_) -> std::string {
        auto* pm = static_cast<CV32E40P_PerformanceModel*>(pm_);
        std::stringstream ss;
        ss << pm -> entrancePoint;
        ss << "," << pm->IF_stage;
        ss << "," << pm->ID_stage;
        ss << "," << pm->EX_stage;
        ss << "," << pm->WB_stage;
        ss << "," << pm->staBranchPredModel.getInfoStream();
        ss << "\n";
        return ss.str();
      });


}
