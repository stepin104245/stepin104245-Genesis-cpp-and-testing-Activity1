#include"complex.h"
#include <iostream>
using namespace std;
template<class T>	// Empty Constructor
Complex<T>::Complex():m_real(0),m_image(0){}
template<class T> 	// Constructor with parameter
Complex<T>::Complex(T a,T b):m_real(a),m_image(b){}
template <class T>	// Function returning real value
T Complex<T>::re(){return m_real;}
template <class T>	// Function returning imaginary value
T Complex<T>::img(){return m_image;}
template <class T>
void Complex<T>::display(){cout<<re()<<img();}

