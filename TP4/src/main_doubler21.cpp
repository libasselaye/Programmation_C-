#include "Doubler.hpp"
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include <iostream>
#include <vector>

int main() {
    //std::cout << doubler(21) << std::endl;
    //std::cout << doubler(21.f) << std::endl;
    Ligne ligne({1,0,0},{0,0},{100,200});
    //ligne.afficher();
    PolygoneRegulier poly ({0,1,0},{100,200},50,5);
    //poly.afficher();

    std::vector<FigureGeometrique* > figures {
        new Ligne(ligne),
        new PolygoneRegulier(poly)
    };

    for (FigureGeometrique * ptrfigure : figures)
         ptrfigure->afficher();

    for (FigureGeometrique * ptrfigure : figures)
        delete ptrfigure;

    return 0;
}

