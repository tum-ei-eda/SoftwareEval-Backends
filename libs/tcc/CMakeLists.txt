cmake_minimum_required(VERSION 3.16)
project(SWEVAL_JIT_COMPILER LANGUAGES C CXX)

set(SRC_FILES
    src/JITCompiler.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC
    include
)

# if(TARGET tcc)
#     message(STATUS "COFO WAS HERE!")
#     target_include_directories(${PROJECT_NAME} PRIVATE ${TinyCC_SOURCE_DIR})
#     target_link_libraries(${PROJECT_NAME} PRIVATE tcc)
# endif()
