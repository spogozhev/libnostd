#include "libnostd/math/core.hpp"

namespace math {
	namespace statistics {

    	unsigned long binomial(unsigned long n, unsigned long k, unsigned long m) {
			return (prod(k+1, n, m) * invmod(factorial(n-k, m), m)) % m;
		}
	}
}
