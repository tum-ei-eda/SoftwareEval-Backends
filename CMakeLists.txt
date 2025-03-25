PROJECT(SWEVAL_BACKENDS_LIB)

SET (SRC_FILES
  src/api/Factory.cpp
  src/api/Backend.cpp
  src/internal/PerformanceEstimator.cpp
  src/internal/PerformanceModel.cpp
  src/internal/TracePrinter.cpp
  src/internal/Printer.cpp
)

ADD_LIBRARY(${PROJECT_NAME} STATIC ${SRC_FILES})

# TODO: etiss::Configuration requires ETISS dependency
TARGET_LINK_LIBRARIES(${PROJECT_NAME} PRIVATE
  ETISS
)
TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC
  include/
)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC
  include/api
)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE
  include/api/softwareEval-backends
  include/internal
)

ADD_SUBDIRECTORY(variants)
ADD_SUBDIRECTORY(libs)
