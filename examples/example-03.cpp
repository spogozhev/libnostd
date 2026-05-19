#include <iostream>
#include "libnostd/core/common.hpp"
#include "libnostd/cs/core.hpp"

int main() {
	credits();

	int decimal_number = 777;
	auto binary_number = cs::dec2bin(decimal_number);
	auto hex_number = cs::dec2hex(decimal_number);

	std::cout << "Convert decimal " << decimal_number
			  << " to binary: " << binary_number << '\n';

    std::cout << "Convert decimal " << decimal_number
              << " to hexademal: " << hex_number << '\n';

	std::cout << "Convert hexademal " << hex_number
              << " to decimal: " << cs::hex2dec(hex_number) << '\n';

	return 0;
}
