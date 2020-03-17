cmake_minimum_required( VERSION 3.0 )
project( TP_vide )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )

# programme principal
add_executable( main_doubler21.out src/main_doubler21.cpp 
    src/Doubler.cpp src/Location.cpp src/client.cpp src/Produit.cpp src/Magasin.cpp )
target_link_libraries( main_doubler21.out )

# programme de test
add_executable( main_test.out src/main_test.cpp
    src/Doubler.cpp 
    src/client.cpp
    src/Location.cpp
    src/Magasin.cpp
    src/Produit.cpp
    src/client_test.cpp
    src/Doubler_test.cpp )
target_link_libraries( main_test.out ${PKG_CPPUTEST_LIBRARIES} )
