#ifndef LIBNOSTD_MATH_CORE_HPP
#define LIBNOSTD_MATH_CORE_HPP

/**
 * @brief Basic mathematical utils
 */
namespace math {
	/**
	 * @brief 		Вычисление квадрата числа
	 * @details 	Вычисление квадрата через умножение числа на самого себя
	 * 				(number * number)
	 * @param[in]	num	Вещественное число
	 * @return		Квадрат числа
     */
	double square(double num);

    /**
     * @brief       Быстрое (бинарное) возведение в целую степень
     * @details     Возведение числа в целую степень с абсолютной точностью.
	 *				Алгоритм: возводим число в степени 1, 2, 4, ..., 2n,
	 *				каждый раз, пока степень не равна 0, сдвигая на 1 бит вправо.
	 *				Если последний бит 1 (не равен 0), домножаем результат на base.
     * @param[in]   base Основание. Вещественное число
	 * @param[in]	exp Экспонента. Неотрицательное длинное целое
     * @return      Число, возведенное в степень \f$ {base}^{exp} \f$.
     */
	double fast_power(double base, unsigned long long exp);

}

#endif

