#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc,char ** argv) { //,
    _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
    _vues.push_back(std::make_unique<VueConsole>(*this));
   /* _inventaire._bouteilles.push_back( {"Maredsous","2013-08-18", 0.75} );
    //on doit ici faire affichage console
    //std::cout<< "Maredsous;2013-08-18;0.75" <<std::endl;
    for (auto & v : _vues)
      v->actualiser();*/
    //chargerInventaire("");
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}
std::string Controleur::getTexte() const{
	std::ostringstream oss;
    oss << _inventaire;
    return oss.str();
}

void Controleur::chargerInventaire(const std::string & /*nomFichier*/) {
    _inventaire._bouteilles.push_back( {"Maredsous","2013-08-18", 0.75} );
    //on doit ici faire affichage console
    //std::cout<< "Maredsous;2013-08-18;0.75" <<std::endl;
    for (auto & v : _vues)
      v->actualiser();

}

