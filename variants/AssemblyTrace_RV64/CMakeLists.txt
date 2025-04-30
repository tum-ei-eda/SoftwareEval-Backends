
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/AssemblyTrace_RV64_Channel.cpp
	src/AssemblyTrace_RV64_InstructionPrinters.cpp
	src/AssemblyTrace_RV64_Printer.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
