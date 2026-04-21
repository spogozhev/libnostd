/**
 * @file
 * @brief Core utils for computer science
 * @date 2026-04-21
 * @authors svpogozhev
 * @copyright MIT License
 */
#include <string>

namespace cs {

	/**
	 * @todo Не эффективная реализация.
	 *       Заменить на строка+символ и reverse
	 */
	std::string dec2hex(unsigned int decimal) {
		std::string hexademal;
		const char hex_digits[] = "0123456789ABCDEF";
		do {
			hexademal = hex_digits[decimal%16] + hexademal;
			decimal /= 16;
		} while(decimal > 0);
		return hexademal;
	}

	/**
	 * @bug Не обработаны ошибки во входной строке
	 * @todo	1. Учесть переполнение unsigned int
	 *       2. Учесть не 16-ные символы во входной строке
	 */
	unsigned int hex2dec(const std::string & hexademal) {
		unsigned int decimal = 0;
		for(const char ch : hexademal) {
			decimal = decimal * 16 + (std::isdigit(ch) ? (ch-'0') : (std::toupper(ch)-'A'+10));
		}
		return decimal;
	}

}
