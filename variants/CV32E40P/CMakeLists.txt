TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  src/CV32E40P_Channel.cpp
  src/CV32E40P_InstructionModels.cpp
  src/CV32E40P_PerformanceModel.cpp
  src/CV32E40P_InstructionPrinters.cpp
  src/CV32E40P_Printer.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
  include
)
