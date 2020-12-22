#include "Customer.h"

Customer::Customer():m_custId(""),m_custName(""),m_phone(0),m_balance(100)
{

}
Customer::Customer(std::string id,std::string name,std::string mobile,double bal):m_custId(id),m_custName(name),m_phone(mobile),m_balance(bal)
{

}
Customer::Customer(std::string id,std::string name,std::string mobile):m_custId(id),m_custName(name),m_phone(mobile)
{

}
Customer::Customer(const Customer& ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
{
    
}
void Customer::credit(double amount)
{
    m_balance += amount;
} 

//recharge or billPay
void Customer::makeCall(double amount)
{
    m_balance-=amount;
}
double Customer::getBalance() const
{
    return m_balance;
}
void Customer::dispay() const
{
    std::cout << "m_custId"  << m_custId
              << "m_custName"<< m_custName
              << "m_phone"   << m_phone
              << "m_balance" << m_balance;
}
int main(){
    return 0;
}
