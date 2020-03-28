#include "client.hpp"
#include "Magasin.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupMagasin) { };

TEST(GroupMagasin, Magasin_test)  {
    Magasin juve;
    juve.ajouterClient("libass");
    juve.ajouterClient("matuidi");
    juve.ajouterClient("mateuw");
    juve.ajouterClient("mboup");
    juve.ajouterClient("fall");
    //CHECK_EQUAL(juve.supprimerClient(5),"erreur : ce client n'existe pas");
}
