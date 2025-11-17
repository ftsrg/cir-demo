cmake_minimum_required(VERSION 3.13)
project(xcfa-mapper LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

# Allow the user to pass LLVM/MLIR install dirs (default to parent backend/bin/lib)
if(NOT DEFINED LLVM_DIR)
  set(LLVM_DIR "${CMAKE_SOURCE_DIR}/../backend/bin/lib/cmake/llvm")
endif()
if(NOT DEFINED MLIR_DIR)
  set(MLIR_DIR "${CMAKE_SOURCE_DIR}/../backend/bin/lib/cmake/mlir")
endif()

find_package(LLVM REQUIRED CONFIG PATHS ${LLVM_DIR} NO_DEFAULT_PATH)
find_package(MLIR REQUIRED CONFIG PATHS ${MLIR_DIR} NO_DEFAULT_PATH)

message(STATUS "Found LLVM: ${LLVM_PACKAGE_VERSION}")
message(STATUS "MLIR cmake dir: ${MLIR_DIR}")

list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")
include(AddLLVM)

add_executable(xcfa-mapper
  src/main.cpp
  src/Mapper.cpp
  src/handlers/Handlers.cpp
)

target_include_directories(xcfa-mapper PRIVATE
  ${LLVM_INCLUDE_DIRS}
  ${MLIR_INCLUDE_DIRS}
  # Some local trees put headers under backend/bin/include
  ${CMAKE_SOURCE_DIR}/../backend/bin/include
  ${CMAKE_SOURCE_DIR}/src
)
add_definitions(${LLVM_DEFINITIONS})

# Link to core MLIR libraries; additional dialect libs can be appended when needed.
target_link_libraries(xcfa-mapper PRIVATE
  MLIRIR
  MLIRParser
  MLIRSupport
  LLVMSupport
)

# If a compiled CIR dialect runtime exists in the workspace, link it by
# absolute path so the dialect's static initialization runs at program
# startup and registers the CIR dialect with MLIR. This helps the parser
# recognize `cir.*` ops at parse time.
# Try both shared (.so) and static (.a) libraries

# Determine the lib directory to search based on LLVM_DIR
if(DEFINED LLVM_DIR)
  # Extract the lib directory from LLVM_DIR (which points to lib/cmake/llvm)
  get_filename_component(LLVM_LIB_DIR "${LLVM_DIR}/../../" ABSOLUTE)
else()
  # Fall back to the default backend location
  set(LLVM_LIB_DIR "${CMAKE_SOURCE_DIR}/../backend/bin/lib")
endif()

message(STATUS "Looking for MLIRCIR libraries in: ${LLVM_LIB_DIR}")

# Verify the directory exists
if(EXISTS "${LLVM_LIB_DIR}")
  message(STATUS "  Directory exists: ${LLVM_LIB_DIR}")
else()
  message(WARNING "  Directory does NOT exist: ${LLVM_LIB_DIR}")
endif()

file(GLOB MLIRCIR_SHARED_LIBS "${LLVM_LIB_DIR}/libMLIRCIR.so*")
file(GLOB MLIRCIR_STATIC_LIBS "${LLVM_LIB_DIR}/libMLIRCIR.a")

if(MLIRCIR_SHARED_LIBS)
  message(STATUS "Found MLIRCIR shared libs: ${MLIRCIR_SHARED_LIBS}")
  target_link_libraries(xcfa-mapper PRIVATE ${MLIRCIR_SHARED_LIBS})
elseif(MLIRCIR_STATIC_LIBS)
  message(STATUS "Found MLIRCIR static libs: ${MLIRCIR_STATIC_LIBS}")
  
  # When linking statically, link ALL static libraries to resolve all symbols
  file(GLOB ALL_STATIC_LIBS "${LLVM_LIB_DIR}/*.a")
  list(LENGTH ALL_STATIC_LIBS NUM_STATIC_LIBS)
  message(STATUS "Linking all static libraries from ${LLVM_LIB_DIR}")
  message(STATUS "Found ${NUM_STATIC_LIBS} static libraries")
  
  if(NUM_STATIC_LIBS GREATER 0)
    # Use linker groups to handle circular dependencies in static libraries
    target_link_libraries(xcfa-mapper PRIVATE
      -Wl,--start-group
      ${ALL_STATIC_LIBS}
      -Wl,--end-group
    )
  else()
    message(WARNING "No static libraries found in ${LLVM_LIB_DIR}, linking may fail")
    target_link_libraries(xcfa-mapper PRIVATE ${MLIRCIR_STATIC_LIBS})
  endif()
else()
  message(STATUS "libMLIRCIR not found in ${LLVM_LIB_DIR}; continuing without linking CIR runtime.")
endif()

install(TARGETS xcfa-mapper RUNTIME DESTINATION bin)

enable_testing()

# CTest: run the mapper on the sample input and compare with expected output
add_test(NAME map_sample
  COMMAND /bin/sh -c "$<TARGET_FILE:xcfa-mapper> ${CMAKE_SOURCE_DIR}/test/sample.mlir ${CMAKE_BINARY_DIR}/out.c && ${CMAKE_COMMAND} -E compare_files ${CMAKE_SOURCE_DIR}/test/expected.c ${CMAKE_BINARY_DIR}/out.c"
)
