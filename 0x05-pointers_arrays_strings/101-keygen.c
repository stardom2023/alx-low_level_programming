#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * passwords for the program 101- crackme
 * Return: always successful (0)
 */

int main(void)
{
	int pass[100];
	int j, sum, s;

	sum = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pass[j] = rand() % 78;
		sum += (pass[j] + '0');
		putchar(pass[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			s = 2772 - sum - '0';
			sum += s;
			putchar(s + '0');
			break;
		}
	}
	return (0);
}
