cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_BUILD_TYPE STREQUAL "")
  message(FATAL_ERROR "bruh")
endif()

set(BLOCKED_OUT_DIR ${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE})

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BLOCKED_OUT_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BLOCKED_OUT_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BLOCKED_OUT_DIR}/bin)

project(PrestoEditor)

# Targets
add_executable(PrestoEditor)

add_subdirectory(./src)

# add_subdirectory(../Presto include)
add_subdirectory(../Presto ${CMAKE_BINARY_DIR}/Presto)

# include_directories(../Presto)

add_compile_definitions(PR_PLATFORM_UNIX)

target_link_libraries(PrestoEditor PRIVATE Presto)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
if(wxWidgets_USE_FILE) # not defined in CONFIG mode
  include(${wxWidgets_USE_FILE})
endif()

target_link_libraries(PrestoEditor PRIVATE ${wxWidgets_LIBRARIES})
