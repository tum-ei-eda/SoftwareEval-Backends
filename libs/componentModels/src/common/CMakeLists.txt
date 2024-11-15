TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
    StaticBranchPredictModel.cpp
    DynamicBranchPredictModel.cpp
    ConfigurableMemoryModel.cpp
    ConfigurableMemoryModel/CacheInstance.cpp
    ConfigurableMemoryModel/MemoryInstanceManager.cpp
)
