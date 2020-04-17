#include "Bibliotheque.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

void Bibliotheque::afficher() const{

    /*for (unsigned i=0;i<size();++i) {
        std::cout << operator[](i) << std::endl;
    }

    for (std::vector<Livre>::const_iterator it=begin(); it!=end(); ++it)
          std::cout << *it << std::endl;
    */

    for(const Livre & l : *this){   // for ( Livre l : *this)
            std::cout << l ;
    }
}

void Bibliotheque::trierParAuteurEtTitre() {
    sort(begin(), end());
}

void Bibliotheque::trierParAnnee() {
    auto tri = [] (const Livre& x, Livre& y){
        return x.getAnnee() < y.getAnnee();
    };
    sort(begin(), end() , tri);
}

/*void Bibliotheque::lireFichier(const std::string & nomFichier){


}*/

void Bibliotheque::ecrireFichier(const std::string & nomFichier) const{
    std::ofstream ofs(nomFichier);
    for (const Livre & l : * this) {
        ofs << l ;
    }
}
