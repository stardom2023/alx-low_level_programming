#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func- function to pointer
 * @s: parameter
 * Return: a pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};

	int w = 0;

	while (ops[w].op != NULL && *(ops[w].op) != *s)
	w++;

	return (ops[w].f);
}
