#include "image.h"
#include <gtest/gtest.h>

TEST(Image,DefaultConstructor) {
    Image i1;

}

TEST(Point,ParameterisedConstructor) {
    Image i2(100,100,20,50);

}

TEST(Point,CopyConstructor) {
    Image i2(30,40,50,40);
    Image i3(i2);

}
