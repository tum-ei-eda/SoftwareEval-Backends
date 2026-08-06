#include "MockCacheView.h"
#include "models/common/cache/prefetch/NextLinePrefetcher.h"
#include <cassert>
#include <cstdio>

using prefetch_strategy::NextLinePrefetchCfg;
using prefetch_strategy::NextLinePrefetcher;

// onMiss with distance=1: miss at 0x1000 -> {0x1010}
static void test_onMiss_distance1() {
    NextLinePrefetchCfg cfg;
    cfg.prefetch_distance = 1;
    NextLinePrefetcher p(cfg);
    MockCacheView cache;

    p.onMiss(0, 0x1000, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1010);
}

// onMiss with distance=2: miss at 0x1000 -> {0x1010, 0x1020}
static void test_onMiss_distance2() {
    NextLinePrefetchCfg cfg;
    cfg.prefetch_distance = 2;
    NextLinePrefetcher p(cfg);
    MockCacheView cache;

    p.onMiss(0, 0x1000, cache);
    assert(cache.prefetched.size() == 2);
    assert(cache.prefetched[0] == 0x1010);
    assert(cache.prefetched[1] == 0x1020);
}

// onHit, not a prefetch-hit, tagged=true -> no prefetch
static void test_onHit_notPrefetchHit_tagged() {
    NextLinePrefetchCfg cfg;
    cfg.tagged_prefetch = true;
    cfg.prefetch_distance = 2;
    NextLinePrefetcher p(cfg);
    MockCacheView cache;

    p.onHit(0, 0x1000, /*isPrefetchHit=*/false, cache);
    assert(cache.prefetched.empty());
}

// onHit, is prefetch-hit, tagged=true -> {0x1010, 0x1020}
static void test_onHit_isPrefetchHit_tagged() {
    NextLinePrefetchCfg cfg;
    cfg.tagged_prefetch = true;
    cfg.prefetch_distance = 2;
    NextLinePrefetcher p(cfg);
    MockCacheView cache;

    p.onHit(0, 0x1000, /*isPrefetchHit=*/true, cache);
    assert(cache.prefetched.size() == 2);
    assert(cache.prefetched[0] == 0x1010);
    assert(cache.prefetched[1] == 0x1020);
}

// onHit, tagged=false -> never prefetches, even on prefetch-hit
static void test_onHit_tagged_false() {
    NextLinePrefetchCfg cfg;
    cfg.tagged_prefetch = false;
    cfg.prefetch_distance = 2;
    NextLinePrefetcher p(cfg);
    MockCacheView cache;

    p.onHit(0, 0x1000, /*isPrefetchHit=*/true, cache);
    assert(cache.prefetched.empty());
}

int main() {
    test_onMiss_distance1();
    test_onMiss_distance2();
    test_onHit_notPrefetchHit_tagged();
    test_onHit_isPrefetchHit_tagged();
    test_onHit_tagged_false();

    puts("test_NextLinePrefetcher: all tests passed");
    return 0;
}
