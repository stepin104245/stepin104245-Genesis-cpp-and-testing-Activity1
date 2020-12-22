#include "array.h"
#include "gtest/gtest.h"
#include "array.cpp"

TEST(MyArray,ParameterConstructor)
{
    MyArray <int> a(3);
    a.append(10);
    a.append(20);
    a.append(30);
    EXPECT_EQ(60,a.sum());
}

