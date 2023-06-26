#include "main.h"

/**
 *_puts- print a string
 *@str: represents string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
