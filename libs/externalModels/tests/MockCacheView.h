#pragma once
#include "models/common/cache/prefetch/CacheView.h"
#include <cstdint>
#include <vector>

struct MockCacheView : cache::CacheView {
    uint32_t line_size = 16;
    std::vector<uint64_t> prefetched;

    uint32_t getLineSize() const override { return line_size; }
    void prefetch(uint64_t addr) override { prefetched.push_back(addr); }

    void clear() { prefetched.clear(); }
};
