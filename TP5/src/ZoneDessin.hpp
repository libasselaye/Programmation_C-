#ifndef ZONEDESSIN_HPP
#define ZONEDESSIN_HPP

#include <gtkmm.h>
#include "FigureGeometrique.hpp"
#include <vector>


class ZoneDessin : public Gtk::DrawingArea{
private:
   std::vector<FigureGeometrique*> _figures;
    
public:
   ZoneDessin();
   ~ZoneDessin();
  // bool on_draw(GdkEventExpose* event);
   bool on_draw( const Cairo::RefPtr<Cairo::Context> &) override;
   bool gererClic(GdkEventButton* event);
};

#endif // ZONEDESSIN_HPP
