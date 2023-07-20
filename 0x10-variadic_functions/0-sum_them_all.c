#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- a function that returns the sum
 * @n: number of parameters
 * @...: parameters
 * Return: n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int o, sum = 0;

	va_start(ap, n);

	for (o = 0; o < n; o++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
