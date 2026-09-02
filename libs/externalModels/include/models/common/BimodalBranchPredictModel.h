#ifndef BIMODAL_BRANCH_PREDICT_MODEL_H
#define BIMODAL_BRANCH_PREDICT_MODEL_H

#include "DynamicBranchPredictModel.h"
#include <list>
#include <vector>
#include <cstdint>
#include <sstream>

namespace common {

class BimodalPredictor {
public:
    BimodalPredictor(uint32_t tableSize);

    bool predict(uint32_t pc) const;
    void update(uint32_t pc, bool taken);

private:
    uint32_t calculateIndex(uint32_t pc) const;

    const uint32_t TABLE_SIZE;
    std::vector<uint8_t> counters;
};

class BimodalBranchPredictModel : public ConnectorModel {
public:

    BimodalBranchPredictModel(PerformanceModel* parent_) : ConnectorModel("BimodalBranchPredictModel", parent_), bimodal(131072), btb() {}

    uint64_t* pc_ptr;
    uint64_t* brTarget_ptr;

    void setPc_p(int pc_p_) { pc_p = pc_p_; }
    void setPc_np(int pc_np_);
    uint64_t getPc();

    // Tracing API
    std::string getInfoHeader();
    std::string getInfoStream();

private:

    BimodalPredictor bimodal;
    BranchTargetBuffer btb;

    int pc_p = 0;
    int pc_np = 0;
    bool branchInstr = false;
    int branchInstrPc;
    int comp_branchAddr;
    bool pred_taken;
    int pred_branchAddr;

    std::list<int> pcFifo;
    const size_t BUFFER_DEPTH = 4096;

    // Status variables for info-print (tracing)
    bool branch_info = false;
    bool mispredicted_info = false;
    uint64_t pc_info = 0;
};

} // namespace common
#endif // BIMODAL_BRANCH_PREDICT_MODEL_H