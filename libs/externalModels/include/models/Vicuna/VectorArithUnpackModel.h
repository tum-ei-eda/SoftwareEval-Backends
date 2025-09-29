#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorArithUnpackModel : public ResourceModel {
public:
  VectorArithUnpackModel(PerformanceModel *parent_)
      : ResourceModel("VectorArithUnpackModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    delay_ = (vlen_ == 64 ? 4 : 5);
  };

  int getDelay(void);

private:
  uint64_t vlen_;
  uint64_t delay_;
};

} // namespace Vicuna
