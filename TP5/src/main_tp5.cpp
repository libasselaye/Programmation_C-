#include "ViewerFigures.hpp"
#include <gtkmm.h>
#include <iostream>
#include "ZoneDessin.hpp"

int main(int argc, char ** argv) {
    /*Gtk::Main kit(argc, argv); // application gtkmm
    Gtk::Window window; // fenetre principale
    Gtk::Label label(" Hello world ! "); // message
    window.add(label);
    window.show_all();
    kit.run(window); // lance la boucle evenementielle
    */
    
    /*ViewerFigures view(argc, argv);
    view.run();*/
    Gtk::Main kit(argc, argv);
        Gtk::Window window;
        ZoneDessin dessin;
        window.add(dessin);
        window.show_all();
        kit.run(window);

    return 0;

}

