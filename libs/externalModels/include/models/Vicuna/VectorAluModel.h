#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorAluModel : public ResourceModel {
public:
  VectorAluModel(PerformanceModel *parent_)
      : ResourceModel("VectorAluModel", parent_){};

  uint64_t *vtype_ptr;
  uint64_t *isWidening_ptr;

  int getDelay(void);

private:
  auto decodeLmul() -> uint64_t;
};

} // namespace Vicuna
