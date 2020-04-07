#include "ViewerFigures.hpp"
#include <gtkmm.h>

ViewerFigures::ViewerFigures(int argc, char** argv) :
      _kit(argc, argv){
		  _window.set_title("Ma Fenetre");
		  _window.set_default_size(640, 480); 
		  _window.show_all();
}

void ViewerFigures::run(){
	_kit.run(_window);
}
