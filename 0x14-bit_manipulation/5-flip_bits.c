#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: first num
 * @m: second num
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, lit = 0;
	unsigned long int node;
	unsigned long int p = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		node = p >> y;
		if (node & 1)
			lit++;
	}
	return (lit);
}
