
TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  	src/AssemblyTrace_RV32_InstructionPrinters.cpp
	src/AssemblyTrace_RV32_Printer.cpp
	src/AssemblyTrace_RV32_Channel.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
include
)
