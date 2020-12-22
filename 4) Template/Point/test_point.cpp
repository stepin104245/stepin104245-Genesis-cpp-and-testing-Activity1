#include "point.h"
#include "gtest/gtest.h"
#include "point.cpp"
TEST(Point,ParameterConstructor)
{
    Point <int> P1(5,6);
    Point <int> P2(-8,3);
    Point <int> P3(-4,-4);
    Point <int> P4(2,-8);
    EXPECT_EQ(Q1,P1.quadrant());
    EXPECT_EQ(Q2,P2.quadrant());
    EXPECT_EQ(Q3,P3.quadrant());
    EXPECT_EQ(Q4,P4.quadrant());
}
