#include "main.h"

/**
 * puts2- prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *q = str;
	int o;

	while (*q != '\0')
	{
		q++;
		longi++;
	}
	a = longi - 1;
	for (o = 0; o <= a; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
