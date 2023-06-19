TARGET_SOURCES(SWEVAL_BACKENDS_LIB PRIVATE
  src/AssemblyTrace_Channel.cpp
  src/AssemblyTrace_Printer.cpp
  src/AssemblyTrace_InstructionPrinters.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_BACKENDS_LIB PRIVATE
  include
)

