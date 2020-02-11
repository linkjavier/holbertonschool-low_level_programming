#include "holberton.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @x: an int
 *
 *
 * Return: @x
**/

int print_last_digit(int x)
{
	int c;

	c = x % 10;

	if (c > 0)
	{
	_putchar('0' + c);
	return (c);
	}

	else if (c < 0)
	{
	_putchar('0' + (-c));
	return (-c);
	}

	else
	{
	_putchar('0');
	return (0);
	}
}
