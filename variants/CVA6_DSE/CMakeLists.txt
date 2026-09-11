
SET(SUBDIRS
  	src/block_schedules

)

FOREACH(dir ${SUBDIRS})
  ADD_SUBDIRECTORY(${dir})
ENDFOREACH()

TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/CVA6_DSE_Printer.cpp
	src/CVA6_DSE_Channel.cpp
	src/CVA6_DSE_SchedulingFunction.cpp
	src/CVA6_DSE_PerformanceModel.cpp
	src/CVA6_DSE_InstructionPrinters.cpp
	src/CVA6_DSE_MAPExplorer.cpp
	src/CVA6_DSE_InstructionSchedulingFunctions.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
