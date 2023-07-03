#include "main.h"

/**
 * _memcpy- a function that copies memory area
 * @dest: second memory area
 * @src: first memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
