#include "main.h"

/**
 * set_string- a function that sets the value of a pointer to a char
 * @s: input
 * @to: input
 * Return: always a success (0)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
