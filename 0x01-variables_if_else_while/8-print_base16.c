#include <stdio.h>
/**
 *main- the entry point
 *Description: 'print numbers of base 16 in lower case'
 *Return: always 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
