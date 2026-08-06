#include "MockCacheView.h"
#include "models/common/cache/prefetch/StridePrefetcher.h"
#include <cassert>
#include <cstdint>
#include <cstdio>

using prefetch_strategy::RPTState;
using prefetch_strategy::StridePrefetchCfg;
using prefetch_strategy::StridePrefetcher;

// Test state machien: INITIAL -> TRANSIENT -> STEADY -> INITIAL
static void test_fsm_sequence() {
    StridePrefetchCfg cfg;
    cfg.prefetch_distance = 1;
    cfg.rtp_size = 8;
    StridePrefetcher p(cfg);
    MockCacheView cache;

    // Step 1
    p.onMiss(0x100, 0x1000, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1000);
    cache.clear();

    // Step 2: INITIAL -> TRANSIENT, stride=16, prefetch issued
    p.onMiss(0x100, 0x1010, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1020);
    cache.clear();

    // Step 3: TRANSIENT -> STEADY; prefetch at +16
    p.onMiss(0x100, 0x1020, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1030);
    cache.clear();

    // Step 4: wrong stride -> STEADY -> INITIAL, stride retained, prefetch still issued
    p.onMiss(0x100, 0x1040, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1050);
    cache.clear();
}

// Negative stride: 0x2000 -> 0x1FF0 -> 0x1FE0 -> prefetch at 0x1FD0
static void test_negative_stride() {
    StridePrefetchCfg cfg;
    cfg.prefetch_distance = 1;
    cfg.rtp_size = 8;
    StridePrefetcher p(cfg);
    MockCacheView cache;

    const uint64_t pc = 0x200;
    p.onMiss(pc, 0x2000, cache);
    cache.clear();

    // stride = 0x1FF0 - 0x2000 = -16 -> INITIAL -> TRANSIENT
    p.onMiss(pc, 0x1FF0, cache);
    cache.clear();

    p.onMiss(pc, 0x1FE0, cache);
    assert(cache.prefetched.size() == 1);
    const int64_t expected = 0x1FE0 + static_cast<int64_t>(-16);
    assert(cache.prefetched[0] == expected); // 0x1FD0
    cache.clear();
}

// RPT collision: two PCs that hash to the same slot
static void test_rpt_collision() {
    StridePrefetchCfg cfg;
    cfg.prefetch_distance = 1;
    cfg.rtp_size = 8;
    StridePrefetcher p(cfg);
    MockCacheView cache;

    // Same slot in RPT
    const uint64_t pc1 = 0x100;
    const uint64_t pc2 = 0x120;

    p.onMiss(pc1, 0x1000, cache); cache.clear();
    p.onMiss(pc1, 0x1010, cache); cache.clear();
    p.onMiss(pc1, 0x1020, cache); cache.clear();

    // pc2 accesses same slot -> tag mismatch -> evicts pc1, allocates pc2
    p.onMiss(pc2, 0x2000, cache);
    cache.clear();

    // pc2 is TRANSIENT
    p.onMiss(pc2, 0x2010, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x2020);
    cache.clear();
}

// NO_PRED -> recovery
static void test_no_pred_recovery() {
    StridePrefetchCfg cfg;
    cfg.prefetch_distance = 1;
    cfg.rtp_size = 8;
    StridePrefetcher p(cfg);
    MockCacheView cache;

    const uint64_t pc = 0x300;

    // Go into NO_PRED
    p.onMiss(pc, 0x1000, cache); cache.clear();
    p.onMiss(pc, 0x1010, cache); cache.clear();
    p.onMiss(pc, 0x1030, cache); cache.clear();

    p.onMiss(pc, 0x1060, cache);
    assert(cache.prefetched.empty());
    cache.clear();

    // 2 correct strides: NO_PRED->TRANSIENT, TRANSIENT->STEADY
    p.onMiss(pc, 0x1090, cache); 
    assert(cache.prefetched.size() == 1);
    cache.clear();

    p.onMiss(pc, 0x10C0, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x10C0 + 48);
    cache.clear();
}

int main() {
    test_fsm_sequence();
    test_negative_stride();
    test_rpt_collision();
    test_no_pred_recovery();

    puts("test_StridePrefetcher: all tests passed");
    return 0;
}
