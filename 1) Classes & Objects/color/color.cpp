#include <iostream>
#include"color.h"

using namespace std;

    Color::Color():
        m_r(0), m_g(0), m_b(0) 
        {
        }

    Color::Color(int red,int green,int blue):m_r(red), m_g(green), m_b(blue) 
    {
    }

    Color::Color(int r):m_r(r), m_g(0),m_b(0) {}

 

    void Color::invert()
    {
        m_r=255-m_r;
        m_g=255-m_g;
        m_b=255-m_b;
    }

    void Color::display() const
    {
        cout<<"r="<<m_r<<endl;
        cout<<"g="<<m_g<<endl;
        cout<<"b="<<m_b<<endl;
    }

