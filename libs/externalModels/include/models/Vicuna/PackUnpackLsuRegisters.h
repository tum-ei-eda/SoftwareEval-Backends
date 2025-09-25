#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class PackUnpackLsuRegisters : public ResourceModel {
public:
  PackUnpackLsuRegisters(PerformanceModel *parent_)
      : ResourceModel("PackUnpackLsuRegisters", parent_){};

  uint64_t *nf_ptr;

  int getDelay(void);
};

} // namespace Vicuna
