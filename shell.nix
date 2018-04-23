with import<nixpkgs> {};

stdenv.mkDerivation {

  name = "L3_CPP";

  buildInputs = [
    boost
    cmake
    cppcheck
    cpputest
    eigen
    gdb
    glog
    gnome2.gtkmm
    gnome3.gtkmm
    gnuplot
    gtest
    imagemagick
    pkgconfig
    poco
    qtcreator
    sqlite
    sqlitebrowser
    valgrind
  ];

}

