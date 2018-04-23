/*

#include "Bibliotheque.hpp"

#include <gtest/gtest.h>

TEST (Group_Bibliotheque, trierParAuteurEtTitre_1) {
    Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
    ASSERT_EQ(b[0], Livre("t0","a0",42));
    ASSERT_EQ(b[1], Livre("t1","a1",13));
    ASSERT_EQ(b[2], Livre("t2","a2",37));
}

TEST (Group_Bibliotheque, trierParAuteurEtTitre_2) {
    Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a0",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
    ASSERT_EQ(b[0], Livre("t0","a0",42));
    ASSERT_EQ(b[1], Livre("t2","a0",37));
    ASSERT_EQ(b[2], Livre("t1","a1",13));
}

TEST (Group_Bibliotheque, trierParAnnee_1) {
    Bibliotheque b;
    b.push_back(Livre("t0","a0",42));
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.trierParAnnee();
    ASSERT_EQ(b[0], Livre("t1","a1",13));
    ASSERT_EQ(b[1], Livre("t2","a2",37));
    ASSERT_EQ(b[2], Livre("t0","a0",42));
}

TEST (Group_Bibliotheque, fichier_1) {
    Bibliotheque b1;
    b1.push_back(Livre("t0","a0",42));
    b1.push_back(Livre("t1","a1",13));
    b1.push_back(Livre("t2","a2",37));
    b1.ecrireFichier("bibliotheque_fichier_tmp.txt");
    Bibliotheque b2;
    b2.lireFichier("bibliotheque_fichier_tmp.txt");
    ASSERT_EQ(b2[0], Livre("t0","a0",42));
    ASSERT_EQ(b2[1], Livre("t1","a1",13));
    ASSERT_EQ(b2[2], Livre("t2","a2",37));
}

TEST (Group_Bibliotheque, charger_1) {
    try {
        Bibliotheque b;
        b.lireFichier("bibliotheque_fichier_inexistant.txt");
        FAIL() << "exception non levée";
    }
    catch (const std::string& str)  {
        ASSERT_EQ(std::string("erreur : lecture du fichier impossible"), str);
    }
}

*/

