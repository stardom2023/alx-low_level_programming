#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: this contains NULL
 * Return: success (1), failure (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;

		write_result = write(file_descriptor, text_content, text_length);
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
