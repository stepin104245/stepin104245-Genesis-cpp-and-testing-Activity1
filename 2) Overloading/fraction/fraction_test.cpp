#include "fraction.h"
#include "gtest/gtest.h"

TEST(fraction,DefaultConstructor)
{
    fraction f1;
    EXPECT_EQ(0,f1.num());
    EXPECT_EQ(0,f1.den());
}
TEST(fraction,ConstructorTwoarg)
{
    fraction f1(3,4);
    EXPECT_EQ(3,f1.num());
    EXPECT_EQ(4,f1.den());
}
TEST(fraction,ConstructorOnearg)
{
    fraction f1(4);
    EXPECT_EQ(4,f1.num());
    EXPECT_EQ(1,f1.den());
}
TEST(fraction,Plusoverloading)
{
    fraction f1(1,6);
    fraction f2(1,8);
    fraction f3=f1+f2;
    EXPECT_EQ(14,f3.num());
    EXPECT_EQ(48,f3.den());
}
TEST(fraction,Minusoverloading)
{
    fraction f1(1,6);
    fraction f2(1,8);
    fraction f3=f1-f2;
    EXPECT_EQ(2,f3.num());
    EXPECT_EQ(48,f3.den());
}
TEST(fraction,staroverloading)
{
    fraction f1(1,6);
    f1*6;
    EXPECT_EQ(6,f1.num());
    EXPECT_EQ(6,f1.den());
}
TEST(fraction,Plusintargoverloading)
{
    fraction f1(1,6);
    f1+6;
    EXPECT_EQ(37,f1.num());
    EXPECT_EQ(6,f1.den());
}
TEST(fraction,Minusintargoverloading)
{
    fraction f1(1,6);
    f1-6;
    EXPECT_EQ(-35,f1.num());
    EXPECT_EQ(6,f1.den());
}
TEST(fraction,EqualsEqualsoverloading)
{
    fraction f1(12,6);
    EXPECT_EQ(true,f1.operator==(2));
}
TEST(fraction,Greaterthanoverloading)
{
    fraction f1(12,6);
    EXPECT_EQ(false,f1.operator>(3));
}
TEST(fraction,Lessthanoverloading)
{
    fraction f1(12,6);
    EXPECT_EQ(true,f1.operator<(10));
}



