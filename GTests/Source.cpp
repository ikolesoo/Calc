#include "gtest/gtest.h"
#include "Calc/Calc.cpp"

class CRectTest : public ::testing::Test {
};

TEST_F(CRectTest, CheckSumm)
{
	
	float a = 5;
	float b = 6;
	Calc myCalc;
	ASSERT_EQ(myCalc.Add(a,b),11);
}

int main(int argc, char *argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}