#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);

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
	};
}
