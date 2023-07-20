#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- print all
 * @format: list of argument types
 * @... parameter
 * Return: success (0)
 */

void print_all(const char * const format, ...)
{
	int o = 0;
	char *str, *ampt = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[o])
		{
			switch (format[o])
			{
				case 'c':
					printf("%s%c", ampt, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ampt, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ampt, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ampt, str);
					break;
				default:
					o++;
					continue;
			}
			ampt = ", ";
			o++;
		}
	}
	printf("\n");
	va_end(list);
}
