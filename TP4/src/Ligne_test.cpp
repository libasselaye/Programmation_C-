#include "Ligne.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupLigne) { };

TEST(GroupLigne, Ligne_test)  {
    Ligne ligne({1,0,0},{0,0},{100,200});
    CHECK_EQUAL(ligne.getP1()._y, 200);
    CHECK_EQUAL(ligne.getCouleur()._r, 1);
    CHECK_EQUAL(ligne.getCouleur()._g, 0);

}
