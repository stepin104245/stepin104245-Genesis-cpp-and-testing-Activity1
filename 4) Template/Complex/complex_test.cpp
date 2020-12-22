#include "complex.h"
#include "gtest/gtest.h"
#include "complex.cpp"


TEST(Complex,IntConstructor)
{
    Complex <int> a(1,2);
    EXPECT_EQ(1,a.re());
    EXPECT_EQ(2,a.img());
}

TEST(Complex,DoubleConstructor)
{
    Complex <double> a(5.20,6.30);
    EXPECT_EQ(5.20,a.re());
    EXPECT_EQ(6.30,a.img());
}
