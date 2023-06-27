#include "main.h"

/**
 * print_rev- prints a string in  reverse
 * @s: This signifies character
 * Return: always 0 when successful
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (j -= 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
