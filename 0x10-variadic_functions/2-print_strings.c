#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- print a string
 * @separator: string to be printed
 * @n: number of strings
 * @...: parameter
 * Return: always a success (0)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int nos;

	va_start(strings, n);

	for (nos = 0; nos < n; nos++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (nos != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(strings);
}
