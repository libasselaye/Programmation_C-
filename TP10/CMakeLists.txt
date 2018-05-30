cmake_minimum_required( VERSION 3.0 )
project( TP10 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )

add_executable( main_liste.out src/main_liste.cpp )

pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp src/Liste_test.cpp )
target_link_libraries( main_test.out ${PKG_CPPUTEST_LIBRARIES} )
