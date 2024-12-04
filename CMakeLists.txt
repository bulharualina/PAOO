cmake_minimum_required(VERSION 3.12)

project(AnimalsTreatment)

# Add the include directories for header files
include_directories(${CMAKE_SOURCE_DIR}/inc/Animals)
include_directories(${CMAKE_SOURCE_DIR}/inc/Treatment)

# Add the executable target with source files
add_executable(doggy
    src/main.cpp
    src/Treatment/Treatment.cpp
    src/Animals/Animal.cpp
    src/Animals/Dog.cpp
    src/Animals/Cat.cpp
)
