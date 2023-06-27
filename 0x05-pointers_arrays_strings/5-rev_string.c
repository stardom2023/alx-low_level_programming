#include "main.h"

/**
 * rev_string- reverse a string
 * @s: specifies string
 * Return: reverse string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int e;

	while (s[counter] != '\0')
		counter++;
	for (e = 0; e < counter; e++)
	{
		counter--;
		rev = s[e];
		s[e] = s[counter];
		s[counter] = rev;
	}
}
