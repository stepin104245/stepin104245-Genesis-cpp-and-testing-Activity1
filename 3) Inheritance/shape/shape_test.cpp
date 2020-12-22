#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>

TEST(Circle,Area)
{
    Circle c1(200);
    EXPECT_EQ(125600,c1.area());
    EXPECT_EQ(1256,c1.circumference());
}
TEST(Triangle,Area)
{
    Triangle t1(10,8,6);
    EXPECT_EQ(24,t1.area());
    EXPECT_EQ(24,t1.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle r1(7,8);
    EXPECT_EQ(56,r1.area());
    EXPECT_EQ(30,r1.circumference());
}
