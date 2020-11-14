cmake_minimum_required(VERSION 2.6)
project(eratosfengrid)

add_executable(eratosfengrid main.cpp EratoFuncDefinition.cpp EratoFunction.h)

install(TARGETS eratosfengrid RUNTIME DESTINATION bin)
