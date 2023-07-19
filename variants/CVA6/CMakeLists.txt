TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  src/CVA6_Channel.cpp
  src/CVA6_InstructionModels.cpp
  src/CVA6_PerformanceModel.cpp
  src/CVA6_InstructionPrinters.cpp
  src/CVA6_Printer.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
  include
)
