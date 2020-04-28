#include "ZoneDessin.hpp"
#include "PolygoneRegulier.hpp"
#include "Ligne.hpp"
#include <gtkmm.h>

ZoneDessin::ZoneDessin() {
   PolygoneRegulier poly ({0,1,0},{100,200},50,5);
   //_figures.push_back( new Ligne ( {1,0,0} , {10,10} , {100,200} ) );
  // _figures.push_back( new Ligne ( {1,0,0} , {60,10} , {100,200} ) );
  // _figures.push_back( new Ligne ( {1,0,0} , {10,470} , {100,200} ) );
  // _figures.push_back( new Ligne ( {1,0,0} , {0,0} , {100,200} ) );
      _figures.push_back( new PolygoneRegulier(poly) );

}

ZoneDessin::~ZoneDessin() {

for (FigureGeometrique * ptrfigure : _figures)
        delete ptrfigure;

}

bool ZoneDessin::on_draw (const Cairo::RefPtr<Cairo::Context> & context) {

    // règle le tracé
    //context->set_source_rgb(1.0, 0.0, 0.0);
    context->set_line_width(2.0);

    // dessine une diagonale

    /*auto window = get_window();
    context->move_to(0, 0);
    context->line_to(window->get_width(),
                     window->get_height());

    // met à jour l'affichage
    context->stroke();
    */

    for (FigureGeometrique * figure : _figures)
         figure->afficher(context);

    return true; // le signal a été géré
}
