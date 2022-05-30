/////////////////////////Vector3D.cpp
#include "Vector3D.h"
#include <iostream> 

using namespace std;

ostream& Vector3D :: print(ostream& out) const
{
	return out << "(" << x << "," << y << "," << z << ")";
}

double Vector3D::norm() const
{
	return max(max((x), (y)), (z));
}

double Vector3D::module() const
{
	return sqrt(x*x + y*y + z*z);
}
