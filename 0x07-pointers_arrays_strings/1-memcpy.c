#include "holberton.h"

/**
 * *_memcpy - Function that gets the length of a prefix substring.
 *
 * @dest: Address to string.
 * @src: Address to string.
 * @n: an int
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, N;

	N = n;

	for (i = 0; i < N; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

