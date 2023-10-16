#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int b, c;

	for (b = 0; dest[b] != '\0'; b++)
	{
	}

	for (c = 0; (dest[b + c] = *src++) != '\0'; c++)
	{
	}
	return (dest);
}
