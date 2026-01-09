
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/InstructionTrace_RV64IM_Zicsr_Printer.cpp
	src/InstructionTrace_RV64IM_Zicsr_InstructionPrinters.cpp
	src/InstructionTrace_RV64IM_Zicsr_Channel.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
