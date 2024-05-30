#include "pch.h"
#include "../20240530_TDD_PrimeFactor/primefactor.cpp"

#include <vector>

TEST(PrimeFactorsTest, Test1) {
	PrimeFactors pf;
	int input = 1;
	std::vector<int> expected{ };
	EXPECT_EQ(expected, pf.GetPrimeFactors(input));
}