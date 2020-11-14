cmake_minimum_required(VERSION 2.6)
project(tortois)

add_executable(tortois main.cpp funcDefinition.cpp funcDeclaration.h)

install(TARGETS tortois RUNTIME DESTINATION bin)
