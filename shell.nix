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
    gnome3.gtkmm
    gnuplot
    imagemagick
    pkgconfig
    poco
    qtcreator
    sqlite
    sqlitebrowser
    valgrind
  ];

}

