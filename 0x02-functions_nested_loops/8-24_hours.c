#include "holberton.h"

/**
 * jack_bauer - Function that computes the absolute value of an integer.
 *
 *
 *
 * Return: @x
**/

void jack_bauer(void)
{
	int i, j, k, l, x = '9';

	for (i = '0' ; i <= '2'; ++i)
	{
		for (j = '0' ; j <= x ; ++j)
		{
			for (k = '0'; k  <= '5' ; ++k)
			{
				for (l = '0' ; l <= '9' ; ++l)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if (i == '2')
					{
						x = '3';
					}
				}
			}
		}
	}
}


