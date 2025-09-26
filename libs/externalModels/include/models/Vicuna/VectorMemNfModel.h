#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorMemNfModel : public ResourceModel {
public:
  VectorMemNfModel(PerformanceModel *parent_)
      : ResourceModel("VectorMemNfModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
  };

  uint64_t *nf_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
};

} // namespace Vicuna
