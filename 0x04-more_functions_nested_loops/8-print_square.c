#include "holberton.h"
/**
* print_square - Prints the numbers, from 0 to 9.
*
* @size: size of the matrix
*/

void print_square(int size)
{
	int i, j;
	if (!(size <= 0))
	{
		for (i = 1 ; i <= size ; ++i)
		{
			for (j = 1 ; j <= size ; ++j)
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
