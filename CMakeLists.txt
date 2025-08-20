cmake_minimum_required(VERSION 3.16)
project(hook-common C)

set(CMAKE_C_STANDARD 11)

option(DEBUG "Enable syslog" ON)

add_definitions(
        -D C_STRLEN
        -D C_STR_HAS_PREFIX
        -D C_STR_HAS_SUFFIX
)

if (DEBUG)
    add_definitions(-D DEBUG)
endif ()

find_package(PkgConfig)

add_library(hook-common STATIC
        hook-common.c hook-common.h
)
#target_link_libraries(hook-bash-redirect PUBLIC -pthread)

target_include_directories(hook-common PUBLIC
        ${CMAKE_SOURCE_DIR}/3thrd/macros
)
target_compile_options(hook-common PUBLIC -fPIC)

if (DEBUG)
add_subdirectory(example)
endif ()