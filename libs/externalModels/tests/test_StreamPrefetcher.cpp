#include "MockCacheView.h"
#include "models/common/cache/prefetch/StreamPrefetcher.h"
#include <cassert>
#include <cstdio>

using prefetch_strategy::StreamPrefetchCfg;
using prefetch_strategy::StreamPrefetcher;

// Miss allocates buffer, hits slide the window forward
static void test_basic_miss_then_hits() {
    StreamPrefetchCfg cfg;
    cfg.num_streams = 4;
    cfg.prefetch_distance = 2;
    StreamPrefetcher p(cfg);
    MockCacheView cache;

    // Miss at 0x1000: cache.prefetch(0x1000) called, buffer 0 gets {0x1010, 0x1020}
    bool hit = p.lookup(0, 0x1000, cache);
    assert(!hit);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1000);
    cache.clear();

    // Hit in buffer: front=0x1010 matches, Prefetch 0x1010, Buffer -> {0x1020, 0x1030}
    hit = p.lookup(0, 0x1010, cache);
    assert(hit);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1010);
    cache.clear();

    // Continued hit: front=0x1020 matches, Prefetch 0x1020, Buffer -> {0x1030, 0x1040}
    hit = p.lookup(0, 0x1020, cache);
    assert(hit);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x1020);
    cache.clear();
}

// Miss to a new stream: allocates a new buffer, old buffer evicted
static void test_new_stream_after_miss() {
    StreamPrefetchCfg cfg;
    cfg.num_streams = 4;
    cfg.prefetch_distance = 2;
    StreamPrefetcher p(cfg);
    MockCacheView cache;

    p.lookup(0, 0x1000, cache); cache.clear();

    // Miss on completely different address -> new stream allocated 
    bool hit = p.lookup(0, 0x2000, cache);
    assert(!hit);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0x2000);
    cache.clear();

    // 0x2010 should now be in the new stream buffer
    hit = p.lookup(0, 0x2010, cache);
    assert(hit);
    assert(cache.prefetched[0] == 0x2010);
    cache.clear();
}

// Fill all 4 streams: the next miss evicts the LRU stream
static void test_lru_eviction_order() {
    StreamPrefetchCfg cfg;
    cfg.num_streams = 4;
    cfg.prefetch_distance = 1;
    StreamPrefetcher p(cfg);
    MockCacheView cache;

    // Allocate 4 streams in order
    p.lookup(0, 0xA000, cache); cache.clear(); // stream 0 (LRU after others allocated)
    p.lookup(0, 0xB000, cache); cache.clear(); // stream 1
    p.lookup(0, 0xC000, cache); cache.clear(); // stream 2
    p.lookup(0, 0xD000, cache); cache.clear(); // stream 3 (MRU)

    // Another miss must evict the LRU stream
    p.lookup(0, 0xE000, cache);
    assert(cache.prefetched.size() == 1);
    assert(cache.prefetched[0] == 0xE000);
    cache.clear();

    // 0xA010 should not be a hit (stream was evicted)
    bool hit1 = p.lookup(0, 0xA010, cache);
    assert(!hit1);
    cache.clear();

    // 0xE010 should be a hit (stream is still alive)
    bool hit2 = p.lookup(0, 0xE010, cache);
    assert(hit2);
    cache.clear();
}

int main() {
    test_basic_miss_then_hits();
    test_new_stream_after_miss();
    test_lru_eviction_order();

    puts("test_StreamPrefetcher: all tests passed");
    return 0;
}
