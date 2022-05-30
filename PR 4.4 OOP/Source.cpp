/////////////////////////Source.cpp
#include "Complex.h"
#include "Norm.h"
#include "Vector3D.h"
#include < Windows.h>

using namespace std;

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	Complex c1(1, 2);
	cout << " Норма комплексного числа - "<< c1.norm() << endl;
	cout << " Модуль комплексного числа - " << c1.module() << endl;
	cout << endl;
	Vector3D v1(1, 2, 3);
	cout << " Норма вектора - " << v1.norm() << endl;
	cout << " Модуль вектора - " << v1.module() << endl;
	return 0;
	
}