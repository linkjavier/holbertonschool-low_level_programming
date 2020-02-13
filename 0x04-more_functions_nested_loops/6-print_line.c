#include "holberton.h"

/**
 * print_line - Print n times the character _ Low space
 * @n: n times
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; ++i)
	{
		if (!(n <= 0))
			_putchar('_');

	}
	_putchar('\n');
}
