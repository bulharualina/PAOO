# Include the header files
include_directories(${CMAKE_SOURCE_DIR}/inc/Treatment)
include_directories(${CMAKE_SOURCE_DIR}/inc/Animals)


# Add the source files
add_executable(doggy
    main.cpp
    Treatment/Treatment.cpp
    Animals/Dog.cpp
    Animals/Cat.cpp
    Animals/Animal.cpp
)
