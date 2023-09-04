#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads and prints a text file
 * @filename: name of file
 * @letters: characters to read and print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
	
	int file_io;
	ssize_t bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
	return (0);

	file_io = open(filename, O_RDONLY);
	if (file_io == -1)
	return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(file_io);
		return (0);
	}

	bytes_read = read(file_io, buff, letters);
	if (bytes_read == -1)
	{
		close(file_io);
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	close(file_io);
	free(buff);
	if (bytes_written == bytes_read)
	return (bytes_written);

	return (0);
}
