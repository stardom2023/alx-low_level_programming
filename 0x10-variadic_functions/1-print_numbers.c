#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- prints numbers
 * @separator: string to be printed
 * @n: number of integers
 * @...: a variable
 * Return: a success is 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int nos;

	va_start(all, n);

	for (nos = 0; nos < n; nos++)
	{
		printf("%d", va_arg(all, int));

		if (nos != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(all);
}
