#include "ViewerFigures.hpp"
#include <gtkmm.h>

ViewerFigures::ViewerFigures(int argc, char** argv) :
      _kit(argc, argv){
		  _window.set_title("Ma Fenetre");
		  _window.set_default_size(640, 480); 
          _window.add(_dessin);
          _window.add_events(Gdk::BUTTON_PRESS_MASK);
          //_window.signal_button_press_event().connect(sigc::mem_fun(&_dessin,&ZoneDessin::gererClic));
		  _window.show_all();
}

void ViewerFigures::run(){
	_kit.run(_window);
}
