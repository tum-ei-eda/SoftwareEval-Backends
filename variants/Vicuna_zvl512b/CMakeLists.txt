
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/Vicuna_zvl512b_Printer.cpp
	src/Vicuna_zvl512b_InstructionPrinters.cpp
	src/Vicuna_zvl512b_SchedulingFunction.cpp
	src/Vicuna_zvl512b_PerformanceModel.cpp
	src/Vicuna_zvl512b_Channel.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
