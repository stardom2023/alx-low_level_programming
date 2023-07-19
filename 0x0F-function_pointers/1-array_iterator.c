#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- an array function
 * @array:an array
 * @size: size of the array
 * @action: the pointer to the function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
