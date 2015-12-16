#include "tests.h"
using namespace Calculator;



TEST(CRectTest1, CheckDiv)
{

    float a = 6;
    float b = 6;
    Calc newCalc;
    int res = newCalc.Div(a, b);
    EXPECT_EQ(res, 1);
}