#include "main.h"

/**
 * get_endianness - checks if a machine is big or not
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
