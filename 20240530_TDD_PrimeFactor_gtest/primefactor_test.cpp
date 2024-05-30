#include "pch.h"
#include "../20240530_TDD_PrimeFactor/primefactor.cpp"


class PrimeFactorFixture : public testing::Test {
public:
	PrimeFactor pf;
};
TEST(PrimeFactor, TestOne) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}