#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2/lab6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testlab62
{
	TEST_CLASS(Testlab62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Тестовий масив із всіма парними елементами
			int testArray2[SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
			Assert::AreEqual(0, CountOddElements(testArray2, SIZE)); // Очікуємо 0 непарних елементів

		}
	};
}
