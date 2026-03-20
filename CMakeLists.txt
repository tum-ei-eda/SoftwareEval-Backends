cmake_minimum_required(VERSION 3.16)
project(SWEVAL_BACKENDS_LIB LANGUAGES C CXX)

set(SRC_FILES
  src/api/Factory.cpp
  src/api/Backend.cpp
  src/internal/PerformanceEstimator.cpp
  src/internal/PerformanceModel.cpp
  src/internal/TracePrinter.cpp
  src/internal/Printer.cpp

  src/internal/BlockExtractor.cpp
  src/internal/MatrixTester.cpp
  src/internal/InstrMatrix.cpp
  src/internal/InstrMatrix_CV32E40P.cpp
  src/internal/BrPredModelTest.cpp

  src/internal/MAPExplorer.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

add_subdirectory(variants)
add_subdirectory(libs)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} PRIVATE
  SWEVAL_JIT_COMPILER
  ETISS # TODO: Currently needed to support JIT. Get rid of this dependency
)

target_include_directories(${PROJECT_NAME} PUBLIC
  include/api
)

target_include_directories(${PROJECT_NAME} PRIVATE
  include/api/softwareEval-backends
  include/internal
)

# TARGET_LINK_LIBRARIES(${PROJECT_NAME} PRIVATE
#   TCCJIT
# )

# # ------------------------------
# # Add TinyCC external subproject (defines TinyCC_SubLib & tcc_sub_lib)
# # ------------------------------
# add_subdirectory(externals/tcc EXCLUDE_FROM_ALL)
# 
# # Ensure we build/instal TinyCC before trying to link/use it
# add_dependencies(${PROJECT_NAME} TinyCC_SubLib)
# 
# # Link to the shared libtcc.so (IMPORTED target defined in externals/tcc)
# target_link_libraries(${PROJECT_NAME} PRIVATE tcc_sub_lib)
# 
# # Make sure headers are visible
# target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_BINARY_DIR}/tcc-sub-install/include")
# 
# message(STATUS "Sub-library TinyCC (shared) integrated from commit d0c26ba4e50a36779456af71b06ec01985e406e5")