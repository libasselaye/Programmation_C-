#ifndef LIVRE_HPP_
#define LIVRE_HPP_
#include <string>
#include <iostream>

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
  bool operator<(const Livre& l2) const ;
};
bool operator==(const Livre&l1 ,const Livre&l2);
void operator<<(std::ostream & os, const Livre & l);

#endif
