cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#versions
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWORLD_VERSION_MINOR 0)

#including subdirectoriy containing library
add_subdirectory(Hello)
include_directories(Hello)

#entry point for executable
add_executable (CMakeHelloWorld Hello demo.cpp)

#libraries during link process
target_link_libraries (CMakeHelloWorld Hello)

install (TARGETS CMakeHelloWorld DESTINATION bin)
