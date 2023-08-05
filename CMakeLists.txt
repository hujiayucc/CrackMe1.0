cmake_minimum_required(VERSION 3.18.4)
project(CrackMe)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Release")
LINK_LIBRARIES(m pthread)

file(REMOVE_RECURSE "CMakeFiles")
file(GLOB_RECURSE SRC *.cpp)

add_executable(CrackMe ${SRC})