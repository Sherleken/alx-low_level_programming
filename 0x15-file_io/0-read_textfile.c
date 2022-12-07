#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0,if the file can not be opened or read or
 * if write fails or does not write the expected
 * amount of bytes or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t w;
	char *buf;
	ssize_t fd;

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

