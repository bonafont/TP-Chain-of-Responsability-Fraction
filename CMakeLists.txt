# cmake_minimum_required(VERSION <specify CMake version here>)
project(TestTP)

set(CMAKE_CXX_STANDARD 11)

add_executable(TestTP src/main.cpp src/Erreur.cpp include/Erreur.h src/Fraction.cpp include/Fraction.h src/FractionFormat.cpp include/FractionFormat.h src/FractionFormat_DIVISION.cpp include/FractionFormat_DIVISION.h src/FractionFormat_POURCENTAGE.cpp include/FractionFormat_POURCENTAGE.h include/FractionFormat_Parentheses.h src/FractionFormat_Parentheses.cpp include/ChargeurListeFraction.h src/ChargeurListeFraction.cpp)