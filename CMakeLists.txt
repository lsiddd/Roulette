cmake_minimum_required(VERSION 3.10)

# set the project name
project(Roulette VERSION 0.01)

# add the executable
add_executable(Roulette main.cc number.cc roulette.cc)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)