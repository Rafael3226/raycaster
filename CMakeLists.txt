cmake_minimum_required(VERSION 3.12)
project(RayCaster VERSION 0.0.1 LANGUAGES C)

# Find GLUT package
find_package(GLUT REQUIRED)

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Set source files for your project
set(SOURCES
    src/main.c
    # Add other source files if needed
)

# Add executable target
add_executable(RayCaster ${SOURCES})

# Link libraries
target_link_libraries(RayCaster PRIVATE  GLUT::GLUT)
