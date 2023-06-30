#include "main.h"

/**
 * rot13- encodes a string using rot13
 * @s: first value as a pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int t;
	int j;
	char data1[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (t = 0; s[t] != '\0'; t++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[t] == data1[j])
			{
				s[t] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
