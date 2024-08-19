TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  src/InstructionTrace_RV64_Channel.cpp
  src/InstructionTrace_RV64_InstructionPrinters.cpp
  src/InstructionTrace_RV64_Printer.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
  include
)
