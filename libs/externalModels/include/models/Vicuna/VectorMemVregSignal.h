#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorMemVregSignal : public ResourceModel {
public:
  VectorMemVregSignal(PerformanceModel *parent_)
      : ResourceModel("VectorMemVregSignal", parent_){};

  uint64_t *vtype_ptr;
  uint64_t *width_ptr;

  int getDelay(void);

private:
  auto decodeSew() -> uint64_t;
};

} // namespace Vicuna
