#include "holberton.h"

/**
 * read_textfile - function that reads a text
 * @filename: Adrees to a filename
 * @letters: An int that indicate the number of letters
 * Return: fdw
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr, fdw;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	fdr = read(fd, buf, letters);
	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fd == -1 || fdr == -1 || fdw == -1)
	{
		return (0);
		free(buf);
	}
	close(fd);
	free(buf);
	return (fdw);
}
