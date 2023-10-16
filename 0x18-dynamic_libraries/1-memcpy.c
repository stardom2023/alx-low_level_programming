#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		dest[d] = src[d];

	return (dest);
}

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int e, go;

	for (e = 0; dest[e] != '\0'; e++)
	{
	}

	for (go = 0; go < n; go++)
	{
		dest[e + go] = src[go];
		if (src[go] == '\0')
			go = n;
	}
	return (dest);
}

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(void)
{
  return (0);
}
