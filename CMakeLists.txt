# cmake_minimum_required(VERSION <specify CMake version here>)
project(TestTP)

set(CMAKE_CXX_STANDARD 11)

add_executable(TestTP main.cpp Erreur.cpp Fraction.cpp FractionFormat.cpp FractionFormat_DIVISION.cpp FractionFormat_POURCENTAGE.h FractionFormat_Parentheses.cpp ChargeurListeFraction.cpp)