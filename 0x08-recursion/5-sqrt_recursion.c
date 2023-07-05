#include "main.h"
#include "stdio.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion- a function that returns the natural square root of a number
 * @n: input
 * Return: always successful (0)
 */

int _sqrt_recursion(int n)
	{
		return (_sqrt(n, 1));
	}

	/**
	 * _sqrt- calculates natural square root
	 * @n: number to calculate the square root of
	 * @i: iterator
	 *
	 * Return: the resulting square root
	 */

	int _sqrt(int n, int i)
	{
		int sqrt = i * i;

		if (sqrt > n)
			return (-1);
		if (sqrt == n)
			return (i);
		return (_sqrt(n, i + 1));
	}
