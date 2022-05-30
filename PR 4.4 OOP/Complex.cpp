/////////////////////////Complex.cpp
#include "Complex.h"
#include <iostream> 

using namespace std;

ostream& Complex :: print(ostream& os) const
{
	return (os << "imagine -  " << imag << " real -  " << real);
}

double Complex :: norm() const
{
	return pow(module(), 2);
}

double Complex :: module() const
{
	return sqrt(pow(imag, 2) + pow(real, 2));
}