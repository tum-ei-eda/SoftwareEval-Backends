
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/InstructionTrace_RV64IMF_Zicsr_Channel.cpp
	src/InstructionTrace_RV64IMF_Zicsr_Printer.cpp
	src/InstructionTrace_RV64IMF_Zicsr_InstructionPrinters.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
