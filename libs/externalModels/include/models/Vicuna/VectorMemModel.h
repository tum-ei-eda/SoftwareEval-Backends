#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna
{

struct DecodedInfoLoad
{
    uint64_t sew = 8;
    uint64_t lmul = 1;
    uint64_t encodedLmul = 0b00;
    bool fractionalLmul = false;
};

class VectorMemModel : public ResourceModel
{
  public:
    VectorMemModel(PerformanceModel *parent_) : ResourceModel("VectorMemModel", parent_){};

    uint64_t *vtype_ptr;
    uint64_t *lsWidth_ptr;
    uint64_t *vl_ptr;

    int getDelay(void);

  private:
    auto decodeLmul() -> uint64_t;
    auto decodeSew() -> uint64_t;
    auto decodeInfo() -> DecodedInfoLoad;
};

} // namespace Vicuna
