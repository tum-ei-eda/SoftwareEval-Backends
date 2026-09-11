ADD_SUBDIRECTORY(src/block_schedules)

TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/CV32E40P_DSE_SchedulingFunction.cpp
	src/CV32E40P_DSE_MAPExplorer.cpp
	src/CV32E40P_DSE_Channel.cpp
	src/CV32E40P_DSE_InstructionPrinters.cpp
	src/CV32E40P_DSE_Printer.cpp
	src/CV32E40P_DSE_PerformanceModel.cpp
	src/CV32E40P_DSE_InstructionSchedulingFunctions.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
