#ifndef BIBLIOTHEQUE_HPP_
#define BIBLIOTHEQUE_HPP_
#include <string>
#include <iostream>
#include <sstream>

#include <vector>
#include "Livre.hpp"

class Bibliotheque : public std::vector<Livre>{
public:
  void afficher() const ;
  void trierParAuteurEtTitre() ;
  void trierParAnnee();
 // void lireFichier(const std::string & nomFichier);
  void ecrireFichier(const std::string & nomFichier) const;
};

#endif
