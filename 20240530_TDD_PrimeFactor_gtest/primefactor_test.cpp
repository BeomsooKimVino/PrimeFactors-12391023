#include "pch.h"
#include "../20240530_TDD_PrimeFactor/primefactor.cpp"

#include <vector>


class PrimeFactorsFixture : public testing::Test {
public:
	PrimeFactors pf;
	std::vector<int> expected;
};
TEST_F(PrimeFactorsFixture, Test1) {
	int input = 1;
	EXPECT_EQ(expected, pf.GetPrimeFactors(input));
}

TEST_F(PrimeFactorsFixture, Test2) {
	int input = 2;
	expected = { 2 };
	EXPECT_EQ(expected, pf.GetPrimeFactors(input));
}

TEST_F(PrimeFactorsFixture, Test3) {
	int input = 3;
	expected = { 3 };
	EXPECT_EQ(expected, pf.GetPrimeFactors(input));
}

TEST_F(PrimeFactorsFixture, Test4) {
	int input = 4;
	expected = { 2, 2 };
	EXPECT_EQ(expected, pf.GetPrimeFactors(input));
}

