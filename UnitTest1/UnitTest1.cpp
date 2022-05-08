#include "pch.h"
#include "CppUnitTest.h"
#include "../oop-2.3/Complex.h"
#include "../oop-2.3/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex c(1, 2);
			double newY = conj(c).GetY();
			double shouldBe = -2;
			Assert::AreEqual(newY, shouldBe);
		}
	};
}
