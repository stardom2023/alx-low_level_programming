#include "main.h"

/**
 * _memset- a function that fills memory with a constant byte
 * @s: a pointer
 * @b: constant byte
 * @n: bytes of the memory
 * Return: constant n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
