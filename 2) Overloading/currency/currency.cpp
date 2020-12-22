#include"currency.h"
#include<iostream>

    currency::currency():m_rupees(0),m_paisa(0){}
    currency::currency(int var1,int var2):m_rupees(var1),m_paisa(var2){}
    currency::currency(int var1):m_rupees(var1){}
    currency currency:: operator+(const currency &var1)
    {
        currency c3;
        c3.m_rupees=m_rupees+var1.m_rupees;
        c3.m_paisa=m_paisa+var1.m_paisa;
        while(c3.m_paisa>100)
        {
            c3.m_rupees=c3.m_rupees+1;
            c3.m_paisa=c3.m_paisa-100;
        }
        return c3;
    }
    currency currency::operator-(const currency &var1)
    {
        currency c3;
        if(m_paisa<var1.m_paisa)
        {
            c3.m_paisa=(m_paisa-var1.m_paisa)+100;
            c3.m_rupees=m_rupees-var1.m_rupees-1;
        }
        else
        {
            c3.m_rupees=m_rupees-var1.m_rupees;
            c3.m_paisa=m_paisa-var1.m_paisa;
        }
        return c3;
    }
    void currency::operator+(int var1)
    {
        m_rupees=m_rupees+var1;
    }
    int currency::operator-(int var1){m_rupees=m_rupees-var1;}
    int currency::operator++(){m_rupees=m_rupees+1;}
    int currency::operator++(int var1){m_rupees=m_rupees+var1;}
    bool currency::operator== (int var1)
    {
        if(m_rupees==var1)
        {
            return true;
        }
        else{return false;}
    }
    bool currency::operator > (int var1)
    {
        if(m_rupees>var1)
        {
            return true;
        }
        else{return false;}
    }
    int currency::display(){return m_rupees;return m_paisa;}
    int currency::ru(){return m_rupees;}
    int currency::pai(){return m_paisa;}


