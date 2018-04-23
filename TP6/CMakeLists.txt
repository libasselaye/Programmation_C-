cmake_minimum_required( VERSION 3.0 )
project( L3_CPP_TP6 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED gtkmm-2.4 )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_bibliotheque.out src/main_bibliotheque.cpp )
target_link_libraries( main_bibliotheque.out ${PKG_LIBRARIES} )

find_package (Threads)
find_package(GTest REQUIRED)
include_directories( ${GTEST_INCLUDE_DIRS})

add_executable( main_test.out src/main_test.cpp 
    src/Bibliotheque_test.cpp
    src/Livre_test.cpp )
target_link_libraries( main_test.out
    ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} )


