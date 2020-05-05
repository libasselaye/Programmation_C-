#include "Image.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupImage) { };

TEST(GroupImage, Image_test1)  {
    Image img(40,30);
    //CHECK_EQUAL(40,img.getLargeur());
    CHECK_EQUAL(30,img.getHauteur());
}

