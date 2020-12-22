#include "account.h"
#include"savingsaccount.h"
#include"creditaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *a1=new SavingsAccount("15","Raj",2000);
    a1->debit(600);
    a1->credit(300);
    EXPECT_EQ(1700,a1->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *a2=new CreditAccount("20","LabeebALi",5000);
    a2->debit(1000);
    a2->credit(500);
    EXPECT_EQ(4500,a2->getBalance());
}


