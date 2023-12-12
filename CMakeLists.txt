cmake_minimum_required(VERSION 3.25)

project(tcping_x64)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Os")
#message(!!!!${PROJECT_SOURCE_DIR})

file(GLOB objectFiles ${PROJECT_SOURCE_DIR}/src/*.c*)
#message(!!!!${objectFiles})

add_executable(tcping_x64 ${objectFiles})

install(TARGETS tcping_x64 DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/lib)

