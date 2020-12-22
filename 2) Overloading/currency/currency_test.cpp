#include "currency.h"
#include <gtest/gtest.h>


TEST(currency,plusOperator)
{
    currency c1(15,22);
    currency c2(15,22);
    currency c3;
    c3=c1+c2;
    EXPECT_EQ(30,c3.ru());
    EXPECT_EQ(44,c3.pai());

}
TEST(currency,Plusnum)
{
    currency c1(20,15);
    c1+35;
    EXPECT_EQ(55,c1.ru());
    EXPECT_EQ(15,c1.pai());
}
TEST(currency,MinusOperator)
 {
    currency c1(30,40);
    currency c2(30,20);
    currency c3;
    c3=c1-c2;
    EXPECT_EQ(0,c3.ru());
    EXPECT_EQ(20,c3.pai());

}
TEST(currency,MinusArg)
{
    currency c1(30,30);
    c1-20;
    EXPECT_EQ(10,c1.ru());
    EXPECT_EQ(30,c1.pai());
}

TEST(currency,PLusPlusOperator)
 {
    currency c1(14,20);
    ++c1;
    EXPECT_EQ(15,c1.ru());
    EXPECT_EQ(20,c1.pai());

}
TEST(currency,PLusPlusPostIncrement)
{
    currency c1(20,30);
    c1.operator++();
    EXPECT_EQ(21,c1.ru());
    EXPECT_EQ(30,c1.pai());
}
TEST(currency,EqualsEqulasOperator) {
    currency c1(5,20);
    currency c3(7,20);
    EXPECT_EQ(1,c1==5);
    EXPECT_EQ(1,c3==7);
}
TEST(currency,GreaterThanOperator) {
    currency c1(12);
    EXPECT_EQ(0,c1.operator>(20));
    EXPECT_EQ(1,c1.operator>(10));
}
