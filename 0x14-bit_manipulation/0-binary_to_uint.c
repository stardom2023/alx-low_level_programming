#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int sure = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		sure = 2 * sure + (b[y] - '0');
	}
	return (sure);
}
