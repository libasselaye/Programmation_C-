cmake_minimum_required( VERSION 3.0 )
project( TP_vide )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )

# programme principal
add_executable( main_doubler21.out src/main_doubler21.cpp 
    src/Doubler.cpp src/FigureGeometrique.cpp src/Ligne.cpp src/PolygoneRegulier.cpp )
target_link_libraries( main_doubler21.out )

# programme de test
add_executable( main_test.out src/main_test.cpp
    src/Doubler.cpp 
    src/FigureGeometrique.cpp
    src/Ligne.cpp
    src/PolygoneRegulier.cpp
    src/Ligne_test.cpp
    src/Doubler_test.cpp
    src/PolygoneRegulier_test.cpp )
target_link_libraries( main_test.out ${PKG_CPPUTEST_LIBRARIES} )
