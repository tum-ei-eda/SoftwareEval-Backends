#ifndef TAGE_BRANCH_PREDICT_MODEL_H
#define TAGE_BRANCH_PREDICT_MODEL_H

#include "TAGEPredictor.h" 
#include "DynamicBranchPredictModel.h" 
#include <list>
#include <map>
#include <sstream>

namespace common {

struct BranchPredictorModelCfg { 
    int numTables = 7;
    int tableSize = 512;
    int bimodalSize = 4096;
    int minHist = 5;
    int maxHist = 130;
};

class TageBranchPredictModel : public ConnectorModel {
public:

    //TageBranchPredictModel(PerformanceModel* parent_, const BranchPredictorModelCfg& cfg_) : ConnectorModel("TageBranchPredictModel", parent_), tage(cfg_.numTables, cfg_.tableSize, cfg_.bimodalSize, cfg_.minHist, cfg_.maxHist), btb() {}
    TageBranchPredictModel(PerformanceModel* parent_) : ConnectorModel("TageBranchPredictModel", parent_), tage(7, 512, 4096, 5, 130), btb() {}

    uint64_t* pc_ptr;
    uint64_t* brTarget_ptr;

    void setPc_p(int pc_p_) { pc_p = pc_p_; }
    void setPc_np(int pc_np_);
    uint64_t getPc();

    // Tracing API
    std::string getInfoHeader(); 
    std::string getInfoStream();

private:

    TagePredictor tage;
    BranchTargetBuffer btb;

    int pc_p = 0;
    int pc_np = 0;
    bool branchInstr = false;
    int branchInstrPc;
    int comp_branchAddr;
    bool pred_taken;
    int pred_branchAddr;

    std::list<int> pcFifo;
    const size_t BUFFER_DEPTH = 1024;    

    // Status variables for info-print (tracing)
    bool branch_info = false;
    bool mispredicted_info = false;
    uint64_t pc_info = 0;
};

} // namespace common
#endif // TAGE_BRANCH_PREDICT_MODEL_H