cmake_minimum_required( VERSION 3.0 )
project( L3_CPP_TP10 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_liste.out src/main_liste.cpp )

find_package (Threads)
find_package(GTest REQUIRED)
include_directories( ${GTEST_INCLUDE_DIRS})

add_executable( main_test.out src/main_test.cpp 
    src/Liste_test.cpp )
target_link_libraries( main_test.out
    ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} )
