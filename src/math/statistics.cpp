#include "libnostd/math/core.hpp"

namespace math {
	namespace statistics {

    	unsigned long binomial(unsigned long n, unsigned long k, unsigned long m) {
			if ((k == 0) || (k == n)) return 1UL;
			if (k > n) return 0UL;
			return (prod(k+1, n, m) * invmod(factorial(n-k, m), m)) % m;
		}
	}
}
