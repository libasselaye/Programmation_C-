#include "client.hpp"
#include <iostream>

client::client(int id , const std::string & nom ):
  _nom(nom) , _id(id)
{}

int client::getId() const{
    return _id;
}

const std::string & client::getNom() const{
    return _nom;
}

void client::afficherClient() const{
   std::cout << "Client (" << this->getId() << ", " << this->getNom() << " )" << std::endl;
}
