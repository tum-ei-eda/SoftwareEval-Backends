#include "models/common/TageBranchPredictModel.h"

namespace common {

void TageBranchPredictModel::setPc_np(int pc_np_) {
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

    pred_taken = tage.predict(branchInstrPc);
    pred_branchAddr = btb.getPrediction(branchInstrPc);
}

uint64_t TageBranchPredictModel::getPc() {

    if(!branchInstr) return pc_p;

    branch_info = true;
    mispredicted_info = false;
    pc_info = pc_p;
    branchInstr = false;
    int curPc = pc_ptr[getInstrIndex()];
    
    bool taken = (curPc == comp_branchAddr);

    tage.update(branchInstrPc, taken);

    if(curPc == comp_branchAddr) {
        btb.update(branchInstrPc, comp_branchAddr);
    }

    if(pred_taken && (curPc == pred_branchAddr)) {
        return pc_p;
    }
    if(!pred_taken && !taken) {
        return pc_p;
    }

    mispredicted_info = true;
    pc_info = pc_np;
    return pc_np;
}


std::string TageBranchPredictModel::getInfoHeader()
{
  std::stringstream ret_strs;
  ret_strs << "br:is_branch";
  ret_strs << "," << "br:mispredict";
  return ret_strs.str();
}

std::string TageBranchPredictModel::getInfoStream()
{
  std::stringstream ret_strs;
  ret_strs << branch_info;
  ret_strs << "," << mispredicted_info;
  branch_info = false;
  mispredicted_info = false;
  return ret_strs.str();
}



} // namespace common