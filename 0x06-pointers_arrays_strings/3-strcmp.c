#include "main.h"

/**
 * _strcmp- compare two string
 * @s1: first value
 * @s2: second value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int z;

	z = 0;
	while (s1[z] != '\0' && s2[z] != '\0')
	{
		if (s1[z] != s2[z])
	{
		return (s1[z] - s2[z]);
	}
		z++;
	}
	return (0);
}
