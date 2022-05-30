////////////////////////Complex.h
#pragma once
#include <iostream>
#include "Norm.h"

using namespace std;

class Complex: public Norm
{
	double real;
	double imag;
	public:
		Complex(double r = 0, double i = 0) : imag(i), real(r) {}
		double getimag () const { return imag; }
		double getreal () const { return real; }
		void setimag (double i) { imag = i; }
		void setreal (double r) { real = r; }

		virtual ostream& print(ostream& os) const;
		virtual double norm() const;
		virtual double module() const;
};

