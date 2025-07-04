#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna
{

struct DecodedInfo
{
    uint64_t sew = 8;
    uint64_t lmul = 1;
    uint64_t encodedLmul = 0b00;
    bool fractionalLmul = false;
};

class VectorStoreModel : public ResourceModel
{
  public:
    VectorStoreModel(PerformanceModel *parent_) : ResourceModel("VectorStoreModel", parent_){};

    uint64_t *vtype_ptr;
    uint64_t *width_ptr;
    uint64_t *vl_ptr;

    int getDelay(void);

  private:
    auto decodeLmul() -> uint64_t;
    auto decodeSew() -> uint64_t;
    auto decodeInfo() -> DecodedInfo;
};

} // namespace Vicuna
