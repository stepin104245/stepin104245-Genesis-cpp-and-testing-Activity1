#include<iostream>
#include"account.h"
#include"banking.h"

int main(){
    Banking bank;
    bank.addAccount(101,"Abhishek",22000.0,"8018989654");
    bank.addAccount(102,"Gwala",23000.25,"9016789654");
    bank.addAccount(103,"Rahul",12000.0,"8016789654");
    bank.addAccount(104,"Raju",15000.0,"8076544354");
    bank.addAccount(105,"Akash",33500.50,"9016789654");
    bank.addAccount(106,"Naveen",45000.0,"987689654");
    bank.displayAll();
    bank.removeAccount(105);
    bank.removeAccount(115);
    return 0;
}