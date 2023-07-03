#include "main.h"

/**
 * _strpbrk- a function that searches a string for any of a set of bytes
 * @s:string
 * @accept: input
 * Return: always successful (0)
 */

char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			return (s);
		}
		s++;
	}
	return ('\0');
}
