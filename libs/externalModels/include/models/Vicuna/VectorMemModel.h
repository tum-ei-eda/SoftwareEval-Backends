#pragma once

#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

struct DecodedInfo {
  uint64_t sew;
  uint64_t lmul;
  uint64_t width;
};

class VectorMemModel : public ResourceModel {
public:
  VectorMemModel(PerformanceModel *parent_)
      : ResourceModel("VectorMemModel", parent_){};

  uint64_t *vtype_ptr;
  uint64_t *width_ptr;
  uint64_t *vl_ptr;

  int getDelay(void);

private:
  auto decodeLmul() -> uint64_t;
  auto decodeSew() -> uint64_t;
  // auto decodeWidth() -> uint64_t;
};

} // namespace Vicuna
