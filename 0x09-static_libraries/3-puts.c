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
<<<<<<< HEAD
		_putchar(*(str + i));
=======
		_putchar(*(str + i) + '\0');
>>>>>>> 68f6fdbd0934c5d290d9690e0998799e5dd59a54
		i++;
	}
	_putchar('\n');
}
