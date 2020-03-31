#include "PolygoneRegulier.hpp"
#include <cmath>
#include <iostream>

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

void PolygoneRegulier::afficher() const{
      const Couleur & c = getCouleur();
      std::cout << "PolygoneRegulier " << c._r <<"_"<< c._g <<"_"<< c._b <<" ";

      for (int i=0 ;i <_nbPoints;++i) {
          std::cout<<  _points[i]._x  << "_" <<  _points[i]._y <<" ";
      }
}

int PolygoneRegulier::getNbPoints() const{
    return _nbPoints;
}

const Point & PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}
