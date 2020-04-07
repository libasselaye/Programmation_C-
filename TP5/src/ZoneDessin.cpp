#include "ZoneDessin.hpp"
#include "PolygoneRegulier.hpp"
#include "Ligne.hpp"
#include <gtkmm.h>

ZoneDessin::ZoneDessin() {

   _figures.push_back( new Ligne ( {1,0,0} , {0,0} , {100,200} ) );
   _figures.push_back(new PolygoneRegulier ( {0,1,0} , {100,200} , 50 , 5) );

}

ZoneDessin::~ZoneDessin() {

for (FigureGeometrique * ptrfigure : _figures)
        delete ptrfigure;

}

bool ZoneDessin::on_draw(
    const Cairo::RefPtr<Cairo::Context> & context) {

    // règle le tracé
    context->set_source_rgb(1.0, 0.0, 0.0);
    context->set_line_width(10.0);

    // dessine une diagonale
    auto window = get_window();
    context->move_to(0, 0);
    context->line_to(window->get_width(),
                     window->get_height());

    // met à jour l'affichage
    context->stroke();

    return true; // le signal a été géré
}
