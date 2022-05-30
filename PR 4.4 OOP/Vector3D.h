/////////////////////////Vector3D.h
#pragma once
#include "Complex.h"
#include <iostream>

using namespace std;

class Vector3D: public Norm
{
	int x, y, z;
	public:
		Vector3D ( int x=0, int y=0, int z=0  ): x(x), y(y), z(z) {}
		
		void setx(int x) { this->x = x; }
		void sety(int y) { this->y = y; }
		void setz(int z) { this->z = z; }
		int getx() { return x; }
		int gety() { return y; }
		int getz() { return z; }
		
		virtual ostream& print(ostream& os) const;
		virtual double norm() const;
		virtual double module() const;
		
		
};

