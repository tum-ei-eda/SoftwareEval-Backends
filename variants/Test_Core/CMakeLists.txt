TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  src/TestCore_Channel.cpp
  src/TestCore_InstructionModels.cpp
  src/TestCore_PerformanceModel.cpp
  src/TestCore_Printer.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
  include
)
