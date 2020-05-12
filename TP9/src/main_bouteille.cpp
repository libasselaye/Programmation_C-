#include "Controleur.hpp"

int main(int argc, char ** argv) {
    
    Inventaire i;
    Controleur viewer(argc, argv);
    viewer.run();
	return 0;
}

