# CMakeLists.txt
cmake_minimum_required( VERSION 3.0 )
project( PROJET_FIBONACCI )

add_executable( main.out 
    main.cpp Fibonacci.cpp Vecteur3.cpp)

# dépendances
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )

# programme de tests unitaires
add_executable( main_test.out 
    main_test.cpp Fibonacci.cpp Vecteur3.cpp Fibonacci_test.cpp Vecteur3_test.cpp)
target_link_libraries( main_test.out 
    ${PKG_CPPUTEST_LIBRARIES} )
