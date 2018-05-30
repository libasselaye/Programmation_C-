#include "Doubler.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupDoubler) { };

TEST(GroupDoubler, Doubler_test1)  {
    CHECK_EQUAL(doubler(21), 42);
}

TEST(GroupDoubler, Doubler_test2)  {
    CHECK_EQUAL(doubler(0), 0);
}

