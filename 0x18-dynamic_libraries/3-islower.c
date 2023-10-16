#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

/**
 * _strcmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int l;

	for (l = 0; s1[l] != '\0' && s2[l] != '\0'; l++)
	{
		if (s1[l] != s2[l])
			return (s1[l] - s2[l]);
	}
	return (0);
}
