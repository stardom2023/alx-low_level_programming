#include "main.h"

/**
 * print_binary - a function that prints binary
 * @n: numbers
 * Return: successful (0)
 */

void print_binary(unsigned long int n)
{
	int a, nums = 0;
	unsigned long int main;

	for (a = 63; a >= 0; a--)
	{
		main = n >> a;

		if (main & 1)
		{
			_putchar('1');
			nums++;
		}
		else if (nums)
			_putchar('0');
	}
	if (!nums)
		_putchar('0');
}
