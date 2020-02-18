#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line.
 *
 * Return: Prints on stdout the string.
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
