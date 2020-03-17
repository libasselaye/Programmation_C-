#include "Doubler.hpp"
#include "Location.hpp"
#include "client.hpp"
#include <iostream>

int main() {
    Location locat;
    locat._idClient=0;
    locat._idProduit=2;
    locat.afficherLocation();

    //test sur Client
    client lips(42,"Libasse");
    lips.afficherClient();
    return 0;
}

