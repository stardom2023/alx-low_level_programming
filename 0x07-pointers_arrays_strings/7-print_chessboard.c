#include "main.h"

/**
 * print_chessboard- a function that prints the chessboard
 * @a: input
 * Return: always successful (0)
 */

void print_chessboard(char (*a)[8])
{
	int f;
	int h;

	for (f = 0; f < 8; f++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[f][h]);
		_putchar('\n');
	}
}
