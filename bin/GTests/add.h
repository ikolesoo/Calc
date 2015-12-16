#include "tests.h"
using namespace Calculator;



TEST(CRectTest, CheckSumm)
{

    float a = 5;
    float b = 6;
    Calc myCalc1;
    int res = myCalc1.Add(a, b);
    EXPECT_EQ(res, 12);
}
