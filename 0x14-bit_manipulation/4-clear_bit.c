#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: ptr to the num
 * @index: index of bit
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
