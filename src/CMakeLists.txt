cmake_minimum_required(VERSION 2.8)

set( CMAKE_VERBOSE_MAKEFILE on )
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_library(ntclass SHARED ntclass.cpp)

add_executable(main_link main_link.cpp)
target_link_libraries(main_link ntclass)

add_executable(main_dlopen main_dlopen.cpp)
target_link_libraries(main_dlopen dl)

add_executable(main_dlmopen main_dlmopen.cpp)
target_link_libraries(main_dlmopen dl)
