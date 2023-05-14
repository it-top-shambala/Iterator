cmake_minimum_required(VERSION 3.25)
project(Iterator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Iterator main.cpp lib/IIterator.h lib/ImmutableVector.h lib/Stack.h)
