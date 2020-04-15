#include "Livre.hpp"

Livre::Livre(){

}

Livre::Livre(const std::string & titre , const std::string & auteur , int annee):
_titre(titre) , _auteur(auteur) , _annee(annee) {

    if (_titre.find(";") !=std::string::npos)
        throw ("titre non valide (';' non autorisé)");
    else
        if (_titre.find("\n") !=std::string::npos)
           throw ("titre non valide ('\n' non autorisé)");
    else if (_auteur.find(";") !=std::string::npos)
                throw ("auteur non valide (';' non autorisé)");
        else if (_auteur.find("\n") !=std::string::npos)
            throw ("auteur non valide ('\n' non autorisé)");

}

const std::string & Livre::getTitre() const{
    return _titre;
}

const std::string & Livre::getAuteur() const{
    return _auteur;
}

int Livre:: getAnnee() const{
    return _annee;
}

bool Livre::operator<(const Livre& l2) const{
    if(_auteur < l2.getAuteur())
        return true;
    else return _auteur == l2.getAuteur() && _titre < l2.getTitre();
}

bool operator== (const Livre&l1 ,const Livre&l2) {
    return l1.getAuteur()==l2.getAuteur() && l1.getTitre()==l2.getTitre()&& l1.getAnnee()==l2.getAnnee();
}
