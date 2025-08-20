include_directories(${CMAKE_SOURCE_DIR})
add_executable(read-fd-path read-fd-path.c)
target_link_libraries(read-fd-path PUBLIC hook-common)