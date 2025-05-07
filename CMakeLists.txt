
# Project name
project(myProgram)

# Set C++ standard and flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

# Source files
set(SOURCES
    main.cpp
    segment1.cpp
    segment2.cpp
    segment3.cpp
    robotUtils.cpp
    motors.cpp
)

set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "myProgram")


# Define the executable
add_executable(myProgram ${SOURCES})
