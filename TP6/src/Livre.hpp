#ifndef LIVRE_HPP_
#define LIVRE_HPP_
#include <string>

class Livre {
private:
    std::string _titre;
    std::string _auteur;
    int _annee;

public:
  Livre();
  Livre(const std::string & titre , const std::string & auteur , int annee);
  const std::string & getTitre() const ;
  const std::string & getAuteur() const ;
  int getAnnee() const;

};

#endif
