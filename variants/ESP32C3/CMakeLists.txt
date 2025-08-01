
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/ESP32C3_PerformanceModel.cpp
	src/ESP32C3_SchedulingFunction.cpp
	src/ESP32C3_Channel.cpp
	src/ESP32C3_Printer.cpp
	src/ESP32C3_InstructionPrinters.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
