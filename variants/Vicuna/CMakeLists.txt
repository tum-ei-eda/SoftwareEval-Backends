
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/Vicuna_InstructionPrinters.cpp
	src/Vicuna_Channel.cpp
	src/Vicuna_SchedulingFunction.cpp
	src/Vicuna_Printer.cpp
	src/Vicuna_PerformanceModel.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
