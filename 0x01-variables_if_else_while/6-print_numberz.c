#include <stdio.h>
/**
 *main- the entry point
 *Description: 'print numbers from 0 to 9'
 *Return: always successful(0)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
