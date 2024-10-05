add_subdirectory(UI)
add_subdirectory(EditorState)

target_sources(PrestoEditor PRIVATE PrestoEditor.cpp)
target_include_directories(PrestoEditor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
