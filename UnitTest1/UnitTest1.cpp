#include "pch.h"
#include "../11/Combination.h"
#include "CppUnitTest.h"
#include "../11/Combinatoin.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestCombination)
        {
            Combination comb;

            comb.Init(2, 5);

            Assert::AreEqual((double)comb.combination(), 10.0);
        }
    };
}