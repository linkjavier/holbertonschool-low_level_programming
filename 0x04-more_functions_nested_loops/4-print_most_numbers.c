#include "holberton.h"

/**
 * print_most_numbers - writes the character c to stdout
 *
 * void: Prints 01356789
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; ++i)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
