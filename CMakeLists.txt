cmake_minimum_required(VERSION 3.6)
project(raytracer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -o3 -g")

include_directories(src/parser lib/misc src/trace src/output)

set(PARSER_DIR src/parser/)
set(SRC_DIR src/)
set(MISC_DIR lib/misc/)
set(TRACE_DIR src/trace/)
set(PPM_DIR src/output/)

set(LIB_MISC
    ${MISC_DIR}vector3.cc
    ${MISC_DIR}color.cc
    ${MISC_DIR}list-to-word.cc)

set(PARSER_SRC
    ${PARSER_DIR}camera.cc
    ${PARSER_DIR}light.cc
    ${PARSER_DIR}ambient-light.cc
    ${PARSER_DIR}direction-light.cc
    ${PARSER_DIR}point-light.cc
    ${PARSER_DIR}object.cc
    ${PARSER_DIR}vertice.cc
    ${PARSER_DIR}parser.cc)

set(TRACE_SRC
    ${TRACE_DIR}ray.cc
    ${TRACE_DIR}outgoing_screen.cc
    ${TRACE_DIR}triangle.cc
    ${TRACE_DIR}intersection.cc
    ${TRACE_DIR}obj_tracing.cc)

set(PPM_SRC
    ${PPM_DIR}ppm.cc)

set(MAIN_SRC
    ${SRC_DIR}/main.cc)

add_library(lib STATIC ${LIB_MISC})
target_link_libraries(lib)

add_library(parser STATIC ${PARSER_SRC})
target_link_libraries(parser
                      lib)

add_library(trace STATIC ${TRACE_SRC})
target_link_libraries(lib)

add_library(ppm STATIC ${PPM_SRC})
target_link_libraries(lib)

add_executable(raytracer ${MAIN_SRC})
target_link_libraries(raytracer
                      parser
                      trace
                      ppm)
