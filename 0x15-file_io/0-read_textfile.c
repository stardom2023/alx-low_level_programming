#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: letters to be read
 * @letters: number of letters to read and print
 * Return: at NULL, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t fwd;
	ssize_t a;
	ssize_t b;

	fwd = open(filename, O_RDONLY);
	if (fwd == -1)
	#include "main.h"
		return (0);
	file = malloc(sizeof(char) * letters);
	b = read(fwd, file, letters);
	a = write(STDOUT_FILENO, file, b);

	free(file);
	close(fwd);
	return (a);
}
