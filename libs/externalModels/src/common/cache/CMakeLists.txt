TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
    CacheModel.cpp
    IdealCacheModel.cpp
)

ADD_SUBDIRECTORY(prefetching)
ADD_SUBDIRECTORY(replacement)