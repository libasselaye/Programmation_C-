#include "Ligne.hpp"
#include <iostream>

Ligne::Ligne(const Couleur & couleur ,const Point & p0 ,const Point &  p1):
    FigureGeometrique (couleur) , _p0(p0) , _p1(p1)
{}

void Ligne::afficher() const {
      //const Couleur & c = _couleur;
   const Couleur & c = getCouleur();
  std::cout << "Ligne " << c._r <<"_"<< c._g <<"_"<< c._b <<" "
            << getP0()._x << "_" << _p0._y << " "
            << _p1._x << "_" << getP1()._y << std::endl;
}

const Point & Ligne::getP0() const{
    return _p0;
}

const Point & Ligne::getP1() const{
    return _p1;
}



