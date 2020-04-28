#include "PolygoneRegulier.hpp"
#include <cmath>
#include <iostream>
#include <gtkmm.h>
#include <cairomm/context.h>

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur , const Point & centre ,
                                   int rayon , int nbCotes):
    FigureGeometrique (couleur),_nbPoints(nbCotes) {
    _points =  new Point[_nbPoints];


    for (int i=0;i<_nbPoints;++i) {
        double angle = i/double(_nbPoints);
        int x = rayon * cos(angle) + centre._x;
        int y = rayon * sin(angle) + centre._y;
        _points[i]={x,y};
    }
}

/*PolygoneRegulier::~PolygoneRegulier(){
    delete [] _points;
}*/

void PolygoneRegulier::afficher(const Cairo::RefPtr<Cairo::Context> & context) const{
      const Couleur & c = getCouleur();
      context->set_source_rgb(c._r,c._g,c._b);

      const Point & p1 = _points[_nbPoints-1];
      context->move_to(p1._x,p1._y);

      for (int i=0 ;i <_nbPoints;++i) {
          const Point & p = _points[i];
          context->line_to(p._x, p._y);
      }
      context->stroke();
}

int PolygoneRegulier::getNbPoints() const{
    return _nbPoints;
}

const Point & PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}
