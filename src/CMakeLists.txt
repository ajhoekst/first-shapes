cmake_minimum_required(VERSION 2.8)

include_directories(${shapes_SOURCE_DIR}/inc)

file(GLOB SRCS *.cpp)

add_executable(shapes ${SRCS})
set_target_properties(shapes PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${shapes_SOURCE_DIR}/build")
