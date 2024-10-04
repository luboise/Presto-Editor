#!/bin/bash

# Save the current working directory
current_dir=$(pwd)

# Navigate to the build directory
cd build || exit 1

# Run CMake commands
cmake -DCMAKE_BUILD_TYPE=Debug .. || exit 1
cmake --build . -j 17 || exit 1

# Navigate to the Debug/bin directory and run the executable
cd Debug/bin || exit 1
./PrestoEditor || exit 1

# Return to the original directory
cd "$current_dir"
