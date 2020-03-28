#ifndef LIGNE_HPP_
#define LIGNE_HPP_
#include "FigureGeometrique.hpp"
#include "Point.hpp"

class Ligne : public FigureGeometrique {
private:
    Point _p0,_p1;

public:
    Ligne(const Couleur & couleur ,const Point & p0 ,const Point &  p1);
    void afficher() const ;
    const Point & getP0() const;
    const Point & getP1() const;
};
#endif
