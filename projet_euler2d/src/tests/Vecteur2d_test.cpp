#include <functional>
#include <euler2d/Vecteur2d.hpp>

#include <gtest/gtest.h>

TEST(GroupVecteur2d, plus_1) {
    Vecteur2d v1 {1, 2};
    Vecteur2d v2 {3, 4};
    Vecteur2d v3 = v1 + v2;
    ASSERT_NEAR(4, v3._x, 1e-6);
    ASSERT_NEAR(6, v3._y, 1e-6);
}
