#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: first value
 * @src: second value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int s;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[j] = src[s];
		j++;
		s++;
	}

	dest[j] = '\0';
	return (dest);
}
