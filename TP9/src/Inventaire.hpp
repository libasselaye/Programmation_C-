#ifndef INVENTAIRE_HPP_
#define INVENTAIRE_HPP_

#include "Bouteille.hpp"

#include <iostream>
#include <vector>

// Modèle : inventaire de bouteilles.
struct Inventaire {
    std::vector<Bouteille> _bouteilles;
    void trier() ;
};
std::ostream & operator<<(std::ostream & os, const Inventaire & in);
std::istream & operator>>(std::istream & is, Inventaire & in);
#endif
