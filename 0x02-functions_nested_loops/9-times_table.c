#include "holberton.h"
/**
* times_table - Entry Point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int j, k, aux;

	for (j = 0 ; j <= 9 ; ++j)
	{
		for (k = 0 ; k <= 9 ; ++k)
		{
			aux = (j * k);
			_putchar((aux / 10) + '0');
			_putchar((aux % 10) + '0');
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}

}
