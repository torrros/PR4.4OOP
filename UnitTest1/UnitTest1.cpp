#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR 4.4 OOP\PR 4.4 OOP\Norm.cpp"
#include "C:\Users\vladt\source\repos\PR 4.4 OOP\PR 4.4 OOP\Complex.cpp"
#include "C:\Users\vladt\source\repos\PR 4.4 OOP\PR 4.4 OOP\Vector3D.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex* complex = new Complex(1,2);
			Assert::AreEqual((int)complex->norm(), 5);
		}
	};
}
