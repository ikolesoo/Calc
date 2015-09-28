#include "gtest\gtest.h"
#include "Calc.h"
#include <stdlib.h>
#include <iostream>
#include "stdafx.h"


class CRectTest : public ::testing::Test {
};

TEST_F(CRectTest, CheckSumm)
{
	
	float a = 5;
	float b = 6;
	Calc myCalc;
	EXPECT_EQ(myCalc.Add(a,b),12);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
    
	
}

//TEST(sample_test_case, sample_test)
//{
//	EXPECT_EQ(1, 1);
//}
//
//int main(int argc, char** argv)
//{
//	testing::InitGoogleTest(&argc, argv);
//	RUN_ALL_TESTS();
//	std::getchar(); // keep console window open until Return keystroke
//}