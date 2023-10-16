#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, lued, hal;

	lued = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		hal = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				lued++;
				hal = 1;
			}
		}
		if (hal == 0)
			return (lued);
	}

	return (lued);
}

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
