#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>

TEST(Customer,Postpaid) {
    PostpaidCustomer p1("105","Raj","812",600,15);
    p1.postpaidbill(300);
    p1.credit(200);
    p1.makeCall(10);
    EXPECT_EQ(490,p1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer p1("105","Raj","812",200,15);
    p1.credit(200);
    p1.makeCall(50);
    EXPECT_EQ(350,p1.getBalance());
}


