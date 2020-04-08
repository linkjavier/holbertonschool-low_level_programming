#include "holberton.h"

/**
  * append_text_to_file - Function that appends text at the end of a file.
  * @filename: Adress to String filename
  * @text_content: Adress to String Text
  * Return: 1 fos success. -1 fails.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
