#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 *
 * @s: Address to String
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i] + 0);
		_puts_recursion(&s[i + 1]);
	}
	if (!s[i])
	{
		_putchar('\n');
	}
}
