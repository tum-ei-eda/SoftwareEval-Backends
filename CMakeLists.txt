PROJECT(SWEVAL_BACKENDS_LIB)

SET (SRC_FILES
  src/api/Factory.cpp
  src/internal/PerformanceEstimator.cpp
  src/internal/PerformanceModel.cpp
  src/internal/Printer.cpp
  src/internal/Streamer.cpp
)

ADD_LIBRARY(${PROJECT_NAME} STATIC ${SRC_FILES})

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC
  include/api
)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE
  include/api/softwareEval-backends
  include/internal
)

ADD_SUBDIRECTORY(variants)
ADD_SUBDIRECTORY(libs)
