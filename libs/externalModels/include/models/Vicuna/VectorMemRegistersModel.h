#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorMemRegistersModel : public ResourceModel {
public:
  VectorMemRegistersModel(PerformanceModel *parent_)
      : ResourceModel("VectorMemRegistersModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
  };

  uint64_t *nf_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
};

} // namespace Vicuna
