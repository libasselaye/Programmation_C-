#include "Ligne.hpp"
#include "Couleur.hpp"
#include "Point.hpp"
#include <iostream>

Ligne::Ligne(const Couleur & couleur ,const Point & p0 ,const Point &  p1):
    FigureGeometrique (couleur) , _p0(p0) , _p1(p1)
{}

void Ligne::afficher(const Cairo::RefPtr<Cairo::Context> & context) const {
      //const Couleur & c = _couleur;
   const Couleur & c = getCouleur();
   context->set_source_rgb(c._r,c._g,c._b);

   context->move_to(0, 0);
   context->line_to(_p0._x, _p0._y);
   context->line_to(_p1._x, _p1._y);

   context->stroke();

}

const Point & Ligne::getP0() const{
    return _p0;
}

const Point & Ligne::getP1() const{
    return _p1;
}



