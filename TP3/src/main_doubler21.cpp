#include "Doubler.hpp"
#include "Location.hpp"
#include "client.hpp"
#include "Magasin.hpp"
#include <iostream>

int main() {
    Location locat;
    locat._idClient=0;
    locat._idProduit=2;
    //locat.afficherLocation();

    //test sur Client
    client lips(2,"Libasse");
    client blaise(14,"matuidi");
    client iba(3,"mateuw");
    client pa(10,"mboup");
    client paibou(42,"fall");
    Magasin juve;
    /*juve.ajouterClient("libass");
    juve.ajouterClient("matuidi");
    juve.ajouterClient("mateuw");
    juve.ajouterClient("mboup");
    juve.ajouterClient("fall");
    juve.afficherClients();*/

    juve.ajouterLocation(2,13);
    juve.ajouterLocation(14,14);
    juve.ajouterLocation(3,15);
    juve.ajouterLocation(10,16);
    juve.afficherLocations();
    juve.supprimerLocation(14,14);
    juve.afficherLocations();

    //juve.supprimerClient(55);
    //juve.afficherClients();
    //lips.afficherClient();
    return 0;
}

