#include "gen_stack.h"
#include "gtest/gtest.h"
#include "gen_stack.cpp"


TEST(MyStack,ParameterConstructor)
{
    MyStack <double> a(3);
    a.push(2.5);
    a.push(4.5);
     a.push(6.5);
    EXPECT_EQ(6.5,a.pop());
}


