cmake_minimum_required( VERSION 3.0 )
project( TP8 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )

pkg_check_modules( PKG_GTK REQUIRED gtkmm-3.0 )
include_directories( ${PKG_GTK_INCLUDE_DIRS} )
add_executable( main_bouteille.out src/main_bouteille.cpp
    src/Bouteille.cpp 
    src/Controleur.cpp 
    src/Inventaire.cpp 
    src/Vue.cpp )
target_link_libraries( main_bouteille.out ${PKG_GTK_LIBRARIES} )

pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp
    src/Bouteille.cpp 
    src/Bouteille_test.cpp 
    src/Controleur.cpp 
    src/Inventaire.cpp 
    src/Inventaire_test.cpp
    src/Vue.cpp )
target_link_libraries( main_test.out ${PKG_GTK_LIBRARIES} ${PKG_CPPUTEST_LIBRARIES} )
