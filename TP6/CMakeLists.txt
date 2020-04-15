cmake_minimum_required( VERSION 3.0 )
project( TP6 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )

pkg_check_modules( PKG_GTK REQUIRED gtkmm-3.0 )
include_directories( ${PKG_GTK_INCLUDE_DIRS} )

add_executable( main_bibliotheque.out src/main_bibliotheque.cpp src/Livre.cpp )
target_link_libraries( main_bibliotheque.out ${PKG_GTK_LIBRARIES} )

pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp
   src/Bibliotheque_test.cpp
   src/Livre_test.cpp
   src/Livre.cpp )
target_link_libraries( main_test.out ${PKG_GTK_LIBRARIES} ${PKG_CPPUTEST_LIBRARIES} )

