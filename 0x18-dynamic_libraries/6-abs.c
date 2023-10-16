#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
  int t = 0;

  for (; src[t] != '\0'; t++)
    {
      dest[t] = src[t];
    }
  return (dest);
}
