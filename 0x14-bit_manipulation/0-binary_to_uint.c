#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: Address to String (Binary)
 * Return: unsigned int dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		dec = dec << 1;
		dec = dec | (b[i] - '0');
		i++;
	}

	return (dec);
}
