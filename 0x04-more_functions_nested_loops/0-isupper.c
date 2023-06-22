#include "main.h"

/**
 * main- entry point
 *description : "checks for uppercase"
 *Return : 1 for uppercase or 0 for  anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
