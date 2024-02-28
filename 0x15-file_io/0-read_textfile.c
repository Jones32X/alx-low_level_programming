#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to POSIX
 * STDOUT.
 * @filename: text file to be read
 * @letters: letter amount for reading
 * Return: w- Correct output or
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufs;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bufs = malloc(sizeof(char) * letters);
	t = read(fd, bufs, letters);
	w = write(STDOUT_FILENO, bufs, t);

	free(bufs);
	close(fd);
	return (w);
}
