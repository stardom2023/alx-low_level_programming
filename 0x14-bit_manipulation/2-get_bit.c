#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * @n: number
 * @index: index
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}
