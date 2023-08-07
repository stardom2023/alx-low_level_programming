#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add to the file
 * Return: NULL, return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, lent);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
