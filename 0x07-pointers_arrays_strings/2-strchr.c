#include "main.h"

/**
 * _strchr- a function that locates a character in a string
 * @s: string
 * @c: character
 * Return: successful (0)
 */

char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		return (&s[z]);
	}
	return (0);
}
