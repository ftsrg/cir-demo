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

install(TARGETS xcfa-mapper RUNTIME DESTINATION bin)

enable_testing()

# CTest: run the mapper on the sample input and compare with expected output
add_test(NAME map_sample
  COMMAND /bin/sh -c "$<TARGET_FILE:xcfa-mapper> ${CMAKE_SOURCE_DIR}/test/sample.mlir ${CMAKE_BINARY_DIR}/out.c && ${CMAKE_COMMAND} -E compare_files ${CMAKE_SOURCE_DIR}/test/expected.c ${CMAKE_BINARY_DIR}/out.c"
)
