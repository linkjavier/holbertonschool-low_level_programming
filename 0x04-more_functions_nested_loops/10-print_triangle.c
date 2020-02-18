#include "holberton.h"

/**
 * print_triangle - Prints a triangle of # - Next nwe line.
 * @size: size of the triangle
 *
 * Return: void, and the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
