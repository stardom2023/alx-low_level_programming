#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- a function
 * @array: array
 * @size: size of the array
 * @cmp: pointer to func
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return (s);
	}
	return (-1);
}
