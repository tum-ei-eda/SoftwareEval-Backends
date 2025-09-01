#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna
{

class PackUnpackLsu : public ResourceModel
{
  public:
    PackUnpackLsu(PerformanceModel *parent_) : ResourceModel("PackUnpackLsu", parent_){};

    uint64_t *vtype_ptr;
    uint64_t *lsWidth_ptr;

    int getDelay(void);

  private:
    auto log2(uint64_t value) -> uint64_t;

    auto getLmul() -> uint64_t;

    auto getSew() -> uint64_t;

    auto decodeMultiplicativeLmul(uint64_t const encodedLmul) -> uint64_t;

    auto getEncodedLmul() -> uint64_t;

    auto lmulIsFractional() -> bool;

    auto lmulIsFractional(uint64_t const lmul) -> bool;

    auto getLoadStoreEmul() -> uint64_t;
};

} // namespace Vicuna
