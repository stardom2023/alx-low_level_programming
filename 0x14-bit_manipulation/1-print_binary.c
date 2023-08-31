#include "main.h"

/**
 * print_binary - prints the bin equivalent
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int y, lit = 0;
	unsigned long int node;

	for (y = 63; y >= 0; y--)
	{
		node = n >> y;

		if (node & 1)
		{
			_putchar('1');
			lit++;

		}
		else if (lit)
			_putchar('0');
	}
	if (!lit)
		_putchar('0');
}
