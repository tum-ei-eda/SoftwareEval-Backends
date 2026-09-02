#include "models/common/BimodalBranchPredictModel.h"

namespace common {

BimodalPredictor::BimodalPredictor(uint32_t tableSize)
    : TABLE_SIZE(tableSize), counters(tableSize, 2) // Init: weakly taken (10)
{}

bool BimodalPredictor::predict(uint32_t pc) const {
    return counters[calculateIndex(pc)] >= 2; // 2,3 = taken; 0,1 = not taken
}

void BimodalPredictor::update(uint32_t pc, bool taken) {
    uint32_t idx = calculateIndex(pc);
    if (taken) {
        if (counters[idx] < 3) counters[idx]++;
    } else {
        if (counters[idx] > 0) counters[idx]--;
    }
}

uint32_t BimodalPredictor::calculateIndex(uint32_t pc) const {
    return (pc >> 2) % TABLE_SIZE; // >>2 due to 4-Byte-Alignment
}

void BimodalBranchPredictModel::setPc_np(int pc_np_) {
    branchInstr = true;
    branchInstrPc = pc_ptr[getInstrIndex()];
    comp_branchAddr = brTarget_ptr[getInstrIndex()];
    pc_np = pc_np_;

    bool entryExists = false;
    for(int entry : pcFifo) {
        if(entry == branchInstrPc) { entryExists = true; break; }
    }

    if(!entryExists) {
        if(pcFifo.size() < BUFFER_DEPTH) {
            btb.createEntry(branchInstrPc);
        }
        else {
            int removePc = pcFifo.front();
            pcFifo.pop_front();
            btb.replaceEntry(branchInstrPc, removePc);
        }
        pcFifo.push_back(branchInstrPc);
    }

    pred_taken = bimodal.predict(branchInstrPc);
    pred_branchAddr = btb.getPrediction(branchInstrPc);
}

uint64_t BimodalBranchPredictModel::getPc() {

    if(!branchInstr) return pc_p;

    branch_info = true;
    mispredicted_info = false;
    pc_info = pc_p;
    branchInstr = false;
    int curPc = pc_ptr[getInstrIndex()];

    bool taken = (curPc == comp_branchAddr);

    mispredicted_info = pred_taken != taken;

    bimodal.update(branchInstrPc, taken);

    if(curPc == comp_branchAddr) {
        btb.update(branchInstrPc, comp_branchAddr);
    }

    if(pred_taken && (curPc == pred_branchAddr)) {
        return pc_p;
    }
    if(!pred_taken && !taken) {
        return pc_p;
    }

    pc_info = pc_np;
    return pc_np;
}


std::string BimodalBranchPredictModel::getInfoHeader()
{
  std::stringstream ret_strs;
  ret_strs << "br:is_branch";
  ret_strs << "," << "br:mispredict";
  ret_strs << "," << "br:btb_size";
  return ret_strs.str();
}

std::string BimodalBranchPredictModel::getInfoStream()
{
  std::stringstream ret_strs;
  ret_strs << branch_info;
  ret_strs << "," << mispredicted_info;
  ret_strs << "," << btb.getSize();
  branch_info = false;
  mispredicted_info = false;
  return ret_strs.str();
}

} // namespace common