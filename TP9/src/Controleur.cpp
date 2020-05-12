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
    //chargerInventaire("mesbouteilles.txt");
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}
std::string Controleur::getTexte() const{
	std::ostringstream oss;
    oss << _inventaire;

    oss << std::endl;
    Inventaire i2 = _inventaire;
    i2.trier();
    oss <<i2;
    return oss.str();
}

void Controleur::chargerInventaire(const std::string & nomFichier) {
   std::ifstream ifs(nomFichier);
   if(not ifs){
       std::cerr << "echec a louverture du fichier \n";
   }
   _inventaire._bouteilles.clear();
   ifs >> _inventaire;

    for (auto & v : _vues)
      v->actualiser();

}

