#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorDividerModel : public ResourceModel {
public:
  VectorDividerModel(PerformanceModel *parent_)
      : ResourceModel("VectorDividerModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    vlane_width_ = std::stoi(std::getenv("VLANE_WIDTH"));
  };

  uint64_t *vtype_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
  uint64_t vlane_width_;
  auto decodeLmul() -> uint64_t;
  auto decodeSew() -> uint64_t;
};

} // namespace Vicuna
