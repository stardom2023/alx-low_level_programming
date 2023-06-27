#include "main.h"

/**
 * _strlen- get the length of a string
 * @s: signifies string
 * Return: length of string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
