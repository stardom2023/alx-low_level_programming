#include "main.h"

/**
 * print_rev- prints a string in  reverse
 * @s: This signifies character
 * Return: always 0 when successful
 */

void print_rev(char *s)
{
	int longi = 0;
	int j;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (j = longi; j > 0; j--)
	{
		putchar(*s);
		j--;
	}
	putchar('\n');
}
