#include <stdio.h>
/**
 *main- the entry point of the program
 *Description: 'print lowercase and uppercase albhabets'
 *Return: always 0
 */
int main(void)
{
	int n = 97;
	int j = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
