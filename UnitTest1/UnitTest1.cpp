#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

namespace UnitTest1
{
	TEST_CLASS(Assignment02)
	{
	public:
		
		TEST_METHOD(getPerimeterTest)
		{
			int length = 5;
			int width = 10;

			int result = getPerimeter(&length, &width);
			Assert::AreEqual(30, result);
		}

		TEST_METHOD(getAreaTest)
		{
			int length = 2;
			int width = 100;

			int result = getArea(&length, &width);
			Assert::AreEqual(200, result);
		}
	};
}
