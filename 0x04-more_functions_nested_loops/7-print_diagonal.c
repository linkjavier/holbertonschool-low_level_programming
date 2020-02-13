#include "holberton.h"
/**
 * print_diagonal - Prints the numbers, from 0 to 9.
 *
 * @n: n times
 */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 1 ; i <= n ; ++i)
		{
			for (j = 1 ; j <= i ; ++j)
			{
				if (j == i)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
