#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include <iostream>
#include<string>

class Customer {
std::string m_custId;
std::string m_custName;
std::string m_phone;
double m_balance;
public:
Customer();
Customer(std::string,std::string,std::string,double);
Customer(std::string,std::string,std::string);
Customer(const Customer&);
void credit(double);
//recharge or billPay
void makeCall(double);
double getBalance() const;
void dispay() const;
};
#endif