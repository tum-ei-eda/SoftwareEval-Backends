#ifndef COMMON_CACHE_CACHE_VIEW_H
#define COMMON_CACHE_CACHE_VIEW_H

#include <cstdint>

namespace cache
{

class CacheView
{
  public:
    virtual ~CacheView() = default;
    virtual uint32_t getLineSize() const = 0;
    virtual void prefetch(uint64_t addr) = 0;
};

} // namespace cache

#endif