cmake_minimum_required(VERSION 3.17)
project(PhysicsCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(PhysicsCalculator main.cpp validation.h physicsCalculations.h physicsHelperFunctions.h)