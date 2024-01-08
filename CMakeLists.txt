# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(RayCaster)

# Add your source files
set(SOURCE_FILES
    src/main.c
)
# Add executable target
add_executable(raycaster ${SOURCE_FILES})
# Find SDL2
find_package(SDL2 REQUIRED)
# Include SDL2 headers
include_directories(${SDL2_INCLUDE_DIRS})
# Link against SDL2
target_link_libraries(raycaster ${SDL2_LIBRARIES})