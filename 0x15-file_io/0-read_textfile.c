#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Function that reads the text file to print
 * @letters: letters number to read
 * @filename: the text that is being read in the file
 * Return: the actual number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
