#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends a text
 * @filename: the file name
 * @text_content: content in the text
 * Return: successful (1) failure (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
