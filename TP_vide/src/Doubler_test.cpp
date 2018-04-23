#include "Doubler.hpp"

#include <gtest/gtest.h>

TEST(GroupDoubler, doubler_1) {
    ASSERT_EQ(doubler(21), 42);
}

TEST(GroupDoubler, doubler_2) {
    ASSERT_EQ(doubler(0), 0);
}
