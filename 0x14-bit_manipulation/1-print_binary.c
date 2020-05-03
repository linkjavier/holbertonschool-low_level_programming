#include "holberton.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	else
	{
		unsigned long int bin;

		bin = n >> 1;
		if (bin)
			print_binary(bin);
		_putchar((n & 1) + '0');
	}
}
