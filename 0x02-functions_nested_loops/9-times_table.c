#include "holberton.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0
 *
 * Return: Always void
 */
void times_table(void)
{
	int i, j, k, d;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{

			_putchar(',');
			_putchar(' ');
			k = i * j, d = k / 10;

			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');

			}
			else
			{
				_putchar(d + '0');
				_putchar(k % 10 + '0');
			}

		}

		_putchar('\n');
	}

}
