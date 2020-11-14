cmake_minimum_required(VERSION 3.0)

project(bunnytortois)

add_executable(bunnytortois main.cpp runerDefFunc.cpp runerFunc.hpp)

install(TARGETS bunnytortois RUNTIME DESTINATION bin)
