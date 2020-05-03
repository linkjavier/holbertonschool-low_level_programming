#include "holberton.h"

/**
 * create_file -Function that creates a file.
 * @filename: Adress to String filename
 * @text_content: Adress to String Text
 *
 * Return: 1 on success.-1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	fdw = write(fd, text_content, len);

	if (fdw == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
