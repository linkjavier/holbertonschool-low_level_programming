#include "holberton.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: The Index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
