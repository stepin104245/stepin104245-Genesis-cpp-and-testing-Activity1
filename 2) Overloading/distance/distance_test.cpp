
#include "distance.h"
#include "gtest/gtest.h"

TEST(distance,DefaultConstructor)
{
    distance d1;
    EXPECT_EQ(0,d1.feet());
    EXPECT_EQ(0,d1.inch());
}
TEST(distance,DefaultConstructorarg)
{
    distance d1(3,4);
    EXPECT_EQ(3,d1.feet());
    EXPECT_EQ(4,d1.inch());
}
TEST(distance,PlusOverloading)
{
    distance d1(1,6),d2(2,8);
    distance d3=d1+d2;
    EXPECT_EQ(4,d3.feet());
    EXPECT_EQ(2,d3.inch());
}
TEST(distance,MinusOverloading)
{
    distance d1(4,5),d2(1,8);
    distance d3=d1-d2;
    EXPECT_EQ(2,d3.feet());
    EXPECT_EQ(9,d3.inch());
}
TEST(distance,PLusArgOverloading)
{
    distance d1(5,6);
    d1+(5);
    EXPECT_EQ(10,d1.feet());
    EXPECT_EQ(6,d1.inch());
}
TEST(distance,MinusArgOverloading)
{
    distance d1(5,6);
    d1-(1);
    EXPECT_EQ(4,d1.feet());
    EXPECT_EQ(6,d1.inch());
}
TEST(distance,PlusPLusOverloading)
{
    distance d1(5,7);
    d1.operator++();
    EXPECT_EQ(6,d1.feet());
    EXPECT_EQ(7,d1.inch());
}
TEST(distance,PlusPLusArgOverloading)
{
    distance d1(5,6);
    d1.operator++(4);
    EXPECT_EQ(9,d1.feet());
    EXPECT_EQ(6,d1.inch());
}
TEST(distance,EqulasEqualsOverloading)
{
    distance d1(5,0);
    EXPECT_EQ(true,d1.operator==(5));
}
TEST(distance,GreaterthanOverloading)
{
    distance d1(4,3);
    EXPECT_EQ(false,d1.operator>(5));
}
TEST(distance,LessthanOverloading)
{
    distance d1(3,0);
    EXPECT_EQ(true,d1.operator<(5));
}


