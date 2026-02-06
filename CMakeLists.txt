cmake_minimum_required(VERSION 4.1)
project(FuseTest LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FuseTest
        main.cpp
        sqlH/sql.cpp
        sqlH/sql.h
        ExternalLibraries/sqlite3.c
        ExternalLibraries/sqlite3.h
        usrH/usr.cpp
        usrH/usr.h
)

target_include_directories(FuseTest PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)
