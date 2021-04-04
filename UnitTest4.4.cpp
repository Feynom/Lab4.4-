#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4.4/Square.h"
#include "../Lab4.4/Square.cpp"
#include "../Lab4.4/Root.h"
#include "../Lab4.4/Root.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Square E(1, -6, 9);
			E.Result();
			Assert::AreEqual(E.GetX1(), 3.);
			Assert::AreEqual(E.GetX2(), 3.);

		}
	};
}
