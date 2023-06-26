#include <stdio.h>

/**
 * swap_int- swaps the values of two integers
 * @a: the first character
 * @b: the second character
 */

void swap_int(int *a, int *b)
{
	int joy = *a;
	*a = *b;
	*b = joy;
}
