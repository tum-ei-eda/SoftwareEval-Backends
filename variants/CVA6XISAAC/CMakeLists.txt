
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/CVA6XISAAC_SchedulingFunction.cpp
	src/CVA6XISAAC_InstructionPrinters.cpp
	src/CVA6XISAAC_PerformanceModel.cpp
	src/CVA6XISAAC_Channel.cpp
	src/CVA6XISAAC_Printer.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
