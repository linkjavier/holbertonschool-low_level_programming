#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line.
 *
 * @str: Address of a String.
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i) + '\0');
		i++;
	}
	_putchar('\n');
}
