#include "main.h"

/**
 * puts_half- prints half of a string
 * if odd len, n= (length_of_the_string - 1)/2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int m, n, longi;

	longi = 0;

	for (m = 0; str[m] != '\0'; m++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		putchar(str[m]);
	putchar('\n');
}
