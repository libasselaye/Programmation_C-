#include "Image.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupImage) { };


TEST(GroupImage, Image_test1)  {
    Image img(40,30);
    CHECK_EQUAL(40,img.getLargeur());
    CHECK_EQUAL(30,img.getHauteur());
}

TEST(GroupImage, Image_test2)  {
    Image img(40,30);
    img.setPixel(5,10,200);
    CHECK_EQUAL(200,img.getPixel(5,10));
}

TEST(GroupImage, Image_test3)  {
    Image img(40,30);
    img.pixel(5,10) = 200;
    //setter

    CHECK_EQUAL(200,img.pixel(5,10));
    //getter
}
