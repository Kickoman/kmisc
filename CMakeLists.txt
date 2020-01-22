cmake_minimum_required(VERSION 3.5)

project(validation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(kmisc
    main.cpp
    variant.cpp
    variant.h
    validator.cpp
    validator.h)
