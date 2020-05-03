#include "holberton.h"

/**
 * read_textfile - Function that reads a text. Prints on Standard Output
 * @filename: Address to a filename. An String. The Path.
 * @letters: An int that indicates the number of letters.
 * Return: fdw . 0 for fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr, fdw; /*to store the open() read() & write() returns. */
	char *buf; /* THIS variable store the readed text */

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /*returns file descriptor*/
	fdr = read(fd, buf, letters); /*returns value of letters if can store in buf*/
	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fd == -1 || fdr == -1 || fdw == -1)
	{
		return (0);/*If open(), write() or read() fails, return 0 and free the buf.*/
		free(buf);
	}
	close(fd);
	free(buf);
	return (fdw);
}
