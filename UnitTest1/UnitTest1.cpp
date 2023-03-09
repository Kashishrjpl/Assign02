#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);

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

		TEST_METHOD(setLengthTest1)
		{
			int length = 2;
			int input = 5;

			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(setLengthTest2)
		{
			int length = 9;
			int input = 100;

			setLength(input, &length);
			Assert::AreNotEqual(input, length);
		}

		TEST_METHOD(setLengthTest3)
		{
			int length = 5;
			int input = 0;

			setLength(input, &length);
			Assert::AreNotEqual(input, length);
		}

		TEST_METHOD(setWidthTest1)
		{
			int width = 8;
			int input = 5;

			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(setWidthTest2)
		{
			int width = 9;
			int input = 100;

			setWidth(input, &width);
			Assert::AreNotEqual(input, width);
		}

		TEST_METHOD(setWidthTest3)
		{
			int width = 5;
			int input = 0;

			setWidth(input, &width);
			Assert::AreNotEqual(input, width);
		}
	};
}
