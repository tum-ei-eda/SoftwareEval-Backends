#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class PackUnpack : public ResourceModel {
public:
  PackUnpack(PerformanceModel *parent_)
      : ResourceModel("PackUnpack", parent_){};

  uint64_t *vtype_ptr;

  int getDelay(void);

private:
  auto decodeLmul() -> uint64_t;
};

} // namespace Vicuna
