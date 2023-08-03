#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: a pointer to an integer
 * @m: a parameter
 * Return: a success (0)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, nums = 0;
	unsigned long int main;
	unsigned long int only = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		main = only >> a;
		if (main & 1)
			nums++;
	}
	return (nums);
}
