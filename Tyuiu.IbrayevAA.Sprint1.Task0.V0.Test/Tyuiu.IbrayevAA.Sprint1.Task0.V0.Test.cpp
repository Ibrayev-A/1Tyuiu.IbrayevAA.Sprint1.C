#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint1.Task0.V0.Lib/Tyuiu.IbrayevAA.Sprint1.Task0.V0.Lib.cpp"
#include "../Tyuiu.IbrayevAA.Sprint1.Task1.V0.Lib/Tyuiu.IbrayevAA.Sprint1.Task0.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task0V00* add = new Service();
			int a{};
			int b{};
			int v{};

			//run
			v = add->Calculate(a, b);
			Assert::AreEqual(a*b, a*b);
		}
	};
}
