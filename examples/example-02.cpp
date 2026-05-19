#include <iostream>
#include "libnostd/libnostd.hpp"
#include "libnostd/math/statistics.hpp"

int main() {
	println("LIBNOSTD");

	unsigned long mod = 1'000'000'007;

	std::cout << "C_5^3 = " << math::statistics::binomial(5, 3, mod) << std::endl;
    std::cout << "C_25^10 = " << math::statistics::binomial(25, 10, mod) << std::endl;

	const int n = 100;
	double * M = new double[n];
	for(int i = 0; i < n; ++i) {
		M[i] = static_cast<double>(rand()%2000 - 1000) / 1e3;
	}

	std::cout << "First 10 elements:";
	for(int i = 0; i < 10; ++i) {
		std::cout << " " << M[i];
	}
	std::cout << std::endl;
	std::cout << "mean = " << math::statistics::mean(M, n) << std::endl;
    std::cout << "var  = " << math::statistics::var(M, n) << std::endl;

	delete[] M;

	return 0;
}
