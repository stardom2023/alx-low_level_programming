#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a minus b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: 0
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero.\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero.\n");
		return (0);
	}
	return (a % b);
}
