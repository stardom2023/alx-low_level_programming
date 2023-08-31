#include "main.h"

/**
 * get_bit - the value of a bit at index is returned
 * @n: number
 * @index: index of the bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
		return (-1);

	v = (n >> index) & 1;

	return (v);
}
