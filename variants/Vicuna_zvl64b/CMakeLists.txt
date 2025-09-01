
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/Vicuna_zvl64b_Channel.cpp
	src/Vicuna_zvl64b_PerformanceModel.cpp
	src/Vicuna_zvl64b_InstructionPrinters.cpp
	src/Vicuna_zvl64b_SchedulingFunction.cpp
	src/Vicuna_zvl64b_Printer.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
