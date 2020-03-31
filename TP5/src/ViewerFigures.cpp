#include "ViewerFigures.hpp"
#include <gtkmm.h>

ViewerFigures::ViewerFigures(int argc,char** argv):
      _kit(argc, argv){
		  _window.show_all();
}

void ViewerFigures::run(){
	_kit.run(_window);
}
