TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
    StaticBranchPredictModel.cpp
    DynamicBranchPredictModel.cpp
)

ADD_SUBDIRECTORY(cache)