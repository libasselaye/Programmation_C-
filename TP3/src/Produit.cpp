#include "Produit.hpp"
#include <iostream>

Produit::Produit(int id , const std::string & description ):
  _description(description) , _id(id)
{}

int Produit::getId() const{
    return _id;
}

const std::string & Produit::getDescription() const{
    return _description;
}

void Produit::afficherProduit() const{
   std::cout << "Produit (" << this->getId() << ", " << this->getDescription() << " )" << std::endl;
}
