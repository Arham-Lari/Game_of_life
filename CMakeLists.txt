cmake_minimum_required(VERSION 3.16)

project(Game_of_Life)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(raylib REQUIRED)

add_executable(Game_of_Life 
  src/main.cpp
)

target_link_libraries(Game_of_Life PRIVATE raylib)
