cmake_minimum_required(VERSION 3.12)

project(AnimalsTreatment)

include_directories(inc/Animals)
include_directories(inc)


add_executable(doggy
    src/main.cpp
    src/Treatment.cpp
    src/Animals/Dog.cpp
    src/Animals/Cat.cpp
    src/Animals/Animal.cpp )