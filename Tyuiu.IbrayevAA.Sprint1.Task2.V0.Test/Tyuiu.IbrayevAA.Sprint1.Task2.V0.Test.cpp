#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint1.Task2.V0.Lib/Tyuiu.IbrayevAA.Sprint1.Task2.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task2* date = new Service();
			int a{};
			int v{};

			//run
			v = date->LogicLong(a);
			Assert::AreEqual(v, v);
		}
	};
}