#ifndef VIEWERFIGURES_HPP
#define VIEWERFIGURES_HPP
#include "Point.hpp"
#include "Couleur.hpp"
#include "ZoneDessin.hpp"
#include "FigureGeometrique.hpp"
#include <gtkmm.h>


class ViewerFigures {
private:
   Gtk::Main _kit;  
   Gtk::Window _window;
   ZoneDessin _dessin;

public:
   ViewerFigures(int argc,char** argv);
   void run();
};

#endif // VIEWERFIGURES_HPP
