add_subdirectory(UI)

target_sources(PrestoEditor PRIVATE PrestoEditor.cpp)
target_include_directories(PrestoEditor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
