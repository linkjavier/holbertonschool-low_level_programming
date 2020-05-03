#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @n: number 1
 * @m: number 2
 * Return: number of bits;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;

	n = (n ^ m);
	while (n)
	{
		if (n & 1)
			cont++;
		n = n >> 1;
	}
	return (cont);
}
