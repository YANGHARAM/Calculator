#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{
	TEST_CLASS(CalculatorUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+12+1");
			Assert::AreEqual(ret, (string)"11+12+1=24");
		}
		
		TEST_METHOD(TestMethod2)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("1+11*22-25");
			Assert::AreEqual(ret, (string)"1+11*22-25=218");
		}

		TEST_METHOD(TestMethod3)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11*22*4+5");
			Assert::AreEqual(ret, (string)"11*22*4+5=973");
		}
		TEST_METHOD(TestMethod4)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("15/3+12/4");
			Assert::AreEqual(ret, (string)"15/3+12/4=8");
		}
		TEST_METHOD(TestMethod5)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("5+16/4*7");
			Assert::AreEqual(ret, (string)"5+16/4*7=33");
		}
		TEST_METHOD(TestMethod6)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("5+16/4+7");
			Assert::AreEqual(ret, (string)"5+16/4+7=16");
		}
		TEST_METHOD(TestMethod7)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("5*6*7*9");
			Assert::AreEqual(ret, (string)"5*6*7*9=1890");
		}
		TEST_METHOD(TestMethod8)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("1+3+4*6");
			Assert::AreEqual(ret, (string)"1+3+4*6=28");
		}
	};
}
