#include "Inventaire.hpp"
#include <algorithm>
#include <functional>

void Inventaire::trier() {

    auto cmp = [](const Bouteille & b1,
                  const Bouteille & b2) -> bool {
        return b1._nom < b2._nom;
    };

    std::sort(_bouteilles.begin(), _bouteilles.end(), cmp);
}

std::ostream & operator<<(std::ostream & os, const Inventaire & in){
	
   // Bouteille b;
   //on evite l'erreur du os avec le [&os]
    auto f = [&os](const Bouteille &b){
        os << b;
    };
    std::for_each(in._bouteilles.begin(),in._bouteilles.end(),f);


    /*for (std::vector<Bouteille>::const_iterator it=in._bouteilles.begin();
         it!=in._bouteilles.end(); ++it ) {
            os << *it;
    }*/

   return os;
}

std::istream & operator>>(std::istream & is, Inventaire & in){
    Bouteille b;

    while(is>>b) {
        in._bouteilles.push_back(b);
    }
 return  is;
}
