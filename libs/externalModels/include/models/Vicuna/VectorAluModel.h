#pragma once

#include <cstdint>
#include <cstdlib>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorAluModel : public ResourceModel {
public:
  VectorAluModel(PerformanceModel *parent_)
      : ResourceModel("VectorAluModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
    vlane_width_ = std::stoi(std::getenv("VLANE_WIDTH"));
  };

  uint64_t *vtype_ptr;
  uint64_t *isWidening_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
  uint64_t vlane_width_;
  auto decodeLmul() -> uint64_t;
};

} // namespace Vicuna
