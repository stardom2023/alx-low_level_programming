#include "main.h"

/**
 * create_file - create a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a string to write to the file
 * Return: a success 1
 */

int create_file(const char *filename, char *text_content)
{
	int fwd, a, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fwd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fwd, text_content, lent);

	if (fwd == -1 || a == -1)
		return (-1);

	close(fwd);

	return (1);
}
