#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success
 */
char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (s + f);
	}

	return (NULL);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int g = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[g++];
	}
	return (sum);
}

/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; src[h] != '\0'; h++)
		if (h < n)
			dest[h] = src[h];
	while (h < n)
		dest[h++] = '\0';

	return (dest);
}
