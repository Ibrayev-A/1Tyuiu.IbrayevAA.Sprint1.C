#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint1.Task4.V0.Lib/Tyuiu.IbrayevAA.Sprint1.Task4.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task4* date = new Service();
			int x{};
			int y{};
			int v{};

			//run
			v = date->Vibor(x, y);
			Assert::AreEqual(v, v);
		}
	};
}