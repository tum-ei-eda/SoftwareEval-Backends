#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorElmModel : public ResourceModel {
public:
  VectorElmModel(PerformanceModel *parent_)
      : ResourceModel("VectorElmModel", parent_) {
    vlen_ = std::stoi(std::getenv("VLEN"));
  };

  uint64_t *vtype_ptr;

  int getDelay(void);

private:
  uint64_t vlen_;
  auto getLmul() -> uint64_t;
  auto getSew() -> uint64_t;
};

} // namespace Vicuna
