cmake_minimum_required(VERSION 3.16)
project(FastParseX VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add subdirectories
add_subdirectory(src/core)
add_subdirectory(src/csv)
add_subdirectory(src/log)
add_subdirectory(src/binary)
add_subdirectory(src/compress)
add_subdirectory(src/parallel)
add_subdirectory(src/profiling)
add_subdirectory(src/export)

# Create the main library target
add_library(fastparsex STATIC
)

# Link all module libraries
target_link_libraries(fastparsex
    fp_core
    fp_csv
    fp_log
    fp_binary
    fp_compress
    fp_parallel
    fp_profiling
    fp_export
)

# Install headers
install(DIRECTORY include/ DESTINATION include)

# Install library
install(TARGETS fastparsex
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)
