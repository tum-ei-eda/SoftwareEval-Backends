
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/Vicuna_zvl128b_Channel.cpp
	src/Vicuna_zvl128b_InstructionPrinters.cpp
	src/Vicuna_zvl128b_Printer.cpp
	src/Vicuna_zvl128b_SchedulingFunction.cpp
	src/Vicuna_zvl128b_PerformanceModel.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
