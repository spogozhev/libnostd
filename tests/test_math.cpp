#include <gtest/gtest.h>

#include "libnostd/math/core.hpp"
#include "libnostd/math/statistics.hpp"

TEST(MATH, square) {
	EXPECT_DOUBLE_EQ(math::square(2), 4);
    EXPECT_DOUBLE_EQ(math::square(1), 1);

    using math::square;
    EXPECT_DOUBLE_EQ(square(0), 0);
    EXPECT_DOUBLE_EQ(square(100), 1e4);
    EXPECT_DOUBLE_EQ(square(-10), 100);
    EXPECT_DOUBLE_EQ(square(2.5), 6.25);
    EXPECT_DOUBLE_EQ(square(0.1), 1e-2);
}

TEST(MATH, sqrt_heron) {
	double tol = 1e-9;
	using math::sqrt_heron;
    EXPECT_NEAR(sqrt_heron(0.0), 0, tol);
    EXPECT_NEAR(sqrt_heron(1.0), 1, tol);
	EXPECT_NEAR(sqrt_heron(4.0), 2, tol);
    EXPECT_NEAR(sqrt_heron(100.0), 10, tol);
    EXPECT_NEAR(sqrt_heron(625.0), 25, tol);
	srand(1);
	for (int i = 0; i < 100; ++i) {
		double tmp = rand()/1000.0;
		double s = sqrt_heron(tmp);
		EXPECT_NEAR(s * s, tmp, tol);
	}
}

TEST(MATH, factorial) {
    using math::factorial;
    EXPECT_EQ(factorial(6, 1001), 720);
    EXPECT_EQ(factorial(6, 100), 20);
    EXPECT_EQ(factorial(1, 10), 1);
    EXPECT_EQ(factorial(0, 10), 1);
}

TEST(MATH, prod) {
    using math::prod;
    EXPECT_EQ(prod(1, 6, 1001), 720);
    EXPECT_EQ(prod(5, 6, 1001), 30);
    EXPECT_EQ(prod(6, 6, 1001), 6);
    EXPECT_EQ(prod(0, 10, 1001), 0);
    unsigned long long mod = 1'000'000'007;
    EXPECT_EQ(prod(8, 13, mod), 1'235'520);
}

TEST(MATH_STATISTICS, binomial) {
	unsigned long mod = 1'000'000'007;
	EXPECT_EQ( math::statistics::binomial(3, 2, mod), 3);
    using math::statistics::binomial;
    EXPECT_EQ(binomial(3, 0, mod), 1);
    EXPECT_EQ(binomial(10, 1, mod), 10);
    EXPECT_EQ(binomial(10, 10, mod), 1);
    EXPECT_EQ(binomial(10, 11, mod), 0);
}
