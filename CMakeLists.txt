cmake_minimum_required(VERSION 3.0)
project(LuminEngine LANGUAGES CXX)

add_subdirectory(Lumin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
add_subdirectory(DemoApp)