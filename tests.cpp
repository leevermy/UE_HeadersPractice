#include "test.h"

void TestSumAndPow() {
    Assert(SumAndPow(2, 2), 16);
    Assert(SumAndPow(2, 4), 36);
    Assert(SumAndPow(2, -2), 0);
    Assert(SumAndPow(2, -4), 4);
    Assert(SumAndPow(0, -1), 1);
    Assert(SumAndPow(-1, -1), 4);
    Assert(SumAndPow(-1, 4), 9);
    Assert(SumAndPow(0, 0), 0);
}

void TestAll() {
    TestRunner tr;
    tr.RunTest(TestSumAndPow, "TestSumAndPow");
}