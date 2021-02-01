cmake_minimum_required(VERSION 2.8.0)

project("Protobuf Test" C CXX)

option(BUILD_1_FIRST_TEST   "Build 1-first program"    OFF)
option(BUILD_2_SECOND_TEST  "Build 2-second program"   OFF)
option(BUILD_3_THIRD_TEST   "Build 3-third program"    OFF)
option(BUILD_4_FORTH_TEST   "Build 4-forth program"    OFF)
option(BUILD_5_FIFTH_TEST   "Build 5-fifth program"    OFF)
option(BUILD_6_SIXTH_TEST   "Build 6-sixth program"    ON)
option(BUILD_7_SEVENTH_TEST "Build 7-seventh program"  OFF)
option(BUILD_8_EIGHTH_TEST  "Build 8-eighth program"   ON)
option(BUILD_9_NINTH_TEST   "Build 9-ninth program"    ON)
option(BUILD_10_TENTH_TEST  "Build 10-tenth program"   ON)

#
# if u wanna release, do like this `cmake -DCMAKE_BUILD_TYPE=Release`
#
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

include(CheckCXXCompilerFlag)

#
# Configuration
#
include("${PROJECT_SOURCE_DIR}/cmake/configuration.cmake")

#
# Dependencies
#
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/modules")

#
# Package protobuf
#
find_package(protobuf REQUIRED)
include_directories(SYSTEM ${protobuf_INCLUDE})
get_filename_component(protobuf_LIBRARY_PATH ${protobuf_LIBRARY} PATH)
get_filename_component(protobuf_LIBRARY_NAME ${protobuf_LIBRARY} NAME_WE)
string(REGEX REPLACE "^lib" "" protobuf_LIBRARY_NAME ${protobuf_LIBRARY_NAME})

link_directories(${protobuf_LIBRARY_PATH})

#
# Test in Sub Directories
#
if(BUILD_1_FIRST_TEST)
    add_subdirectory(1-first)
endif()

if(BUILD_2_SECOND_TEST)
    add_subdirectory(2-second)
endif()

if(BUILD_3_THIRD_TEST)
    add_subdirectory(3-third)
endif()

if(BUILD_4_FORTH_TEST)
	add_subdirectory(4-forth)
endif()

if(BUILD_5_FIFTH_TEST)
	add_subdirectory(5-fifth)
endif()

if(BUILD_6_SIXTH_TEST)
	add_subdirectory(6-sixth)
endif()

if(BUILD_7_SEVENTH_TEST)
	add_subdirectory(7-seventh)
endif()

if(BUILD_8_EIGHTH_TEST)
	add_subdirectory(8-eighth)
endif()

if(BUILD_9_NINTH_TEST)
	add_subdirectory(9-ninth)
endif()

if(BUILD_10_TENTH_TEST)
	add_subdirectory(10-tenth)
endif()

#
# End
#
