
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/CVA6_PerformanceModel.cpp
	src/CVA6_Channel.cpp
	src/CVA6_Printer.cpp
	src/CVA6_InstructionPrinters.cpp
	src/CVA6_SchedulingFunction.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
