#pragma once

#include <cstdint>
#include <cstdlib>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorArithWideningModel : public ResourceModel {
public:
  VectorArithWideningModel(PerformanceModel *parent_)
      : ResourceModel("VectorArithWideningModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    vlane_width_ = std::stoi(std::getenv("VLANE_WIDTH"));
  };

  uint64_t *vtype_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
  uint64_t vlane_width_;
  auto decodeLmul() -> uint64_t;
};

} // namespace Vicuna
