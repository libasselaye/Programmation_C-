#ifndef POLYGONEREGULIER_HPP
#define POLYGONEREGULIER_HPP
#include "Point.hpp"
#include "Couleur.hpp"
#include "FigureGeometrique.hpp"


class PolygoneRegulier : public FigureGeometrique
{
private:
   int _nbPoints;
   Point * _points;

public:
    PolygoneRegulier(const Couleur & couleur , const Point & centre ,
                     int rayon , int nbCotes);
    void afficher() const;
    int getNbPoints() const;
    const Point & getPoint(int indice) const;
   // ~PolygoneRegulier();
};

#endif // POLYGONEREGULIER_HPP
