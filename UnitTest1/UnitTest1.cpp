#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3A/Vector2D.cpp"
#include "../lab3.3A/Vector2D.h"
#include "../lab3.3A/Vector.cpp"
#include "../lab3.3A/Vector.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector A(3, 4);
			Assert::AreEqual(A.Modul(), 5.0);
		}
	};
}
