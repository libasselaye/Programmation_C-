#include "client.hpp"
#include "Magasin.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupClient) { };

TEST(GroupClient, client_test)  {
    client lips(42,"Libasse");
    Magasin juve;
    CHECK_EQUAL(lips.getId(), 42);
    CHECK_EQUAL(lips.getNom(), "Libasse");

}
