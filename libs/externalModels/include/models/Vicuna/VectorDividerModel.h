#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna
{

class VectorDividerModel : public ResourceModel
{
  public:
    VectorDividerModel(PerformanceModel *parent_) : ResourceModel("VectorDividerModel", parent_){};

    uint64_t *vtype_ptr;

    int getDelay(void);

  private:
    auto decodeLmul() -> uint64_t;
    auto decodeSew() -> uint64_t;
};

} // namespace Vicuna
