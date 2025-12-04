cmake_minimum_required(VERSION 3.16)
project(SWEVAL_JIT_COMPILER LANGUAGES C CXX)

set(SRC_FILES
    src/JITCompiler.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC
    include
)

###################### START ADDING TCC ######################
# TODO: This currently relies on ETISS. Remove this dependency!

add_dependencies(${PROJECT_NAME} TinyCC)

### configure tcc architecture
unset(SWEVAL_TCCJIT_ARCH)
if(UNIX)
    set(SWEVAL_TCCJIT_ARCH unix)
else()
    message(ERROR "cannot build SWEVAL_JIT_COMPILER on this unknown system")
endif()

if(${SWEVAL_TCCJIT_ARCH} STREQUAL unix)
    LIST(APPEND SWEVAL_TCCJIT_ADDITIONAL_LIBRARIES
        tcc
    )
else()
    message(ERROR "Unknown SWEVAL_TCCJIT_ARCH value")
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC 
    ${SWEVAL_TCCJIT_ADDITIONAL_LIBRARIES}
    ETISS # TODO: Currently needed to support JIT. Get rid of this dependency
)

###################### END ADDING TCC ######################

set(JIT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/jit_include")

# TODO: This should not be public!
target_compile_definitions(${PROJECT_NAME} PUBLIC
    JIT_INCLUDE_PATH=\"${JIT_INCLUDE_DIR}\"
)

