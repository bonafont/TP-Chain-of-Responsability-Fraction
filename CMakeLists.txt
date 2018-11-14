# cmake_minimum_required(VERSION <specify CMake version here>)
project(TestTP)

set(CMAKE_CXX_STANDARD 11)

add_executable(TestTP main.cpp Erreur.cpp Erreur.h Fraction.cpp Fraction.h FractionFormat.cpp FractionFormat.h FractionFormat_DIVISION.cpp FractionFormat_DIVISION.h FractionFormat_POURCENTAGE.cpp FractionFormat_POURCENTAGE.h FractionFormat_Parentheses.h FractionFormat_Parentheses.cpp ChargeurListeFraction.h ChargeurListeFraction.cpp)