#include <stdio.h>
/**
 *main- the entry point of the program
 *Description: 'print lowercase in reverse'
 *Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
