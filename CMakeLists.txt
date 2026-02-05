cmake_minimum_required(VERSION 4.1)
project(FuseTest LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FuseTest
        main.cpp
        sqlH/sql.cpp
        sqlH/sql.h
        ExtarnalLibraries/sqlite3.c
        ExtarnalLibraries/sqlite3.h
)

target_include_directories(FuseTest PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)
