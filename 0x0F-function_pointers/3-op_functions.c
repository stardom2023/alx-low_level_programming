#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add- sum numbers
 * @a: first input
 * @b: second input
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtract two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiply 2 numbers
 * @a: 1st input
 * @b: 2nd input
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divide 2 numbers
 * @a: first number
 * @b: 2nd number
 * Return: a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- remainder of the division of two  numbers
 * @a: input
 * @b: input
 * Return: remainder of both numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
