#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));

}