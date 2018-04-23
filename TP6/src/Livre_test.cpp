/*

#include "Livre.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST (Group_Livre, constructeur_1) {
    Livre livre("titre1", "auteur1", 1337);
    ASSERT_EQ(std::string("titre1"), livre.getTitre());
    ASSERT_EQ(std::string("auteur1"), livre.getAuteur());
    ASSERT_EQ(1337, livre.getAnnee());
}

TEST (Group_Livre, constructeur_2) {
    try  {
        Livre livre("titre1;", "auteur1", 1337);
        FAIL() << "exception non levée";
    }
    catch (const std::string& str)  {
        ASSERT_EQ(std::string("erreur : titre non valide (';' non autorisé)"), str);
    }
}

TEST (Group_Livre, constructeur_3) {
    EXPECT_THROW(Livre("titre1", "auteur1;", 1337), std::string);
    try  {
        Livre livre("titre1", "auteur1;", 1337);
        FAIL() << "exception non levée";
    }
    catch (const std::string& str) {
        ASSERT_EQ(std::string("erreur : auteur non valide (';' non autorisé)"), str);
    }
}

TEST (Group_Livre, constructeur_4) {
    try  {
        Livre livre("titre1", "auteur1\n", 1337);
        FAIL() << "exception non levée";
    }
    catch (const std::string& str)  {
        ASSERT_EQ(std::string("erreur : auteur non valide ('\n' non autorisé)"), str);
    }
}

TEST (Group_Livre, inferieur_pp) {
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a0",1));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a0",0));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a0",2));
}

TEST (Group_Livre, inferieur_pz) {
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a1",1));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a1",0));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t0","a1",2));
}

TEST (Group_Livre, inferieur_pm) {
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t0","a2",1));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t0","a2",0));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t0","a2",2));
}

TEST (Group_Livre, inferieur_zp) {
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a0",1));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a0",0));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a0",2));
}

TEST (Group_Livre, inferieur_zz) {
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a1",1));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a1",0));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t1","a1",2));
}

TEST (Group_Livre, inferieur_zm) {
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t1","a2",1));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t1","a2",0));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t1","a2",2));
}

TEST (Group_Livre, inferieur_mp) {
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t2","a0",1));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t2","a0",0));
    ASSERT_EQ(false, Livre("t1","a1",1)<Livre("t2","a0",2));
}

TEST (Group_Livre, inferieur_mz) {
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a1",1));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a1",0));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a1",2));
}

TEST (Group_Livre, inferieur_mm) {
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a2",1));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a2",0));
    ASSERT_EQ(true, Livre("t1","a1",1)<Livre("t2","a2",2));
}

TEST (Group_Livre, egalite_1) {
    ASSERT_EQ(true, Livre("t1","a1",1)==Livre("t1","a1",1));
}

TEST (Group_Livre, egalite_2) {
    ASSERT_EQ(false, Livre("t1","a1",1)==Livre("t2","a1",1));
    ASSERT_EQ(false, Livre("t1","a1",1)==Livre("t1","a2",1));
    ASSERT_EQ(false, Livre("t1","a1",1)==Livre("t1","a1",2));
}

TEST (Group_Livre, entree_1) {
    Livre livre;
    std::stringstream s("titre;auteur;42");
    s >> livre;
    ASSERT_EQ(std::string("titre"), livre.getTitre());
    ASSERT_EQ(std::string("auteur"), livre.getAuteur());
    ASSERT_EQ(42, livre.getAnnee());
}

TEST (Group_Livre, sortie_1) {
    Livre livre("titre", "auteur", 42);
    std::stringstream s;
    s << livre;
    ASSERT_EQ(std::string("titre;auteur;42"), s.str());
}

*/

